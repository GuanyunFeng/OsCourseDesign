#include <linux/module.h>
#include <linux/fs.h>
#include <linux/init.h>
#include <linux/cdev.h>
#include <asm/uaccess.h>
 
 
int dev1_registers[5];
int dev2_registers[5];
 
struct cdev cdev; 
dev_t devno;
 
/*文件打开函数*/
int my_open(struct inode *inode, struct file *filp){
    /*获取次设备号*/
	printk("open dev\n");
	int num = MINOR(inode->i_rdev);
	if (num==0)
		filp->private_data = dev1_registers;
	else if(num == 1)
		filp->private_data = dev2_registers;
 else
        return -ENODEV;  //无效的次设备号
    
    return 0; 
}
 
/*文件释放函数*/
int my_release(struct inode *inode, struct file *filp){
	printk("release dev\n");
	return 0;
}
 
/*读函数*/
static ssize_t my_read(struct file *filp, char __user *buf, size_t size, loff_t *ppos){
  unsigned long p =  *ppos;
  unsigned int count = size;
  int ret = 0;
  int *register_addr = filp->private_data; /*获取设备的寄存器基地址*/
 
  /*判断读位置是否有效*/
  if (p >= 5*sizeof(int))
    return 0;
  if (count > 5*sizeof(int) - p)
    count = 5*sizeof(int) - p;
 
  /*读数据到用户空间*/
  if (raw_copy_to_user(buf, register_addr+p, count))
  {
    ret = -EFAULT;
  }
  else
  {
    *ppos += count;
    ret = count;
  }
  return ret;
}
 
/*写函数*/
static ssize_t my_write(struct file *filp, const char __user *buf, size_t size, loff_t *ppos)
{
  unsigned long p =  *ppos;
  unsigned int count = size;
  int ret = 0;
  int *register_addr = filp->private_data; /*获取设备的寄存器地址*/
  
  /*分析和获取有效的写长度*/
  if (p >= 5*sizeof(int))
    return 0;
  if (count > 5*sizeof(int) - p)
    count = 5*sizeof(int) - p;
    
  /*从用户空间写入数据*/
  if (raw_copy_from_user(register_addr + p, buf, count))
    ret = -EFAULT;
  else
  {
    *ppos += count;
    ret = count;
  }
 
  return ret;
}
 
/* seek文件定位函数 */
static loff_t my_llseek(struct file *filp, loff_t offset, int whence)
{ 
    loff_t newpos;
 
    switch(whence) {
      case SEEK_SET: 
        newpos = offset;
        break;
 
      case SEEK_CUR: 
        newpos = filp->f_pos + offset;
        break;
 
      case SEEK_END: 
        newpos = 5*sizeof(int)-1 + offset;
        break;
 
      default: 
        return -EINVAL;
    }
    if ((newpos<0) || (newpos>5*sizeof(int)))
    	return -EINVAL;
    	
    filp->f_pos = newpos;
    return newpos;
 
}
 
/*文件操作结构体*/
static const struct file_operations my_fops =
{
  .llseek = my_llseek,
  .read = my_read,
  .write = my_write,
  .open = my_open,
  .release = my_release,
};
 
/*设备驱动模块加载函数*/
static int mydev_init(void)
{
  /*初始化cdev结构*/
  cdev_init(&cdev, &my_fops);
  
  /* 注册字符设备 */
  alloc_chrdev_region(&devno, 0, 2, "mydev");
  cdev_add(&cdev, devno, 2);
  return 0;
}
 
/*模块卸载函数*/
static void mydev_exit(void)
{
  cdev_del(&cdev);   /*注销设备*/
  unregister_chrdev_region(devno, 2); /*释放设备号*/
  return;
}
 
MODULE_LICENSE("GPL");
 
module_init(mydev_init);
module_exit(mydev_exit);
