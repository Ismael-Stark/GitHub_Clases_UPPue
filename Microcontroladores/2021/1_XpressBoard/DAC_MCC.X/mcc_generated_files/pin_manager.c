/**
  Generated Pin Manager File

  Company:
    Microchip Technology Inc.

  File Name:
    pin_manager.c

  Summary:
    This is the Pin Manager file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  Description:
    This header file provides implementations for pin APIs for all pins selected in the GUI.
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.7
        Device            :  PIC16F18855
        Driver Version    :  2.11
    The generated drivers are tested against the following:
        Compiler          :  XC8 2.31 and above
        MPLAB             :  MPLAB X 5.45

    Copyright (c) 2013 - 2015 released Microchip Technology Inc.  All rights reserved.
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

#include "pin_manager.h"





void PIN_MANAGER_Initialize(void)
{
    /**
    LATx registers
    */
    LATA = 0x00;
    LATB = 0x00;
    LATC = 0x00;

    /**
    TRISx registers
    */
    TRISA = 0xF4;
    TRISB = 0xFB;
    TRISC = 0xDA;

    /**
    ANSELx registers
    */
    ANSELC = 0x00;
    ANSELB = 0xF9;
    ANSELA = 0xD4;

    /**
    WPUx registers
    */
    WPUE = 0x00;
    WPUB = 0x00;
    WPUA = 0x00;
    WPUC = 0x00;

    /**
    ODx registers
    */
    ODCONA = 0x00;
    ODCONB = 0x00;
    ODCONC = 0x00;

    /**
    SLRCONx registers
    */
    SLRCONA = 0xFF;
    SLRCONB = 0xFF;
    SLRCONC = 0xFF;

    /**
    INLVLx registers
    */
    INLVLA = 0xFF;
    INLVLB = 0xFF;
    INLVLC = 0xFF;
    INLVLE = 0x08;





   
    
	
    RC0PPS = 0x10;   //RC0->EUSART:TX;    
    RXPPS = 0x11;   //RC1->EUSART:RX;    
    CWG1PPS = 0x09;   //RB1->CWG1:CWG1IN;    
    CLCIN0PPS = 0x16;   //RC6->CLC1:CLCIN0;    
    SMT1WINPPS = 0x13;   //RC3->SMT1:SMT1WIN;    
    RB2PPS = 0x18;   //RB2->TMR0:TMR0;    
    RC2PPS = 0x19;   //RC2->NCO1:NCO;    
    SMT1SIGPPS = 0x14;   //RC4->SMT1:SMT1SIG;    
    RC5PPS = 0x1A;   //RC5->CLKREF:CLKR;    
    MDCARHPPS = 0x17;   //RC7->DSM:MDCARH;    
}
  
void PIN_MANAGER_IOC(void)
{   
}

/**
 End of File
*/