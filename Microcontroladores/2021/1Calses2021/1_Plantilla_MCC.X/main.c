

#include <builtins.h>

#include "mcc_generated_files/mcc.h"
#include "Servo.h"



void main(void)
{
    // initialize the device
    uint16_t ADCC=0;
    uint8_t x = 0;
    uint8_t valTIMER0;
    SYSTEM_Initialize();

    // When using interrupts, you need to set the Global and Peripheral Interrupt Enable bits
    // Use the following macros to:

    // Enable the Global Interrupts
    INTERRUPT_GlobalInterruptEnable();

    // Enable the Peripheral Interrupts
    INTERRUPT_PeripheralInterruptEnable();

    // Disable the Global Interrupts
    //INTERRUPT_GlobalInterruptDisable();

    // Disable the Peripheral Interrupts
    //INTERRUPT_PeripheralInterruptDisable();

    
    while (1)
    {

        
        if (flagRTCC==1){
            PIN_SERVO1 = 1;
            flagRTCC = 0;
            flagSERVO1 = 1;
        }
        
        if (flagSERVO1 ==1){
            valTIMER0 = TMR0_ReadTimer();
            if(valTIMER0>tSERVO1){
                flagSERVO1=0;
                PIN_SERVO1 = 0;
            }  
        }
       //printf("Hola mundo\n");

//        if (TMR4_HasOverflowOccured()){
//            TMR4_Initialize();
//            LED1_Toggle();
//            ADCC = ADCC_GetSingleConversion(POT);
//            PWM5_LoadDutyValue(ADCC);
//            //tSERVO1    = 93;
//        }
        /*if(TMR1_HasOverflowOccured()){
            TMR1_Initialize();
//            TMR1H = 0x3C;
//            TMR1L = 0xB0;
//            PIR4bits.TMR1IF = 0;
            ADCC = ADCC_GetSingleConversion(POT);
            PWM5_LoadDutyValue(ADCC);
            LED2_Toggle();
            //printf("%i\n",ADCC++);
        }
        
        if(TMR3_HasOverflowOccured()){
            TMR3_Initialize();
            x++;
            if (x==5){
                x=0;
                LED3_Toggle();
                //tSERVO1=ticks_PULSO_MINIMO;
            }
            
        }*/
        
        
       /* // DISPARO DEL PULSO PWM
        if(flagRTCC==1){
            flagRTCC=0;
            PIN_SERVO1 = 1;
            flagSERVO1=1;    
        }

        // CONTROL DE ANCHO DEL PULSO PWM
        if(flagSERVO1==1){
            valTIMER0 = TMR0_ReadTimer();
            if(valTIMER0>tSERVO1){
                flagSERVO1=0;
                PIN_SERVO1 = 0;
            }   
        }
        
        if(Keypress!=0x00){
            switch(Keypress){
                // Periodos Prefijados
                case '1':   tSERVO1=ticks_PULSO_MINIMO;
                            break;
                case '2':   tSERVO1=ticks_PULSO_MEDIO;
                            break;
                case '3':   tSERVO1=ticks_PULSO_MAXIMO;
                            break;
                case '+':   if(++tSERVO1>ticks_PULSO_MAXIMO){
                                tSERVO1=ticks_PULSO_MAXIMO;
                            }
                            break;
                case '-':   if(--tSERVO1<ticks_PULSO_MINIMO){
                                tSERVO1=ticks_PULSO_MINIMO;
                            }
                            break;
                case 'r':   printf("S=%d\r\n",tSERVO1);
                            break;
            }

            Keypress=0x00;
        }
        
        */
        
        
        
        // Add your application code
    }
}
/**
 End of File
        if (TMR0_HasOverflowOccured()){
            TMR0H = 0x3C;
            TMR0L = 0x00;
//            TMR0H = 0x3C;
//            TMR0L = 0x00;
            PIR0bits.TMR0IF = 0;
            LED1_Toggle();
            printf("Hola mundo\n");
        }
        
        if(TMR1_HasOverflowOccured()){
            TMR1H = 0x3C;
            TMR1L = 0xB0;
            PIR4bits.TMR1IF = 0;
            LED2_Toggle();
            ADCC = ADCC_GetSingleConversion(POT);
            PWM5_LoadDutyValue(ADCC);
        }
*/


/*
 #include "../Servo.h"
 
 // interrupt handler
    if(PIE0bits.TMR0IE == 1 && PIR0bits.TMR0IF == 1)
    {
        TMR0_ISR();
        ++contRTCC;
        if(contRTCC==4){
           TMR0_WriteTimer(AJUSTE_FINO_DE_RTCC);
        }
        if(contRTCC==5){
           flagRTCC=1;
           contRTCC=0x00;
        }
    }
    else if(INTCONbits.PEIE == 1)
    {
        if(PIE3bits.RCIE == 1 && PIR3bits.RCIF == 1)
        {
            EUSART_RxDefaultInterruptHandler();
            Keypress = getch();
        } 
//        else if(PIE3bits.TXIE == 1 && PIR3bits.TXIF == 1)
//        {
//            EUSART_TxDefaultInterruptHandler();
//        } 
        else
        {
            //Unhandled Interrupt
        }
    }
    else
    {
        //Unhandled Interrupt
    }
 
 */