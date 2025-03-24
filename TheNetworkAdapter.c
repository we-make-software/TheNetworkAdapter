#include "TheNetworkAdapter.h"
#include <linux/netdevice.h>
SetupTM(TheNetworkAdapter,0,0,254,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255)
static void TMStart(void){
    GetTheNetworkAdapterTM();
    printk(KERN_INFO "TheNetworkAdapter: The NetworkAdapter TM has been started.\n");
}
static void TMEnd(void*){
    GetTheNetworkAdapterTM();
 
    printk(KERN_INFO "TheNetworkAdapter: The NetworkAdapter TM has been ended.\n");
}