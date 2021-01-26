#include<linux/module.h>
#include<linux/kernel.h>
#include<linux/init.h>

static int __init hello_2_init(void){
<<<<<<< HEAD
	printk(KERN_INFO "Hello, world 2\n");
	return 0;
}

static void __exit hello_2_exit(void)
{
	printk(KERN_INFO "goodbye, world 2\n");
}

=======
	printk(KERN_INFO "hello world 2\n");
	return 0;
}

static void __exit hello_2_exit(void){
	printk(KERN_INFO "Goodbye world 2\n");
}
>>>>>>> 006f0485eac51d25ae6e96a135c510ccbf7aa618
module_init(hello_2_init);
module_exit(hello_2_exit);

MODULE_LICENSE("GPL");
<<<<<<< HEAD

=======
>>>>>>> 006f0485eac51d25ae6e96a135c510ccbf7aa618
