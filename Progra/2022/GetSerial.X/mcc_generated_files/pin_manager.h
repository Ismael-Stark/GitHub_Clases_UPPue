/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  @Description
    This header file provides APIs for driver for .
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.7
        Device            :  PIC18F57Q84
        Driver Version    :  2.11
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

#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

/**
  Section: Included Files
*/

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set LM35 aliases
#define LM35_TRIS                 TRISAbits.TRISA1
#define LM35_LAT                  LATAbits.LATA1
#define LM35_PORT                 PORTAbits.RA1
#define LM35_WPU                  WPUAbits.WPUA1
#define LM35_OD                   ODCONAbits.ODCA1
#define LM35_ANS                  ANSELAbits.ANSELA1
#define LM35_SetHigh()            do { LATAbits.LATA1 = 1; } while(0)
#define LM35_SetLow()             do { LATAbits.LATA1 = 0; } while(0)
#define LM35_Toggle()             do { LATAbits.LATA1 = ~LATAbits.LATA1; } while(0)
#define LM35_GetValue()           PORTAbits.RA1
#define LM35_SetDigitalInput()    do { TRISAbits.TRISA1 = 1; } while(0)
#define LM35_SetDigitalOutput()   do { TRISAbits.TRISA1 = 0; } while(0)
#define LM35_SetPullup()          do { WPUAbits.WPUA1 = 1; } while(0)
#define LM35_ResetPullup()        do { WPUAbits.WPUA1 = 0; } while(0)
#define LM35_SetPushPull()        do { ODCONAbits.ODCA1 = 0; } while(0)
#define LM35_SetOpenDrain()       do { ODCONAbits.ODCA1 = 1; } while(0)
#define LM35_SetAnalogMode()      do { ANSELAbits.ANSELA1 = 1; } while(0)
#define LM35_SetDigitalMode()     do { ANSELAbits.ANSELA1 = 0; } while(0)

// get/set POT aliases
#define POT_TRIS                 TRISAbits.TRISA2
#define POT_LAT                  LATAbits.LATA2
#define POT_PORT                 PORTAbits.RA2
#define POT_WPU                  WPUAbits.WPUA2
#define POT_OD                   ODCONAbits.ODCA2
#define POT_ANS                  ANSELAbits.ANSELA2
#define POT_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define POT_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define POT_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define POT_GetValue()           PORTAbits.RA2
#define POT_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define POT_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define POT_SetPullup()          do { WPUAbits.WPUA2 = 1; } while(0)
#define POT_ResetPullup()        do { WPUAbits.WPUA2 = 0; } while(0)
#define POT_SetPushPull()        do { ODCONAbits.ODCA2 = 0; } while(0)
#define POT_SetOpenDrain()       do { ODCONAbits.ODCA2 = 1; } while(0)
#define POT_SetAnalogMode()      do { ANSELAbits.ANSELA2 = 1; } while(0)
#define POT_SetDigitalMode()     do { ANSELAbits.ANSELA2 = 0; } while(0)

// get/set RB1 procedures
#define RB1_SetHigh()            do { LATBbits.LATB1 = 1; } while(0)
#define RB1_SetLow()             do { LATBbits.LATB1 = 0; } while(0)
#define RB1_Toggle()             do { LATBbits.LATB1 = ~LATBbits.LATB1; } while(0)
#define RB1_GetValue()              PORTBbits.RB1
#define RB1_SetDigitalInput()    do { TRISBbits.TRISB1 = 1; } while(0)
#define RB1_SetDigitalOutput()   do { TRISBbits.TRISB1 = 0; } while(0)
#define RB1_SetPullup()             do { WPUBbits.WPUB1 = 1; } while(0)
#define RB1_ResetPullup()           do { WPUBbits.WPUB1 = 0; } while(0)
#define RB1_SetAnalogMode()         do { ANSELBbits.ANSELB1 = 1; } while(0)
#define RB1_SetDigitalMode()        do { ANSELBbits.ANSELB1 = 0; } while(0)

// get/set RB2 procedures
#define RB2_SetHigh()            do { LATBbits.LATB2 = 1; } while(0)
#define RB2_SetLow()             do { LATBbits.LATB2 = 0; } while(0)
#define RB2_Toggle()             do { LATBbits.LATB2 = ~LATBbits.LATB2; } while(0)
#define RB2_GetValue()              PORTBbits.RB2
#define RB2_SetDigitalInput()    do { TRISBbits.TRISB2 = 1; } while(0)
#define RB2_SetDigitalOutput()   do { TRISBbits.TRISB2 = 0; } while(0)
#define RB2_SetPullup()             do { WPUBbits.WPUB2 = 1; } while(0)
#define RB2_ResetPullup()           do { WPUBbits.WPUB2 = 0; } while(0)
#define RB2_SetAnalogMode()         do { ANSELBbits.ANSELB2 = 1; } while(0)
#define RB2_SetDigitalMode()        do { ANSELBbits.ANSELB2 = 0; } while(0)

