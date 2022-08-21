#ifndef XC_timer1_H
#define	XC_timer1_H

#include <xc.h>
//#include "..\1_libetriasYO\config.h"
#include "config.h"
#include <stdint.h>

//typedef unsigned short    uint16_t;
//typedef unsigned char     uint8_t;

#define T1_DISABLED         0
#define T1_INTERNAL         0x00
#define T1_EXTERNAL         0x01
#define T1_EXTERNAL_SYNC    0x01

#define T1_CLK_OUT          1
#define T1_NOCLK_OUT        0

#define T1_DIV_BY_1         0
#define T1_DIV_BY_2         1
#define T1_DIV_BY_4         2
#define T1_DIV_BY_8         3

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

void timer1_config(uint8_t source, uint8_t prescaler, uint8_t T1CLK){
    T1CONbits.RD16 = 1;     //1 = Enables register read/write of Timer1 in one 16-bit operation
                            //0 = Enables register read/write of Timer1 in two 8-bit operations
    if (source == T1_INTERNAL){
        T1CONbits.T1RUN = 0;
        
        T1CONbits.TMR1CS = 0;   //1 = External clock from RC0/T1OSO/T13CKI pin (on the rising edge)
                            //0 = Internal clock (FOSC/4)
        
    }else if (source == T1_EXTERNAL || source == T1_EXTERNAL_SYNC){
        T1CONbits.T1RUN = 1;    //1 = Device clock is derived from Timer1 oscillator para usarlo como RTC si queremos
                            //0 = Device clock is derived from another source
        T1CONbits.T1OSCEN = 0;  //1 = Timer1 oscillator is enabled, asi se activa para funcionar como RTC
        
        T1CONbits.T1SYNC = 1;   //When TMR1CS = 1: .... 1 = Do not synchronize external clock input, 0 = Synchronize external clock input
                            //When TMR1CS = 0:... This bit is ignored. Timer1 uses the internal clock when TMR1CS = 0.
        
        T1CONbits.TMR1CS = 1;   //1 = External clock from RC0/T1OSO/T13CKI pin (on the rising edge)
                            //0 = Internal clock (FOSC/4)
    }
    
    if (source == T1_EXTERNAL_SYNC){
        T1CONbits.T1SYNC = 0;   //When TMR1CS = 1: .... 1 = Do not synchronize external clock input, 0 = Synchronize external clock input
                            //When TMR1CS = 0:... This bit is ignored. Timer1 uses the internal clock when TMR1CS = 0.
    }
    
    if (T1CLK){
        T1CONbits.T1OSCEN = 1;  //1 = Timer1 oscillator is enabled, asi se activa para funcionar como RTC
        
    }
    
    
    
    T1CONbits.T1CKPS = prescaler;   // preescaler
    
    PIR1bits.TMR1IF = 0;    //Flag del Timer 1 apagado
    IPR1bits.TMR1IP = 0;    // TMR1 Overflow Interrupt Priority bit, 1 = High priority, 0 = Low priority
    
    T1CONbits.TMR1ON = 1;   //1 = Enables Timer1 
}
/*void timer1_config(){
    T1CONbits.RD16 = 1;     //1 = Enables register read/write of Timer1 in one 16-bit operation
                            //0 = Enables register read/write of Timer1 in two 8-bit operations
    T1CONbits.T1RUN = 0;    //1 = Device clock is derived from Timer1 oscillator para usarlo como RTC si queremos
                            //0 = Device clock is derived from another source
    
    T1CONbits.T1CKPS = 3;   // preescaler
    
    T1CONbits.T1OSCEN = 0;  //1 = Timer1 oscillator is enabled, asi se activa para funcionar como RTC
    
    T1CONbits.T1SYNC = 1;   //When TMR1CS = 1: .... 1 = Do not synchronize external clock input, 0 = Synchronize external clock input
                            //When TMR1CS = 0:... This bit is ignored. Timer1 uses the internal clock when TMR1CS = 0.
    
    T1CONbits.TMR1CS = 0;   //1 = External clock from RC0/T1OSO/T13CKI pin (on the rising edge)
                            //0 = Internal clock (FOSC/4)
    
    PIR1bits.TMR1IF = 0;    //Flag del Timer 1 apagado
    //PIE1bits.TMR1IE = 1;  // Permitir el desbordamiento del Timer1 para interrupcion
    IPR1bits.TMR1IP = 0;    // TMR1 Overflow Interrupt Priority bit, 1 = High priority, 0 = Low priority
    
    T1CONbits.TMR1ON = 1;   //1 = Enables Timer1 
}
*/

void set_T1 (uint16_t set){
    TMR1 = set;
    //TMR1L = (uint8_t)(set&(0x00ff));
    //TMR1H = (uint16_t)(set>>8);
}

uint16_t get_T1(){
    return TMR1;
    //return ((TMR1H<<8)|TMR1L);
}






#endif	/* XC_HEADER_TEMPLATE_H */

