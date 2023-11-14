#include <main_h.h>
#include "PIC16F18855_registers.h"
#include <stdint.h>

#DEFINE  PIN_CLK  PIN_B1
#DEFINE  PIN_DIO  PIN_B0 
#DEFINE  CLK_HIGH (output_high(PIN_CLK))
#DEFINE  CLK_LOW  (output_low(PIN_CLK))
#DEFINE  DIO_HIGH (output_high(PIN_DIO))
#DEFINE  DIO_LOW  (output_low(PIN_DIO))
#include "tm1637yo.c"

#define x 50
#define brillo 2

void leer_sensor(int8_t *tempE, uint8_t *tempD);

void main(){
   //setup_adc(ADC_LEGACY_MODE|ADC_CLOCK_DIV_32);
   setup_adc(ADC_LEGACY_MODE|ADC_CLOCK_INTERNAL);
   setup_adc_ports(sAN4|sAN8|sAN9|sAN10|VSS_VDD);       ///pinA4 y pinB0(an8) como entradas analogicas
   setup_oscillator(OSC_HFINTRC_32MHZ|OSC_CLK_DIV_BY_1|OSC_HFINTRC_ENABLED);
   uint8_t contador = 0;
   uint8_t TL;
   int8_t TH;

   
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

   
   TM1637_init(brillo);   
   // Imprime el numero  |1|2|3|4|, hace uso de la función por writeRawDigit, digito en cada segmento
   TM1637_Display(digits[4],0);
   TM1637_Display(digits[3],1);
   TM1637_Display(digits[2],2);
   TM1637_Display(digits[1],3);    
   delay_ms(1000);
   
   //Imprime el numero  |2|4|5|6|, hace uso de la función por  displayValues, en los 4 segmentos
   TM1637_DisplayAll(digits[2], digits[4] | 0x80, digits[5], digits[6]);
   delay_ms(1000);
   
   TM1637_DisplayAll(digits[0], digits[0] | 0x80, digits[0], digits[0]);
   delay_ms(1000);
   printf("\nHola mundo usando la tarjeta PIC16f18855\n");
   while(TRUE)
   {
   leer_sensor(&TH,&TL);
   printf("la temperatura del sensore de la tarejeta es:%d.%u\n",TH, TL);
   TM1637_DisplayAll(digits[(TH/10)%10], digits[TH%10]| 0x80, digits[(TL/10)%10], digits[TL%10]); 
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
