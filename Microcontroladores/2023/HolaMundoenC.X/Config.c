#include "Config.h"


void init_osc(void){
    //OSCCON1 = 0b01110000;
    //OSCCON2 = 0b01110000;
    OSCEN = 0b10000000;

}