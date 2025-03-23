#include "../TheNetworkAdapter/TheNetworkAdapter.h"
#include <linux/netdevice.h>
SetupTM(TheNetworkAdapter,0,0,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255)
SetupGetAddTMInCode(TheNetworkAdapter,NetworkAdapter,6,{
    struct net_device* dev;
    for_each_netdev(&init_net, dev) {
        if (memcmp(dev->dev_addr,value,6)==0) {
            data->dev = dev;
            break;
        }
    }
})
static void TMStart(void){
    GetTheNetworkAdapterTM();
    SetupGetAddTMInMainTMStart(TheNetworkAdapterTM);
    printk(KERN_INFO "TheNetworkAdapter: The NetworkAdapter TM has been started.\n");
}
static void TMEnd(void*){
    GetTheNetworkAdapterTM();
    SetupGetAddTMInMainTMEnd(TheNetworkAdapterTM);
    printk(KERN_INFO "TheNetworkAdapter: The NetworkAdapter TM has been ended.\n");
}