// get/set RB4 procedures
#define RB4_SetHigh()            do { LATBbits.LATB4 = 1; } while(0)
#define RB4_SetLow()             do { LATBbits.LATB4 = 0; } while(0)
#define RB4_Toggle()             do { LATBbits.LATB4 = ~LATBbits.LATB4; } while(0)
#define RB4_GetValue()              PORTBbits.RB4
#define RB4_SetDigitalInput()    do { TRISBbits.TRISB4 = 1; } while(0)
#define RB4_SetDigitalOutput()   do { TRISBbits.TRISB4 = 0; } while(0)
#define RB4_SetPullup()             do { WPUBbits.WPUB4 = 1; } while(0)
#define RB4_ResetPullup()           do { WPUBbits.WPUB4 = 0; } while(0)
#define RB4_SetAnalogMode()         do { ANSELBbits.ANSELB4 = 1; } while(0)
#define RB4_SetDigitalMode()        do { ANSELBbits.ANSELB4 = 0; } while(0)

// get/set LED4 aliases
#define LED4_TRIS                 TRISEbits.TRISE0
#define LED4_LAT                  LATEbits.LATE0
#define LED4_PORT                 PORTEbits.RE0
#define LED4_WPU                  WPUEbits.WPUE0
#define LED4_OD                   ODCONEbits.ODCE0
#define LED4_ANS                  ANSELEbits.ANSELE0
#define LED4_SetHigh()            do { LATEbits.LATE0 = 1; } while(0)
#define LED4_SetLow()             do { LATEbits.LATE0 = 0; } while(0)
#define LED4_Toggle()             do { LATEbits.LATE0 = ~LATEbits.LATE0; } while(0)
#define LED4_GetValue()           PORTEbits.RE0
#define LED4_SetDigitalInput()    do { TRISEbits.TRISE0 = 1; } while(0)
#define LED4_SetDigitalOutput()   do { TRISEbits.TRISE0 = 0; } while(0)
#define LED4_SetPullup()          do { WPUEbits.WPUE0 = 1; } while(0)
#define LED4_ResetPullup()        do { WPUEbits.WPUE0 = 0; } while(0)
#define LED4_SetPushPull()        do { ODCONEbits.ODCE0 = 0; } while(0)
#define LED4_SetOpenDrain()       do { ODCONEbits.ODCE0 = 1; } while(0)
#define LED4_SetAnalogMode()      do { ANSELEbits.ANSELE0 = 1; } while(0)
#define LED4_SetDigitalMode()     do { ANSELEbits.ANSELE0 = 0; } while(0)

// get/set LED3 aliases
#define LED3_TRIS                 TRISEbits.TRISE1
#define LED3_LAT                  LATEbits.LATE1
#define LED3_PORT                 PORTEbits.RE1
#define LED3_WPU                  WPUEbits.WPUE1
#define LED3_OD                   ODCONEbits.ODCE1
#define LED3_ANS                  ANSELEbits.ANSELE1
#define LED3_SetHigh()            do { LATEbits.LATE1 = 1; } while(0)
#define LED3_SetLow()             do { LATEbits.LATE1 = 0; } while(0)
#define LED3_Toggle()             do { LATEbits.LATE1 = ~LATEbits.LATE1; } while(0)
#define LED3_GetValue()           PORTEbits.RE1
#define LED3_SetDigitalInput()    do { TRISEbits.TRISE1 = 1; } while(0)
#define LED3_SetDigitalOutput()   do { TRISEbits.TRISE1 = 0; } while(0)
#define LED3_SetPullup()          do { WPUEbits.WPUE1 = 1; } while(0)
#define LED3_ResetPullup()        do { WPUEbits.WPUE1 = 0; } while(0)
#define LED3_SetPushPull()        do { ODCONEbits.ODCE1 = 0; } while(0)
#define LED3_SetOpenDrain()       do { ODCONEbits.ODCE1 = 1; } while(0)
#define LED3_SetAnalogMode()      do { ANSELEbits.ANSELE1 = 1; } while(0)
#define LED3_SetDigitalMode()     do { ANSELEbits.ANSELE1 = 0; } while(0)

