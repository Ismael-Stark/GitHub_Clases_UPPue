/**
  CRC Generated Driver File

  @Company
    Microchip Technology Inc.

  @File Name
    crc.c

  @Summary
    This is the generated driver implementation file for the CRC driver using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  @Description
    This source file provides APIs for CRC.
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.7
        Device            :  PIC16F18855
        Driver Version    :  2.11
    The generated drivers are tested against the following:
        Compiler          :  XC8 2.31 and above
        MPLAB             :  MPLAB X 5.45
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
#include "crc.h"

/**
 Section: Structures
 */

typedef struct
{
    uint8_t dataWidth;
    uint8_t polyWidth;
    uint8_t seedDirection;
}CRC_OBJ;

/**
 Section: Private Data
 */

static CRC_OBJ crcObj;


/**
  Section: CRCSCAN APIs
*/

void CRC_Initialize(void)
{
    uint16_t poly;
    uint16_t seed;    

    // SHIFTM shift left; CRCGO disabled; CRCEN enabled; ACCM data augmented with 0's; 
    CRCCON0 = 0x90;
    // DLEN 0; PLEN 0; 
    CRCCON1 = (0 << 4) | (0);
    // 
    CRCACCL = 0x00;
    // 
    CRCACCH = 0x00;
    // SCANINTM not affected; SCANGO disabled; SCANEN enabled; SCANMODE Concurrent mode; 
    SCANCON0 = 0x80;
    // LADRH 0; 
    SCANLADRH = 0x00;
    // LADRL 0; 
    SCANLADRL = 0x00;
    // HADRH 255; 
    SCANHADRH = 0xFF;
    // HADRL 255; 
    SCANHADRL = 0xFF;
    // SCANTSEL LFINTOSC; 
    SCANTRIG = 0x00;

    poly = 1;
    CRCXORH = poly >> 8;
    CRCXORL = poly;

    seed  = 0;
    // CRCACC 0
    CRCACCH = seed >> 8;
    CRCACCL = seed;

    crcObj.dataWidth = (uint8_t)(CRCCON1bits.DLEN + 1);
    crcObj.polyWidth = (uint8_t)(CRCCON1bits.PLEN + 1);
}

void CRC_Start(void)
{
    // Start the serial shifter
    CRCCON0bits.CRCGO = 1;
}

bool CRC_8BitDataWrite(uint8_t data)
{
    if(!CRCCON0bits.FULL)
    {
        CRCDATL = data;
        return(1);
    }
    else
    {
        return(0);
    }
}

static uint16_t CRC_ReverseValue(uint16_t crc)
{
    uint16_t mask;
    uint16_t reverse;

    mask = 1;
    mask <<= crcObj.polyWidth - 1;
    reverse = 0;

    while(crc)
    {
        if(crc & 0x01)
        {
            reverse |= mask;
        }
        mask >>= 1;
        crc >>= 1;
    }
    return reverse;
}

uint16_t CRC_CalculatedResultGet(bool reverse, uint16_t xorValue)
{
    uint16_t result,mask;
     
     // Read result
     result = ((uint16_t)CRCACCH << 8)|CRCACCL;
     if(crcObj.polyWidth < 16)
     {
       // Polynomial mask   
        mask = (uint16_t)((1 << crcObj.polyWidth) - 1);
        result &= mask;
     }

    if(reverse)
        result = CRC_ReverseValue(result);

    result ^= xorValue;

    return result;
}

bool CRC_IsBusy(void)
{
    // Is shifting in progress?
    return(CRCCON0bits.BUSY);
}

void CRC_SCAN_StartScanner(void)
{
    // Start the CRC serial shifter
    CRCCON0bits.CRCGO = 1;

    // Start the scanner
    SCANCON0bits.SCANGO = 1;
}

void CRC_SCAN_StopScanner(void)
{
    // Stop the scanner
    SCANCON0bits.SCANGO = 0;

    // Stop the CRC serial shifter
    CRCCON0bits.CRCGO = 0;
}

void CRC_SCAN_SetAddressLimit(uint16_t startAddr, uint16_t endAddr)
{
    // Load end address limit
	SCANHADRH = 0xFF & (endAddr >> 8);
	SCANHADRL = 0xFF & endAddr;
	
    // Load start address limit
	SCANLADRH = 0xFF & (startAddr >>8);
	SCANLADRL = 0xFF & startAddr;
}


bool CRC_SCAN_IsScannerBusy(void)
{
    // Is scanner in progress?
    return(SCANCON0bits.BUSY);
}

bool CRC_SCAN_HasScanCompleted(void)
{
    // Has scanning completed?
    bool status = (unsigned char)(PIR7bits.SCANIF && PIR7bits.CRCIF);
    if(status)
    {
        PIR7bits.CRCIF = 0;
        PIR7bits.SCANIF = 0;        
    }
    return(status);
}


/**
 End of File
*/
