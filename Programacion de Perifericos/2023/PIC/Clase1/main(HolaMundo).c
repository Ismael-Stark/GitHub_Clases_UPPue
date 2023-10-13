#include <main_h.h>
#include "PIC16F18855_registers.h"
#include <stdint.h>

#define x 50

void leer_sensor(int8_t *tempE, uint8_t *tempD);

void main(){
   //setup_adc(ADC_LEGACY_MODE|ADC_CLOCK_DIV_32);
   setup_adc(ADC_LEGACY_MODE|ADC_CLOCK_INTERNAL);
   setup_adc_ports(sAN4|sAN8|sAN9|sAN10|VSS_VDD);       ///pinA4 y pinB0(an8) como entradas analogicas
   setup_oscillator(OSC_HFINTRC_32MHZ|OSC_CLK_DIV_BY_1|OSC_HFINTRC_ENABLED);
   uint8_t contador = 0, leer_boton;
   uint8_t leerSerial,TL;
   int8_t TH;
   uint16_t LeerADC;
   float voltaje;
   
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
   while(TRUE)
   {
      
   leer_sensor(&TH,&TL);
   printf("la temperatura del sensore de la tarejeta es:%d.%u\n",TH, TL);
   delay_ms(1000);

   
//!      leer_boton = PORTA;
//!      //leer_boton >>= 5;
//!      //if ( PORTAbits.RA5 == 0){
//!      if ( (( leer_boton >>5 ) & 0X01)  == 0){
//!         LATA = 0b00001111;
//!         printf("contador = %u\n",contador++);
//!         delay_ms(100);
//!      }else{
//!         LATA = 0b00000000; //APAGANDO LEDS
//!      }
//!      LATA = 0b00000000; //APAGANDO LEDS
//!      delay_ms(500);
//!      LATA = 0b00001111; //enciendo LEDS
//!      delay_ms(500);     
//!      printf("contador = %u\n",contador++);
//!      set_adc_channel(4);
//!      LeerADC = read_adc();
//!      voltaje = (5.0/1023)*LeerADC;
//!      printf("ADC: %Lu, en Volts: %.3f\n",LeerADC, voltaje);
//!      delay_ms(50);
//!      
//!      set_adc_channel(8);// pinb0 es analogico 8
//!      uint16_t LeerADC_PB0 = read_adc();
//!      float temperatura = (3.3*100*LeerADC_PB0)/1023;
//!      printf("ADC_PB0: %Lu, en Volts: %.3f\n\n",LeerADC_PB0, temperatura);
//!      delay_ms(50);
//!      
//!      if (LeerADC<100){
//!         LATA = 0b00000000;
//!      }else if(LeerADC >100 & LeerADC<200){
//!         LATA = 0b00000001;
//!      }else if(LeerADC >200 & LeerADC<400){
//!         LATA = 0b00000011;
//!      }else if(LeerADC >400 & LeerADC<600){
//!         LATA = 0b00000111;
//!      }else if(LeerADC >600 & LeerADC<1024){
//!         LATA = 0b00001111;
//!      }

//!      leerSerial =  getch();
//!      if (leerSerial == 'T' | leerSerial == 't'){
//!         LATA = 0b00001111; //enciendo LEDS
//!      }else if (leerSerial == 'y' | leerSerial == 'Y' ){
//!         LATA = 0b00000000; //APAGANDO LEDS
//!
//!      }
//!      
//!      if (leerSerial == 'a' | leerSerial == 'A'){
//!         LATA = LATA | 0b00000001; //enciendo LED A0
//!      }else if (leerSerial == 'z' | leerSerial == 'Z' ){
//!         LATA = LATA & 0b11111110; //APAGANDO LED A0
//!      }
//!      
//!      if (leerSerial == 'd' | leerSerial == 'D'){
//!         LATA = LATA | 0b00001000; //enciendo LED A3
//!      }else if (leerSerial == 'V' | leerSerial == 'v' ){
//!         LATA = LATA & 0b1110111; //APAGANDO LED A3
//!      }
//!      
//!      if (leerSerial == 'S' | leerSerial == 's'){
//!         LATA = LATA | (1<<1); //enciendo LED A1
//!      }else if (leerSerial == 'x' | leerSerial == 'X' ){
//!         LATA = LATA & ~(1<<1); //APAGANDO LED A1
//!      }
//!      
      
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
