/* This is Task 1 of the challenge

Write a LInux Kernel module and stand-alone Makefile, that when loaded prints to the 
debug log level, "Hello World!". Be sure to make the module unloadable as well.

The Makefie should build the kernel module against the source for the currently running kernel,
or use an environment variable to  specify what kernel tree to bild it against

*/


#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>


/* static because it cannot be invoked by any application and return value is in */
static int hello_init(void){
printk(KERN_DEBUG "Hello World!\n");

return 0;
}


static void hello_exit(void){

printk(KERN_DEBUG "Goodbye world\n");
//not returning anything
}	

module_init(hello_init);
module_exit(hello_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Alisha");

