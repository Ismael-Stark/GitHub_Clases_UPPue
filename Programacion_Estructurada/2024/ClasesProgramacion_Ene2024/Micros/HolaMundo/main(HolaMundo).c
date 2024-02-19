#include "main_h.h"
#include "PIC16F18855_registers.h"
#include <stdint.h>

#define x 50

void leer_sensor(int8_t *tempE, uint8_t *tempD);

void main(){
   int contador = 0;
   //setup_adc(ADC_LEGACY_MODE|ADC_CLOCK_DIV_32);
   setup_adc(ADC_LEGACY_MODE|ADC_CLOCK_INTERNAL);
   setup_adc_ports(sAN4|VSS_VDD);       ///pinA4 como entradas analogicas
   setup_oscillator(OSC_HFINTRC_32MHZ|OSC_CLK_DIV_BY_1|OSC_HFINTRC_ENABLED);
   TRISA = 0;
   LATA = 0;
   ANSELA = 0;
   
   
   printf("\nHola mundo usando la tarjeta PIC16f18855\n");
   while(TRUE)
   {
      
      printf("contador = %i\n",contador++);
      delay_ms(500);
      LATAbits.LATA0 = 1;
      LATAbits.LATA3 = 1;
      delay_ms(500);
      LATAbits.LATA0 = 0;
      LATAbits.LATA3 = 0;
   
   }
}


void leer_sensor(int8_t *tempE, uint8_t *tempD){
      i2c_start(); 
      i2c_write(0b01110000);
      i2c_write(0);
      i2c_start();
      i2c_write(0b01110001); //LECTURA
      *tempE = i2c_read(0);
      i2c_stop();
         
      delay_us(50);
          
      i2c_start();
      i2c_write(0b01110000);  //ESCRITURA
      i2c_write(2);
      i2c_start();
      i2c_write(0b01110001); //LECTURA
      *tempD = i2c_read(1);
      i2c_stop();
      *tempD >>= 6;
      *tempD *= 25;
}
