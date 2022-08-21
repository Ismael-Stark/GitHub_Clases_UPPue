/*
© [2021] Microchip Technology Inc. and its subsidiaries.

    Subject to your compliance with these terms, you may use Microchip 
    software and any derivatives exclusively with Microchip products. 
    You are responsible for complying with 3rd party license terms  
    applicable to your use of 3rd party software (including open source  
    software) that may accompany Microchip software. SOFTWARE IS ?AS IS.? 
    NO WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS 
    SOFTWARE, INCLUDING ANY IMPLIED WARRANTIES OF NON-INFRINGEMENT,  
    MERCHANTABILITY, OR FITNESS FOR A PARTICULAR PURPOSE. IN NO EVENT 
    WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY 
    KIND WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF 
    MICROCHIP HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE 
    FORESEEABLE. TO THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP?S 
    TOTAL LIABILITY ON ALL CLAIMS RELATED TO THE SOFTWARE WILL NOT 
    EXCEED AMOUNT OF FEES, IF ANY, YOU PAID DIRECTLY TO MICROCHIP FOR 
    THIS SOFTWARE.
*/

#include <xc.h>
#include "../adcc.h"

// Set the ADCC module to the options selected in the user interface.
void ADCC_Initialize(void) {
    // ADON disabled; ADCONT disabled; ADCS FOSC; ADFM left; GO_nDONE stop; 
    ADCON0 = 0x0;
    // ADPPOL VSS; ADIPEN disabled; ADGPOL digital_low; ADDSEN disabled; 
    ADCON1 = 0x0;
    // ADPSIS ADRES; ADCRS 0x0; ADACLR disabled; ADMD Basic_mode; 
    ADCON2 = 0x0;
    // ADCALC First derivative of Single measurement; ADSOI ADGO not cleared; ADTMD disabled; 
    ADCON3 = 0x0;
    // ADACT disabled; 
    ADACT = 0x0;
    // ADACCH 0x0; 
    ADACCH = 0x0;
    // ADACCL 0x0; 
    ADACCL = 0x0;
    // ADRESL 0x0; 
    ADRESL = 0x0;
    // ADRESH 0x0; 
    ADRESH = 0x0;
    // ADAOV ACC or ADERR not Overflowed; 
    ADSTAT = 0x0;
    // ADCCS FOSC/32; 
    ADCLK = 0xF;
    // ADNREF VSS; ADPREF VDD; 
    ADREF = 0x0;
    // ADCAP Additional uC disabled; 
    ADCAP = 0x0;
    // ADPRE 0x0; 
    ADPRE = 0x0;
    // ADACQ 0x0; 
    ADACQ = 0x0;
    // CHS ANA0; 
    ADPCH = 0x0;
    // ADRPT 0x0; 
    ADRPT = 0x0;
    // ADLTHL 0x0; 
    ADLTHL = 0x0;
    // ADLTHH 0x0; 
    ADLTHH = 0x0;
    // ADUTHL 0x0; 
    ADUTHL = 0x0;
    // ADUTHH 0x0; 
    ADUTHH = 0x0;
    // ADSTPTL 0x0; 
    ADSTPTL = 0x0;
    // ADSTPTH 0x0; 
    ADSTPTH = 0x0;
}
