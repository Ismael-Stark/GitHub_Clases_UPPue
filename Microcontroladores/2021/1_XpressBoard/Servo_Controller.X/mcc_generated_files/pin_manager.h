/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using MPLAB(c) Code Configurator

  @Description:
    This header file provides implementations for pin APIs for all pins selected in the GUI.
    Generation Information :
        Product Revision  :  MPLAB(c) Code Configurator - 4.35
        Device            :  PIC16F18855
        Version           :  1.01
    The generated drivers are tested against the following:
        Compiler          :  XC8 1.35
        MPLAB             :  MPLAB X 3.40

    Copyright (c) 2013 - 2015 released Microchip Technology Inc.  All rights reserved.

    Microchip licenses to you the right to use, modify, copy and distribute
    Software only when embedded on a Microchip microcontroller or digital signal
    controller that is integrated into your product or third party product
    (pursuant to the sublicense terms in the accompanying license agreement).

    You should refer to the license agreement accompanying this Software for
    additional information regarding your rights and obligations.

    SOFTWARE AND DOCUMENTATION ARE PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND,
    EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT LIMITATION, ANY WARRANTY OF
    MERCHANTABILITY, TITLE, NON-INFRINGEMENT AND FITNESS FOR A PARTICULAR PURPOSE.
    IN NO EVENT SHALL MICROCHIP OR ITS LICENSORS BE LIABLE OR OBLIGATED UNDER
    CONTRACT, NEGLIGENCE, STRICT LIABILITY, CONTRIBUTION, BREACH OF WARRANTY, OR
    OTHER LEGAL EQUITABLE THEORY ANY DIRECT OR INDIRECT DAMAGES OR EXPENSES
    INCLUDING BUT NOT LIMITED TO ANY INCIDENTAL, SPECIAL, INDIRECT, PUNITIVE OR
    CONSEQUENTIAL DAMAGES, LOST PROFITS OR LOST DATA, COST OF PROCUREMENT OF
    SUBSTITUTE GOODS, TECHNOLOGY, SERVICES, OR ANY CLAIMS BY THIRD PARTIES
    (INCLUDING BUT NOT LIMITED TO ANY DEFENSE THEREOF), OR OTHER SIMILAR COSTS.

*/


#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set RA7 procedures
#define RA7_SetHigh()    do { LATAbits.LATA7 = 1; } while(0)
#define RA7_SetLow()   do { LATAbits.LATA7 = 0; } while(0)
#define RA7_Toggle()   do { LATAbits.LATA7 = ~LATAbits.LATA7; } while(0)
#define RA7_GetValue()         PORTAbits.RA7
#define RA7_SetDigitalInput()   do { TRISAbits.TRISA7 = 1; } while(0)
#define RA7_SetDigitalOutput()  do { TRISAbits.TRISA7 = 0; } while(0)
#define RA7_SetPullup()     do { WPUAbits.WPUA7 = 1; } while(0)
#define RA7_ResetPullup()   do { WPUAbits.WPUA7 = 0; } while(0)
#define RA7_SetAnalogMode() do { ANSELAbits.ANSA7 = 1; } while(0)
#define RA7_SetDigitalMode()do { ANSELAbits.ANSA7 = 0; } while(0)

// get/set RB1 procedures
#define RB1_SetHigh()    do { LATBbits.LATB1 = 1; } while(0)
#define RB1_SetLow()   do { LATBbits.LATB1 = 0; } while(0)
#define RB1_Toggle()   do { LATBbits.LATB1 = ~LATBbits.LATB1; } while(0)
#define RB1_GetValue()         PORTBbits.RB1
#define RB1_SetDigitalInput()   do { TRISBbits.TRISB1 = 1; } while(0)
#define RB1_SetDigitalOutput()  do { TRISBbits.TRISB1 = 0; } while(0)
#define RB1_SetPullup()     do { WPUBbits.WPUB1 = 1; } while(0)
#define RB1_ResetPullup()   do { WPUBbits.WPUB1 = 0; } while(0)
#define RB1_SetAnalogMode() do { ANSELBbits.ANSB1 = 1; } while(0)
#define RB1_SetDigitalMode()do { ANSELBbits.ANSB1 = 0; } while(0)

