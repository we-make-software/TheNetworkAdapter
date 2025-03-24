#ifndef TheNetworkAdapter_H
#define TheNetworkAdapter_H
#include "../TheMaintainer/TheMaintainer.h"
struct NetworkAdapter{
    SetupEWB;
    struct net_device*dev;
};
struct TheNetworkAdapter{
    SetupEWB;
};
#define GetTheNetworkAdapterTM()TM(TheNetworkAdapter,254,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255)
#define GetTheNetworkAdapterTMFailback(failback)TMFailback(TheNetworkAdapter,failback,254,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255)
#endif