#ifndef XC_timer3_H
#define	XC_timer3_H

#include <xc.h>
//#include "..\1_libetriasYO\config.h"
//#include "config.h"
#include <stdint.h>

//typedef unsigned short    uint16_t;
//typedef unsigned char     uint8_t;

#define T3_DISABLED         0
#define T3_INTERNAL         0x00
#define T3_EXTERNAL         0x01
#define T3_EXTERNAL_SYNC    0x01

#define T3_CLK_OUT          1
#define T3_NOCLK_OUT        0

#define T3_DIV_BY_1         0
#define T3_DIV_BY_2         1
#define T3_DIV_BY_4         2
#define T3_DIV_BY_8         3

#define T3_CCP1_TO_2        0x48
#define T3_CCP2             0x8

/*
1.- TEMPORIZADOR: Este modo se determina escribiendo un ?0? lógico en el bit TMR1CS
 * del registro T1CON, esto permitirá que los incrementos del registro TMR1
 * sea en cada ciclo de instrucción interna (Fosc/4).
 * 
2.- CONTADOR ASÍNCRONO: Este modo se determina escribiendo un ?1? lógico
 * en los bits TMR1CS y T1SYNC del registro T1CON, esto permitirá que
 * los incrementos del registro TMR1 sea en cada flanco de subida de
 * la entrada de reloj externo por el pin RC0/T13CKI de forma asíncrona.
 * 
3.- CONTADOR SÍNCRONO: Este modo se determina escribiendo un ?1? lógico
 * en el bit TMR1CS y un ?0? lógico en el bit T1SYNC, ambos en el registro
 * T1CON, esto permitirá que los incrementos del registro TMR1 sea en cada
 * flanco de subida de la entrada de reloj externo por el pin RC0/T13CKI y
 * de forma síncrona. Cabe resaltar que para que se sincronice el reloj externo
 * con el interno es necesario 2 ciclos de reloj Interno (Fosc/4).
 * 
La Interrupción por desbordamiento es para los 3 modos, esto ocurre cuando el
registro TMR1 que es el encargado de llevar la cuenta, llega a su máximo valor(0xFFFF)
y automáticamente se desborda a (0x0000), en ese preciso instante el Flag de estado TMR1IF
se pone a ?1? y si está habilitado la Interrupción a través del bit TMR1IE
provocará una Interrupción por Desbordamiento.

*/

//void timer3_config(uint8_t source, uint8_t prescaler, uint8_t T1CLK){
void timer3_config(uint8_t prescaler){
    T3CONbits.RD16 = 1;     //1 = Enables register read/write of Timer1 in one 16-bit operation
                            //0 = Enables register read/write of Timer1 in two 8-bit operations
      
        T3CONbits.TMR3CS = 0;   //1 = External clock input from Timer1 oscillator or T13CKI (on the rising edge after the first falling edge)
                                //0 = Internal clock (FOSC/4)
        
        T3CONbits.T3CKPS = prescaler;
    
    T3CONbits.T3CCP1 = 0;
    T3CONbits.T3CCP2 = 0;
    PIR2bits.TMR3IF = 0;    //Flag del Timer 1 apagado
    IPR2bits.TMR3IP = 0;    // TMR1 Overflow Interrupt Priority bit, 1 = High priority, 0 = Low priority
    T3CONbits.TMR3ON = 1;   //1 = Enables Timer1 
}


void set_T3 (uint16_t set){
    TMR3 = set;
    //TMR1L = (uint8_t)(set&(0x00ff));
    //TMR1H = (uint16_t)(set>>8);
}

uint16_t get_T3(){
    return TMR3;
    //return ((TMR1H<<8)|TMR1L);
}






#endif	/* XC_HEADER_TEMPLATE_H */

