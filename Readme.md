### Kernel Module Programming

## hello

kernel module init for test hello

## dev

make chardevice ioctl module

ioctl (input/output control)
: function for HW ctrl & state information

>>> chardev_ioctl()
>>> when usr call ioctl() in user space,
>>> call sys_ioctl by SYSCALL and run ioctl function with file_operations structure

insmod -> chardev_init -> /dev/chardev0
rmmod -> charadev_exit

you can check ioctl() in dmesg

## timer
thank you :)
https://johnjarrer.tistory.com/80
