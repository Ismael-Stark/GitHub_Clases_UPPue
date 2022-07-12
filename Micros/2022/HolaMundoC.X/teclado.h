
#ifndef XC_teclado_H
#define	XC_teclado_H

#include <xc.h> // include processor files - each processor file is guarded.
#include "main.h"

// TODO Insert appropriate #include <>

// TODO Insert C++ class definitions if appropriate

// TODO Insert declarations

// Comment a function and leverage automatic documentation with slash star star
/**
    <p><b>Function prototype:</b></p>
  
    <p><b>Summary:</b></p>

    <p><b>Description:</b></p>

    <p><b>Precondition:</b></p>

    <p><b>Parameters:</b></p>

    <p><b>Returns:</b></p>

    <p><b>Example:</b></p>
    <code>
 
    </code>

    <p><b>Remarks:</b></p>
 */
// TODO Insert declarations or function prototypes (right here) to leverage 
// live documentation

#ifdef	__cplusplus
extern "C" {
#endif /* __cplusplus */
    
    //Filas se conectan al puerto A
    #define X_1     LATAbits.LATA0// RB0
    #define X_2     LATAbits.LATA1// RB1
    #define X_3     LATAbits.LATA2//RB2
    #define X_4     LATAbits.LATA3//RB3
    //Columnas se conectan al puerto B
    #define Y_1     PORTBbits.RB1//RB4
    #define Y_2     PORTBbits.RB2//RB5
    #define Y_3     PORTBbits.RB3//RB6
    #define Y_4     PORTBbits.RB4//RB7

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

    
    void teclado_init();
    uint8_t teclado_get();
    uint8_t teclado_scanner();

#ifdef	__cplusplus
}
#endif /* __cplusplus */

#endif	/* XC_HEADER_TEMPLATE_H */

