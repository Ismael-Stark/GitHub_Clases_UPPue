/**
  I2C1 Generated Driver File

  @Company
    Microchip Technology Inc.

  @File Name
    mssp1.c

  @Summary
    This is the generated driver implementation file for the I2C1 driver.

  @Description
    This source file provides common enumerations for I2C1 driver
    Generation Information :
        Product Revision  :   - 
        Device            :  
        Driver Version    :  1.0.2
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

#include <xc.h>
#include "../mssp1.h"

/**
  Section: Driver Interface
*/
const struct I2C_HOST_INTERFACE i2c1_host_Interface = {
  .Initialize = I2C1_Initialize,
  .Write = I2C1_Write,
  .Read = I2C1_Read,
  .WriteRead = I2C1_WriteRead,
  .TransferSetup = NULL,
  .ErrorGet = I2C1_ErrorGet,
  .IsBusy = I2C1_IsBusy,
  .CallbackRegister = I2C1_CallbackRegister
};

// I2C1 STATES
typedef enum 
{
    I2C1_IDLE = 0,
    I2C1_SEND_ADR_READ,
    I2C1_SEND_ADR_WRITE,
    I2C1_TX,
    I2C1_RX,
    I2C1_RCEN,
    I2C1_TX_EMPTY,      
    I2C1_SEND_RESTART_READ,
    I2C1_SEND_RESTART_WRITE,
    I2C1_SEND_RESTART,
    I2C1_SEND_STOP,
    I2C1_RX_ACK,
    I2C1_RX_NACK_STOP,
    I2C1_RX_NACK_RESTART,
    I2C1_RESET,
    I2C1_ADDRESS_NACK,

} i2c1_fsm_states_t;

// I2C1 Event callBack List
typedef enum 
{
    I2C1_DATA_COMPLETE = 0,
    I2C1_WRITE_COLLISION,
    I2C1_ADDR_NACK,
    I2C1_DATA_NACK,
    I2C1_TIMEOUT,
    I2C1_NULL
} i2c1_callbackIndex_t;

typedef struct
{
    size_t len;
    uint8_t *data;
} i2c1_buffer_t;

static  i2c1_operations_t rdBlkRegCompleteHandler(void *ptr);

// I2C1 Status Structure
typedef struct
{
    i2c1_callback_t callbackTable[6];
    void *callbackPayload[6];           //  each callBack can have a payload
    uint16_t time_out;                  // I2C1 Timeout Counter between I2C1 Events.
    uint16_t time_out_value;            // Reload value for the timeouts
    i2c1_address_t address;             // The I2C1 Address
    uint8_t *data_ptr;                  // pointer to a data buffer
    size_t data_length;                 // Bytes in the data buffer
    i2c1_fsm_states_t state;            // Driver State
    i2c1_error_t error;
    unsigned addressNackCheck:1;
    unsigned busy:1;
    unsigned inUse:1;
    unsigned bufferFree:1;

} i2c1_status_t;

static void I2C1_SetCallback(i2c1_callbackIndex_t idx, i2c1_callback_t cb, void *ptr);
static void I2C1_Poller(void);
static inline void I2C1_HostFsm(void);

/* I2C1 interfaces */
static inline bool I2C1_HostOpen(void);
static inline void I2C1_HostClose(void);
static inline uint8_t I2C1_HostGetRxData(void);
static inline void I2C1_HostSendTxData(uint8_t data);
static inline void I2C1_HostEnableRestart(void);
static inline void I2C1_HostDisableRestart(void);
static inline void I2C1_HostStartRx(void);
static inline void I2C1_HostStart(void);
static inline void I2C1_HostStop(void);
static inline bool I2C1_HostIsNack(void);
static inline void I2C1_HostSendAck(void);
static inline void I2C1_HostSendNack(void);
static inline void I2C1_HostClearBusCollision(void);
static inline bool I2C1_HostIsRxBufFull(void);

/* Interrupt interfaces */
static inline void I2C1_HostEnableIrq(void);
static inline bool I2C1_HostIsIrqEnabled(void);
static inline void I2C1_HostDisableIrq(void);
static inline void I2C1_HostClearIrq(void);
static inline void I2C1_HostSetIrq(void);
static inline void I2C1_HostWaitForEvent(void);

