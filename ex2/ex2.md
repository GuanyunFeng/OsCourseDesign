## 运行环境
* Ubuntu 18.04 64bit
* 原内核版本：4.15.0-45-generic
* 编译内核版本：4.19.19
* gcc版本：7.3.0-27
代码编写参考：[内核态文件操作](https://blog.csdn.net/u011784994/article/details/52471345)<br>
<br>
#### 需要修改的地方有：
* ./include/linux/syscalls.h
* ./arch/x86/entry/syscalls/syscall_64.tbl
* ./kernel/sys.c
