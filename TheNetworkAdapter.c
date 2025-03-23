#include "../TheNetworkAdapter/TheNetworkAdapter.h"
SetupTM(TheNetworkAdapter,0,0,  255,255,15,14,13,
                                12,11,10,9,8,
                                7,6,5,4,3,
                                2,1)
static LIST_HEAD(NetworkAdapterList);
static struct NetworkAdapter*Get(u8*value){
    struct TheMailConditioner*tmcTM=GetTheMailConditioner(value,6,false);
    if(!tmcTM)return NULL;
    return NULL;
}
static struct NetworkAdapter*Add(u8*value){
    struct TheMailConditioner*tmcTM=GetTheMailConditioner(value,6,true);
    if(!tmcTM)return NULL;
    if(!GetTheMailConditionerData(tmcTM)){
        struct NetworkAdapter*objTM=(*GetTheMailConditionerUnsafeData(tmcTM)=kmalloc(sizeof(struct NetworkAdapter),GFP_KERNEL));
        if(objTM){

        }else{
            printk(KERN_ERR "TheNetworkAdapter: Can't allocate memory for the NetworkAdapter.\n");
            return NULL;
        }

    }
    return NULL;
}
static void TMStart(void){
   // GetTheNetworkAdapterTM();
   // SetTM(TheNetworkAdapterTM,Get);
    printk(KERN_INFO "TheNetworkAdapter: The NetworkAdapter TM has been started.\n");
}
static void TMEnd(void*){
 
}
