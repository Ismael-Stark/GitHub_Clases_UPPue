/**
  Generated Interrupt Manager Source File

  @Company:
    Microchip Technology Inc.

  @File Name:
    interrupt_manager.c

  @Summary:
    This is the Interrupt Manager file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  @Description:
    This header file provides implementations for global interrupt handling.
    For individual peripheral handlers please see the peripheral driver for
    all modules selected in the GUI.
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.7
        Device            :  PIC16F18855
        Driver Version    :  2.04
    The generated drivers are tested against the following:
        Compiler          :  XC8 2.31 and above or later
        MPLAB 	          :  MPLAB X 5.45
*/

/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
*/

#include "interrupt_manager.h"
#include "mcc.h"
#include "../Servo.h"
uint8_t x = 0;
uint16_t ADCC=0;
long map(long x, long in_min, long in_max, long out_min, long out_max) {
    return (x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;
}
void __interrupt() INTERRUPT_InterruptManager (void)
{
    // interrupt handler
    if(PIE0bits.TMR0IE == 1 && PIR0bits.TMR0IF == 1)
    {
        TMR0_ISR();
        contRTCC++;
        if (contRTCC ==4){
            TMR0_WriteTimer(AJUSTE_FINO_DE_RTCC);
        }
        if (contRTCC ==5){
            contRTCC = 0;
            flagRTCC =1;
        }
    }
    else if(INTCONbits.PEIE == 1)
    {
        if(PIE4bits.TMR3IE == 1 && PIR4bits.TMR3IF == 1)
        {
            TMR3_ISR();
            x++;
            if (x==5){
                x=0;
                LED3_Toggle();
                //tSERVO1=ticks_PULSO_MINIMO;
            }
        } 
        else if(PIE4bits.TMR1IE == 1 && PIR4bits.TMR1IF == 1)
        {
            TMR1_ISR();
            LED2_Toggle();
            ADCC = ADCC_GetSingleConversion(POT);
            tSERVO1 = map(ADCC, 0, 1023, 31, 155);
            PWM5_LoadDutyValue(ADCC);
        } 
        else if(PIE3bits.RCIE == 1 && PIR3bits.RCIF == 1)
        {
            EUSART_RxDefaultInterruptHandler();
}
        else if(PIE3bits.TXIE == 1 && PIR3bits.TXIF == 1)
        {
            EUSART_TxDefaultInterruptHandler();
        } 
        else
        {
            //Unhandled Interrupt
        }
    }      
    else
    {
        //Unhandled Interrupt
    }
}
/**
 End of File
*/
