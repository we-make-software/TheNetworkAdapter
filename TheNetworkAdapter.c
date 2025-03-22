#include "../TheNetworkAdapter/TheNetworkAdapter.h"
SetupTM(TheNetworkAdapter,0,0,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255)
static void TMStart(void){
    GetTheNetworkAdapterTM();
    TheNetworkAdapterTM->test=0;
}
static void TMEnd(void){
 
}
