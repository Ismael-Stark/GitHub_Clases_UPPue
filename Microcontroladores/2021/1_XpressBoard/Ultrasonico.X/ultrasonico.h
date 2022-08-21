#ifndef ultrasonico
#define ultrasonico
//en el archivo .h
//se definen los prototipos de funciones
#include <stdint.h>
#include "mcc_generated_files/mcc.h"
#define pin_echo        PORTBbits.RB1		//pulso que se recibe del sensor
#define pin_echo_t      TRISBbits.TRISB1

#define pin_trigger     LATBbits.LATB0		//pulso que se envia al sensor
#define pin_trigger_t   TRISBbits.TRISB0

//PORTx registers, sirve para Leer la entrada a un pin o a todo un puerto
//LATx registers, sirven para obtener una salida logica(0,1), en un pin o en todo un puerto
//TRISx registers, sirve para declarar entras/salidas: 1 para entrada, 0 para salida
//#define pin_trigger     triger_LAT
//#define pin_echo        echo_GetValue()


void hc_sr04_init(void);
float hc_sr04_m(void);
float hc_sr04_cm(void);
uint16_t hc_sr04_mm(void);


#endif