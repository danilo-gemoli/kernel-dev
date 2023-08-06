#include <linux/module.h>
#include <linux/printk.h>

int init_module(void)
{
	pr_info("Hello World!\n");
	return 0;
}

void cleanup_module(void)
{
	pr_info("Goodbye World.");
}

MODULE_LICENSE("GPL");