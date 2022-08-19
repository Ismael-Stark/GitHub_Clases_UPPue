#case
#include <main.h>
#include <stdint.h>
#include <stdbool.h>

float temp;
//bool flag =0;
uint16_t timer = 0;
char buffer[50];

#include "interrupciones.c"
#include "pid.c"

void main()
{
   setup_adc(NO_ANALOGS);
   setup_adc_ports(NO_ANALOGS);
   setup_comparator(NC_NC_NC_NC);
   setup_timer_5(T5_FOSC | T5_SYNC | T5_DIV_BY_4);      //528 us overflow, 8.4 ms interrupt
   set_timer5(0);
   
   //CCS_dentro_de_MPLABX

   
   TRISB = 0b00000001;
   TRISA = 0b00110000;
   output_a(0);
   
   
   lcd_init();
   MAX66_init();
/*
   lcd_putc("\f   Bienvenido\n  Iniciando...");

   delay_ms(3000);
   lcd_putc("\fCalentador Plus\n Programa V3.0");
   */
   //ext_int_edge(L_TO_H);
   //ext_int_edge(H_TO_L);
   enable_interrupts(INT_EXT);
   enable_interrupts(INT_TIMER5);
   enable_interrupts(GLOBAL);   
   enable_interrupts(PERIPH);
   
   
   TRISC.TRISC6 = 0; //TC_CLK    PIN_C6   //SCK B6
   TRISC.TRISC2 = 0; //TC_CS     PIN_C2   //CS B7
   TRISC.TRISC7 = 1; //TC_DATA   PIN_C7   //SO B5
   //MAX66_init(); 
   
   timer = 65531;
   
   while(TRUE)
   {
      
      for(signed int16 i= 0; i<=1023; i++){
         //output_toggle(buzzer);
         timer = (int16)map(i, 0, 1023, 0,65535);
         delay_ms(5);
      }
      temp = MAX66_readC();
      sprintf(buffer,"\fLa temperatura es:\n   %3.2f%cC",temp,223);
     // lcd_puts(buffer);
      for(signed int16 i= 1023; i>= 0; i--){
         //output_toggle(buzzer);
         timer = (int16)map(i, 0, 1023, 0,65535);
         delay_ms(5);
      }
      
      
      //timer = (int16)map(adc, 0, 1023, 0,65535);
      
      //temp = MAX66_readC();
      //temp = do_everything();
      //printf("El Termopar lee:   %f C\n",temp  );
      
      //delay_ms(50);

      //TODO: User Code
   }

}
