#include <linux/module.h>
#include <linux/timer.h>
#include <linux/init.h>

#define DELAY_TIME_MSEC		(1*HZ)

struct timer_list timer;

void my_function(struct timer_list *timer)
{
	printk("tik tok!\n");
	//system("./pcm_noloop/pcm-memory.x");
	mod_timer(timer, get_jiffies_64() + DELAY_TIME_MSEC);
}

void kernel_timer_register(void)
{
	timer_setup(&timer, my_function, 0);
	timer.expires = get_jiffies_64() + DELAY_TIME_MSEC;
	add_timer(&timer);
}

int timer_test_init(void)
{
	printk("timer_test_init\n");

	kernel_timer_register();

	return 0;
}

void timer_test_exit(void)
{
	printk("timer_test_exit\n");

	del_timer(&timer);
}

module_init(timer_test_init);
module_exit(timer_test_exit);

MODULE_LICENSE("GPL");
