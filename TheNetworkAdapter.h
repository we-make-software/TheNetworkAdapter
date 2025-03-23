#ifndef TheNetworkAdapter_H
#define TheNetworkAdapter_H
#include "../TheMaintainer/TheMaintainer.h"
struct NetworkAdapter{
  
};
struct TheNetworkAdapter{
    struct NetworkAdapter*(*Get)(u8*value);
    struct NetworkAdapter*(*Add)(u8*value);
};
/*
#define GetTheNetworkAdapterTM()TM(TheNetworkAdapter,   255,255,255,255,255,
                                                        255,255,255,255,255,
                                                        255,255,255,255,255,
                                                        255,255)
*/
#endif