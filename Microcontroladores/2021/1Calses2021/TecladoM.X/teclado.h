/*
Estas librerias fueron escritas por: https://circuitdigest.com/microcontroller-projects/4x4-keypad-interfacing-with-pic16f877a
 * pero modificadas por mi para poder adaptarlas al nuevo XC8, dale like.
 * 
Youtube   ? https://www.youtube.com/channel/UCyocHq5iN-7DmFRPmLYJBcg?sub_confirmation=1
 * 
Instagram ? https://www.instagram.com/pictrance/
 * 
Facebook  ? https://www.facebook.com/groups/2427784587295489
Facebook  ? https://www.facebook.com/Proyectos-PIC-102477961454131
 * 
Telegram  ? https://t.me/PicTrance1
 * 
 * La libreria puede funcionar con dos puertos distintos sin necesidad de usar solamente el
 * Puerto B como comunmente se hace,
 * en este ejemplo se utiliza el puerto A y el Puerto B, para las Filas y columnas
 * Agosto 2021
*/

#ifndef KEYPAD_H
#define	KEYPAD_H

#include "mcc_generated_files/mcc.h"

//Filas se conectan al puerto A
#define X_1     LATAbits.LATA0// RB0
#define X_2     LATAbits.LATA1// RB1
#define X_3     LATAbits.LATA2//RB2
#define X_4     LATAbits.LATA3//RB3
//Columnas se conectan al puerto B
#define Y_1     PORTBbits.RB0//RB4
#define Y_2     PORTBbits.RB1//RB5
#define Y_3     PORTBbits.RB2//RB6
#define Y_4     PORTBbits.RB3//RB7

#define Keypad_PORT     PORTB
#define Keypad_LAT      LATA
    
#define Keypad_PORT_Direction   TRISB   
#define Keypad_LAT_Direction    TRISA

#define KBD_NUM_ROWS 4
#define KBD_NUM_COLS 4
const char KEYS[KBD_NUM_ROWS][KBD_NUM_COLS] =
     {{'1','2','3','A'},
      {'4','5','6','B'},
      {'7','8','9','C'},
      {'*','0','#','d'}};

void teclado_init (void);
char teclado_getc(void);
char keypad_scanner(void);

#endif	/* KEYPAD_H */