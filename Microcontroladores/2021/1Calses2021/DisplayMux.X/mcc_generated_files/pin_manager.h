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
        Device            :  PIC16F18855
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

// get/set D1 aliases
#define D1_TRIS                 TRISAbits.TRISA0
#define D1_LAT                  LATAbits.LATA0
#define D1_PORT                 PORTAbits.RA0
#define D1_WPU                  WPUAbits.WPUA0
#define D1_OD                   ODCONAbits.ODCA0
#define D1_ANS                  ANSELAbits.ANSA0
#define D1_SetHigh()            do { LATAbits.LATA0 = 1; } while(0)
#define D1_SetLow()             do { LATAbits.LATA0 = 0; } while(0)
#define D1_Toggle()             do { LATAbits.LATA0 = ~LATAbits.LATA0; } while(0)
#define D1_GetValue()           PORTAbits.RA0
#define D1_SetDigitalInput()    do { TRISAbits.TRISA0 = 1; } while(0)
#define D1_SetDigitalOutput()   do { TRISAbits.TRISA0 = 0; } while(0)
#define D1_SetPullup()          do { WPUAbits.WPUA0 = 1; } while(0)
#define D1_ResetPullup()        do { WPUAbits.WPUA0 = 0; } while(0)
#define D1_SetPushPull()        do { ODCONAbits.ODCA0 = 0; } while(0)
#define D1_SetOpenDrain()       do { ODCONAbits.ODCA0 = 1; } while(0)
#define D1_SetAnalogMode()      do { ANSELAbits.ANSA0 = 1; } while(0)
#define D1_SetDigitalMode()     do { ANSELAbits.ANSA0 = 0; } while(0)

// get/set D2 aliases
#define D2_TRIS                 TRISAbits.TRISA1
#define D2_LAT                  LATAbits.LATA1
#define D2_PORT                 PORTAbits.RA1
#define D2_WPU                  WPUAbits.WPUA1
#define D2_OD                   ODCONAbits.ODCA1
#define D2_ANS                  ANSELAbits.ANSA1
#define D2_SetHigh()            do { LATAbits.LATA1 = 1; } while(0)
#define D2_SetLow()             do { LATAbits.LATA1 = 0; } while(0)
#define D2_Toggle()             do { LATAbits.LATA1 = ~LATAbits.LATA1; } while(0)
#define D2_GetValue()           PORTAbits.RA1
#define D2_SetDigitalInput()    do { TRISAbits.TRISA1 = 1; } while(0)
#define D2_SetDigitalOutput()   do { TRISAbits.TRISA1 = 0; } while(0)
#define D2_SetPullup()          do { WPUAbits.WPUA1 = 1; } while(0)
#define D2_ResetPullup()        do { WPUAbits.WPUA1 = 0; } while(0)
#define D2_SetPushPull()        do { ODCONAbits.ODCA1 = 0; } while(0)
#define D2_SetOpenDrain()       do { ODCONAbits.ODCA1 = 1; } while(0)
#define D2_SetAnalogMode()      do { ANSELAbits.ANSA1 = 1; } while(0)
#define D2_SetDigitalMode()     do { ANSELAbits.ANSA1 = 0; } while(0)

// get/set D3 aliases
#define D3_TRIS                 TRISAbits.TRISA2
#define D3_LAT                  LATAbits.LATA2
#define D3_PORT                 PORTAbits.RA2
#define D3_WPU                  WPUAbits.WPUA2
#define D3_OD                   ODCONAbits.ODCA2
#define D3_ANS                  ANSELAbits.ANSA2
#define D3_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define D3_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define D3_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define D3_GetValue()           PORTAbits.RA2
#define D3_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define D3_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define D3_SetPullup()          do { WPUAbits.WPUA2 = 1; } while(0)
#define D3_ResetPullup()        do { WPUAbits.WPUA2 = 0; } while(0)
#define D3_SetPushPull()        do { ODCONAbits.ODCA2 = 0; } while(0)
#define D3_SetOpenDrain()       do { ODCONAbits.ODCA2 = 1; } while(0)
#define D3_SetAnalogMode()      do { ANSELAbits.ANSA2 = 1; } while(0)
#define D3_SetDigitalMode()     do { ANSELAbits.ANSA2 = 0; } while(0)

