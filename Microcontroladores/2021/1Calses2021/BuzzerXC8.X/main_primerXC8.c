
#include <xc.h>
#include "configuracion.h"
#include "misdefiniciones.h"
#include <stdio.h>
#define _XTAL_FREQ 32000000L

#define x 300

void init(){
    PORTA = 0;      //LIMPIO PORTA
    LATA = 0;       //LIMPIO LATA
    ANSELA = 0;     //EL PUERTO A SIRVE COMO ENTRA Y SALIDA DIGITAL

    TRISA = 0b11110000;
    
    PORTB = 0;      //LIMPIO PORTB
    LATB = 0;       //LIMPIO LATB
    ANSELB = 0;     //EL PUERTO A SIRVE COMO ENTRA Y SALIDA DIGITAL
    TRISB = 0x01;// 0X00, 0b00000000;  TODO EL PUERTO ES SALIDA
    
    PORTC = 0;      //LIMPIO PORTB
    LATC = 0;       //LIMPIO LATB
    ANSELC = 0;     //EL PUERTO A SIRVE COMO ENTRA Y SALIDA DIGITAL
    TRISCbits.TRISC7 = 0;//CON ESTO SOLO EL PIN C7 ES UNA SALIDA,
                            //LOS DEMAS PINES NO IMPORTAN
}

void adc_init(){//seccion 23-1
    ADCON1 = 0B11110000;    //23.4.4 que es guard ring pag341
    //ADCON1bits.ADPPOL = 1;  //Shorted to AVDD cuando pin externo seleccionado, CHOLD shorted to VSS cuando internal
    
    ANSELAbits.ANSA4 = 1;   //solo el pin RA4 sera entrada analogica
    ANSELBbits.ANSB0 = 1;   //Pin_b0
    
    //ADCON0 = 0;
    ADCON0bits.ADON = 0;
    ADCON0bits.ADCS = 0; //0 = source clock is Fosc, 1 = source clock is FRC (FRC es un oscilador dedicado para el ADC)
                            //FRC no hay nececidad de calcular tad
    ADCON0bits.ADFRM = 1;   //1 = Justificado a la derecha, pag332 y 358-9
    
    //14*TAD+2Tcy           ,si Fosc = 32Mhz, 1TAD debe ser >= a 1uS pero maximo9uS,
    //2Tcy = 250nS cuando fosc=32Mhz
    //si fosc/30 = 32Mhz/30 = 937.5ns, es menor a 1uS, pr lo tanto se selecciona
    //32Mhz/32 = 1uS, por lo tanto hay que seleccionar fosc/32 y ponerlo en ADCLK
    ADCLK = 0x0F;       //ADC clock divider pag353
    ADREF = 0;          //ref- conecatada a GND, ref+ conectada a VDD pag353
    
    ADCON0bits.ADGO = 1; //Se enciende el ADC
}

uint16_t LeerADC(uint8_t channel){
    // se selecciona el canal A/D 
    ADPCH = channel;            //debe ser un numero del 0 al 63, o del 0x00 al 0x3F
    // Se enciende el modulo ADC 
    ADCON0bits.ADON = 1;
    //Se deshabilita el modo continuo
    ADCON0bits.ADCONT = 0;    
    // Se nicia la conversion
    ADCON0bits.ADGO = 1;
    // instrucion nop extra requeria; ver rev. A2 errata: 
    //https://ww1.microchip.com/downloads/en/DeviceDoc/PIC16(L)F18855-18875-Silicon-Errata-and-Datasheet-Clarification-80000669G.pdf 
    NOP();    

    // Se espera hasta que la conversion termine
    while (ADCON0bits.ADGO){}  
    
    // Conversion terminada, se regresa el resultado
    //return ((uint16_t)((ADRESH << 8) + ADRESL));
    return ADRES;
}