// get/set RB2 procedures
#define RB2_SetHigh()    do { LATBbits.LATB2 = 1; } while(0)
#define RB2_SetLow()   do { LATBbits.LATB2 = 0; } while(0)
#define RB2_Toggle()   do { LATBbits.LATB2 = ~LATBbits.LATB2; } while(0)
#define RB2_GetValue()         PORTBbits.RB2
#define RB2_SetDigitalInput()   do { TRISBbits.TRISB2 = 1; } while(0)
#define RB2_SetDigitalOutput()  do { TRISBbits.TRISB2 = 0; } while(0)
#define RB2_SetPullup()     do { WPUBbits.WPUB2 = 1; } while(0)
#define RB2_ResetPullup()   do { WPUBbits.WPUB2 = 0; } while(0)
#define RB2_SetAnalogMode() do { ANSELBbits.ANSB2 = 1; } while(0)
#define RB2_SetDigitalMode()do { ANSELBbits.ANSB2 = 0; } while(0)

// get/set RB3 procedures
#define RB3_SetHigh()    do { LATBbits.LATB3 = 1; } while(0)
#define RB3_SetLow()   do { LATBbits.LATB3 = 0; } while(0)
#define RB3_Toggle()   do { LATBbits.LATB3 = ~LATBbits.LATB3; } while(0)
#define RB3_GetValue()         PORTBbits.RB3
#define RB3_SetDigitalInput()   do { TRISBbits.TRISB3 = 1; } while(0)
#define RB3_SetDigitalOutput()  do { TRISBbits.TRISB3 = 0; } while(0)
#define RB3_SetPullup()     do { WPUBbits.WPUB3 = 1; } while(0)
#define RB3_ResetPullup()   do { WPUBbits.WPUB3 = 0; } while(0)
#define RB3_SetAnalogMode() do { ANSELBbits.ANSB3 = 1; } while(0)
#define RB3_SetDigitalMode()do { ANSELBbits.ANSB3 = 0; } while(0)

// get/set RB4 procedures
#define RB4_SetHigh()    do { LATBbits.LATB4 = 1; } while(0)
#define RB4_SetLow()   do { LATBbits.LATB4 = 0; } while(0)
#define RB4_Toggle()   do { LATBbits.LATB4 = ~LATBbits.LATB4; } while(0)
#define RB4_GetValue()         PORTBbits.RB4
#define RB4_SetDigitalInput()   do { TRISBbits.TRISB4 = 1; } while(0)
#define RB4_SetDigitalOutput()  do { TRISBbits.TRISB4 = 0; } while(0)
#define RB4_SetPullup()     do { WPUBbits.WPUB4 = 1; } while(0)
#define RB4_ResetPullup()   do { WPUBbits.WPUB4 = 0; } while(0)
#define RB4_SetAnalogMode() do { ANSELBbits.ANSB4 = 1; } while(0)
#define RB4_SetDigitalMode()do { ANSELBbits.ANSB4 = 0; } while(0)

// get/set RC0 procedures
#define RC0_SetHigh()    do { LATCbits.LATC0 = 1; } while(0)
#define RC0_SetLow()   do { LATCbits.LATC0 = 0; } while(0)
#define RC0_Toggle()   do { LATCbits.LATC0 = ~LATCbits.LATC0; } while(0)
#define RC0_GetValue()         PORTCbits.RC0
#define RC0_SetDigitalInput()   do { TRISCbits.TRISC0 = 1; } while(0)
#define RC0_SetDigitalOutput()  do { TRISCbits.TRISC0 = 0; } while(0)
#define RC0_SetPullup()     do { WPUCbits.WPUC0 = 1; } while(0)
#define RC0_ResetPullup()   do { WPUCbits.WPUC0 = 0; } while(0)
#define RC0_SetAnalogMode() do { ANSELCbits.ANSC0 = 1; } while(0)
#define RC0_SetDigitalMode()do { ANSELCbits.ANSC0 = 0; } while(0)