static i2c1_fsm_states_t I2C1_DO_IDLE(void);
static i2c1_fsm_states_t I2C1_DO_SEND_ADR_READ(void);
static i2c1_fsm_states_t I2C1_DO_SEND_ADR_WRITE(void);
static i2c1_fsm_states_t I2C1_DO_TX(void);
static i2c1_fsm_states_t I2C1_DO_RX(void);
static i2c1_fsm_states_t I2C1_DO_RCEN(void);
static i2c1_fsm_states_t I2C1_DO_TX_EMPTY(void);
static i2c1_fsm_states_t I2C1_DO_SEND_RESTART_READ(void);
static i2c1_fsm_states_t I2C1_DO_SEND_RESTART_WRITE(void);
static i2c1_fsm_states_t I2C1_DO_SEND_RESTART(void);
static i2c1_fsm_states_t I2C1_DO_SEND_STOP(void);
static i2c1_fsm_states_t I2C1_DO_RX_ACK(void);
static i2c1_fsm_states_t I2C1_DO_RX_NACK_STOP(void);
static i2c1_fsm_states_t I2C1_DO_RX_NACK_RESTART(void);
static i2c1_fsm_states_t I2C1_DO_RESET(void);
static i2c1_fsm_states_t I2C1_DO_ADDRESS_NACK(void);

typedef i2c1_fsm_states_t (*fsmHandlerFunction)(void);
const fsmHandlerFunction fsmStateTable[] = 
{
    I2C1_DO_IDLE,
    I2C1_DO_SEND_ADR_READ,
    I2C1_DO_SEND_ADR_WRITE,
    I2C1_DO_TX,
    I2C1_DO_RX,
    I2C1_DO_RCEN,
    I2C1_DO_TX_EMPTY,
    I2C1_DO_SEND_RESTART_READ,
    I2C1_DO_SEND_RESTART_WRITE,
    I2C1_DO_SEND_RESTART,
    I2C1_DO_SEND_STOP,
    I2C1_DO_RX_ACK,
    I2C1_DO_RX_NACK_STOP,
    I2C1_DO_RX_NACK_RESTART,
    I2C1_DO_RESET,
    I2C1_DO_ADDRESS_NACK,
};

/**
 Section: Private Variable Definitions
*/
static void (*I2C1_InterruptHandler)(void) = NULL;
i2c1_status_t I2C1_Status = {0};
enum I2C_ERROR i2c1ErrorState = I2C_ERROR_NONE;


i2c1_error_t I2C1_Open(i2c1_address_t address)
{
    i2c1_error_t returnValue = I2C1_BUSY;
    
    if(!I2C1_Status.inUse)
    {
        I2C1_Status.address = address;
        I2C1_Status.busy = 0;
        I2C1_Status.inUse = 1;
        I2C1_Status.addressNackCheck = 0;
        I2C1_Status.state = I2C1_RESET;
        I2C1_Status.time_out_value = 500; // MCC should determine a reasonable starting value here.
        I2C1_Status.bufferFree = 1;

        // set all the call backs to a default of sending stop
        I2C1_Status.callbackTable[I2C1_DATA_COMPLETE]=I2C1_CallbackReturnStop;
        I2C1_Status.callbackPayload[I2C1_DATA_COMPLETE] = NULL;
        I2C1_Status.callbackTable[I2C1_WRITE_COLLISION]=I2C1_CallbackReturnStop;
        I2C1_Status.callbackPayload[I2C1_WRITE_COLLISION] = NULL;
        I2C1_Status.callbackTable[I2C1_ADDR_NACK]=I2C1_CallbackReturnStop;
        I2C1_Status.callbackPayload[I2C1_ADDR_NACK] = NULL;
        I2C1_Status.callbackTable[I2C1_DATA_NACK]=I2C1_CallbackReturnStop;
        I2C1_Status.callbackPayload[I2C1_DATA_NACK] = NULL;
        I2C1_Status.callbackTable[I2C1_TIMEOUT]=I2C1_CallbackReturnReset;
        I2C1_Status.callbackPayload[I2C1_TIMEOUT] = NULL;
        
        I2C1_HostClearIrq();
        I2C1_HostOpen();
        i2c1ErrorState = I2C_ERROR_NONE;

        returnValue = I2C1_NOERR;
    }
    return returnValue;
}

