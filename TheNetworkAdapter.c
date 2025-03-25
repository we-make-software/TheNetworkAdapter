#include "TheNetworkAdapter.h"
#include <linux/netdevice.h>
#include <linux/rculist.h>
#include <linux/etherdevice.h> 
SetupTM(TheNetworkAdapter,0,0,254,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255)
static struct net_device*Get(u8*value);
static struct net_device*Get(u8*value){
    struct net_device*dev=NULL;
    rcu_read_lock();
    for_each_netdev_rcu(&init_net,dev) {
        if (memcmp(dev->dev_addr,value,ETH_ALEN)==0) {
            rcu_read_unlock();
            return dev;
        }
    }
    rcu_read_unlock();
    return NULL;
}
static void TMStart(void){
    GetTheNetworkAdapterTM();
    SetTM(TheNetworkAdapterTM,Get);
    printk(KERN_INFO "TheNetworkAdapter: The NetworkAdapter TM has been started.\n");
}
static void TMEnd(void*data){}