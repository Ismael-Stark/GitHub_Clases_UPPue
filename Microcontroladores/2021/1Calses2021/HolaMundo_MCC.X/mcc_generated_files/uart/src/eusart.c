/**
  EUSART Generated Driver File

  @Company
    Microchip Technology Inc.

  @File Name
    eusart.c

  @Summary
    This is the generated driver implementation file for the EUSART driver using CCL

  @Description
    This source file provides APIs for EUSART.
    Generation Information :
        Product Revision  :  CCL - 1.8.2
        Device            :  PIC18F47Q43
        Driver Version    :  2.1.0
    The generated drivers are tested against the following:
        Compiler          :  XC8 v2.2
        MPLAB 	          :  Standalone
*/

/*
Copyright (c) [2012-2020] Microchip Technology Inc.  

    All rights reserved.

    You are permitted to use the accompanying software and its derivatives 
    with Microchip products. See the Microchip license agreement accompanying 
    this software, if any, for additional info regarding your rights and 
    obligations.
    
    MICROCHIP SOFTWARE AND DOCUMENTATION ARE PROVIDED "AS IS" WITHOUT 
    WARRANTY OF ANY KIND, EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT 
    LIMITATION, ANY WARRANTY OF MERCHANTABILITY, TITLE, NON-INFRINGEMENT 
    AND FITNESS FOR A PARTICULAR PURPOSE. IN NO EVENT WILL MICROCHIP OR ITS
    LICENSORS BE LIABLE OR OBLIGATED UNDER CONTRACT, NEGLIGENCE, STRICT 
    LIABILITY, CONTRIBUTION, BREACH OF WARRANTY, OR OTHER LEGAL EQUITABLE 
    THEORY FOR ANY DIRECT OR INDIRECT DAMAGES OR EXPENSES INCLUDING BUT NOT 
    LIMITED TO ANY INCIDENTAL, SPECIAL, INDIRECT OR CONSEQUENTIAL DAMAGES, 
    OR OTHER SIMILAR COSTS. 
    
    To the fullest extend allowed by law, Microchip and its licensors 
    liability will not exceed the amount of fees, if any, that you paid 
    directly to Microchip to use this software. 
    
    THIRD PARTY SOFTWARE:  Notwithstanding anything to the contrary, any 
    third party software accompanying this software is subject to the terms 
    and conditions of the third party's license agreement.  To the extent 
    required by third party licenses covering such third party software, 
    the terms of such license will apply in lieu of the terms provided in 
    this notice or applicable license.  To the extent the terms of such 
    third party licenses prohibit any of the restrictions described here, 
    such restrictions will not apply to such third party software.
*/

/**
  Section: Included Files
*/
#include "../eusart.h"

const struct UART_INTERFACE EUSART_Interface = {
  .Initialize = EUSART_Initialize,
  .Write = EUSART_Write,
  .Read = EUSART_Read,
  .RxCompleteCallbackRegister = NULL,
  .TxCompleteCallbackRegister = NULL,
  .ErrorCallbackRegister = EUSART_SetErrorHandler,
  .FramingErrorCallbackRegister = EUSART_SetFramingErrorHandler,
  .OverrunErrorCallbackRegister = EUSART_SetOverrunErrorHandler,
  .ParityErrorCallbackRegister = NULL,
  .ChecksumErrorCallbackRegister = NULL,
  .IsRxReady = EUSART_IsRxReady,
  .IsTxReady = EUSART_IsTxReady,
  .IsTxDone = EUSART_IsTxDone
  };

volatile eusart_status_t eusartRxLastError;

/**
  Section: EUSART APIs
*/

void (*EUSART_FramingErrorHandler)(void);
void (*EUSART_OverrunErrorHandler)(void);
void (*EUSART_ErrorHandler)(void);

void EUSART_DefaultFramingErrorHandler(void);
void EUSART_DefaultOverrunErrorHandler(void);
void EUSART_DefaultErrorHandler(void);

void EUSART_Initialize(void)
{
    // Set the EUSART module to the options selected in the user interface.

    // ABDEN disabled; WUE disabled; BRG16 16bit_generator; SCKP Non-Inverted; ABDOVF no_overflow; 
    BAUD1CON = 0x48;

    // ADDEN disabled; CREN enabled; SREN disabled; RX9 8-bit; SPEN enabled; 
    RC1STA = 0x90;

    // TX9D 0x0; BRGH hi_speed; SENDB sync_break_complete; SYNC asynchronous; TXEN enabled; TX9 8-bit; CSRC client; 
    TX1STA = 0x26;

    // SPBRGL 64; 
    SP1BRGL = 0x40;

    // SPBRGH 3; 
    SP1BRGH = 0x3;


    EUSART_SetFramingErrorHandler(EUSART_DefaultFramingErrorHandler);
    EUSART_SetOverrunErrorHandler(EUSART_DefaultOverrunErrorHandler);
    EUSART_SetErrorHandler(EUSART_DefaultErrorHandler);

    eusartRxLastError.status = 0;

}

bool EUSART_IsTxReady(void)
{
    return (bool)(PIR3bits.TXIF && TX1STAbits.TXEN);
}

bool EUSART_is_tx_ready(void)
{
    return EUSART_IsTxReady();
}

bool EUSART_IsRxReady(void)
{
    return (bool)(PIR3bits.RCIF);
}

bool EUSART_is_rx_ready(void)
{    
    return EUSART_IsRxReady();
}

bool EUSART_IsTxDone(void)
{
    return TX1STAbits.TRMT;
}

bool EUSART_is_tx_done(void)
{
    return EUSART_IsTxDone();
}

eusart_status_t EUSART_GetLastStatus(void){
    return eusartRxLastError;
}

eusart_status_t EUSART_get_last_status(void){
    return EUSART_GetLastStatus();
}

uint8_t EUSART_Read(void)
{
    while(!PIR3bits.RCIF)
    {
    }

    eusartRxLastError.status = 0;
    
    if(1 == RC1STAbits.OERR)
    {
        // EUSART error - restart

        RC1STAbits.CREN = 0; 
        RC1STAbits.CREN = 1; 
    }

    return RC1REG;
}

void EUSART_Write(uint8_t txData)
{
    while(0 == PIR3bits.TXIF)
    {
    }

    TX1REG = txData;    // Write the data byte to the USART.
}

char getch(void)
{
    return EUSART_Read();
}

void putch(char txData)
{
    EUSART_Write(txData);
}



void EUSART_DefaultFramingErrorHandler(void){}

void EUSART_DefaultOverrunErrorHandler(void){
    // EUSART error - restart

    RC1STAbits.CREN = 0;
    RC1STAbits.CREN = 1;

}

void EUSART_DefaultErrorHandler(void){
}

void EUSART_SetFramingErrorHandler(void (* interruptHandler)(void)){
    EUSART_FramingErrorHandler = interruptHandler;
}

void EUSART_SetOverrunErrorHandler(void (* interruptHandler)(void)){
    EUSART_OverrunErrorHandler = interruptHandler;
}

void EUSART_SetErrorHandler(void (* interruptHandler)(void)){
    EUSART_ErrorHandler = interruptHandler;
}


/**
  End of File
*/
