#include "ultrasonico.h"
uint8_t hc_sr04_m(void){
}



uint8_t hc_sr04_cm(void){
	uint8_t contador =0;
	pin_trigger = 1;
	//__delay_us(15);
	pin_trigger = 0;
	
	while(pin_trigger==0);
	
	while(pin_trigger==1){
		contador++;
		//__delay_us(1);
	}
	
	return (contador/58 );
}



uint8_t hc_sr04_mm(void){
	
}