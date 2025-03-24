#ifndef TheNetworkAdapter_H
#define TheNetworkAdapter_H
#include "../TheMaintainer/TheMaintainer.h"
struct TheNetworkAdapter{
    SetupEWB;
    struct net_device*(*Get)(u8*value);
};
#define GetTheNetworkAdapterTM()TM(TheNetworkAdapter,254,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255)
#define GetTheNetworkAdapterTMFailback(failback)TMFailback(TheNetworkAdapter,failback,254,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255)
#endif