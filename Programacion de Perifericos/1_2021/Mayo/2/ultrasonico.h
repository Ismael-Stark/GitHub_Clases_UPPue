#ifndef ultrasonico
#define ultrasonico
//en el archivo .h
//se definen los prototipos de funciones
#include <stdint.h>
int pin_echo;		//dsadsa
int pin_trigger;		//dsadsa
//#define delay_us(x)  system("pause")


uint8_t hc_sr04_m(void);
uint8_t hc_sr04_cm(void);
uint8_t hc_sr04_mm(void);


#endif