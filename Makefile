obj-m += hello-1.o
obj-m += hello-2.o
<<<<<<< HEAD
obj-m += hello-3.o
obj-m += hello-4.o
obj-m += hello-5.o
=======
>>>>>>> 006f0485eac51d25ae6e96a135c510ccbf7aa618

all:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) modules

clean:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) clean