// get/set D4 aliases
#define D4_TRIS                 TRISAbits.TRISA3
#define D4_LAT                  LATAbits.LATA3
#define D4_PORT                 PORTAbits.RA3
#define D4_WPU                  WPUAbits.WPUA3
#define D4_OD                   ODCONAbits.ODCA3
#define D4_ANS                  ANSELAbits.ANSA3
#define D4_SetHigh()            do { LATAbits.LATA3 = 1; } while(0)
#define D4_SetLow()             do { LATAbits.LATA3 = 0; } while(0)
#define D4_Toggle()             do { LATAbits.LATA3 = ~LATAbits.LATA3; } while(0)
#define D4_GetValue()           PORTAbits.RA3
#define D4_SetDigitalInput()    do { TRISAbits.TRISA3 = 1; } while(0)
#define D4_SetDigitalOutput()   do { TRISAbits.TRISA3 = 0; } while(0)
#define D4_SetPullup()          do { WPUAbits.WPUA3 = 1; } while(0)
#define D4_ResetPullup()        do { WPUAbits.WPUA3 = 0; } while(0)
#define D4_SetPushPull()        do { ODCONAbits.ODCA3 = 0; } while(0)
#define D4_SetOpenDrain()       do { ODCONAbits.ODCA3 = 1; } while(0)
#define D4_SetAnalogMode()      do { ANSELAbits.ANSA3 = 1; } while(0)
#define D4_SetDigitalMode()     do { ANSELAbits.ANSA3 = 0; } while(0)

// get/set BTN1 aliases
#define BTN1_TRIS                 TRISAbits.TRISA5
#define BTN1_LAT                  LATAbits.LATA5
#define BTN1_PORT                 PORTAbits.RA5
#define BTN1_WPU                  WPUAbits.WPUA5
#define BTN1_OD                   ODCONAbits.ODCA5
#define BTN1_ANS                  ANSELAbits.ANSA5
#define BTN1_SetHigh()            do { LATAbits.LATA5 = 1; } while(0)
#define BTN1_SetLow()             do { LATAbits.LATA5 = 0; } while(0)
#define BTN1_Toggle()             do { LATAbits.LATA5 = ~LATAbits.LATA5; } while(0)
#define BTN1_GetValue()           PORTAbits.RA5
#define BTN1_SetDigitalInput()    do { TRISAbits.TRISA5 = 1; } while(0)
#define BTN1_SetDigitalOutput()   do { TRISAbits.TRISA5 = 0; } while(0)
#define BTN1_SetPullup()          do { WPUAbits.WPUA5 = 1; } while(0)
#define BTN1_ResetPullup()        do { WPUAbits.WPUA5 = 0; } while(0)
#define BTN1_SetPushPull()        do { ODCONAbits.ODCA5 = 0; } while(0)
#define BTN1_SetOpenDrain()       do { ODCONAbits.ODCA5 = 1; } while(0)
#define BTN1_SetAnalogMode()      do { ANSELAbits.ANSA5 = 1; } while(0)
#define BTN1_SetDigitalMode()     do { ANSELAbits.ANSA5 = 0; } while(0)

