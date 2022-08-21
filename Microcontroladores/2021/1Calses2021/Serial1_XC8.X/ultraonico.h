
#ifndef ultraonico
#define	ultraonico
#include <xc.h>
#include <stdint.h>
#include "configuracion.h"
#include "misdefiniciones.h"

#define p_Trigger       LATBbits.LATB1  //para activar sensor
#define p_TriggerT      TRISBbits.TRISB1//para poner rb1 como salida

#define p_Echo          PORTBbits.RB2   //para leer el sensor
#define p_EchoT         TRISBbits.TRISB2//para poner rb2 como entrada

void hc_sr04_init();
uint8_t hc_sr04_lee_cm();
uint16_t hc_sr04_lee_mm();
        
        
#endif	/* XC_HEADER_TEMPLATE_H */

