#ifndef XC_timer0_H
#define	XC_timer0_H

#include <xc.h>
//#include "..\1_libetriasYO\config.h"
#include "config.h"
#include <stdint.h>

//typedef unsigned short    uint16_t;
//typedef unsigned char     uint8_t;



#define T0_INTERNAL   0
#define T0_EXTERNAL   1

#define T0_EXT_L_TO_H 0
#define T0_EXT_H_TO_L 1

#define T0_DIV_1      8
#define T0_DIV_2      0
#define T0_DIV_4      1
#define T0_DIV_8      2
#define T0_DIV_16     3
#define T0_DIV_32     4
#define T0_DIV_64     5
#define T0_DIV_128    6
#define T0_DIV_256    7

#define T0_OFF        0x80  

#define T0_8_BIT      1
#define T0_16_BIT      0

void timer0_config(uint8_t bits, uint8_t source, uint8_t prescaler){
    /*
    T0CONbits.T08BIT = 1;   // 1 = timer configurado a 8bits
    T0CONbits.T0CS = 0;     // 0 = selecciona reloj interno
    T0CONbits.PSA = 1;      //0= clk viene de preescaler, 1 = clk viene directo de Fosc/4
    T0CONbits.T0PS = 0;     //preescaler timer0, solo sirve si T0CONbits.PSA = 0;
    */
            
    T0CONbits.T08BIT = bits;   // 1 = timer configurado a 8bits
    T0CONbits.T0CS = source;     // 0 = selecciona reloj interno
    if (prescaler == 8){
        T0CONbits.PSA = 1;      //1 = timer0 viene directo clk no pasa por preescaler
    }else{
        T0CONbits.PSA = 0;      //0 = timer0 preescaler aactivaado, 
        T0CONbits.T0PS = prescaler;     //preescaler timer 0
    }
    //TMR0ON=0;
    INTCONbits.TMR0IF = 0; //Flag del Timer 0 apagado
    
    T0CONbits.TMR0ON = 1;   //1 = habilito timer 0
}

void set_T0 (uint16_t set){
    TMR0 = set;
    //TMR0L = (uint8_t)(set&(0x00ff));
    //TMR0H = (uint16_t)(set>>8);
}

uint16_t get_T0(){
    return TMR0;
    //return ((TMR0H<<8)|TMR0L);
}






#endif	/* XC_HEADER_TEMPLATE_H */

