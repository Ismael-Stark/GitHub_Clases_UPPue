#include "adc.h"

void adc_init(){
    ADCON0  = ADCON0 & ~(1<<7 | 1<<4 );//ADCapagado,clock por FOSC
    ADCON0  = ADCON0 |(1<<2);//salida adc justificada a la derecha
    ADCON1   = ADCON1 |(1<<7);//CHOLD CORTO CIRCUITO A VSS
    ADCON2 = ADCON2 & ~(7<<0 );//MODO BASICO
    
    //Formula para calcular el divisor de reloj: //14*TAD+2Tcy 
    //14*TAD+2Tcy           ,si Fosc = 32Mhz,  1Tcy = 125nS (1 ciclo de instruccion)
    //1TAD debe ser >= a 1uS pero maximo    9uS,
    //2Tcy = 250nS cuando fosc=32Mhz
    //si fosc/30 = 32Mhz/30 = 937.5ns, es menor a 1uS, pr lo tanto se selecciona
    //1/(32Mhz/32) = 1uS, por lo tanto hay que seleccionar fosc/32 y ponerlo en ADCLK
    //1/(32Mhz/34) = 1.0625 uS
    //1/(32Mhz/40) = 1.25 uS
    ADCLK = ADCLK |(16<<0);// DIVISION/32 PARA SELECCIONAR 32Mhz/32 = 1Mhz  = 1uS
    //ADREF = 0;
    ADREF = ADREF & ~(1<<4 );//VREF- A gnd
    ADREF = ADREF & ~(3<<0 );//vREF+ A vdd
    
    //ADREF = ADREF | (3<<0 );//vREF+ A VR_bUFFER
    ADPCH = 4; //PINA4 COMO CANAL SELECCIONADO(PUEDE SER CAMBIADO DESPUES, pag354)
    ADCAP = 0;
}

uint16_t adc_read(uint8_t pin){
    ADPCH = pin;                //selecciono canal
    ADCON0 = ADCON0 |(1<<7);    //encender adc ADON
    ADCON0 = ADCON0 &~(1<<6);   //habilitar modo continuo ADCONT
    ADCON0 = ADCON0 |(1<<0);    //inicia la conversion ADGO
    // instrucion nop extra requeria; ver rev. A2 errata: 
    //https://ww1.microchip.com/downloads/en/DeviceDoc/PIC16(L)F18855-18875-Silicon-Errata-and-Datasheet-Clarification-80000669G.pdf 
    NOP();
    // Se espera hasta que la conversion termine .ADGO
    while ((ADCON0&0x01)==1){}
    
    // Conversion terminada, se regresa el resultado
    return ((uint16_t)((ADRESH << 8) + ADRESL));    
}