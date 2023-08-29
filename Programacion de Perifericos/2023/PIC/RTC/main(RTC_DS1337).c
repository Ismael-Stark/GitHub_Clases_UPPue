#include <main_h.h>
#include "PIC16F18855_registers.h"
#include <stdint.h>
#include "ds1337.c"

#define x 50
#define address_MLXr 0b10110101
#define address_MLXw 0b10110100



void leer_sensor(int8_t *tempE, uint8_t *tempD);

void sensor(){
      i2c_start(); 
      i2c_write(address_MLXw);
      i2c_write(0);
      i2c_start();
      i2c_write(0b01110001); //LECTURA
      *tempE = i2c_read(0);
      i2c_stop();
}

void main(){
   int8 hr,min,sec;
   int8 day,mth,year,dow;
   
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
   ds1307_init();
   printf("\nHola mundo usando la tarjeta PIC16f18855\n");
   //ds1307_set_date_time(day,mth,year,dow,hour,min,sec);
   //ds1307_set_date_time(16,8,23,3,13,05,00);
   
   //ds1307_set_date_time(day,mth,year,dow,hour,min,sec);
   //ds1307_set_date_time(16,8,23,3,15,47,0);
   
   //ds1307_set_time(12hr, min, sec);
   //ds1307_set_time(10, 30, 00);
   
   //delay_ms(5000);
   while(TRUE)
   {
      
      //leer_sensor(&TH,&TL);
      //printf("la temperatura del sensore de la tarejeta es:%d.%u\n",TH, TL);
      
      ds1307_get_time(hr,min,sec);
      delay_ms(50);
      ds1307_get_date(day,mth,year,dow);
      printf("\nHr: %02d:\%02d:\%02d",hr,min,sec); 
      printf("\nFecha: %02d/%02d/%02d\n",day,mth,year); 
      delay_ms(1000);
   
      
   }
}


void leer_sensor(int8_t *tempE, uint8_t *tempD){
      i2c_start();               //inicia
      i2c_write(0b01110000);     //direccion mas escribir
      i2c_write(0);              //escribo direccion a leer
      i2c_start();                //re start
      i2c_write(0b01110001); //direccion para poder leer
      *tempE = i2c_read(0);  //leer registro
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
