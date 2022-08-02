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
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.8
        Device            :  PIC18F57Q84
        Driver Version    :  2.11
    The generated drivers are tested against the following:
        Compiler          :  XC8 2.36 and above
        MPLAB 	          :  MPLAB X 6.00	
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

// get/set POT1 aliases
#define POT1_TRIS                 TRISAbits.TRISA1
#define POT1_LAT                  LATAbits.LATA1
#define POT1_PORT                 PORTAbits.RA1
#define POT1_WPU                  WPUAbits.WPUA1
#define POT1_OD                   ODCONAbits.ODCA1
#define POT1_ANS                  ANSELAbits.ANSELA1
#define POT1_SetHigh()            do { LATAbits.LATA1 = 1; } while(0)
#define POT1_SetLow()             do { LATAbits.LATA1 = 0; } while(0)
#define POT1_Toggle()             do { LATAbits.LATA1 = ~LATAbits.LATA1; } while(0)
#define POT1_GetValue()           PORTAbits.RA1
#define POT1_SetDigitalInput()    do { TRISAbits.TRISA1 = 1; } while(0)
#define POT1_SetDigitalOutput()   do { TRISAbits.TRISA1 = 0; } while(0)
#define POT1_SetPullup()          do { WPUAbits.WPUA1 = 1; } while(0)
#define POT1_ResetPullup()        do { WPUAbits.WPUA1 = 0; } while(0)
#define POT1_SetPushPull()        do { ODCONAbits.ODCA1 = 0; } while(0)
#define POT1_SetOpenDrain()       do { ODCONAbits.ODCA1 = 1; } while(0)
#define POT1_SetAnalogMode()      do { ANSELAbits.ANSELA1 = 1; } while(0)
#define POT1_SetDigitalMode()     do { ANSELAbits.ANSELA1 = 0; } while(0)

// get/set POT2 aliases
#define POT2_TRIS                 TRISAbits.TRISA2
#define POT2_LAT                  LATAbits.LATA2
#define POT2_PORT                 PORTAbits.RA2
#define POT2_WPU                  WPUAbits.WPUA2
#define POT2_OD                   ODCONAbits.ODCA2
#define POT2_ANS                  ANSELAbits.ANSELA2
#define POT2_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define POT2_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define POT2_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define POT2_GetValue()           PORTAbits.RA2
#define POT2_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define POT2_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define POT2_SetPullup()          do { WPUAbits.WPUA2 = 1; } while(0)
#define POT2_ResetPullup()        do { WPUAbits.WPUA2 = 0; } while(0)
#define POT2_SetPushPull()        do { ODCONAbits.ODCA2 = 0; } while(0)
#define POT2_SetOpenDrain()       do { ODCONAbits.ODCA2 = 1; } while(0)
#define POT2_SetAnalogMode()      do { ANSELAbits.ANSELA2 = 1; } while(0)
#define POT2_SetDigitalMode()     do { ANSELAbits.ANSELA2 = 0; } while(0)

// get/set SW0 aliases
#define SW0_TRIS                 TRISAbits.TRISA3
#define SW0_LAT                  LATAbits.LATA3
#define SW0_PORT                 PORTAbits.RA3
#define SW0_WPU                  WPUAbits.WPUA3
#define SW0_OD                   ODCONAbits.ODCA3
#define SW0_ANS                  ANSELAbits.ANSELA3
#define SW0_SetHigh()            do { LATAbits.LATA3 = 1; } while(0)
#define SW0_SetLow()             do { LATAbits.LATA3 = 0; } while(0)
#define SW0_Toggle()             do { LATAbits.LATA3 = ~LATAbits.LATA3; } while(0)
#define SW0_GetValue()           PORTAbits.RA3
#define SW0_SetDigitalInput()    do { TRISAbits.TRISA3 = 1; } while(0)
#define SW0_SetDigitalOutput()   do { TRISAbits.TRISA3 = 0; } while(0)
#define SW0_SetPullup()          do { WPUAbits.WPUA3 = 1; } while(0)
#define SW0_ResetPullup()        do { WPUAbits.WPUA3 = 0; } while(0)
#define SW0_SetPushPull()        do { ODCONAbits.ODCA3 = 0; } while(0)
#define SW0_SetOpenDrain()       do { ODCONAbits.ODCA3 = 1; } while(0)
#define SW0_SetAnalogMode()      do { ANSELAbits.ANSELA3 = 1; } while(0)
#define SW0_SetDigitalMode()     do { ANSELAbits.ANSELA3 = 0; } while(0)