i2c1_error_t I2C1_Close(void)
{
    i2c1_error_t returnValue = I2C1_BUSY;
    if(!I2C1_Status.busy)
    {
        I2C1_Status.inUse = 0;
        I2C1_Status.address = 0xff;
        I2C1_HostClearIrq();
        I2C1_HostDisableIrq();
        I2C1_HostClose();
        returnValue = I2C1_Status.error;
    }
    return returnValue;
}

i2c1_error_t I2C1_HostOperation(bool read)
{
    i2c1_error_t returnValue = I2C1_BUSY;
    if(!I2C1_Status.busy)
    {
        I2C1_Status.busy = true;
        returnValue = I2C1_NOERR;

        if(read)
        {
            I2C1_Status.state = I2C1_SEND_ADR_READ;
        }
        else
        {
            I2C1_Status.state = I2C1_SEND_ADR_WRITE;
        }
        I2C1_HostStart();
        I2C1_Poller();
    }
    return returnValue;
}

i2c1_error_t I2C1_HostRead(void)
{
    return I2C1_HostOperation(true);
}

i2c1_error_t I2C1_HostWrite(void)
{
    return I2C1_HostOperation(false);
}

void I2C1_SetTimeout(uint8_t timeOutValue)
{
    I2C1_HostDisableIrq();
    I2C1_Status.time_out_value = timeOutValue;
    I2C1_HostEnableIrq();
}

void I2C1_SetBuffer(void *buffer, size_t bufferSize)
{
    if(I2C1_Status.bufferFree)
    {
        I2C1_Status.data_ptr = buffer;
        I2C1_Status.data_length = bufferSize;
        I2C1_Status.bufferFree = false;
    }
}

void I2C1_SetDataCompleteCallback(i2c1_callback_t cb, void *ptr)
{
    I2C1_SetCallback(I2C1_DATA_COMPLETE, cb, ptr);
}

void I2C1_SetWriteCollisionCallback(i2c1_callback_t cb, void *ptr)
{
    I2C1_SetCallback(I2C1_WRITE_COLLISION, cb, ptr);
}

void I2C1_SetAddressNackCallback(i2c1_callback_t cb, void *ptr)
{
    I2C1_SetCallback(I2C1_ADDR_NACK, cb, ptr);
}

void I2C1_SetDataNackCallback(i2c1_callback_t cb, void *ptr)
{
    I2C1_SetCallback(I2C1_DATA_NACK, cb, ptr);
}

void I2C1_SetTimeoutCallback(i2c1_callback_t cb, void *ptr)
{
    I2C1_SetCallback(I2C1_TIMEOUT, cb, ptr);
}

static void I2C1_SetCallback(i2c1_callbackIndex_t idx, i2c1_callback_t cb, void *ptr)
{
    if(cb)
    {
        I2C1_Status.callbackTable[idx] = cb;
        I2C1_Status.callbackPayload[idx] = ptr;
    }
    else
    {
        I2C1_Status.callbackTable[idx] = I2C1_CallbackReturnStop;
        I2C1_Status.callbackPayload[idx] = NULL;
    }
}

static void I2C1_Poller(void)
{
    while(I2C1_Status.busy)
    {
        I2C1_HostWaitForEvent();
        I2C1_HostFsm();
    }
}

static inline void I2C1_HostFsm(void)
{
    I2C1_HostClearIrq();

    if(I2C1_Status.addressNackCheck && I2C1_HostIsNack())
    {
        I2C1_Status.state = I2C1_ADDRESS_NACK;
    }
    I2C1_Status.state = fsmStateTable[I2C1_Status.state]();
}


