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

// get/set VELETA aliases
#define VELETA_TRIS                 TRISAbits.TRISA0
#define VELETA_LAT                  LATAbits.LATA0
#define VELETA_PORT                 PORTAbits.RA0
#define VELETA_WPU                  WPUAbits.WPUA0
#define VELETA_OD                   ODCONAbits.ODCA0
#define VELETA_ANS                  ANSELAbits.ANSELA0
#define VELETA_SetHigh()            do { LATAbits.LATA0 = 1; } while(0)
#define VELETA_SetLow()             do { LATAbits.LATA0 = 0; } while(0)
#define VELETA_Toggle()             do { LATAbits.LATA0 = ~LATAbits.LATA0; } while(0)
#define VELETA_GetValue()           PORTAbits.RA0
#define VELETA_SetDigitalInput()    do { TRISAbits.TRISA0 = 1; } while(0)
#define VELETA_SetDigitalOutput()   do { TRISAbits.TRISA0 = 0; } while(0)
#define VELETA_SetPullup()          do { WPUAbits.WPUA0 = 1; } while(0)
#define VELETA_ResetPullup()        do { WPUAbits.WPUA0 = 0; } while(0)
#define VELETA_SetPushPull()        do { ODCONAbits.ODCA0 = 0; } while(0)
#define VELETA_SetOpenDrain()       do { ODCONAbits.ODCA0 = 1; } while(0)
#define VELETA_SetAnalogMode()      do { ANSELAbits.ANSELA0 = 1; } while(0)
#define VELETA_SetDigitalMode()     do { ANSELAbits.ANSELA0 = 0; } while(0)

// get/set ANEMOMETRO aliases
#define ANEMOMETRO_TRIS                 TRISAbits.TRISA1
#define ANEMOMETRO_LAT                  LATAbits.LATA1
#define ANEMOMETRO_PORT                 PORTAbits.RA1
#define ANEMOMETRO_WPU                  WPUAbits.WPUA1
#define ANEMOMETRO_OD                   ODCONAbits.ODCA1
#define ANEMOMETRO_ANS                  ANSELAbits.ANSELA1
#define ANEMOMETRO_SetHigh()            do { LATAbits.LATA1 = 1; } while(0)
#define ANEMOMETRO_SetLow()             do { LATAbits.LATA1 = 0; } while(0)
#define ANEMOMETRO_Toggle()             do { LATAbits.LATA1 = ~LATAbits.LATA1; } while(0)
#define ANEMOMETRO_GetValue()           PORTAbits.RA1
#define ANEMOMETRO_SetDigitalInput()    do { TRISAbits.TRISA1 = 1; } while(0)
#define ANEMOMETRO_SetDigitalOutput()   do { TRISAbits.TRISA1 = 0; } while(0)
#define ANEMOMETRO_SetPullup()          do { WPUAbits.WPUA1 = 1; } while(0)
#define ANEMOMETRO_ResetPullup()        do { WPUAbits.WPUA1 = 0; } while(0)
#define ANEMOMETRO_SetPushPull()        do { ODCONAbits.ODCA1 = 0; } while(0)
#define ANEMOMETRO_SetOpenDrain()       do { ODCONAbits.ODCA1 = 1; } while(0)
#define ANEMOMETRO_SetAnalogMode()      do { ANSELAbits.ANSELA1 = 1; } while(0)
#define ANEMOMETRO_SetDigitalMode()     do { ANSELAbits.ANSELA1 = 0; } while(0)