// get/set LM35 aliases
#define LM35_TRIS                 TRISAbits.TRISA5
#define LM35_LAT                  LATAbits.LATA5
#define LM35_PORT                 PORTAbits.RA5
#define LM35_WPU                  WPUAbits.WPUA5
#define LM35_OD                   ODCONAbits.ODCA5
#define LM35_ANS                  ANSELAbits.ANSELA5
#define LM35_SetHigh()            do { LATAbits.LATA5 = 1; } while(0)
#define LM35_SetLow()             do { LATAbits.LATA5 = 0; } while(0)
#define LM35_Toggle()             do { LATAbits.LATA5 = ~LATAbits.LATA5; } while(0)
#define LM35_GetValue()           PORTAbits.RA5
#define LM35_SetDigitalInput()    do { TRISAbits.TRISA5 = 1; } while(0)
#define LM35_SetDigitalOutput()   do { TRISAbits.TRISA5 = 0; } while(0)
#define LM35_SetPullup()          do { WPUAbits.WPUA5 = 1; } while(0)
#define LM35_ResetPullup()        do { WPUAbits.WPUA5 = 0; } while(0)
#define LM35_SetPushPull()        do { ODCONAbits.ODCA5 = 0; } while(0)
#define LM35_SetOpenDrain()       do { ODCONAbits.ODCA5 = 1; } while(0)
#define LM35_SetAnalogMode()      do { ANSELAbits.ANSELA5 = 1; } while(0)
#define LM35_SetDigitalMode()     do { ANSELAbits.ANSELA5 = 0; } while(0)

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

// get/set LED2 aliases
#define LED2_TRIS                 TRISEbits.TRISE0
#define LED2_LAT                  LATEbits.LATE0
#define LED2_PORT                 PORTEbits.RE0
#define LED2_WPU                  WPUEbits.WPUE0
#define LED2_OD                   ODCONEbits.ODCE0
#define LED2_ANS                  ANSELEbits.ANSELE0
#define LED2_SetHigh()            do { LATEbits.LATE0 = 1; } while(0)
#define LED2_SetLow()             do { LATEbits.LATE0 = 0; } while(0)
#define LED2_Toggle()             do { LATEbits.LATE0 = ~LATEbits.LATE0; } while(0)
#define LED2_GetValue()           PORTEbits.RE0
#define LED2_SetDigitalInput()    do { TRISEbits.TRISE0 = 1; } while(0)
#define LED2_SetDigitalOutput()   do { TRISEbits.TRISE0 = 0; } while(0)
#define LED2_SetPullup()          do { WPUEbits.WPUE0 = 1; } while(0)
#define LED2_ResetPullup()        do { WPUEbits.WPUE0 = 0; } while(0)
#define LED2_SetPushPull()        do { ODCONEbits.ODCE0 = 0; } while(0)
#define LED2_SetOpenDrain()       do { ODCONEbits.ODCE0 = 1; } while(0)
#define LED2_SetAnalogMode()      do { ANSELEbits.ANSELE0 = 1; } while(0)
#define LED2_SetDigitalMode()     do { ANSELEbits.ANSELE0 = 0; } while(0)

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

// get/set RF2 procedures
#define RF2_SetHigh()            do { LATFbits.LATF2 = 1; } while(0)
#define RF2_SetLow()             do { LATFbits.LATF2 = 0; } while(0)
#define RF2_Toggle()             do { LATFbits.LATF2 = ~LATFbits.LATF2; } while(0)
#define RF2_GetValue()              PORTFbits.RF2
#define RF2_SetDigitalInput()    do { TRISFbits.TRISF2 = 1; } while(0)
#define RF2_SetDigitalOutput()   do { TRISFbits.TRISF2 = 0; } while(0)
#define RF2_SetPullup()             do { WPUFbits.WPUF2 = 1; } while(0)
#define RF2_ResetPullup()           do { WPUFbits.WPUF2 = 0; } while(0)
#define RF2_SetAnalogMode()         do { ANSELFbits.ANSELF2 = 1; } while(0)
#define RF2_SetDigitalMode()        do { ANSELFbits.ANSELF2 = 0; } while(0)

