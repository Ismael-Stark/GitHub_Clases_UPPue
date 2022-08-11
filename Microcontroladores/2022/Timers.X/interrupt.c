#include "interrupt.h"
#include "Timer0.h"
#include "Timer5.h"
#include "servo.h"
#include "misVar.h"
#include "uart.h"
#include "MultiServo.h"

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
        if(PIE3bits.RCIE == 1 && PIR3bits.RCIF == 1){//interrupcion recepcion serial
            PIR3bits.RCIF = 0;
//            recepcionRX = uart_rx();
            command = uart_rx();
        }else if(PIE4bits.TMR5IE == 1 && PIR4bits.TMR5IF == 1)
        {
            //TMR5_ISR(); // original
            
            PIR4bits.TMR5IF = 0;
            if(flag_Phase==0){
                if(Servo_Idx==0 && SERVO1_ON) SERVO1 = 1;
                if(Servo_Idx==1 && SERVO2_ON) SERVO2 = 1;
                if(Servo_Idx==2 && SERVO3_ON) SERVO3 = 1;
                if(Servo_Idx==3 && SERVO4_ON) SERVO4 = 1;
                if(Servo_Idx==4 && SERVO5_ON) SERVO5 = 1;
                if(Servo_Idx==5 && SERVO6_ON) SERVO6 = 1;
                if(Servo_Idx==6 && SERVO7_ON) SERVO7 = 1;
                if(Servo_Idx==7 && SERVO8_ON) SERVO8 = 1;
                Ticks4NextInterrupt = 65535 - Servo_PWM[Servo_Idx];
                Timer5_set(Ticks4NextInterrupt);
            }
            if(flag_Phase==1){
                if(Servo_Idx==0 && SERVO1_ON) SERVO1 = 0;
                if(Servo_Idx==1 && SERVO2_ON) SERVO2 = 0;
                if(Servo_Idx==2 && SERVO3_ON) SERVO3 = 0;
                if(Servo_Idx==3 && SERVO4_ON) SERVO4 = 0;
                if(Servo_Idx==4 && SERVO5_ON) SERVO5 = 0;
                if(Servo_Idx==5 && SERVO6_ON) SERVO6 = 0;
                if(Servo_Idx==6 && SERVO7_ON) SERVO7 = 0;
                if(Servo_Idx==7 && SERVO8_ON) SERVO8 = 0;
                Ticks4NextInterrupt = 65535 - Ticks4Window + Servo_PWM[Servo_Idx];
                Timer5_set(Ticks4NextInterrupt);
                if(++Servo_Idx>7) Servo_Idx=0;
            }
            //++flag_Phase;
            if( ++flag_Phase > 1){
                flag_Phase = 0;
            }
            
        } 
        else
        {
            //Unhandled Interrupt
        }
        
    }
}