// get/set channel_ANA2 aliases
#define channel_ANA2_TRIS                 TRISAbits.TRISA2
#define channel_ANA2_LAT                  LATAbits.LATA2
#define channel_ANA2_PORT                 PORTAbits.RA2
#define channel_ANA2_WPU                  WPUAbits.WPUA2
#define channel_ANA2_OD                   ODCONAbits.ODCA2
#define channel_ANA2_ANS                  ANSELAbits.ANSELA2
#define channel_ANA2_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define channel_ANA2_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define channel_ANA2_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define channel_ANA2_GetValue()           PORTAbits.RA2
#define channel_ANA2_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define channel_ANA2_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define channel_ANA2_SetPullup()          do { WPUAbits.WPUA2 = 1; } while(0)
#define channel_ANA2_ResetPullup()        do { WPUAbits.WPUA2 = 0; } while(0)
#define channel_ANA2_SetPushPull()        do { ODCONAbits.ODCA2 = 0; } while(0)
#define channel_ANA2_SetOpenDrain()       do { ODCONAbits.ODCA2 = 1; } while(0)
#define channel_ANA2_SetAnalogMode()      do { ANSELAbits.ANSELA2 = 1; } while(0)
#define channel_ANA2_SetDigitalMode()     do { ANSELAbits.ANSELA2 = 0; } while(0)

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

// get/set DHT22 aliases
#define DHT22_TRIS                 TRISDbits.TRISD3
#define DHT22_LAT                  LATDbits.LATD3
#define DHT22_PORT                 PORTDbits.RD3
#define DHT22_WPU                  WPUDbits.WPUD3
#define DHT22_OD                   ODCONDbits.ODCD3
#define DHT22_ANS                  ANSELDbits.ANSELD3
#define DHT22_SetHigh()            do { LATDbits.LATD3 = 1; } while(0)
#define DHT22_SetLow()             do { LATDbits.LATD3 = 0; } while(0)
#define DHT22_Toggle()             do { LATDbits.LATD3 = ~LATDbits.LATD3; } while(0)
#define DHT22_GetValue()           PORTDbits.RD3
#define DHT22_SetDigitalInput()    do { TRISDbits.TRISD3 = 1; } while(0)
#define DHT22_SetDigitalOutput()   do { TRISDbits.TRISD3 = 0; } while(0)
#define DHT22_SetPullup()          do { WPUDbits.WPUD3 = 1; } while(0)
#define DHT22_ResetPullup()        do { WPUDbits.WPUD3 = 0; } while(0)
#define DHT22_SetPushPull()        do { ODCONDbits.ODCD3 = 0; } while(0)
#define DHT22_SetOpenDrain()       do { ODCONDbits.ODCD3 = 1; } while(0)
#define DHT22_SetAnalogMode()      do { ANSELDbits.ANSELD3 = 1; } while(0)
#define DHT22_SetDigitalMode()     do { ANSELDbits.ANSELD3 = 0; } while(0)

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

// get/set LED0 aliases
#define LED0_TRIS                 TRISFbits.TRISF3
#define LED0_LAT                  LATFbits.LATF3
#define LED0_PORT                 PORTFbits.RF3
#define LED0_WPU                  WPUFbits.WPUF3
#define LED0_OD                   ODCONFbits.ODCF3
#define LED0_ANS                  ANSELFbits.ANSELF3
#define LED0_SetHigh()            do { LATFbits.LATF3 = 1; } while(0)
#define LED0_SetLow()             do { LATFbits.LATF3 = 0; } while(0)
#define LED0_Toggle()             do { LATFbits.LATF3 = ~LATFbits.LATF3; } while(0)
#define LED0_GetValue()           PORTFbits.RF3
#define LED0_SetDigitalInput()    do { TRISFbits.TRISF3 = 1; } while(0)
#define LED0_SetDigitalOutput()   do { TRISFbits.TRISF3 = 0; } while(0)
#define LED0_SetPullup()          do { WPUFbits.WPUF3 = 1; } while(0)
#define LED0_ResetPullup()        do { WPUFbits.WPUF3 = 0; } while(0)
#define LED0_SetPushPull()        do { ODCONFbits.ODCF3 = 0; } while(0)
#define LED0_SetOpenDrain()       do { ODCONFbits.ODCF3 = 1; } while(0)
#define LED0_SetAnalogMode()      do { ANSELFbits.ANSELF3 = 1; } while(0)
#define LED0_SetDigitalMode()     do { ANSELFbits.ANSELF3 = 0; } while(0)

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