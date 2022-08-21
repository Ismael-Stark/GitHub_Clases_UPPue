
#ifndef dht11
#define	dht11

#include <xc.h> // include processor files - each processor file is guarded.  
#include <stdint.h>
#include "configuracion.h"
#include "misdefiniciones.h"

#define dht11T  TRISBbits.TRISB3    //para poner al pin como E/s
#define dht11L  LATBbits.LATB3      //para activar al sensor
#define dht11P  PORTBbits.RB3       //para leer el sensor
#define dht11_noAnalog  ANSELBbits.ANSB3 =0// ANSELB = 0;

uint8_t dht_dat[5],GlobalErr=0;

void dht11_init();
void dht11_read(uint8_t *tem, uint8_t *hum);
uint8_t leer_dht_dat();//funcion de captura de datos del sensor


#endif	/* XC_HEADER_TEMPLATE_H */

