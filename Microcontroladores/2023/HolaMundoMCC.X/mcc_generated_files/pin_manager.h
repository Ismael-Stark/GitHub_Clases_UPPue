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
#define POT1_TRIS                 TRISAbits.TRISA0
#define POT1_LAT                  LATAbits.LATA0
#define POT1_PORT                 PORTAbits.RA0
#define POT1_WPU                  WPUAbits.WPUA0
#define POT1_OD                   ODCONAbits.ODCA0
#define POT1_ANS                  ANSELAbits.ANSELA0
#define POT1_SetHigh()            do { LATAbits.LATA0 = 1; } while(0)
#define POT1_SetLow()             do { LATAbits.LATA0 = 0; } while(0)
#define POT1_Toggle()             do { LATAbits.LATA0 = ~LATAbits.LATA0; } while(0)
#define POT1_GetValue()           PORTAbits.RA0
#define POT1_SetDigitalInput()    do { TRISAbits.TRISA0 = 1; } while(0)
#define POT1_SetDigitalOutput()   do { TRISAbits.TRISA0 = 0; } while(0)
#define POT1_SetPullup()          do { WPUAbits.WPUA0 = 1; } while(0)
#define POT1_ResetPullup()        do { WPUAbits.WPUA0 = 0; } while(0)
#define POT1_SetPushPull()        do { ODCONAbits.ODCA0 = 0; } while(0)
#define POT1_SetOpenDrain()       do { ODCONAbits.ODCA0 = 1; } while(0)
#define POT1_SetAnalogMode()      do { ANSELAbits.ANSELA0 = 1; } while(0)
#define POT1_SetDigitalMode()     do { ANSELAbits.ANSELA0 = 0; } while(0)

// get/set POT2 aliases
#define POT2_TRIS                 TRISAbits.TRISA1
#define POT2_LAT                  LATAbits.LATA1
#define POT2_PORT                 PORTAbits.RA1
#define POT2_WPU                  WPUAbits.WPUA1
#define POT2_OD                   ODCONAbits.ODCA1
#define POT2_ANS                  ANSELAbits.ANSELA1
#define POT2_SetHigh()            do { LATAbits.LATA1 = 1; } while(0)
#define POT2_SetLow()             do { LATAbits.LATA1 = 0; } while(0)
#define POT2_Toggle()             do { LATAbits.LATA1 = ~LATAbits.LATA1; } while(0)
#define POT2_GetValue()           PORTAbits.RA1
#define POT2_SetDigitalInput()    do { TRISAbits.TRISA1 = 1; } while(0)
#define POT2_SetDigitalOutput()   do { TRISAbits.TRISA1 = 0; } while(0)
#define POT2_SetPullup()          do { WPUAbits.WPUA1 = 1; } while(0)
#define POT2_ResetPullup()        do { WPUAbits.WPUA1 = 0; } while(0)
#define POT2_SetPushPull()        do { ODCONAbits.ODCA1 = 0; } while(0)
#define POT2_SetOpenDrain()       do { ODCONAbits.ODCA1 = 1; } while(0)
#define POT2_SetAnalogMode()      do { ANSELAbits.ANSELA1 = 1; } while(0)
#define POT2_SetDigitalMode()     do { ANSELAbits.ANSELA1 = 0; } while(0)

// get/set BOTON aliases
#define BOTON_TRIS                 TRISAbits.TRISA3
#define BOTON_LAT                  LATAbits.LATA3
#define BOTON_PORT                 PORTAbits.RA3
#define BOTON_WPU                  WPUAbits.WPUA3
#define BOTON_OD                   ODCONAbits.ODCA3
#define BOTON_ANS                  ANSELAbits.ANSELA3
#define BOTON_SetHigh()            do { LATAbits.LATA3 = 1; } while(0)
#define BOTON_SetLow()             do { LATAbits.LATA3 = 0; } while(0)
#define BOTON_Toggle()             do { LATAbits.LATA3 = ~LATAbits.LATA3; } while(0)
#define BOTON_GetValue()           PORTAbits.RA3
#define BOTON_SetDigitalInput()    do { TRISAbits.TRISA3 = 1; } while(0)
#define BOTON_SetDigitalOutput()   do { TRISAbits.TRISA3 = 0; } while(0)
#define BOTON_SetPullup()          do { WPUAbits.WPUA3 = 1; } while(0)
#define BOTON_ResetPullup()        do { WPUAbits.WPUA3 = 0; } while(0)
#define BOTON_SetPushPull()        do { ODCONAbits.ODCA3 = 0; } while(0)
#define BOTON_SetOpenDrain()       do { ODCONAbits.ODCA3 = 1; } while(0)
#define BOTON_SetAnalogMode()      do { ANSELAbits.ANSELA3 = 1; } while(0)
#define BOTON_SetDigitalMode()     do { ANSELAbits.ANSELA3 = 0; } while(0)

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