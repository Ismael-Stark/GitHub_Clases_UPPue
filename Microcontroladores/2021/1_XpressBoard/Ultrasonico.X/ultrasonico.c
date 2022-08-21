#include "ultrasonico.h"
#include <stdint.h>
#include "mcc_generated_files/mcc.h"

void hc_sr04_init(void){
    pin_trigger_t = 0;
    pin_echo_t = 1;
    pin_trigger =0; 
}

uint16_t hc_sr04_mm(void){
	uint16_t contador =0;
    //printf("triger\n");
	pin_trigger = 1;
	__delay_us(50);
	pin_trigger = 0;
    
	
	while(pin_echo==0){}
	//printf("triger\n");
	while(pin_echo==1){
		contador++;
		__delay_us(1);
	}
    //printf("triger2: %d\n",contador);
	__delay_ms(50);
	return (contador );
}

float hc_sr04_cm(void){
   return ((float)hc_sr04_mm()/10);
}

float hc_sr04_m(void){
   return (hc_sr04_cm()/100);
}