#include <main(HolaMundo).h>
#include "PIC16F18855_registers.h"
#include <stdint.h>
void main()
{
   uint8_t contador = 0;
   setup_oscillator(OSC_HFINTRC_32MHZ|OSC_CLK_DIV_BY_1|OSC_HFINTRC_ENABLED);
   TRISA = 0b11110000;//DE RA0 A RA3, COMO SALIDAS, LODEMAS SON ENTRADAS
   PORTA = 0; //LIMPIO PORTA
   LATA = 0; //LIMPIO LATA
   ANSELA = 0; //TODO DIGITAL
   WPUA = 0;//SIN RESISTENCIAS PULL-UP   
   while(TRUE)
   {
      LATA = 0b00000000; //APAGANDO LEDS
      delay_ms(500);
      
      LATA = 0b00001111; //enciendo LEDS
      delay_ms(500);
      
      printf("contador = %lu\n",contador++);
      //TODO: User Code
   }

}
