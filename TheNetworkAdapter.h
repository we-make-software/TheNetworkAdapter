#ifndef TheNetworkAdapter_H
#define TheNetworkAdapter_H
#include "../TheMaintainer/TheMaintainer.h"
struct NetworkAdapter{
    SetupEWB;
    SetupGetAddTMInData();
    struct net_device*dev;
};
struct TheNetworkAdapter{
    SetupEWB;
    SetupGetAddTMInStruct(NetworkAdapter);
};
#define GetTheNetworkAdapterTM()TM(TheNetworkAdapter,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255)

#endif