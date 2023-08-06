#include <linux/init.h>
#include <linux/module.h>
#include <linux/printk.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("LKPMG");
MODULE_DESCRIPTION("A sample");

static int __init hello_4_init(void)
{
	pr_info("Hello World 4!\n");
	return 0;
}

static void __exit hello_4_exit(void)
{
	pr_info("Goodbye World 4.\n");
}

module_init(hello_4_init);
module_exit(hello_4_exit);