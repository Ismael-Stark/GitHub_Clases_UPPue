/**
  Generated Pins File

  Company:
    Microchip Technology Inc.

  File Name:
    pins.c

  Summary:
    This is generated driver implementation for pins. 

  Description:
    This file provides implementations for pin APIs for all pins selected in the GUI.

  Generation Information:
    Driver Version:  3.0.0

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

#include "../pins.h"


void PIN_MANAGER_Initialize(void)
{
   /**
    LATx registers
    */
    LATA = 0x0;
    LATB = 0x0;
    LATC = 0x18;

    /**
    TRISx registers
    */
    TRISA = 0xF0;
    TRISB = 0xFF;
    TRISC = 0xFE;

    /**
    ANSELx registers
    */
    ANSELA = 0xD0;
    ANSELB = 0xEF;
    ANSELC = 0xE4;

    /**
    WPUx registers
    */
    WPUA = 0x0;
    WPUB = 0x0;
    WPUC = 0x0;
    WPUE = 0x0;


    /**
    ODx registers
    */
   
    ODCONA = 0x0;
    ODCONB = 0x0;
    ODCONC = 0x0;
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
    INLVLE = 0x8;

    /**
    PPS registers
    */
    RXPPS = 0x11; //RC1->EUSART:RX;
    ADCACTPPS = 0xC; //RB4->ADCC:ADCACT;
    RC0PPS = 0x10;  //RC0->EUSART:TX;
    SSP1CLKPPS = 0x14;  //RC4->MSSP1:SSP1CLK;
    RC4PPS = 0x14;  //RC4->MSSP1:SSP1CLK;
    SSP1DATPPS = 0x13;  //RC3->MSSP1:SSP1DAT;
    RC3PPS = 0x15;  //RC3->MSSP1:SSP1DAT;

   /**
    IOCx registers 
    */
    IOCAP = 0x0;
    IOCAN = 0x0;
    IOCAF = 0x0;
    IOCBP = 0x0;
    IOCBN = 0x0;
    IOCBF = 0x0;
    IOCCP = 0x0;
    IOCCN = 0x0;
    IOCCF = 0x0;
    IOCEP = 0x0;
    IOCEN = 0x0;
    IOCEF = 0x0;


}
  
void PIN_MANAGER_IOC(void)
{
}

/**
 End of File
*/