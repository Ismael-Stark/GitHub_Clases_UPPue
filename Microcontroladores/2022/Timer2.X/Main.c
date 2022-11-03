///cp ${ImagePath} X:/

#include <xc.h>
#include <pic16f18855.h>
#include "fuses.h"
#include "main.h"
#include "misVar.h"//variables globales para todo el proyecto
#include "uart.h"
#include "interrupt.h"



//tarea, activar interrupciones del timer1
//y hacer parpadear el led dentro de las interrupciones

/*
 * corregir el problema del servo cuando enviamos el comando por puerto serial
 * para mover el servo y los ticks son mayores a 155 
 * o menor a 31
 */


void port_init();

void main(void) {
    port_init();
    
    enable_Global_interrupt();
    enable_Peripheral_interrupt();

    printf("Holaaa\n\n");
  
    
    __delay_ms(1000);
    //eeprom_write(0,26);
    //eprom = eeprom_read(10);
    
    while(1)
    {
        
        
    }
    return;
}


void port_init(){
    
    ANSELA = 0;
    LATA=0;
    PORTA =0;
    TRISA = 0b11110000;
    //TRISA = TRISA & ~(1<<0 | 1<<1 | 1<<2 | 1<<3);//A0 - A3 COMO SALIDA
    //TRISA = TRISA | (1<<5); //A5 ENTRADA
    ANSELA = 0;
    ANSELA = ANSELA | (1<<4);//PIN A4 COMO ENTRADA ANALOGICA
    
    LATB=0;
    PORTB =0;
    TRISB = TRISA | (1<<0);
    ANSELB = 0;
    ANSELB = ANSELB | (1<<0);//rb0 entrada analogica
    
    TRISC = 0b10;
    ANSELC = 0;
    TRISC = TRISC  | (1<<4 |1<<3 );//ambos salidas para poner como "colector abierto" para i2c

    serial_Interrupt_init(9600);
    

}
