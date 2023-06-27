#include <main_h.h>
#include "PIC16F18855_registers.h"
#include <stdint.h>

void main(){
   setup_oscillator(OSC_HFINTRC_32MHZ|OSC_CLK_DIV_BY_1|OSC_HFINTRC_ENABLED);
   uint8_t contador = 0, leer_boton;
   uint8_t leerSerial;
   
   TRISA = 0b11110000;//DE RA0 A RA3, COMO SALIDAS, LODEMAS SON ENTRADAS
   PORTA = 0; //LIMPIO PORTA
   LATA = 0; //LIMPIO LATA
   ANSELA = 0; //TODO DIGITAL
   WPUA = 0;//SIN RESISTENCIAS PULL-UP      
   printf("\nHola mundo usando la tarjeta PIC16f18855\n");
   while(TRUE)
   {
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

      leerSerial =  getch();
      
      if (leerSerial == 'T' | leerSerial == 't'){
         LATA = 0b00001111; //enciendo LEDS
      }else if (leerSerial == 'y' | leerSerial == 'Y' ){
         LATA = 0b00000000; //APAGANDO LEDS
      }
      
      if (leerSerial == 'a' | leerSerial == 'A'){
         LATA = LATA | 0b00000001; //enciendo LED A0
      }else if (leerSerial == 'z' | leerSerial == 'Z' ){
         LATA = LATA & 0b11111110; //APAGANDO LED A0
      }
      
      if (leerSerial == 'd' | leerSerial == 'D'){
         LATA = LATA | 0b00001000; //enciendo LED A3
      }else if (leerSerial == 'V' | leerSerial == 'v' ){
         LATA = LATA & 0b1110111; //APAGANDO LED A3
      }
      
      if (leerSerial == 'S' | leerSerial == 's'){
         LATA = LATA | (1<<1); //enciendo LED A1
      }else if (leerSerial == 'x' | leerSerial == 'X' ){
         LATA = LATA & ~(1<<1); //APAGANDO LED A1
      }
      
   }
}
