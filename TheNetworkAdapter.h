#ifndef TheNetworkAdapter_H
#define TheNetworkAdapter_H
#include "../TheMaintainer/TheMaintainer.h"

struct TheNetworkAdapter{
    SetupEWB;
    bool(*GetAdd)(void);
};
#define GetTheNetworkAdapterTM()TM(TheNetworkAdapter,254,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255)
#define GetTheNetworkAdapterTMFailback(failback)TMFailback(TheNetworkAdapter,failback,254,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255)
#endif