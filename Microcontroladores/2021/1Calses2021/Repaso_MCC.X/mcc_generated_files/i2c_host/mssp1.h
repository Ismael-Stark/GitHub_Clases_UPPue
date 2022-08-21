/**
  I2C1 Generated Driver API Header File

  @Company
    Microchip Technology Inc.

  @File Name
    mssp1.h

  @Summary
    This is the generated driver types header file for the I2C1 driver.

  @Description
    This header file provides common enumerations for I2C1 driver.
    Generation Information :
        Product Revision  :   - 
        Device            :  
        Driver Version    :  1.0.1
    The generated drivers are tested against the following:
        Compiler          :  XC8 v2.30 and above
        MPLAB             :  MPLABX v5.45 and above
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

#ifndef MSSP1_H
#define MSSP1_H

/**
  Section: Included Files
*/

#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include "i2c_host_interface.h"

/**
 Section: Data Type Definitions
*/

/**
  I2C_HOST_INTERFACE object

  @Description
    Object for I2C_HOST_INTERFACE.
 */
extern const struct I2C_HOST_INTERFACE i2c1_host_Interface;

typedef enum 
{
    I2C1_NOERR, // The message was sent.
    I2C1_BUSY,  // Message was not sent, bus was busy.
    I2C1_FAIL   // Message was not sent, bus failure
               // If you are interested in the failure reason,
               // Sit on the event call-backs.
} i2c1_error_t;

typedef enum
{
    I2C1_STOP=1,
    I2C1_RESTART_READ,
    I2C1_RESTART_WRITE,
    I2C1_CONTINUE,
    I2C1_RESET_LINK
} i2c1_operations_t;

typedef uint8_t i2c1_address_t;
typedef i2c1_operations_t (*i2c1_callback_t)(void *funPtr);

// common callback responses
i2c1_operations_t I2C1_CallbackReturnStop(void *funPtr);
i2c1_operations_t I2C1_CallbackReturnReset(void *funPtr);
i2c1_operations_t I2C1_CallbackRestartWrite(void *funPtr);
i2c1_operations_t I2C1_CallbackRestartRead(void *funPtr);

/**
 * \brief Open the I2C1 for communication
 *
 * \param[in] address The slave address to use in the transfer
 *
 * \return Initialization status.
 * \retval I2C1_NOERR The I2C1 open was successful
 * \retval I2C1_BUSY  The I2C1 open failed because the interface is busy
 * \retval I2C1_FAIL  The I2C1 open failed with an error
 */
i2c1_error_t I2C1_Open(i2c1_address_t address);

/**
 * \brief Close the I2C1 interface
 *
 * \return Status of close operation.
 * \retval I2C1_NOERR The I2C1 open was successful
 * \retval I2C1_BUSY  The I2C1 open failed because the interface is busy
 * \retval I2C1_FAIL  The I2C1 open failed with an error
 */
i2c1_error_t I2C1_Close(void);

/**
 * \brief Start an operation on an opened I2C1 interface
 *
 * \param[in] read Set to true for read, false for write
 *
 * \return Status of operation
 * \retval I2C1_NOERR The I2C1 open was successful
 * \retval I2C1_BUSY  The I2C1 open failed because the interface is busy
 * \retval I2C1_FAIL  The I2C1 open failed with an error
 */
i2c1_error_t I2C1_HostOperation(bool read);

/**
 * \brief Identical to I2C1_HostOperation(false);
 */
i2c1_error_t I2C1_HostWrite(void);

/**
 * \brief Identical to I2C1_HostOperation(true);
 */
i2c1_error_t I2C1_HostRead(void);

/**
 * \brief Set timeout to be used for I2C1 operations. Uses the Timeout driver.
 *
 * \param[in] to Timeout in ticks
 *
 * \return Nothing
 */
void I2C1_SetTimeout(uint8_t timeOut);

