/**
  EUSART Generated Driver API Header File

  @Company
    Microchip Technology Inc.

  @File Name
    eusart.h

  @Summary
    This is the generated header file for the EUSART driver using CCL

  @Description
    This header file provides APIs for driver for EUSART.
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

#ifndef EUSART_H
#define EUSART_H

/**
  Section: Included Files
*/

#include <xc.h>
#include <stdbool.h>
#include <stdint.h>
#include "uart_interface.h"
#include <stdio.h>

/**
  Section: Macro Declarations
*/

#define EUSART_DataReady  (EUSART_IsRxReady())

/**
  Section: Data Type Definitions
*/

typedef union {
    struct {
        unsigned perr : 1;
        unsigned ferr : 1;
        unsigned oerr : 1;
        unsigned reserved : 5;
    };
    uint8_t status;
}eusart_status_t;

//*********************************************************************************************************
/**
 * @deprecated
 * Deprecated APIs start
 */
//*********************************************************************************************************

bool __attribute__(( deprecated )) EUSART_is_tx_ready(void);
bool __attribute__(( deprecated )) EUSART_is_rx_ready(void);
bool __attribute__(( deprecated )) EUSART_is_tx_done(void);
eusart_status_t EUSART_get_last_status(void);

/*************************************************************************************************************
 * Deprecated APIs end
 *************************************************************************************************************/

extern const struct UART_INTERFACE EUSART_Interface;

/**
  Section: EUSART APIs
*/

/**
  @Summary
    Initialization routine that takes inputs from the EUSART GUI.

  @Description
    This routine initializes the EUSART driver.
    This routine must be called before any other EUSART routine is called.

  @Preconditions
    None

  @Param
    None

  @Returns
    None

  @Comment
    
*/
void EUSART_Initialize(void);

/**
  @Summary
    Checks if the EUSART transmitter is ready to transmit data

  @Description
    This routine checks if EUSART transmitter is ready 
    to accept and transmit data byte

  @Preconditions
    EUSART_Initialize() function should have been called
    before calling this function.
    EUSART transmitter should be enabled before calling 
    this function

  @Param
    None

  @Returns
    Status of EUSART transmitter
    TRUE: EUSART transmitter is ready
    FALSE: EUSART transmitter is not ready
    
  @Example
    <code>
    void main(void)
    {
        volatile uint8_t rxData;
        
        // Initialize the device
        SYSTEM_Initialize();
        
        while(1)
        {
            // Logic to echo received data
            if(EUSART_IsRxReady())
            {
                rxData = UART1_Read();
                if(EUSART_IsTxReady())
                {
                    EUSARTWrite(rxData);
                }
            }
        }
    }
    </code>
*/
bool EUSART_IsTxReady(void);

/**
  @Summary
    Checks if the EUSART receiver ready for reading

  @Description
    This routine checks if EUSART receiver has received data 
    and ready to be read

  @Preconditions
    EUSART_Initialize() function should be called
    before calling this function
    EUSART receiver should be enabled before calling this 
    function

  @Param
    None

  @Returns
    Status of EUSART receiver
    TRUE: EUSART receiver is ready for reading
    FALSE: EUSART receiver is not ready for reading
    
  @Example
    <code>
    void main(void)
    {
        volatile uint8_t rxData;
        
        // Initialize the device
        SYSTEM_Initialize();
        
        while(1)
        {
            // Logic to echo received data
            if(EUSART_IsRxReady())
            {
                rxData = UART1_Read();
                if(EUSART_IsTxReady())
                {
                    EUSART_Write(rxData);
                }
            }
        }
    }
    </code>
*/
bool EUSART_IsRxReady(void);

/**
  @Summary
    Checks if EUSART data is transmitted

  @Description
    This function return the status of transmit shift register

  @Preconditions
    EUSART_Initialize() function should be called
    before calling this function
    EUSART transmitter should be enabled and EUSART_Write
    should be called before calling this function

  @Param
    None

  @Returns
    Status of EUSART receiver
    TRUE: Data completely shifted out if the USART shift register
    FALSE: Data is not completely shifted out of the shift register
    
  @Example
    <code>
    void main(void)
    {
        volatile uint8_t rxData;
        
        // Initialize the device
        SYSTEM_Initialize();
        
        while(1)
        {
            if(EUSART_IsTxReady())
            {
				LED_0_SetHigh();
                EUSARTWrite(rxData);
            }
			if(EUSART_IsTxDone()
            {
                LED_0_SetLow();
            }
        }
    }
    </code>
*/
bool EUSART_IsTxDone(void);

/**
  @Summary
    Gets the error status of the last read byte.

  @Description
    This routine gets the error status of the last read byte.

  @Preconditions
    EUSART_Initialize() function should have been called
    before calling this function. The returned value is only
    updated after a read is called.

  @Param
    None

  @Returns
    the status of the last read byte

  @Example
	<code>
    void main(void)
    {
        volatile uint8_t rxData;
        volatile eusart_status_t rxStatus;
        
        // Initialize the device
        SYSTEM_Initialize();
        
        // Enable the Global Interrupts
        INTERRUPT_GlobalInterruptEnable();
        
        while(1)
        {
            // Logic to echo received data
            if(EUSART_IsRxReady())
            {
                rxData = EUSART_Read();
                rxStatus = EUSART_GetLastStatus();
                if(rxStatus.ferr){
                    LED_0_SetHigh();
                }
            }
        }
    }
    </code>
 */
eusart_status_t EUSART_GetLastStatus(void);

/**
  @Summary
    Read a byte of data from the EUSART.

  @Description
    This routine reads a byte of data from the EUSART.

  @Preconditions
    EUSART_Initialize() function should have been called
    before calling this function. The transfer status should be checked to see
    if the receiver is not empty before calling this function.

  @Param
    None

  @Returns
    A data byte received by the driver.
*/
uint8_t EUSART_Read(void);

 /**
  @Summary
    Writes a byte of data to the EUSART.

  @Description
    This routine writes a byte of data to the EUSART.

  @Preconditions
    EUSART_Initialize() function should have been called
    before calling this function. The transfer status should be checked to see
    if transmitter is not busy before calling this function.

  @Param
    txData  - Data byte to write to the EUSART

  @Returns
    None
*/
void EUSART_Write(uint8_t txData);



/**
  @Summary
    Set EUSART Framing Error Handler

  @Description
    This API sets the function to be called upon EUSART framing error

  @Preconditions
    Initialize  the EUSART before calling this API

  @Param
    Address of function to be set as framing error handler

  @Returns
    None
*/
void EUSART_SetFramingErrorHandler(void (* interruptHandler)(void));

/**
  @Summary
    Set EUSART Overrun Error Handler

  @Description
    This API sets the function to be called upon EUSART overrun error

  @Preconditions
    Initialize  the EUSART module before calling this API

  @Param
    Address of function to be set as overrun error handler

  @Returns
    None
*/
void EUSART_SetOverrunErrorHandler(void (* interruptHandler)(void));

/**
  @Summary
    Set EUSART Error Handler

  @Description
    This API sets the function to be called upon EUSART error

  @Preconditions
    Initialize  the EUSART module before calling this API

  @Param
    Address of function to be set as error handler

  @Returns
    None
*/
void EUSART_SetErrorHandler(void (* interruptHandler)(void));



#endif  // EUSART_H
/**
 End of File
*/
