#include <linux/module.h> 
#include <linux/kernel.h> 
#include <linux/init.h> 

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Dogukan Bicer");
MODULE_DESCRIPTION("Basit kernel modulu");

static int __init hello_init(void)
{
printk(KERN_INFO "Merhaba Dunya Kernel Modulu Calısti:)\n");
return 0; 
}
static void __exit hello_cleanup(void)
{
printk(KERN_INFO "Modul temizleniyor...\n");
}
module_init(hello_init);
module_exit(hello_cleanup);