// get/set RC1 procedures
#define RC1_SetHigh()    do { LATCbits.LATC1 = 1; } while(0)
#define RC1_SetLow()   do { LATCbits.LATC1 = 0; } while(0)
#define RC1_Toggle()   do { LATCbits.LATC1 = ~LATCbits.LATC1; } while(0)
#define RC1_GetValue()         PORTCbits.RC1
#define RC1_SetDigitalInput()   do { TRISCbits.TRISC1 = 1; } while(0)
#define RC1_SetDigitalOutput()  do { TRISCbits.TRISC1 = 0; } while(0)
#define RC1_SetPullup()     do { WPUCbits.WPUC1 = 1; } while(0)
#define RC1_ResetPullup()   do { WPUCbits.WPUC1 = 0; } while(0)
#define RC1_SetAnalogMode() do { ANSELCbits.ANSC1 = 1; } while(0)
#define RC1_SetDigitalMode()do { ANSELCbits.ANSC1 = 0; } while(0)

// get/set RC2 procedures
#define RC2_SetHigh()    do { LATCbits.LATC2 = 1; } while(0)
#define RC2_SetLow()   do { LATCbits.LATC2 = 0; } while(0)
#define RC2_Toggle()   do { LATCbits.LATC2 = ~LATCbits.LATC2; } while(0)
#define RC2_GetValue()         PORTCbits.RC2
#define RC2_SetDigitalInput()   do { TRISCbits.TRISC2 = 1; } while(0)
#define RC2_SetDigitalOutput()  do { TRISCbits.TRISC2 = 0; } while(0)
#define RC2_SetPullup()     do { WPUCbits.WPUC2 = 1; } while(0)
#define RC2_ResetPullup()   do { WPUCbits.WPUC2 = 0; } while(0)
#define RC2_SetAnalogMode() do { ANSELCbits.ANSC2 = 1; } while(0)
#define RC2_SetDigitalMode()do { ANSELCbits.ANSC2 = 0; } while(0)

// get/set RC5 procedures
#define RC5_SetHigh()    do { LATCbits.LATC5 = 1; } while(0)
#define RC5_SetLow()   do { LATCbits.LATC5 = 0; } while(0)
#define RC5_Toggle()   do { LATCbits.LATC5 = ~LATCbits.LATC5; } while(0)
#define RC5_GetValue()         PORTCbits.RC5
#define RC5_SetDigitalInput()   do { TRISCbits.TRISC5 = 1; } while(0)
#define RC5_SetDigitalOutput()  do { TRISCbits.TRISC5 = 0; } while(0)
#define RC5_SetPullup()     do { WPUCbits.WPUC5 = 1; } while(0)
#define RC5_ResetPullup()   do { WPUCbits.WPUC5 = 0; } while(0)
#define RC5_SetAnalogMode() do { ANSELCbits.ANSC5 = 1; } while(0)
#define RC5_SetDigitalMode()do { ANSELCbits.ANSC5 = 0; } while(0)

// get/set RC7 procedures
#define RC7_SetHigh()    do { LATCbits.LATC7 = 1; } while(0)
#define RC7_SetLow()   do { LATCbits.LATC7 = 0; } while(0)
#define RC7_Toggle()   do { LATCbits.LATC7 = ~LATCbits.LATC7; } while(0)
#define RC7_GetValue()         PORTCbits.RC7
#define RC7_SetDigitalInput()   do { TRISCbits.TRISC7 = 1; } while(0)
#define RC7_SetDigitalOutput()  do { TRISCbits.TRISC7 = 0; } while(0)
#define RC7_SetPullup()     do { WPUCbits.WPUC7 = 1; } while(0)
#define RC7_ResetPullup()   do { WPUCbits.WPUC7 = 0; } while(0)
#define RC7_SetAnalogMode() do { ANSELCbits.ANSC7 = 1; } while(0)
#define RC7_SetDigitalMode()do { ANSELCbits.ANSC7 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/