static i2c1_fsm_states_t I2C1_DO_IDLE(void)
{
    I2C1_Status.busy = false;
    I2C1_Status.error = I2C1_NOERR;
    return I2C1_RESET;
}

static i2c1_fsm_states_t I2C1_DO_SEND_ADR_READ(void)
{
    I2C1_Status.addressNackCheck = 1;
    I2C1_HostSendTxData((uint8_t)(I2C1_Status.address << 1 | 1));
    return I2C1_RCEN;
}

static i2c1_fsm_states_t I2C1_DO_SEND_ADR_WRITE(void)
{
    I2C1_Status.addressNackCheck = 1;
    I2C1_HostSendTxData((uint8_t)(I2C1_Status.address << 1));
    return I2C1_TX;
}

static i2c1_fsm_states_t I2C1_DO_TX(void)
{
    if(I2C1_HostIsNack())
    {
        switch(I2C1_Status.callbackTable[I2C1_DATA_NACK](I2C1_Status.callbackPayload[I2C1_DATA_NACK]))
        {
            case I2C1_RESTART_READ:
                return I2C1_DO_SEND_RESTART_READ();
            case I2C1_RESTART_WRITE:
                  return I2C1_DO_SEND_RESTART_WRITE();
            default:
            case I2C1_CONTINUE:
            case I2C1_STOP:
                return I2C1_DO_SEND_STOP();
        }
    }
    else
    {
        I2C1_Status.addressNackCheck = 0;
        I2C1_HostSendTxData(*I2C1_Status.data_ptr++);
        return (--I2C1_Status.data_length)?I2C1_TX:I2C1_TX_EMPTY;
    }
}

static i2c1_fsm_states_t I2C1_DO_RX(void)
{
    *I2C1_Status.data_ptr++ = I2C1_HostGetRxData();
    if(--I2C1_Status.data_length)
    {
        I2C1_HostSendAck();
        return I2C1_RCEN;
    }
    else
    {
        I2C1_Status.bufferFree = true;
        switch(I2C1_Status.callbackTable[I2C1_DATA_COMPLETE](I2C1_Status.callbackPayload[I2C1_DATA_COMPLETE]))
        {
            case I2C1_RESTART_WRITE:
            case I2C1_RESTART_READ:
                return I2C1_DO_RX_NACK_RESTART();
            default:
            case I2C1_CONTINUE:
            case I2C1_STOP:
                return I2C1_DO_RX_NACK_STOP();
        }
    }
}

static i2c1_fsm_states_t I2C1_DO_RCEN(void)
{
    I2C1_Status.addressNackCheck = 0;
    I2C1_HostStartRx();
    return I2C1_RX;
}

static i2c1_fsm_states_t I2C1_DO_TX_EMPTY(void)
{
    I2C1_Status.bufferFree = true;
    switch(I2C1_Status.callbackTable[I2C1_DATA_COMPLETE](I2C1_Status.callbackPayload[I2C1_DATA_COMPLETE]))
    {
        case I2C1_RESTART_READ:
        case I2C1_RESTART_WRITE:
            return I2C1_DO_SEND_RESTART();
        case I2C1_CONTINUE:
            I2C1_HostSetIrq();
            return I2C1_TX;
        default:
        case I2C1_STOP:
            return I2C1_DO_SEND_STOP();
    }
}

static i2c1_fsm_states_t I2C1_DO_RX_EMPTY(void)
{
    I2C1_Status.bufferFree = true;
    switch(I2C1_Status.callbackTable[I2C1_DATA_COMPLETE](I2C1_Status.callbackPayload[I2C1_DATA_COMPLETE]))
    {
        case I2C1_RESTART_WRITE:
            I2C1_HostEnableRestart();
            return I2C1_SEND_RESTART_WRITE;
        case I2C1_RESTART_READ:
            I2C1_HostEnableRestart();
            return I2C1_SEND_RESTART_READ;
        case I2C1_CONTINUE:
            return I2C1_RX;
        default:
        case I2C1_STOP:
            if(I2C1_Status.state != I2C1_SEND_RESTART_READ)
            {
                I2C1_HostDisableRestart();
            }
            return I2C1_RESET;
    }
}

