
#ifndef DHT11
#define DHT11
#include "xc.h"
#include <stdint.h>
#include "mcc_generated_files/mcc.h"
#include "misdefiniciones.h"

#define delay_ms(x) __delay_ms(x)
#define delay_us(x) __delay_us(x)

#define dht11l  LATBbits.LATB3
#define dht11p  PORTBbits.RB3
#define dht_io  TRISBbits.TRISB3
#define dht11_noAnalog  ANSELBbits.ANSB3 =0// ANSELB = 0;

uint8_t dht_dat[5]; // Creo un array de tipo byte de 5 ya que asi en el programa principal podemos mostrar cada dato
//individualmente sin necesidad de punteros
//los datos obtenidos son en este orden: 
//dato 0= parte entera de la humedad
//dato1= parte decimal de la humedad
//dato2= parte entera de la temeperatura
//dato3= parte decimal de la temperatura
//dato4= dato de comprobacion para saber si la captura es correcta
uint8_t GlobalErr=0;

struct{
    uint8_t GlobalErr;
    uint8_t dato[5];
    uint8_t check_sum;
    uint8_t temperatura;
    uint8_t humedad;
}dht11;

void dht_init();//para iniciar el sensor
void leer_dht();//para comenzar la captura de datos el sensor
uint8_t leer_dht_dat();//funcion de captura de datos del sensor

#endif