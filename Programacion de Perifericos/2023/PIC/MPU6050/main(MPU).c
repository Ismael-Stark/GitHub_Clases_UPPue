#include <main_h.h>
#include "PIC16F18855_registers.h"
#include <stdint.h>

#include "MPU6050.c"
//#include "MPU6050v.c"
#define x 50

void leer_sensor(int8_t *tempE, uint8_t *tempD);

void main(){
   float d;
   //int16 d;
   uint16_t x,y,z;
   //setup_adc(ADC_LEGACY_MODE|ADC_CLOCK_DIV_32);
   setup_adc(ADC_LEGACY_MODE|ADC_CLOCK_INTERNAL);
   setup_adc_ports(sAN4|sAN8|sAN9|sAN10|VSS_VDD);       ///pinA4 y pinB0(an8) como entradas analogicas
   setup_oscillator(OSC_HFINTRC_32MHZ|OSC_CLK_DIV_BY_1|OSC_HFINTRC_ENABLED);
   
   TRISA = 0b11110000;//DE RA0 A RA3, COMO SALIDAS, LODEMAS SON ENTRADAS
   PORTA = 0; //LIMPIO PORTA
   LATA = 0; //LIMPIO LATA
   ANSELA = 0; //TODO DIGITAL
   ANSELA <<= (1<<p4);  //ra4 ENTRADA ANALOGICA
   WPUA = 0;//SIN RESISTENCIAS PULL-UP  
   
   TRISB = TRISB|(1<<p0);
   ANSELB <<= (1<<p0);  //rb0 ENTRADA ANALOGICA
   PORTB = 0; //LIMPIO PORTA
   LATB = 0; //LIMPIO LATA
   WPUB = 0;//SIN RESISTENCIAS PULL-UP  
   printf("\nHola mundo usando la tarjeta PIC16f18855\n");
  
   Setup_MPU6050();
   delay_ms(300);
   MPU6050_Test();
   delay_ms(1000);
   //delay_ms(5000);
   while(TRUE)
   {
      
      //leer_sensor(&TH,&TL);
      //printf("la temperatura del sensore de la tarejeta es:%d.%u\n",TH, TL);
      
      printf("\nHr: %02d:\%02d:\%02d",hr,min,sec); 
      printf("\nFecha: %02d:\%02d:\%02d\n",day,mth,year); 
      delay_ms(1000);
   
      
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
