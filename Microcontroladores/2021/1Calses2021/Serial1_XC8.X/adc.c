
#include <xc.h>
#include "adc.h"
#include "misdefiniciones.h"

void adc_init(){
    ADCON1 = 0B11110000;
    
    ANSELAbits.ANSA4 = 1;//pin A4 como entrada analogica
    ANSELBbits.ANSB0 = 1;
    
    
    ADCON0bits.ADON = 0;
    ADCON0bits.ADCS = 0; //0 = source clock is Fosc, 1 = source clock is FRC (FRC es un oscilador dedicado para el ADC)
                            //FRC no hay nececidad de calcular tad
    ADCON0bits.ADFRM = 1;   //1 = Justificado a la derecha, pag332 y 358-9
    
    //Formula para calcular el divisor de reloj: //14*TAD+2Tcy 
    //14*TAD+2Tcy           ,si Fosc = 32Mhz,  1Tcy = 125nS (1 ciclo de instruccion)
    //1TAD debe ser >= a 1uS pero maximo    9uS,
    //2Tcy = 250nS cuando fosc=32Mhz
    //si fosc/30 = 32Mhz/30 = 937.5ns, es menor a 1uS, pr lo tanto se selecciona
    //1/(32Mhz/32) = 1uS, por lo tanto hay que seleccionar fosc/32 y ponerlo en ADCLK
    //1/(32Mhz/34) = 1.0625 uS
    //1/(32Mhz/40) = 1.25 uS
    
    //ADCLK = 0x0F; //debe de ser un numero entre 0 y 63 en decimal, o de 0h hasta 3fh ADC clock divider pag353
    ADCLK = 0x12; //debe de ser un numero entre 0 y 63 en decimal, o de 0h hasta 3fh ADC clock divider pag353
        ADREF = 0;          //ref- conecatada a GND, ref+ conectada a VDD pag353
    ADCON0bits.ADGO = 1; //Se enciende el ADC
}

uint16_t Leer_adc(uint8_t pin){
    // se selecciona el canal A/D 
    ADPCH = pin;            //debe ser un numero del 0 al 63, o del 0x00 al 0x3F
    // Se enciende el modulo ADC 
    ADCON0bits.ADON = 1;
    //Se deshabilita el modo continuo
    ADCON0bits.ADCONT = 0;    
    // Se inicia la conversion
    ADCON0bits.ADGO = 1;
    
    // instrucion nop extra requeria; ver rev. A2 errata: 
    //https://ww1.microchip.com/downloads/en/DeviceDoc/PIC16(L)F18855-18875-Silicon-Errata-and-Datasheet-Clarification-80000669G.pdf 
    NOP();   
    // Se espera hasta que la conversion termine
    while (ADCON0bits.ADGO){}  
    
    // Conversion terminada, se regresa el resultado
    return ((uint16_t)((ADRESH << 8) + ADRESL));
    //return ADRES;
    
    
}