static i2c1_fsm_states_t I2C1_DO_SEND_RESTART_READ(void)
{
    I2C1_HostEnableRestart();
    return I2C1_SEND_ADR_READ;
}

static i2c1_fsm_states_t I2C1_DO_SEND_RESTART_WRITE(void)
{
    I2C1_HostEnableRestart();
    return I2C1_SEND_ADR_WRITE;
}


static i2c1_fsm_states_t I2C1_DO_SEND_RESTART(void)
{
    I2C1_HostEnableRestart();
    return I2C1_SEND_ADR_READ;
}

static i2c1_fsm_states_t I2C1_DO_SEND_STOP(void)
{
    I2C1_HostStop();
    return I2C1_IDLE;
}

static i2c1_fsm_states_t I2C1_DO_RX_ACK(void)
{
    I2C1_HostSendAck();
    return I2C1_RCEN;
}


static i2c1_fsm_states_t I2C1_DO_RX_NACK_STOP(void)
{
    I2C1_HostSendNack();
    return I2C1_SEND_STOP;
}

static i2c1_fsm_states_t I2C1_DO_RX_NACK_RESTART(void)
{
    I2C1_HostSendNack();
    return I2C1_SEND_RESTART;
}

static i2c1_fsm_states_t I2C1_DO_RESET(void)
{
    I2C1_Status.busy = false;
    I2C1_Status.error = I2C1_NOERR;
    return I2C1_RESET;
}
static i2c1_fsm_states_t I2C1_DO_ADDRESS_NACK(void)
{
    I2C1_Status.addressNackCheck = 0;
    I2C1_Status.error = I2C1_FAIL;
    switch(I2C1_Status.callbackTable[I2C1_ADDR_NACK](I2C1_Status.callbackPayload[I2C1_ADDR_NACK]))
    {
        case I2C1_RESTART_READ:
        case I2C1_RESTART_WRITE:
            return I2C1_DO_SEND_RESTART();
        default:
            i2c1ErrorState = I2C_ERROR_NACK;    
            return I2C1_DO_SEND_STOP();
    }
}

void I2C1_BusCollisionIsr(void)
{
    I2C1_HostClearBusCollision();
    I2C1_Status.state = I2C1_RESET;
}

i2c1_operations_t I2C1_CallbackReturnStop(void *funPtr)
{
    return I2C1_STOP;
}

i2c1_operations_t I2C1_CallbackReturnReset(void *funPtr)
{
    return I2C1_RESET_LINK;
}

i2c1_operations_t I2C1_CallbackRestartWrite(void *funPtr)
{
    return I2C1_RESTART_WRITE;
}

i2c1_operations_t I2C1_CallbackRestartRead(void *funPtr)
{
    return I2C1_RESTART_READ;
}


/* I2C1 Register Level interfaces */
static inline bool I2C1_HostOpen(void)
{
    if(!SSP1CON1bits.SSPEN)
    {
        SSP1STAT = 0x0;
        SSP1CON1 = 0x8;
        SSP1CON2 = 0x0;
        SSP1ADD = 0x4F;
        SSP1CON1bits.SSPEN = 1;
        return true;
    }
    return false;
}

static inline void I2C1_HostClose(void)
{
    //Disable I2C1
    SSP1CON1bits.SSPEN = 0;
}

static inline uint8_t I2C1_HostGetRxData(void)
{
    return SSP1BUF;
}

static inline void I2C1_HostSendTxData(uint8_t data)
{
    SSP1BUF = data;
}

static inline void I2C1_HostEnableRestart(void)
{
    SSP1CON2bits.RSEN = 1;
}

static inline void I2C1_HostDisableRestart(void)
{
    SSP1CON2bits.RSEN = 0;
}

static inline void I2C1_HostStartRx(void)
{
    SSP1CON2bits.RCEN = 1;
}

static inline void I2C1_HostStart(void)
{
    SSP1CON2bits.SEN = 1;
}

static inline void I2C1_HostStop(void)
{
    SSP1CON2bits.PEN = 1;
}