void serial_init(uint16_t baud){
    uint16_t sx;
    //BAUD1CON = 0b00001000; //brg16 habilitado
    BAUD1CONbits.BRG16 = 0; //brg16 deshabilitado, modo brg8
    
    //RC1STA = 0x90;
    RC1STA = 0b10010000;    //serial port habilitado y se habilita la recepcion continua hasta que 
                            //bit CREN sea limpiado;
    //TX1STA = 0x24;
    //TX1STA = 0b00100100;      //modo 8bit transmision, , trsnsmicion habilitada
                                //modo asincrono, modo alta velocidad
    
    TX1STA = 0b00100000; //modo 8bit transmision, , trsnsmicion habilitada
                         //modo asincrono, modo baja velocidad
    
    //para calcular SP1BRGL y SP1BRGH, ver pag552
    sx = ((_XTAL_FREQ/baud)/64 ) - 1;
    SP1BRGL = (uint8_t)sx;
    SP1BRGH = (uint8_t)(sx>>8);
//    SP1BRGL = 51;   //paraa 9600
//    SP1BRGH = 0x00;
    
    RC0PPS = 0x10;   //RC0->EUSART:TX;    pag234 y 236
    //TXPPS = 0x10;
    RXPPS = 0x11;   //RC1->EUSART:RX;   
    
}

uint8_t EUSART_Read(void){
    //pag146 si RCIF==0 significa que el bufer esta vacio, aun no llegan datos
    //y como no llegan datos, me espero a que llegen
    //tener cuidado, funcion bloqueante, si no llega nada
    while(!PIR3bits.RCIF){  } 
    
    if(RC1STAbits.OERR == 1){//si error de overrun
        RC1STAbits.CREN = 0; //se deshabilita continuous receive
        RC1STAbits.CREN = 1; //se vuelve a habilitar
    }
    return RC1REG;//se regresa lo leido por puerto serial
}

void EUSART_Write(uint8_t txData){
    //pag146 si TXIF==0 significa que el bufer estalleno
    //y aun no puedo enviar datos, entonces me espero
    //a que sevacien antes de enviar un nuevo dato
    while(PIR3bits.TXIF == 0){ }
    TX1REG = txData;    //envio dato por puerto serial
}

char getch(void){
    return EUSART_Read();
}

void putch(char txData){
    EUSART_Write(txData);
}

void FVR_init(uint8_t gain){
    //se cambian las referencias de voltaje del ADC
    ADREFbits.ADNREF = 0;           //ref- conecatada a GND, ref+ conectada a VDD pag353
    ADREFbits.ADPREF = 3;           //ref+ conectada a FRV_bufer pag353
    ///se habhilita la referencia de voltaje;
    FVRCONbits.FVREN = 1;
    FVRCONbits.FVRRDY = 1;  // FVRRDY is always ?1? for PIC16F18855/75 devices only.
    
    FVRCONbits.TSEN = 0;    //temp indicator disabled, See Section 17.0 ?Temperature Indicator Module? for additional information.
    FVRCONbits.TSRNG = 1;   //1 = VOUT = VDD - 4VT (High Range), 0 = VOUT = VDD - 2VT (Low Range),sensor temp
    
    FVRCONbits.CDAFVR = 0;  //ref al dac disabled
    FVRCONbits.ADFVR = gain;
    //FVRCONbits.ADFVR = 1;   //11 = ADC FVR Buffer Gain is 4x, (4.096V)(2)
                            //10 = ADC FVR Buffer Gain is 2x, (2.048V)(2)
                            //01 = ADC FVR Buffer Gain is 1x, (1.024V)
                            //00 = ADC FVR Buffer is off
                            //(2)Fixed Voltage Reference output cannot exceed VDD.    
}
void main(void) {
    uint16_t adc,adc2;
    float temp;
    init();
    adc_init();
    FVR_init(1);
    serial_init(38400);
    
    while(1){
        adc = LeerADC(lm35);
        adc2 = adc>>2;
        //temp = (3.3 * adc * 100) / 1023; 
        temp = (1.024 * adc * 100) / 1023;
        //temp = (2.048 * adc * 100) / 1023; 
        LATA = adc2;
        //EUSART_Write('h');
        printf("%i: %f\n",adc,temp);
        delay_ms(1000);
               
    }
    return;
}