/**
 * \brief Sets up the data buffer to use, and number of bytes to transfer
 *
 * \param[in] buffer Pointer to data buffer to use for read or write data
 * \param[in] bufferSize Number of bytes to read or write from slave
 *
 * \return Nothing
 */
void I2C1_SetBuffer(void *buffer, size_t bufferSize);

// Event Callback functions.

/**
 * \brief Set callback to be called when all specifed data has been transferred.
 *
 * \param[in] cb Pointer to callback function
 * \param[in] ptr  Pointer to the callback function's parameters
 *
 * \return Nothing
 */
void I2C1_SetDataCompleteCallback(i2c1_callback_t cb, void *ptr);

/**
 * \brief Set callback to be called when there has been a bus collision and arbitration was lost.
 *
 * \param[in] cb Pointer to callback function
 * \param[in] ptr  Pointer to the callback function's parameters
 *
 * \return Nothing
 */
void I2C1_SetWriteCollisionCallback(i2c1_callback_t cb, void *ptr);

/**
 * \brief Set callback to be called when the transmitted address was Nack'ed.
 *
 * \param[in] cb Pointer to callback function
 * \param[in] ptr  Pointer to the callback function's parameters
 *
 * \return Nothing
 */
void I2C1_SetAddressNackCallback(i2c1_callback_t cb, void *ptr);

/**
 * \brief Set callback to be called when the transmitted data was Nack'ed.
 *
 * \param[in] cb Pointer to callback function
 * \param[in] ptr  Pointer to the callback function's parameters
 *
 * \return Nothing
 */
void I2C1_SetDataNackCallback(i2c1_callback_t cb, void *ptr);

/**
 * \brief Set callback to be called when there was a bus timeout.
 *
 * \param[in] cb Pointer to callback function
 * \param[in] ptr  Pointer to the callback function's parameters
 *
 * \return Nothing
 */
void I2C1_SetTimeoutCallback(i2c1_callback_t cb, void *ptr);

/**
@Description
    This routine initializes the I2C1 module.
    This routine must be called before any other I2C1 routine is called.
    This routine should only be called once during system initialization.

  @Preconditions
    None

  @Param
    None

  @Returns
    None

  @Example
    None
*/
void I2C1_Initialize(void);

/**
  @Description
    This function writes data to a Client on the bus. The function will attempt
    to write length number of bytes from data buffer to a Client whose address
    is specified by address. The I2C Host will generate a Start condition,
    write the data and then generate a Stop Condition. If the Client NACK the request 
    or a bus error was encountered on the bus, the transfer is terminated. The 
    application can call the I2C1_ErrorGet() function to know that 
    cause of the error.

    The function is non-blocking. It initiates bus activity and returns
    immediately. The transfer is then completed in the peripheral interrupt. A
    transfer request cannot be placed when another transfer is in progress.
    Calling the write function when another function is already in progress will
    cause the function to return false.

  @Preconditions
    I2C1_Initialize() must have been called for the associated

  @Param
    address     - 7-bit / 10-bit Client address.
    data        - pointer to source data buffer that contains the data to be
                  transmitted.
    dataLength  - length of data buffer in number of bytes. Also the number of bytes
                  to be written.

  @Returns
    true  - The request was placed successfully and the bus activity was
            initiated.
    false - The request fails,if there was already a transfer in progress when this function
            was called

  @Example
    None
*/
bool I2C1_Write(uint16_t address, uint8_t *data, size_t dataLength);

