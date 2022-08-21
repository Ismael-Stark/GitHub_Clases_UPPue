#include <xc.h>
#include "config.h"
//Pag 261 secc 21
/*1. Configure the A/D module: pag 265
• Configure analog pins, voltage reference and
digital I/O (ADCON1)
• Select A/D input channel (ADCON0)
• Select A/D acquisition time (ADCON2)
• Select A/D conversion clock (ADCON2)
• Turn on A/D module (ADCON0)
2. Configure A/D interrupt (if desired):
• Clear ADIF bit 
• Set ADIE bit 
• Set GIE bit 
3. Wait the required acquisition time (if required).
4. Start conversion:
• Set GO/DONE bit (ADCON0 register)*/


//primero Tenemos ADC de
// 10 bit -> 2^10= 1024, 12  bit 2^12, 8 bits 2^8
//El voltaje de referencia:
// 5v -> adc = 5/ 1023 = 4.8mV 
//si fuera para 3.3v -> adc = 3.3V/1023 = 3.22mV 

//20Mhz pero con pll a 48Mhz-> 1/48MHz = 20.8ns : Tosc

//////Select A/D acquisition time (ADCON2)  minimo = 2.45μs(pag264))
//The A/D conversion requires 11 TAD per 10-bit conversion.(p267)
// 1TAD > 0.7us(pag 400)
// 8Tosc -> 8*20.8ns =  166.4ns 
// 16Tosc -> 16*20.8ns = 332.8ns 
// 64Tosc -> 64*20.8ns = 1.33μs  : 1TAD            Este nos sirve
// 2.45μs < xTAD
////
//TACQ = 2*TAD = 2*1.33μs = 2.66us > 2.45us //cualquiera de estos2
//TACQ = 4*TAD = 4*1.33μs = 5.32us > 2.45us 
//

#define VSS_VDD     0x00
#define VSS_VREFP   0x01
#define VREFN_VDD   0x02
#define VREFN_VREFP 0x03

#define NO_ANALOGS   0x0F   // None
#define ALL_ANALOG   0x00   // A0 A1 A2 A3 A5 E0 E1 E2 B2 B3 B1 B4 B0     
#define AN0_TO_AN11  0x03   // A0 A1 A2 A3 A5 E0 E1 E2 B2 B3 B1 B4       
#define AN0_TO_AN10  0x04   // A0 A1 A2 A3 A5 E0 E1 E2 B2 B3 B1          
#define AN0_TO_AN9   0x05   // A0 A1 A2 A3 A5 E0 E1 E2 B2 B3             
#define AN0_TO_AN8   0x06   // A0 A1 A2 A3 A5 E0 E1 E2 B2                
#define AN0_TO_AN7   0x07   // A0 A1 A2 A3 A5 E0 E1 E2                   
#define AN0_TO_AN6   0x08   // A0 A1 A2 A3 A5 E0 E1                      
#define AN0_TO_AN5   0x09   // A0 A1 A2 A3 A5 E0                         
#define AN0_TO_AN4   0x0A   // A0 A1 A2 A3 A5
#define AN0_TO_AN3   0x0B   // A0 A1 A2 A3
#define AN0_TO_AN2   0x0C   // A0 A1 A2
#define AN0_TO_AN1   0x0D   // A0 A1
#define AN0_          0x0E   // A0


void adc_config(unsigned char pinesAN, unsigned char vref){
    if (pinesAN == NO_ANALOGS){
        ADCON1bits.PCFG = NO_ANALOGS;   //no analogicos
        CMCON = 0X07;           //desactivo comparadores
        return;
    }
    CMCON = 0X07;           //desactivo comparadores
    ADCON1bits.PCFG = pinesAN;    // Todos los puertos Analogicos, 0x0F todo digital
    ADCON1bits.VCFG = vref;    //voltaje referencia VDD_VSS
    ADCON0 = 0;             //canal 0, go/done=0(idle), ADON = ad disabled
    
    //Select A/D acquisition time (ADCON2)  minimo = 2.45μs(pag264))
    ADCON2bits.ACQT = 1; //1 = 2*TAD, 2 = 4*TAD //se recomienda usar 4*TAD
    ADCON2bits.ADCS = 6; //6 = FOSC/64, 2 = FOSC/32
    
    //ADCON2bits.ACQT = 2; //1 = 2*TAD, 2 = 4*TAD //se recomienda usar 4*TAD
    //ADCON2bits.ADCS = 2; //6 = FOSC/64, 2 = FOSC/32
    
    ADCON2bits.ADFM = 1; //1 = Right justified 
}

unsigned long adc_read(unsigned char ch){
    if(ch > 13){return 0;}			//si seleccionamos mayor a adc disponibles
    ADCON0 = 0;						//apagamos ADC, ADC en espera, canal 0
    //ADCON0 = (ch<<2);				//seleccionamos canal
    ADCON0bits.CHS = (ch);				//seleccionamos canal
    __delay_us(100);
    ADCON0bits.ADON = 1;			//encendemos ADC
    ADCON0bits.GO_DONE = 1;			//Empezamos conversion
    while(ADCON0bits.GO_DONE == 1);	//espermos a que termine conversion
    ADCON0bits.ADON = 0;			//apagamos ADC
    return ADRES;					//regresamos valor del ADC 
    //return (ADRESH<<8)|ADRESL;					//regresamos valor del ADC 
}