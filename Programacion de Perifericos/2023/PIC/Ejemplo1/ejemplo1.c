#include <16F18855.h>
#device ADC=10
#fuses RSTOSC_HFINTRC_PLL,NOCLKOUT,CKS,FCMEN
#fuses MCLR, NOWDT,WDTWIN_100%,WDTWIN_SW
#fuses SCANE,NOLVP
#fuses NOPROTECT,NOCPD

#use delay(internal=4M)
#use rs232(baud=9600,parity=N,xmit=PIN_C0,rcv=PIN_C1,bits=8)

void main()
{
   setup_adc_ports(sAN4|VSS_VDD);
   setup_adc( ADC_CLOCK_INTERNAL);
   //setup_adc_reference(VSS_VDD);
   //setup_adc(ADC_LEGACY_MODE | ADC_CLOCK_DIV_4);
   
   setup_oscillator(OSC_HFINTRC_4MHZ);
   set_tris_a(0x00);
   output_a(0);
   delay_ms(1000);
   set_adc_channel(4);
   printf("Prueba PIC16F18855");
   while(TRUE)
   {
      output_a(0b1111);
      delay_ms(100);
      output_a(0);
      delay_ms(100);
      //int16 x= read_adc();
      printf("ADC: %Lu\n",read_adc());

      //TODO: User Code
   }

}

