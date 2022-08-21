#define PIN_SERVO1 LATCbits.LATC7

const uint8_t AJUSTE_FINO_DE_RTCC =  30;//para la quinta interrupcion, la incompleta
const uint8_t ticks_PULSO_MINIMO  =  31;//con esto se genera los 0.5mS para ir a 0°
const uint8_t ticks_PULSO_MEDIO   =  93;
const uint8_t ticks_PULSO_MAXIMO  = 155;

bool    flagRTCC   = 0; //las 5 interrupciones completas
uint8_t contRTCC   = 0;
bool    flagSERVO1 = 0;

uint8_t tSERVO1    = 155, valTIMER0;