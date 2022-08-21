/**
  @Generated CCL Source File

  @Company:
    Microchip Technology Inc.

  @File Name:
    config_bits.c

  @Summary:
    This is the config_bits.c file generated using CCL

  @Description:
    This header file provides implementations for driver APIs for all modules selected in the GUI.
    Generation Information : 
        Driver Version    :  2.00
    The generated drivers are tested against the following:
        Compiler          :  XC8 v2.20
        MPLAB             :  MPLAB X 5.40
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

// Configuration bits: selected in the GUI

//CONFIG1
#pragma config FEXTOSC = ECH     // External Oscillator mode selection bits->EC above 8MHz; PFM set to high power
#pragma config RSTOSC = EXT1X     // Power-up default value for COSC bits->EXTOSC operating per FEXTOSC bits
#pragma config CLKOUTEN = OFF     // Clock Out Enable bit->CLKOUT function is disabled; i/o or oscillator function on OSC2
#pragma config CSWEN = ON     // Clock Switch Enable bit->Writing to NOSC and NDIV is allowed
#pragma config FCMEN = ON     // Fail-Safe Clock Monitor Enable bit->FSCM timer enabled

//CONFIG2
#pragma config MCLRE = ON     // Master Clear Enable bit->MCLR pin is Master Clear function
#pragma config PWRTE = OFF     // Power-up Timer Enable bit->PWRT disabled
#pragma config LPBOREN = OFF     // Low-Power BOR enable bit->ULPBOR disabled
#pragma config BOREN = ON     // Brown-out reset enable bits->Brown-out Reset Enabled, SBOREN bit is ignored
#pragma config BORV = LO     // Brown-out Reset Voltage Selection->Brown-out Reset Voltage (VBOR) set to 1.9V on LF, and 2.45V on F Devices
#pragma config ZCD = OFF     // Zero-cross detect disable->Zero-cross detect circuit is disabled at POR.
#pragma config PPS1WAY = ON     // Peripheral Pin Select one-way control->The PPSLOCK bit can be cleared and set only once in software
#pragma config STVREN = ON     // Stack Overflow/Underflow Reset Enable bit->Stack Overflow or Underflow will cause a reset
#pragma config DEBUG = OFF     // Background Debugger->Background Debugger disabled

//CONFIG3
#pragma config WDTCPS = WDTCPS_31     // WDT Period Select bits->Divider ratio 1:65536; software control of WDTPS
#pragma config WDTE = OFF     // WDT operating mode->WDT Disabled, SWDTEN is ignored
#pragma config WDTCWS = WDTCWS_7     // WDT Window Select bits->window always open (100%); software control; keyed access not required
#pragma config WDTCCS = SC     // WDT input clock selector->Software Control

//CONFIG4
#pragma config WRT = OFF     // UserNVM self-write protection bits->Write protection off
#pragma config SCANE = available     // Scanner Enable bit->Scanner module is available for use
#pragma config LVP = ON     // Low Voltage Programming Enable bit->Low Voltage programming enabled. MCLR/Vpp pin function is MCLR.

//CONFIG5
#pragma config CP = OFF     // UserNVM Program memory code protection bit->Program Memory code protection disabled
#pragma config CPD = OFF     // DataNVM code protection bit->Data EEPROM code protection disabled