static inline bool I2C1_HostIsNack(void)
{
    return SSP1CON2bits.ACKSTAT;
}

static inline void I2C1_HostSendAck(void)
{
    SSP1CON2bits.ACKDT = 0;
    SSP1CON2bits.ACKEN = 1;
}

static inline void I2C1_HostSendNack(void)
{
    SSP1CON2bits.ACKDT = 1;
    SSP1CON2bits.ACKEN = 1;
}

static inline void I2C1_HostClearBusCollision(void)
{
    PIR3bits.BCL1IF = 0;
}


static inline bool I2C1_HostIsRxBufFull(void)
{
    return SSP1STATbits.BF;
}

static inline void I2C1_HostEnableIrq(void)
{
    PIE3bits.SSP1IE = 1;
}

static inline bool I2C1_HostIsIrqEnabled(void)
{
    return PIE3bits.SSP1IE;
}

static inline void I2C1_HostDisableIrq(void)
{
    PIE3bits.SSP1IE = 0;
}

static inline void I2C1_HostClearIrq(void)
{
    PIR3bits.SSP1IF = 0;
}

static inline void I2C1_HostSetIrq(void)
{
    PIR3bits.SSP1IF = 1;
}

static inline void I2C1_HostWaitForEvent(void)
{
    while(1)
    {
        if(PIR3bits.SSP1IF)
        {    
            break;
        }
    }
}

static  i2c1_operations_t rdBlkRegCompleteHandler(void *ptr)
{
    I2C1_SetBuffer((( i2c1_buffer_t *)ptr)->data,(( i2c1_buffer_t*)ptr)->len);
    I2C1_SetDataCompleteCallback(NULL,NULL);
    return  I2C1_RESTART_READ;
}

/**
 Section: Driver Interface Function Definitions
*/
void I2C1_Initialize(void)
{
    SSP1STAT = 0x0;
    SSP1CON1 = 0x8;
    SSP1CON2 = 0x0;
    SSP1ADD  = 0x4F;
    SSP1CON1bits.SSPEN = 0;
}

bool I2C1_Write(uint16_t address, uint8_t *data, size_t dataLength)
{
    bool status = true;
    while(!I2C1_Open((i2c1_address_t)address)); // sit here until we get the bus..
    I2C1_SetBuffer(data,dataLength);
    I2C1_SetAddressNackCallback(NULL,NULL); //NACK polling?
    I2C1_HostWrite();
    while(I2C1_BUSY == I2C1_Close());
    return status;
}

bool I2C1_Read(uint16_t address, uint8_t *data, size_t dataLength)
{
    bool status = true;
    while(!I2C1_Open((i2c1_address_t)address)); // sit here until we get the bus..
    I2C1_SetBuffer(data,dataLength);
    I2C1_HostRead();
    while(I2C1_BUSY == I2C1_Close()); // sit here until finished.
    return status;
}

bool I2C1_WriteRead(uint16_t address, uint8_t *writeData, size_t writeLength, uint8_t *readData, size_t readLength)
{
    bool status = true;
    i2c1_buffer_t bufferBlock; // result is little endian
    bufferBlock.data = readData;
    bufferBlock.len = readLength;
    while(!I2C1_Open((i2c1_address_t)address)); // sit here until we get the bus..
    I2C1_SetDataCompleteCallback(rdBlkRegCompleteHandler,&bufferBlock);
    I2C1_SetBuffer(writeData,writeLength);
    I2C1_SetAddressNackCallback(NULL,NULL); //NACK polling?
    I2C1_HostWrite();
    while(I2C1_BUSY == I2C1_Close()); // sit here until finished.    
    return status;
}

bool I2C1_TransferSetup(struct I2C_TRANSFER_SETUP *setup, uint32_t srcClkFreq)
{
    bool status = false;
    return status;
}

enum I2C_ERROR I2C1_ErrorGet(void)
{
    return i2c1ErrorState;
}

bool I2C1_IsBusy(void)
{
    return I2C1_Status.inUse;
}

void I2C1_CallbackRegister(void (*handler)(void))
{
    I2C1_InterruptHandler = handler;
}