// get/set IO_RB0 aliases
#define IO_RB0_TRIS                 TRISBbits.TRISB0
#define IO_RB0_LAT                  LATBbits.LATB0
#define IO_RB0_PORT                 PORTBbits.RB0
#define IO_RB0_WPU                  WPUBbits.WPUB0
#define IO_RB0_OD                   ODCONBbits.ODCB0
#define IO_RB0_ANS                  ANSELBbits.ANSB0
#define IO_RB0_SetHigh()            do { LATBbits.LATB0 = 1; } while(0)
#define IO_RB0_SetLow()             do { LATBbits.LATB0 = 0; } while(0)
#define IO_RB0_Toggle()             do { LATBbits.LATB0 = ~LATBbits.LATB0; } while(0)
#define IO_RB0_GetValue()           PORTBbits.RB0
#define IO_RB0_SetDigitalInput()    do { TRISBbits.TRISB0 = 1; } while(0)
#define IO_RB0_SetDigitalOutput()   do { TRISBbits.TRISB0 = 0; } while(0)
#define IO_RB0_SetPullup()          do { WPUBbits.WPUB0 = 1; } while(0)
#define IO_RB0_ResetPullup()        do { WPUBbits.WPUB0 = 0; } while(0)
#define IO_RB0_SetPushPull()        do { ODCONBbits.ODCB0 = 0; } while(0)
#define IO_RB0_SetOpenDrain()       do { ODCONBbits.ODCB0 = 1; } while(0)
#define IO_RB0_SetAnalogMode()      do { ANSELBbits.ANSB0 = 1; } while(0)
#define IO_RB0_SetDigitalMode()     do { ANSELBbits.ANSB0 = 0; } while(0)

// get/set IO_RB1 aliases
#define IO_RB1_TRIS                 TRISBbits.TRISB1
#define IO_RB1_LAT                  LATBbits.LATB1
#define IO_RB1_PORT                 PORTBbits.RB1
#define IO_RB1_WPU                  WPUBbits.WPUB1
#define IO_RB1_OD                   ODCONBbits.ODCB1
#define IO_RB1_ANS                  ANSELBbits.ANSB1
#define IO_RB1_SetHigh()            do { LATBbits.LATB1 = 1; } while(0)
#define IO_RB1_SetLow()             do { LATBbits.LATB1 = 0; } while(0)
#define IO_RB1_Toggle()             do { LATBbits.LATB1 = ~LATBbits.LATB1; } while(0)
#define IO_RB1_GetValue()           PORTBbits.RB1
#define IO_RB1_SetDigitalInput()    do { TRISBbits.TRISB1 = 1; } while(0)
#define IO_RB1_SetDigitalOutput()   do { TRISBbits.TRISB1 = 0; } while(0)
#define IO_RB1_SetPullup()          do { WPUBbits.WPUB1 = 1; } while(0)
#define IO_RB1_ResetPullup()        do { WPUBbits.WPUB1 = 0; } while(0)
#define IO_RB1_SetPushPull()        do { ODCONBbits.ODCB1 = 0; } while(0)
#define IO_RB1_SetOpenDrain()       do { ODCONBbits.ODCB1 = 1; } while(0)
#define IO_RB1_SetAnalogMode()      do { ANSELBbits.ANSB1 = 1; } while(0)
#define IO_RB1_SetDigitalMode()     do { ANSELBbits.ANSB1 = 0; } while(0)

// get/set IO_RB2 aliases
#define IO_RB2_TRIS                 TRISBbits.TRISB2
#define IO_RB2_LAT                  LATBbits.LATB2
#define IO_RB2_PORT                 PORTBbits.RB2
#define IO_RB2_WPU                  WPUBbits.WPUB2
#define IO_RB2_OD                   ODCONBbits.ODCB2
#define IO_RB2_ANS                  ANSELBbits.ANSB2
#define IO_RB2_SetHigh()            do { LATBbits.LATB2 = 1; } while(0)
#define IO_RB2_SetLow()             do { LATBbits.LATB2 = 0; } while(0)
#define IO_RB2_Toggle()             do { LATBbits.LATB2 = ~LATBbits.LATB2; } while(0)
#define IO_RB2_GetValue()           PORTBbits.RB2
#define IO_RB2_SetDigitalInput()    do { TRISBbits.TRISB2 = 1; } while(0)
#define IO_RB2_SetDigitalOutput()   do { TRISBbits.TRISB2 = 0; } while(0)
#define IO_RB2_SetPullup()          do { WPUBbits.WPUB2 = 1; } while(0)
#define IO_RB2_ResetPullup()        do { WPUBbits.WPUB2 = 0; } while(0)
#define IO_RB2_SetPushPull()        do { ODCONBbits.ODCB2 = 0; } while(0)
#define IO_RB2_SetOpenDrain()       do { ODCONBbits.ODCB2 = 1; } while(0)
#define IO_RB2_SetAnalogMode()      do { ANSELBbits.ANSB2 = 1; } while(0)
#define IO_RB2_SetDigitalMode()     do { ANSELBbits.ANSB2 = 0; } while(0)

