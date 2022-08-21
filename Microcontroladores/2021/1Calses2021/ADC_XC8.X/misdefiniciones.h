#ifndef MISDEFINICIONES
#define MISDEFINICIONES
#include <stdint.h>
//#define _XTAL_FREQ 32000000L

#define delay_ms(x)     __delay_ms(x)
#define delay_us(x)     __delay_us(x)
typedef int8_t         int8;
typedef uint8_t         byte;
typedef int16_t        int16;
typedef int32_t        int32;

#define led0 LATAbits.LATA0
#define led1 LATAbits.LATA1
#define led2 LATAbits.LATA2
#define led3 LATAbits.LATA3
#define led0 LATAbits.LATA0
//#define pot  PORTAbits.RA4
#define pot  0x04               //debe ser asi ver pagina 354 de la hoja de datos
#define sw1  PORTAbits.RA5

#define buzzer  LATCbits.LATC7
#define lm35  0x08


#endif