#ifndef XC_timer2_H
#define	XC_timer2_H

#include <xc.h>
//#include "..\1_libetriasYO\config.h"
#include "config.h"
#include <stdint.h>

//typedef unsigned short    uint16_t;
//typedef unsigned char     uint8_t;

//#define T2_DISABLED         0
#define T2_DIV_BY_1         0
#define T2_DIV_BY_4         1
#define T2_DIV_BY_16        3

#define pwm1    0
#define pwm12   1
#define pwm2    3

void timer2_config(uint8_t prescaler,uint8_t PRR2, uint8_t postscaler){
    postscaler -= 1;
    
    T2CONbits.T2OUTPS0 = postscaler & 0x01;     //Timer2 Output Postscale Select bits
    T2CONbits.T2OUTPS1 = postscaler>>1 & 0x01;
    T2CONbits.T2OUTPS2 = postscaler>>2 & 0x01;
    T2CONbits.T2OUTPS3 = postscaler>>3 & 0x01;
    
    T2CONbits.T2CKPS = prescaler;       //Timer2 Clock Prescale Select bits
    PR2 = PRR2;
    
    PIR1bits.TMR2IF = 0;    //Flag del Timer 2 apagado
    IPR1bits.TMR2IP = 0;    // TMR2 Overflow Interrupt Priority bit, 1 = High priority, 0 = Low priority

    TMR2 = 0;
    T2CONbits.TMR2ON = 1;       //1 = Timer2 is on 
}

/*PWM Period = [(PR2) + 1] * 4 * TOSC * (TMR2 Prescale Value)

//PWM Duty Cycle = (CCPRXL:CCPXCON<5:4>) * TOSC * (TMR2 Prescale Value)
//duty esta en registro CCPRxL los 8bits altos
//y los dos bits faltantes(bajos) en  CCPxCON<5:4>

//PWM Resolution (max) = (log(Fosc/Fpwm*Prescaler) / log(2))  = bits
*/

/*The following steps should be taken when configuring
the CCP module for PWM operation:
1. Set  the  PWM  period  by  writing  to  the  PR2
register.
2. Set  the  PWM  duty  cycle  by  writing  to  the
CCPRxL register and CCPxCON<5:4> bits.
3. Make  the  CCPx pin  an  output  by  clearing  the
appropriate TRIS bit.
4. Set  the  TMR2  prescale  value,  then  enable
Timer2 by writing to T2CON.
5. Configure the CCPx module for PWM operation.*/

/*void pwm_config(uint8_t prr2,uint8_t pines){
    PR2 = prr2;
    
    CCPR1L = 0;         //parte baja del duty1
    CCP1CONbits.DC1B= 0;    //parte alta del duty1
    
    CCPR2L = 0;
    CCP2CONbits.DC2B= 0;
    
    TRISCbits.RC1 = 0; //Salida
    TRISCbits.RC2 = 0;
    T2CON = 0x03;   // Prescaler 16 Timer 2 OFF
    
    //CCP1CON = 0x0C;
    
    CCP1CONbits.CCP1M = 0xC;    //pag143
    CCP2CONbits.CCP2M = 0xC;
    //CCP1CONbits.
    
    TMR2 = 0;
    T2CONbits.TMR2ON = 1; //Timer 2 ON
}*/

void set_ccp1(){
    TRISCbits.RC2 = 0;
    CCPR1L = 0;         //parte alta del duty1
    CCP1CONbits.DC1B= 0;    //parte baja del duty1
    CCP1CONbits.CCP1M = 0xC;    //pag143
}

void set_ccp2(){
    TRISCbits.RC1 = 0;
    CCPR2L = 0;         //parte alta del duty1
    CCP2CONbits.DC2B= 0;    //parte baja del duty1
    CCP2CONbits.CCP2M = 0xC;    //pag143
}

void set_pwm1_duty(uint16_t duty){
    CCPR1L = (uint8_t)(duty>>2);         //parte alta del duty1, ej 0b1101011101>>2 => 0b11010111
    CCP1CONbits.DC1B= (uint8_t)duty&0b11;    //parte baja del duty1 0b1101011101&0b11 => 0b01
}

void set_pwm2_duty(uint16_t duty){
    CCPR2L = (uint8_t)(duty>>2);
    CCP2CONbits.DC2B= (uint8_t)duty&0b11;
}

void set_T2 (uint8_t set){
    TMR2 = set;
}

uint8_t get_T2(){
    return TMR2;
}






#endif	/* XC_HEADER_TEMPLATE_H */