/**
  @Description
    This function reads the data from a Client on the bus. The function will
    attempt to read length number of bytes into data buffer from a Client whose
    address is specified as address. The I2C Host generate a Start condition,
    read the data and then generate a Stop Condition.
    If the Client NAKs the request or a bus error is encountered on the bus, the
    transfer is terminated. The application can call I2C1_ErrorGet()
    function to know that cause of the error.

    The function is non-blocking. It initiates bus activity and returns
    immediately. The transfer is completed in the peripheral interrupt. A
    transfer request cannot be placed when another transfer is in progress.
    Calling the read function when another function is already in progress will
    cause the function to return false.

  @Preconditions
    I2C1_Initialize() must have been called for the associated

  @Param
    address     - 7-bit / 10-bit Client address.
    data        - pointer to source data buffer that contains the data to be
                  transmitted.
    dataLength  - length of data buffer in number of bytes. Also the number of bytes
                  to be written.

  @Returns
    true  - The request was placed successfully and the bus activity was
            initiated.
    false - The request fails,if there was already a transfer in progress when this function
            was called

  @Example
    None
*/
bool I2C1_Read(uint16_t address, uint8_t *data, size_t dataLength);

/**
  @Description
    This function writes data from the writeData to the bus and then reads data from
    the Client and stores the received in the readData. The function generates a
    Start condition on the bus and will then send writeLength number of bytes
    contained in writeData. The function will then insert a Repeated start condition
    and proceed to read readLength number of bytes from the client. The received
    bytes are stored in readData buffer. A Stop condition is generated after the
    last byte has been received.

    If the Client NAKs the request or a bus error was encountered on the bus, 
    the transfer is terminated. The application can call I2C1_ErrorGet()
    function to know that cause of the error.

    The function is non-blocking. It initiates bus activity and returns
    immediately. The transfer is then completed in the peripheral interrupt. A
    transfer request cannot be placed when another transfer is in progress.
    Calling this function when another function is already in progress will
    cause the function to return false.

  @Preconditions
    I2C1_Initialize() must have been called for the associated

  @Param
    address     - 7-bit / 10-bit Client address.
    writeData   - pointer to write data buffer.
    writeLength - write data length in bytes.
    readData    - pointer to read data buffer.
    readLength  - read data length in bytes.

  @Returns
    true  - The request was placed successfully and the bus activity was
            initiated.
    false - The request fails,if there was already a transfer in progress when this function
            was called

  @Example
    None
*/
bool I2C1_WriteRead(uint16_t address, uint8_t *writeData, size_t writeLength, uint8_t *readData, size_t readLength);

/**
  @Description
    This function dynamically setup the I2C clock speed (100KHZ to 1MHZ).

  @Preconditions
    I2C1_Initialize() must have been called for the associated

  @Param
    setup - Pointer to the structure containing the transfer setup.
    srcClkFreq - I2C Peripheral Clock Source Frequency (FCY = FOSC/2).

  @Returns
    true - Transfer setup was updated Successfully.
    false - Failure while updating transfer setup.

  @Example
    None
*/
bool I2C1_TransferSetup(struct I2C_TRANSFER_SETUP* setup, uint32_t srcClkFreq);

/**
  @Description
    This function the error occurred during I2C Transmit and Receive.

  @Preconditions
    I2C1_Initialize() must have been called for the associated

  @Param
    None

  @Returns
    I2C_ERROR_NONE          - No Error
    I2C_ERROR_NACK          - Client returned NACK
    I2C_ERROR_BUS_COLLISION - Bus Collision Error

  @Example
    None
*/
enum I2C_ERROR I2C1_ErrorGet(void);

/**
  @Description
    This function true if the I2C module is busy with a transfer. 
    The application can use the function to check if I2C module is busy before 
    calling any of the data transfer functions. 

    The library does not allow a data transfer operation if another transfer 
    operation is already in progress.

  @Preconditions
    I2C1_Initialize() must have been called for the associated

  @Param
    None

  @Returns
    true    - Busy.
    false   - Not Busy.

  @Example
    None
*/
bool I2C1_IsBusy(void);

/**
  @Description
    This function sets the pointer to be called "back" when
    the given I2C transfer events, Bus collision and Write collision occur. 

  @Preconditions
    I2C1_Initialize() must have been called for the associated

  @Param
    handler - A pointer to a function. 
              Setting this to NULL disables the callback feature.

  @Returns
    None

  @Example
    None
*/
void I2C1_CallbackRegister(void (*handler)(void));

#endif //I2C1_H