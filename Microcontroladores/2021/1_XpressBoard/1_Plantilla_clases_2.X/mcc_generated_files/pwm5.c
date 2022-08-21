/**
  PWM5 Generated Driver File

  @Company
    Microchip Technology Inc.

  @File Name
    pwm5.c

  @Summary
    This is the generated driver implementation file for the PWM5 driver using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  @Description
    This source file provides implementations for driver APIs for PWM5.
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.7
        Device            :  PIC16F18855
        Driver Version    :  2.01
    The generated drivers are tested against the following:
        Compiler          :  XC8 2.31 and above
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

/**
  Section: Included Files
*/

#include <xc.h>
#include "pwm5.h"

/**
  Section: Macro Declarations
*/

#define PWM5_INITIALIZE_DUTY_VALUE    0

/**
  Section: PWM Module APIs
*/

void PWM5_Initialize(void)
{
    // Set the PWM5 to the options selected in the User Interface
	
	// MODE PWM; EN enabled; CCP5FMT right_aligned; 
	CCP5CON = 0x8F;    
	
	// RH 0; 
	CCPR5H = 0x00;    
	
	// RL 0; 
	CCPR5L = 0x00;    

	// Selecting Timer 2
	CCPTMRS1bits.C5TSEL = 0x1;
    
}

void PWM5_LoadDutyValue(uint16_t dutyValue)
{
    dutyValue &= 0x03FF;
    
    // Load duty cycle value
    if(CCP5CONbits.CCP5FMT)
    {
        dutyValue <<= 6;
        CCPR5H = dutyValue >> 8;
        CCPR5L = dutyValue;
    }
    else
    {
        CCPR5H = dutyValue >> 8;
        CCPR5L = dutyValue;
    }
}

bool PWM5_OutputStatusGet(void)
{
    // Returns the output status
    return(CCP5CONbits.OUT);
}
/**
 End of File
*/

