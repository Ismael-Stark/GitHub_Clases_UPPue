#include "interrupt.h"
#include "Servo.h"
#include "Timer0.h"
#include "Timer1.h"
#include "Timer5.h"

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
            Timer0_8Bit_set(AJUSTE_FINO_DE_RTCC);
        }
        if (contRTCC ==5){
            contRTCC = 0;
            flagRTCC =1;
        }
    }
    else if(INTCONbits.PEIE == 1)///--------------------------interrupciones de perifericos----------------
    {
        if (PIE4bits.TMR1IE == 1 && PIR4bits.TMR1IF == 1){
            PIR4bits.TMR1IF = 0;
            Timer1_set(0xf424);
            LATAbits.LATA3 = !LATAbits.LATA3;
        }else if (PIE4bits.TMR2IE == 1 && PIR4bits.TMR2IF == 1){
            PIR4bits.TMR2IF = 0;
            LATAbits.LATA1 = !LATAbits.LATA1;
        }else if (PIE4bits.TMR5IE == 1 && PIR4bits.TMR5IF == 1){
            PIR4bits.TMR5IF = 0;
            Timer5_set(0x63c0);
            LATAbits.LATA0 = !LATAbits.LATA0;
        }else{
            //no controlada
        }
    
    //habilitar interrupt
    
    }else{
        //nocontrolada
    }
    
}