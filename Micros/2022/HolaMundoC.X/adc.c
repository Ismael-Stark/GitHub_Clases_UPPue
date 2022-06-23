#include "adc.h"

void adc_init(){
    ADCON0  = ADCON0 & ~(1<<7 | 1<<4 );//ADCapagado,clock por FOSC
    ADCON0  = ADCON0 |(1<<2);//salida adc justificada a la derecha
    ADCON1   = ADCON1 |(1<<7);//CHOLD CORTO CIRCUITO A VSS
    ADCON2 = ADCON2 & ~(7<<0 );//MODO BASICO
    ADCLK = ADCLK |(16<<0);// DIVISION/32 PARA SELECCIONAR 32Mhz/32 = 1Mhz  = 1uS
    //ADREF = 0;
    ADREF = ADREF & ~(1<<4 );//VREF- A gnd
    ADREF = ADREF & ~(3<<0 );//vREF+ A vdd
    
    //ADREF = ADREF | (3<<0 );//vREF+ A VR_bUFFER
    ADPCH = 4; //PINA4 COMO CANAL SELECCIONADO(PUEDE SER CAMBIADO DESPUES)
    ADCAP = 0;
}

uint16_t adc_read(uint8_t pin){
    ADPCH = pin;                //selecciono canal
    ADCON0 = ADCON0 |(1<<7);    //encender adc
    ADCON0 = ADCON0 &~(1<<6);   //habilitar modo continuo
    ADCON0 = ADCON0 |(1<<0);    //inicia la conversion
    // instrucion nop extra requeria; ver rev. A2 errata: 
    //https://ww1.microchip.com/downloads/en/DeviceDoc/PIC16(L)F18855-18875-Silicon-Errata-and-Datasheet-Clarification-80000669G.pdf 
    NOP();
    // Se espera hasta que la conversion termine
    while ((ADCON0&0x01)==1){}
    
    // Conversion terminada, se regresa el resultado
    return ((uint16_t)((ADRESH << 8) + ADRESL));    
}