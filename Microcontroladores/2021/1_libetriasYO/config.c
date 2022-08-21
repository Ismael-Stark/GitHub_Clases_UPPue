//SECCION 25 PAG 287

// CONFIG1L
#include "config.h"
#pragma config PLLDIV = 2
#pragma config CPUDIV = OSC1_PLL2, USBDIV = 2 
#pragma config FOSC = HSPLL_HS, FCMEN = OFF, IESO = OFF
// CONFIG2L
#pragma config PWRT = OFF       // Power-up Timer Enable bit (PWRT disabled)
#pragma config BOR = ON         // Brown-out Reset Enable bits (Brown-out Reset enabled in hardware only (SBOREN is disabled))
#pragma config BORV = 3         // Brown-out Reset Voltage bits (Minimum setting 2.05V)
#pragma config VREGEN = OFF     // USB Voltage Regulator Enable bit (USB voltage regulator disabled)
// CONFIG2H
#pragma config WDT = OFF, WDTPS = 32768    // Watchdog Timer Postscale Select bits (1:32768)
// CONFIG3H
#pragma config CCP2MX = ON      // CCP2 MUX bit (CCP2 input/output is multiplexed with RC1)
#pragma config PBADEN = ON      // PORTB A/D Enable bit (PORTB<4:0> pins are configured as analog input channels on Reset)
#pragma config LPT1OSC = OFF    // Low-Power Timer 1 Oscillator Enable bit (Timer1 configured for higher power operation)
#pragma config MCLRE = ON       // MCLR Pin Enable bit (MCLR pin enabled; RE3 input pin disabled)
// CONFIG4L
#pragma config STVREN = ON, LVP = ON, ICPRT = OFF, XINST = OFF      // Extended Instruction Set Enable bit (Instruction set extension and Indexed Addressing mode disabled (Legacy mode))
// CONFIG5L
#pragma config CP0 = OFF, CP1 = OFF, CP2 = OFF, CP3 = OFF        // Code Protection bit (Block 3 (006000-007FFFh) is not code-protected)
// CONFIG5H
#pragma config CPB = OFF, CPD = OFF        // Data EEPROM Code Protection bit (Data EEPROM is not code-protected)
// CONFIG6L
#pragma config WRT0 = OFF, WRT1 = OFF, WRT2 = OFF, WRT3 = OFF       // Write Protection bit (Block 3 (006000-007FFFh) is not write-protected)
// CONFIG6H
#pragma config WRTC = OFF, WRTB = OFF, WRTD = OFF       // Data EEPROM Write Protection bit (Data EEPROM is not write-protected)
// CONFIG7L
#pragma config EBTR0 = OFF, EBTR1 = OFF, EBTR2 = OFF, EBTR3 = OFF      // Table Read Protection bit (Block 3 (006000-007FFFh) is not protected from table reads executed in other blocks)
// CONFIG7H
#pragma config EBTRB = OFF      // Boot Block Table Read Protection bit (Boot block (000000-0007FFh) is not protected from table reads executed in other blocks)