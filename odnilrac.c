#include <linux/module.h>
#include <linux/kernel.h>
MODULE_LICENSE("GPL");
MODULE_AUTHOR("ODNILRAC");
MODULE_DESCRIPTION("TESTE");

int init_module() {
  printk(KERN_INFO "O módulo foi carregado!\n");
  return 0;
}

void cleanup_module() {
    printk(KERN_INFO "O módulo foi descarregado!\n");
}
