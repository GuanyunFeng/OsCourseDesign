ifneq ($(KERNELRELEASE),)
    obj-m = mydev.o
else
    KERNELDIR :=  /lib/modules/$(shell uname -r)/build
    PWD       := $(shell pwd)
modules:
	$(MAKE) -C $(KERNELDIR) M=$(PWD) modules
endif
 
clean:
	rm -rf .tmp_versions Module.symvers modules.order .tmp_versions .*.cmd *.o *.ko *.mod.c
