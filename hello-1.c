#include<linux/module.h>
#include<linux/kernel.h>

<<<<<<< HEAD
int ini_module(void){
=======
int init_module(void){
>>>>>>> 006f0485eac51d25ae6e96a135c510ccbf7aa618
	printk(KERN_INFO "hello world 1\n");
	return 0;
}

void cleanup_module(void){
	printk(KERN_INFO "Goodbye world 1\n");
}

MODULE_LICENSE("GPL");
<<<<<<< HEAD

=======
>>>>>>> 006f0485eac51d25ae6e96a135c510ccbf7aa618