// get/set IO_RB3 aliases
#define IO_RB3_TRIS                 TRISBbits.TRISB3
#define IO_RB3_LAT                  LATBbits.LATB3
#define IO_RB3_PORT                 PORTBbits.RB3
#define IO_RB3_WPU                  WPUBbits.WPUB3
#define IO_RB3_OD                   ODCONBbits.ODCB3
#define IO_RB3_ANS                  ANSELBbits.ANSB3
#define IO_RB3_SetHigh()            do { LATBbits.LATB3 = 1; } while(0)
#define IO_RB3_SetLow()             do { LATBbits.LATB3 = 0; } while(0)
#define IO_RB3_Toggle()             do { LATBbits.LATB3 = ~LATBbits.LATB3; } while(0)
#define IO_RB3_GetValue()           PORTBbits.RB3
#define IO_RB3_SetDigitalInput()    do { TRISBbits.TRISB3 = 1; } while(0)
#define IO_RB3_SetDigitalOutput()   do { TRISBbits.TRISB3 = 0; } while(0)
#define IO_RB3_SetPullup()          do { WPUBbits.WPUB3 = 1; } while(0)
#define IO_RB3_ResetPullup()        do { WPUBbits.WPUB3 = 0; } while(0)
#define IO_RB3_SetPushPull()        do { ODCONBbits.ODCB3 = 0; } while(0)
#define IO_RB3_SetOpenDrain()       do { ODCONBbits.ODCB3 = 1; } while(0)
#define IO_RB3_SetAnalogMode()      do { ANSELBbits.ANSB3 = 1; } while(0)
#define IO_RB3_SetDigitalMode()     do { ANSELBbits.ANSB3 = 0; } while(0)

// get/set RC0 procedures
#define RC0_SetHigh()            do { LATCbits.LATC0 = 1; } while(0)
#define RC0_SetLow()             do { LATCbits.LATC0 = 0; } while(0)
#define RC0_Toggle()             do { LATCbits.LATC0 = ~LATCbits.LATC0; } while(0)
#define RC0_GetValue()              PORTCbits.RC0
#define RC0_SetDigitalInput()    do { TRISCbits.TRISC0 = 1; } while(0)
#define RC0_SetDigitalOutput()   do { TRISCbits.TRISC0 = 0; } while(0)
#define RC0_SetPullup()             do { WPUCbits.WPUC0 = 1; } while(0)
#define RC0_ResetPullup()           do { WPUCbits.WPUC0 = 0; } while(0)
#define RC0_SetAnalogMode()         do { ANSELCbits.ANSC0 = 1; } while(0)
#define RC0_SetDigitalMode()        do { ANSELCbits.ANSC0 = 0; } while(0)

// get/set RC1 procedures
#define RC1_SetHigh()            do { LATCbits.LATC1 = 1; } while(0)
#define RC1_SetLow()             do { LATCbits.LATC1 = 0; } while(0)
#define RC1_Toggle()             do { LATCbits.LATC1 = ~LATCbits.LATC1; } while(0)
#define RC1_GetValue()              PORTCbits.RC1
#define RC1_SetDigitalInput()    do { TRISCbits.TRISC1 = 1; } while(0)
#define RC1_SetDigitalOutput()   do { TRISCbits.TRISC1 = 0; } while(0)
#define RC1_SetPullup()             do { WPUCbits.WPUC1 = 1; } while(0)
#define RC1_ResetPullup()           do { WPUCbits.WPUC1 = 0; } while(0)
#define RC1_SetAnalogMode()         do { ANSELCbits.ANSC1 = 1; } while(0)
#define RC1_SetDigitalMode()        do { ANSELCbits.ANSC1 = 0; } while(0)

