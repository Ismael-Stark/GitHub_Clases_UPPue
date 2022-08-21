#include "ultraonico.h"
#include <xc.h>
#include <stdint.h>


//#define p_Trigger       LATBbits.LATB1  //para activar sensor
//#define p_TriggerT      TRISBbits.TRISB1//para poner rb1 como salida
//
//#define p_Echo          PORTBbits.RB2   //para leer el sensor
//#define p_EchoT         TRISBbits.TRISB2//para poner rb2 como entrada

void hc_sr04_init(){
    p_TriggerT = 0;
    p_EchoT = 1;
    ANSELBbits.ANSB1 = 0;   //pines rb1 y rb2, I/O digitales
    ANSELBbits.ANSB2 = 0;
    p_Trigger = 0;
}

uint8_t hc_sr04_lee_cm(){
    uint8_t contador = 0;
    p_Trigger = 1;      //se pone en 1 el pin trigger por 10uS como lo indica la hoja de datos
    __delay_us(10);
    p_Trigger = 0;
    
    while(p_Echo ==0){}// esperamos flanco de subida para empezar a leer la distancia
    
    while(p_Echo ==1){  //una vez recibido el pulso del sensor se empiza a contar el tiempo
        contador++;
        __delay_us(58);
    }
    return (contador);
}

uint16_t hc_sr04_lee_mm(){
    uint16_t contador = 0;
    p_Trigger = 1;      //se pone en 1 el pin trigger por 10uS como lo indica la hoja de datos
    __delay_us(10);
    p_Trigger = 0;
    
    while(p_Echo ==0){}// esperamos flanco de subida para empezar a leer la distancia
    
    while(p_Echo ==1){  //una vez recibido el pulso del sensor se empiza a contar el tiempo
        contador++;
        __delay_us(5);
    }
    return (contador);
}