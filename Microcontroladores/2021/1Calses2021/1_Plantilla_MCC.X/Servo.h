// servo_pwm_232

// Ejemplo con un servo FUTABA S3003
// Alimentación y pulsos a 5V

// Cuadro de Tiempos :

//    Periodo 20 ms (Frecuencia 50 Hz)
//    Ancho Pulso minimo 0.5 ms
//    Ancho pulso medio  1.5 ms
//    Ancho pulso maximo 2.5 ms

//    TMR0 a 1:512 -> 1 RTCC cada 4.096 ms
//                -> 1 Tick cada 4.096 / 256 = 0.016 ms   = 16uS
//                -> 20 ms = (4 x RTCC completas) + (1 * RTCC - 30 ticks)
//                -> (5 x RTCC completas = 20.48mS), nos sobran 0.48mS = 480uS ->  480/16=30ticks

//    Ancho Pulso minimo 0.5 ms ->  31 ticks de TMR0
//    Ancho pulso medio  1.5 ms ->  93 ticks de TMR0
//    Ancho pulso maximo 2.5 ms -> 155 ticks de TMR0
#ifndef UnServo
#define	UnServo

#include <builtins.h>
#include <xc.h>
#include "mcc_generated_files/mcc.h"

#define PIN_SERVO1 LATCbits.LATC7

const uint8_t AJUSTE_FINO_DE_RTCC =  30;//para la quinta interrupcion
const uint8_t ticks_PULSO_MINIMO  =  31;//0°
const uint8_t ticks_PULSO_MEDIO   =  93;//90°
const uint8_t ticks_PULSO_MAXIMO  = 155;//180°

bool    flagRTCC   = 0;//para contar las 5 interrupciones completas
uint8_t contRTCC   = 0;//para contar 1 a 4 las interrupciones completas
bool    flagSERVO1 = 0;//para poner en 1 el pin del servo

uint8_t tSERVO1    = 55;// para poner lo grados del servo a mi gusto

char Keypress=0x00;

//void eco_servos(void);


#endif	/* XC_HEADER_TEMPLATE_H */