// get/set RC3 procedures
#define RC3_SetHigh()            do { LATCbits.LATC3 = 1; } while(0)
#define RC3_SetLow()             do { LATCbits.LATC3 = 0; } while(0)
#define RC3_Toggle()             do { LATCbits.LATC3 = ~LATCbits.LATC3; } while(0)
#define RC3_GetValue()              PORTCbits.RC3
#define RC3_SetDigitalInput()    do { TRISCbits.TRISC3 = 1; } while(0)
#define RC3_SetDigitalOutput()   do { TRISCbits.TRISC3 = 0; } while(0)
#define RC3_SetPullup()             do { WPUCbits.WPUC3 = 1; } while(0)
#define RC3_ResetPullup()           do { WPUCbits.WPUC3 = 0; } while(0)
#define RC3_SetAnalogMode()         do { ANSELCbits.ANSC3 = 1; } while(0)
#define RC3_SetDigitalMode()        do { ANSELCbits.ANSC3 = 0; } while(0)

// get/set RC4 procedures
#define RC4_SetHigh()            do { LATCbits.LATC4 = 1; } while(0)
#define RC4_SetLow()             do { LATCbits.LATC4 = 0; } while(0)
#define RC4_Toggle()             do { LATCbits.LATC4 = ~LATCbits.LATC4; } while(0)
#define RC4_GetValue()              PORTCbits.RC4
#define RC4_SetDigitalInput()    do { TRISCbits.TRISC4 = 1; } while(0)
#define RC4_SetDigitalOutput()   do { TRISCbits.TRISC4 = 0; } while(0)
#define RC4_SetPullup()             do { WPUCbits.WPUC4 = 1; } while(0)
#define RC4_ResetPullup()           do { WPUCbits.WPUC4 = 0; } while(0)
#define RC4_SetAnalogMode()         do { ANSELCbits.ANSC4 = 1; } while(0)
#define RC4_SetDigitalMode()        do { ANSELCbits.ANSC4 = 0; } while(0)

// get/set Punto aliases
#define Punto_TRIS                 TRISCbits.TRISC7
#define Punto_LAT                  LATCbits.LATC7
#define Punto_PORT                 PORTCbits.RC7
#define Punto_WPU                  WPUCbits.WPUC7
#define Punto_OD                   ODCONCbits.ODCC7
#define Punto_ANS                  ANSELCbits.ANSC7
#define Punto_SetHigh()            do { LATCbits.LATC7 = 1; } while(0)
#define Punto_SetLow()             do { LATCbits.LATC7 = 0; } while(0)
#define Punto_Toggle()             do { LATCbits.LATC7 = ~LATCbits.LATC7; } while(0)
#define Punto_GetValue()           PORTCbits.RC7
#define Punto_SetDigitalInput()    do { TRISCbits.TRISC7 = 1; } while(0)
#define Punto_SetDigitalOutput()   do { TRISCbits.TRISC7 = 0; } while(0)
#define Punto_SetPullup()          do { WPUCbits.WPUC7 = 1; } while(0)
#define Punto_ResetPullup()        do { WPUCbits.WPUC7 = 0; } while(0)
#define Punto_SetPushPull()        do { ODCONCbits.ODCC7 = 0; } while(0)
#define Punto_SetOpenDrain()       do { ODCONCbits.ODCC7 = 1; } while(0)
#define Punto_SetAnalogMode()      do { ANSELCbits.ANSC7 = 1; } while(0)
#define Punto_SetDigitalMode()     do { ANSELCbits.ANSC7 = 0; } while(0)

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