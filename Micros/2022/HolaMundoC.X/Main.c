
#include <xc.h>
#include <pic16f18855.h>
#include "fuses.h"
#include "main.h"
#include "uart.h"
#include "adc.h"



void port_init();


void main(void) {
    uint8_t rx, buffer[32], contador = 0;
    uint16_t adc=0;

    port_init();
    serial_init(9600);
    adc_init();
    
    
    while(1){
        LATA = LATA | (1<<3);
        __delay_ms(500);
        LATA = LATA & ~(1<<3);
        __delay_ms(500);
        sprintf(buffer,"hola mundo %i\n",contador++);
        printf(buffer);
        adc = adc_read(4);//leo pinA4
        sprintf(buffer,"adc = %i \n",adc);
        printf(buffer);
        
        adc = adc_read(8);//leo pinB0
        sprintf(buffer,"ANB0 = %i \n\n",adc);
        printf(buffer);
        
        //uart_send_string(buffer);
        
        if (rxFlag ==1){
            rx = uart_rx();
        }
                
        if (rx == 'b'){
            LATA = LATA | (1<<0);
        }else{
            LATA = LATA & ~(1<<0);
        }
        /*//LEER ENTRADA
        if ( (PORTA>>5) & 0x01 ){
            LATA = LATA & ~(1<<2);
        }else{
            LATA = LATA | (1<<2);
        }*/
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
    
    TRISC = 0b10;
    ANSELC = 0;    
    
}