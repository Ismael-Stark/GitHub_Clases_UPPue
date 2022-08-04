#include "interrupt.h"
#include "Timer0.h"
#include "servo.h"
#include "misVar.h"
#include "uart.h"

void enable_Global_interrupt(){
    INTCON = INTCON | (1<<7);
    //INTCONbits.GIE = 1;
}
void enable_Peripheral_interrupt(){
    INTCON = INTCON | (1<<6);
//    INTCONbits.PEIE = 1;
}

void disable_Global_interrupt(){
    INTCON = INTCON & ~(1<<7);
}

void disable_Peripheral_interrupt(){
    INTCON = INTCON & ~(1<<6);
    //INTCONbits.PEIE = 0;
}

void enable_IntExtInterrupt(){
    //PIE0 = PIE0 | (1<<0);//detecta flanco de subida
    PIE0 = PIE0 & ~(1<<0);//detecta flanco de bajada
    
    INTPPS =  0x05;//el pin de interrupcion externa ahora es RA5
    
}


//funcion que se ejecuta por default cuando ocurre alguna interrupcion(yo no la declare)
void __interrupt() INTERRUPT_InterruptManager (void)
{
     ///-------------------------------------------------------interrupciones globales---------------------
    if (PIE0bits.INTE == 1 && PIR0bits.INTF == 1){
        PIR0bits.INTF = 0;
        counts++;
        
    }else if(PIE0bits.TMR0IE == 1 && PIR0bits.TMR0IF == 1)
    {
        PIR0bits.TMR0IF = 0;
        contRTCC++;
        if (contRTCC ==4){
            Timer0_8bit_set(AJUSTE_FINO_DE_RTCC);
        }
        if (contRTCC ==5){
            contRTCC = 0;
            flagRTCC =1;
        }
        
    }
    else if(INTCONbits.PEIE == 1)///--------------------------interrupciones de perifericos----------------
    {
        if(PIE3bits.RCIE == 1 && PIR3bits.RCIF == 1){
            PIR3bits.RCIF = 0;
            recepcionRX = uart_rx();
        }
        
    }
}