// get/set RF0 procedures
#define RF0_SetHigh()            do { LATFbits.LATF0 = 1; } while(0)
#define RF0_SetLow()             do { LATFbits.LATF0 = 0; } while(0)
#define RF0_Toggle()             do { LATFbits.LATF0 = ~LATFbits.LATF0; } while(0)
#define RF0_GetValue()              PORTFbits.RF0
#define RF0_SetDigitalInput()    do { TRISFbits.TRISF0 = 1; } while(0)
#define RF0_SetDigitalOutput()   do { TRISFbits.TRISF0 = 0; } while(0)
#define RF0_SetPullup()             do { WPUFbits.WPUF0 = 1; } while(0)
#define RF0_ResetPullup()           do { WPUFbits.WPUF0 = 0; } while(0)
#define RF0_SetAnalogMode()         do { ANSELFbits.ANSELF0 = 1; } while(0)
#define RF0_SetDigitalMode()        do { ANSELFbits.ANSELF0 = 0; } while(0)

// get/set RF1 procedures
#define RF1_SetHigh()            do { LATFbits.LATF1 = 1; } while(0)
#define RF1_SetLow()             do { LATFbits.LATF1 = 0; } while(0)
#define RF1_Toggle()             do { LATFbits.LATF1 = ~LATFbits.LATF1; } while(0)
#define RF1_GetValue()              PORTFbits.RF1
#define RF1_SetDigitalInput()    do { TRISFbits.TRISF1 = 1; } while(0)
#define RF1_SetDigitalOutput()   do { TRISFbits.TRISF1 = 0; } while(0)
#define RF1_SetPullup()             do { WPUFbits.WPUF1 = 1; } while(0)
#define RF1_ResetPullup()           do { WPUFbits.WPUF1 = 0; } while(0)
#define RF1_SetAnalogMode()         do { ANSELFbits.ANSELF1 = 1; } while(0)
#define RF1_SetDigitalMode()        do { ANSELFbits.ANSELF1 = 0; } while(0)

// get/set LED2 aliases
#define LED2_TRIS                 TRISFbits.TRISF2
#define LED2_LAT                  LATFbits.LATF2
#define LED2_PORT                 PORTFbits.RF2
#define LED2_WPU                  WPUFbits.WPUF2
#define LED2_OD                   ODCONFbits.ODCF2
#define LED2_ANS                  ANSELFbits.ANSELF2
#define LED2_SetHigh()            do { LATFbits.LATF2 = 1; } while(0)
#define LED2_SetLow()             do { LATFbits.LATF2 = 0; } while(0)
#define LED2_Toggle()             do { LATFbits.LATF2 = ~LATFbits.LATF2; } while(0)
#define LED2_GetValue()           PORTFbits.RF2
#define LED2_SetDigitalInput()    do { TRISFbits.TRISF2 = 1; } while(0)
#define LED2_SetDigitalOutput()   do { TRISFbits.TRISF2 = 0; } while(0)
#define LED2_SetPullup()          do { WPUFbits.WPUF2 = 1; } while(0)
#define LED2_ResetPullup()        do { WPUFbits.WPUF2 = 0; } while(0)
#define LED2_SetPushPull()        do { ODCONFbits.ODCF2 = 0; } while(0)
#define LED2_SetOpenDrain()       do { ODCONFbits.ODCF2 = 1; } while(0)
#define LED2_SetAnalogMode()      do { ANSELFbits.ANSELF2 = 1; } while(0)
#define LED2_SetDigitalMode()     do { ANSELFbits.ANSELF2 = 0; } while(0)

// get/set LED1 aliases
#define LED1_TRIS                 TRISFbits.TRISF3
#define LED1_LAT                  LATFbits.LATF3
#define LED1_PORT                 PORTFbits.RF3
#define LED1_WPU                  WPUFbits.WPUF3
#define LED1_OD                   ODCONFbits.ODCF3
#define LED1_ANS                  ANSELFbits.ANSELF3
#define LED1_SetHigh()            do { LATFbits.LATF3 = 1; } while(0)
#define LED1_SetLow()             do { LATFbits.LATF3 = 0; } while(0)
#define LED1_Toggle()             do { LATFbits.LATF3 = ~LATFbits.LATF3; } while(0)
#define LED1_GetValue()           PORTFbits.RF3
#define LED1_SetDigitalInput()    do { TRISFbits.TRISF3 = 1; } while(0)
#define LED1_SetDigitalOutput()   do { TRISFbits.TRISF3 = 0; } while(0)
#define LED1_SetPullup()          do { WPUFbits.WPUF3 = 1; } while(0)
#define LED1_ResetPullup()        do { WPUFbits.WPUF3 = 0; } while(0)
#define LED1_SetPushPull()        do { ODCONFbits.ODCF3 = 0; } while(0)
#define LED1_SetOpenDrain()       do { ODCONFbits.ODCF3 = 1; } while(0)
#define LED1_SetAnalogMode()      do { ANSELFbits.ANSELF3 = 1; } while(0)
#define LED1_SetDigitalMode()     do { ANSELFbits.ANSELF3 = 0; } while(0)

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