// get/set LED aliases
#define LED_TRIS                 TRISFbits.TRISF3
#define LED_LAT                  LATFbits.LATF3
#define LED_PORT                 PORTFbits.RF3
#define LED_WPU                  WPUFbits.WPUF3
#define LED_OD                   ODCONFbits.ODCF3
#define LED_ANS                  ANSELFbits.ANSELF3
#define LED_SetHigh()            do { LATFbits.LATF3 = 1; } while(0)
#define LED_SetLow()             do { LATFbits.LATF3 = 0; } while(0)
#define LED_Toggle()             do { LATFbits.LATF3 = ~LATFbits.LATF3; } while(0)
#define LED_GetValue()           PORTFbits.RF3
#define LED_SetDigitalInput()    do { TRISFbits.TRISF3 = 1; } while(0)
#define LED_SetDigitalOutput()   do { TRISFbits.TRISF3 = 0; } while(0)
#define LED_SetPullup()          do { WPUFbits.WPUF3 = 1; } while(0)
#define LED_ResetPullup()        do { WPUFbits.WPUF3 = 0; } while(0)
#define LED_SetPushPull()        do { ODCONFbits.ODCF3 = 0; } while(0)
#define LED_SetOpenDrain()       do { ODCONFbits.ODCF3 = 1; } while(0)
#define LED_SetAnalogMode()      do { ANSELFbits.ANSELF3 = 1; } while(0)
#define LED_SetDigitalMode()     do { ANSELFbits.ANSELF3 = 0; } while(0)

// get/set LED4 aliases
#define LED4_TRIS                 TRISFbits.TRISF4
#define LED4_LAT                  LATFbits.LATF4
#define LED4_PORT                 PORTFbits.RF4
#define LED4_WPU                  WPUFbits.WPUF4
#define LED4_OD                   ODCONFbits.ODCF4
#define LED4_ANS                  ANSELFbits.ANSELF4
#define LED4_SetHigh()            do { LATFbits.LATF4 = 1; } while(0)
#define LED4_SetLow()             do { LATFbits.LATF4 = 0; } while(0)
#define LED4_Toggle()             do { LATFbits.LATF4 = ~LATFbits.LATF4; } while(0)
#define LED4_GetValue()           PORTFbits.RF4
#define LED4_SetDigitalInput()    do { TRISFbits.TRISF4 = 1; } while(0)
#define LED4_SetDigitalOutput()   do { TRISFbits.TRISF4 = 0; } while(0)
#define LED4_SetPullup()          do { WPUFbits.WPUF4 = 1; } while(0)
#define LED4_ResetPullup()        do { WPUFbits.WPUF4 = 0; } while(0)
#define LED4_SetPushPull()        do { ODCONFbits.ODCF4 = 0; } while(0)
#define LED4_SetOpenDrain()       do { ODCONFbits.ODCF4 = 1; } while(0)
#define LED4_SetAnalogMode()      do { ANSELFbits.ANSELF4 = 1; } while(0)
#define LED4_SetDigitalMode()     do { ANSELFbits.ANSELF4 = 0; } while(0)

// get/set LED5 aliases
#define LED5_TRIS                 TRISFbits.TRISF5
#define LED5_LAT                  LATFbits.LATF5
#define LED5_PORT                 PORTFbits.RF5
#define LED5_WPU                  WPUFbits.WPUF5
#define LED5_OD                   ODCONFbits.ODCF5
#define LED5_ANS                  ANSELFbits.ANSELF5
#define LED5_SetHigh()            do { LATFbits.LATF5 = 1; } while(0)
#define LED5_SetLow()             do { LATFbits.LATF5 = 0; } while(0)
#define LED5_Toggle()             do { LATFbits.LATF5 = ~LATFbits.LATF5; } while(0)
#define LED5_GetValue()           PORTFbits.RF5
#define LED5_SetDigitalInput()    do { TRISFbits.TRISF5 = 1; } while(0)
#define LED5_SetDigitalOutput()   do { TRISFbits.TRISF5 = 0; } while(0)
#define LED5_SetPullup()          do { WPUFbits.WPUF5 = 1; } while(0)
#define LED5_ResetPullup()        do { WPUFbits.WPUF5 = 0; } while(0)
#define LED5_SetPushPull()        do { ODCONFbits.ODCF5 = 0; } while(0)
#define LED5_SetOpenDrain()       do { ODCONFbits.ODCF5 = 1; } while(0)
#define LED5_SetAnalogMode()      do { ANSELFbits.ANSELF5 = 1; } while(0)
#define LED5_SetDigitalMode()     do { ANSELFbits.ANSELF5 = 0; } while(0)

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