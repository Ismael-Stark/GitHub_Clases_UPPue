#include <main(HolaMundo).h>
#include "PIC16F18855_registers.h"
#include <stdint.h>

void main()
{
   setup_oscillator(OSC_HFINTRC_32MHZ|OSC_CLK_DIV_BY_1|OSC_HFINTRC_ENABLED);
   uint8_t contador = 0, leer_boton;
   TRISA = 0b11110000;//DE RA0 A RA3, COMO SALIDAS, LODEMAS SON ENTRADAS
   PORTA = 0; //LIMPIO PORTA
   LATA = 0; //LIMPIO LATA
   ANSELA = 0; //TODO DIGITAL
   WPUA = 0;//SIN RESISTENCIAS PULL-UP   
   PORTAbits.RA5;
   
   printf("\nHola mundo usando la tarjeta PIC16f18855\n");
   while(TRUE)
   {
      leer_boton = PORTA;
      //leer_boton >>= 5;
      //if ( PORTAbits.RA5 == 0){
      if ( (( leer_boton >>5 ) & 0X01)  == 0){
         LATA = 0b00001111;
         printf("contador = %u\n",contador++);
         delay_ms(100);
      }else{
         LATA = 0b00000000; //APAGANDO LEDS
      }
//!      LATA = 0b00000000; //APAGANDO LEDS
//!      delay_ms(500);
//!      LATA = 0b00001111; //enciendo LEDS
//!      delay_ms(500);
      
//!      printf("contador = %u\n",contador++);

   }
}
