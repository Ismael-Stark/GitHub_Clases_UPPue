


#ifndef CONFIG_H
#define	CONFIG_H

#include <xc.h> // include processor files - each processor file is guarded.  
#include <pic18f57q84.h>
#include "Fuses.h"
#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#define _XTAL_FREQ 10000000UL// unsigned Long 32 bits
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

    // TODO If C++ is being used, regular C code needs function names to have C 
    // linkage so the functions can be used by the c code. 
    #define led_on() LATF = LATF & ~(1<<3); // mandar un 0 a la salida(encienden led)
    #define led_off() LATF = LATF | (1<<3);//mandar un 1 a la salida(apagan led)
    #define led_toogle() LATF = LATF ^ (1<<3);

    #define led2_off() LATF = LATF & ~(1<<2); // mandar un 0 a la salida(encienden led)
    #define led2_on() LATF = LATF | (1<<2);//mandar un 1 a la salida(apagan led)
    #define led2_toogle() LATF = LATF ^ (1<<2);
    
    void init_osc(void);
    void pin_init(void);

#ifdef	__cplusplus
}
#endif /* __cplusplus */

#endif	/* XC_HEADER_TEMPLATE_H */
