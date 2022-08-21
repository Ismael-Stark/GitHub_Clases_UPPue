/**
  DSM Generated Driver File

  @Company
    Microchip Technology Inc.

  @File Name
    dsm.c

  @Summary
    This is the generated driver implementation file for the DSM driver using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  @Description
    This source file provides APIs for DSM.
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
#include "dsm.h"

/**
  Section: DSM APIs
*/

void DSM_Initialize(void)
{
    // set the DSM to the options selected in the User Interface
    
    // Modulator Output Pin Polarity is not inverted
    MDCON0bits.MDOPOL = 0;

    // Modulation Low Carrier Synchronization is disabled
    MDCON1bits.MDCLSYNC = 0;

    // Modulation Low Carrier Polarity is not inverted
    MDCON1bits.MDCLPOL = 0;

    // Modulation High Carrier Synchronization is disabled
    MDCON1bits.MDCHSYNC = 0;

    // Modulation High Carrier Polarity is not inverted
    MDCON1bits.MDCHPOL = 0;

    // MDMS MDSRCPPS pin; 
    MDSRC = 0x00;
    
    // MDCH MDCARHPPS pin; 
    MDCARH = 0x00;
    
    // MDCL MDCARLPPS pin; 
    MDCARL = 0x00;
    
    // Enable the Modulator
    MDCON0bits.MDEN = 1;
}

void DSM_ManualModulationSet (void)
{
    // Set MDBIT to High, Modulator uses high carrier source
    MDCON0bits.MDBIT = 1;
}

void DSM_ManualModulationClear (void)
{
    // Set MDBIT to Low, Modulator uses low carrier source
    MDCON0bits.MDBIT = 0;
}

void DSM_ManualModulationToggle (void)
{
    // Toggle the MDBIT
    MDCON0bits.MDBIT ^= 1;
}

void DSM_ModulationStart (void)
{
    // Enables module and begins modulation
    MDCON0bits.MDEN = 1;
}

void DSM_ModulationStop (void)
{
    // Disables module and stops modulation
    MDCON0bits.MDEN = 0;
}
/**
 End of File
*/