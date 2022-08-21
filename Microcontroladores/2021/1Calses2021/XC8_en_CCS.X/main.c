#include "mcc_generated_files/system/system.h"

/*
    Main application
*/

void init(){
   PORTA = 0;      //LIMPIO PORTA
   LATA = 0;       //LIMPIO LATA
   ANSELA = 0;     //EL PUERTO A SIRVE COMO ENTRA Y SALIDA DIGITAL
   
   TRISA = 0b11110000;
    
   PORTB = 0;      //LIMPIO PORTB
   LATB = 0;       //LIMPIO LATB
   ANSELB = 0;     //EL PUERTO A SIRVE COMO ENTRA Y SALIDA DIGITAL
   TRISB = 0x01;     // 0X00, 0b00000000;  TODO EL PUERTO ES SALIDA
    
   PORTC = 0;      //LIMPIO PORTB
   LATC = 0;       //LIMPIO LATB
   ANSELC = 0;     //EL PUERTO A SIRVE COMO ENTRA Y SALIDA DIGITAL
   TRISCbits.TRISC7 = 0; //CON ESTO SOLO EL PIN C7 ES UNA SALIDA,
                            //LOS DEMAS PINES NO IMPORTAN
   ADCON0bits.ADON = 1;
}

int main(void)
{
    
    uint8_t dir=0, out = 1;
    SYSTEM_Initialize();
    
    init();
    LATA = out;
    __delay_ms(250);
    while(1){
        if(!PORTAbits.RA5){
            dir = !dir;
        }
        
        if(dir == 0){
            out <<=1;
            if(out>8){
                out=1;
            }
            LATA = out;
            
        }
        if(dir == 1){
            out >>=1;
            if(out<1){
                out=8;
            }
            LATA = out;
            
        }
        __delay_ms(250);
   }
}
































