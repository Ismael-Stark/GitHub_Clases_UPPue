//PIC 1
#include <xc.h>
//#include <pic16f18855.h>
#include "fuses.h"
#include "main.h"
#include "uart.h"
#include "adc.h"


#define boton ((PORTA>>5) & 0x01) 


void port_init();
bool detecta_flanco(void);


void main(void) {
    uint8_t rx=0, buffer[50], contador = 0;
    uint16_t adc=0;
    bool flagDatoEnviar=0;

    port_init();
    serial_init(9600);
    adc_init();
    //sprintf(buffer,"hola mundo %i\n",contador);
    
    
    while(1){
        LATA = LATA | (1<<3);
        __delay_ms(50);
        LATA = LATA & ~(1<<3);
        __delay_ms(50);
        
        if (rxFlag ==1){
            rx = uart_rx();  
        }
        
        if (rx == 'b'){
            LATA = LATA | (1<<0);
        }else{
            LATA = LATA & ~(1<<0);
        }
        //LEER ENTRADA
        if (boton==0){
            flagDatoEnviar = !flagDatoEnviar;
            
            while (boton==0);
            
            switch(flagDatoEnviar){
                case 0:
                    uart_tx('a');
                    break;
                case 1:
                    uart_tx('b');
                    break;
            }
            
        }
    }
    return;
}


void port_init(){
    
    ANSELA = 0;
    LATA=0;
    PORTA =0;
    TRISA = 0b11110000;
    //TRISA = TRISA & ~(1<<0 | 1<<1 | 1<<2 | 1<<3);//A0 - A3 COMO SALIDA
    //TRISA = TRISA | (1<<5); //A5 ENTRADA
    ANSELA = ANSELA | (1<<4);//PIN A4 COMO ENTRADA ANALOGICA
    
    LATB=0;
    PORTB =0;
    TRISB = TRISA | (1<<0);
    ANSELB = ANSELB | (1<<0);//rb0 entrada analogica
    
    //TRISC = 0b10;
    ANSELC = 0;
    TRISC = TRISC & ~(1<<0); //RC0 salida TX
    TRISC = TRISC |(1<<1); //RC1 entrada RX
    
    TRISC = TRISC & ~(1<<7); //RC7 salida TX
    TRISC = TRISC |(1<<2); //RC2 entrada RX
    
    ANSELC = ANSELC & ~(1<<7);
    ANSELC = ANSELC & ~(1<<2);
    
}