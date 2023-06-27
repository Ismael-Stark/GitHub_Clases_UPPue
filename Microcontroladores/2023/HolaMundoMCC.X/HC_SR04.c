#include "HC_SR04.h"

void HC_SR04_init(){
    pin_trigger_t = 0;
    pin_echo_t = 1;
    pin_trigger =0;
    pin_echo_AN = 0;
    pin_trigger_AN = 0;
    
}

float HC_SR04_cm(){
    uint16_t contador =0;
    //printf("triger\n");
	pin_trigger = 1;
	__delay_us(50);
	pin_trigger = 0;
    
	
	while(pin_echo==0){}

	while(pin_echo==1){
		contador++;
		__delay_us(1);
	}
    
    __delay_ms(50);
	return ((float)contador/58 );
    
}