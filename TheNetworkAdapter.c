#include "TheNetworkAdapter.h"
#include <linux/netdevice.h>
SetupTM(TheNetworkAdapter,0,0,254,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255)
static bool GetAdd(void);
static bool GetAdd(void){
    printk(KERN_INFO "TheNetworkAdapter: The NetworkAdapter GetAdd has been called.\n");
    return true;
}

static void TMStart(void){
    GetTheNetworkAdapterTM();
    SetTM(TheNetworkAdapterTM,GetAdd);
    printk(KERN_INFO "TheNetworkAdapter: The NetworkAdapter TM has been started.\n");
}
static void TMEnd(void*){
    GetTheNetworkAdapterTM();
 
    printk(KERN_INFO "TheNetworkAdapter: The NetworkAdapter TM has been ended.\n");
}