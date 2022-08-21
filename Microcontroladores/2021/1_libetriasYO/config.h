#ifndef config
#define config

#include <xc.h> // include processor files - each processor file is guarded.  
#include "config.h"
#include <stdint.h>

//typedef unsigned short    uint16_t;
//typedef unsigned char     uint8_t;

#define _XTAL_FREQ 48000000L

#define delay_ms(x) __delay_ms(x)
#define true 1
#define TRUE 1
#define false 0 
#define FALSE 0

//***********************Interrupciones
#define highPInterrupts         INTCONbits.GIEH
#define lowPInterrupt           INTCONbits.GIEL     // Interrupciones baja prioridad

#define globalinterrupts        INTCONbits.GIE
#define peripheralInterrupt     INTCONbits.PEIE     // Interrupciones de perifericos
#define TMR0Interrupt           INTCONbits.TMR0IE   // Permitir el desbordamiento del Timer0 para interrupcion
#define TMR1Interrupt           PIE1bits.TMR1IE     // Permitir el desbordamiento del Timer1 para interrupcion
#define TMR2Interrupt           TMR2IE              // Permitir el desbordamiento del Timer2 para interrupcion
//#define TMR2Interrupt           PIE1bits.TMR2IE     // Permitir el desbordamiento del Timer2 para interrupcion
#define TMR3Interrupt           PIE2bits.TMR3IE     // Permitir el desbordamiento del Timer3 para interrupcion
#define RB0Interrupt            INTCONbits.INT0IE
#define RB1Interrupt            INTCON3bits.INT1IE
#define RB2Interrupt            INTCON3bits.INT2IE

//#define digitalWrite(a,b) output_bit(a,b) //MACRO

                     //se declaran donde son las salidas digitales
#define led1 LATEbits.LE0
#define led2 LATEbits.LE1
#define led3 LATEbits.LE2
#define led5 LATBbits.LB0
//!#define led6 pin_
                        //se declaran donde son las entradas digitales
#define btn0 PORTBbits.RB3
#define btn1 PORTBbits.RB4
#define btn2 PORTBbits.RB5
#define boot PORTDbits.RD3
                        //se declaran donde son las entradas Analogicas
#define lm35 0
#define pot1 1
#define pot2 2
#define pot3 3
#define ldr  5
//#define ldr  PIN_A4     //<<-----No mover nada y conectar fisicamente al pin_A5


///Para usar bootloader usb hacer esta configuracion en las opciones del proyectos
//En MPLAB X: 
//
//Paso 1) file>project properties>xc8 linker, en la opcion 
//"memory model", en "ROM ranges" poner:
//1000-7FFE, seleccionar ok
//
//Paso 2)file>project properties>xc8 linker, en la opcion
//"additional options", en "codeofset" poner 
//1000 seleccionar ok
//
//Paso 3)file>project properties>building 
//            seleccionar "Insert unprotected checksum".... Seleccionar ok              




 /** V E C T O R  R E M A P P I N G *******************************************/ 
 /*#pragma code high_vector=0x08 
 void interrupt_at_high_vector(void) 
 { 
     asm( "goto 0x1008");
 } 
 #pragma code low_vector=0x18 
 void interrupt_at_low_vector(void) 
 { 
     asm( "goto 0x1018"); 
 } */

#ifdef	__cplusplus
extern "C" {
#endif /* __cplusplus */

    // TODO If C++ is being used, regular C code needs function names to have C 
    // linkage so the functions can be used by the c code. 

#ifdef	__cplusplus
}
#endif /* __cplusplus */

#endif	/* XC_HEADER_TEMPLATE_H */

