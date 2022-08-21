
#include <xc.h>
#include "configuracion.h"
#include "misdefiniciones.h"
#include "adc.h"
#include <stdio.h>
#include "Serial.h"
#include "ultraonico.h"
#include "dht11.h"
#include "i2c.h"
#include "LCD_i2c.h"
//#define _XTAL_FREQ 32000000L

#define x 300
#define sensorW 0b01110000
#define sensorR 0b01110001

int8_t  high_byte;
uint8_t low_byte;

#define R1 LATBbits.LATB0
#define A1 LATBbits.LATB1
#define V1 LATBbits.LATB2
#define R2 LATBbits.LATB3
#define A2 LATBbits.LATB4
#define V2 LATBbits.LATB5


#define Calefactor LATAbits.LATA0
#define Ventilador LATAbits.LATA3
#define LimiteH 28
#define LimiteL 20

//PORTB = b7,b6,b5-v2,b4-a2,b3-r2,b2-V1,b1-A1,b0-R1


void init(){
    PORTA = 0;      //LIMPIO PORTA
    LATA = 0;       //LIMPIO LATA
    ANSELA = 0;     //EL PUERTO A SIRVE COMO ENTRA Y SALIDA DIGITAL

    TRISA = 0b11110000;
    
    PORTB = 0;      //LIMPIO PORTB
    LATB = 0;       //LIMPIO LATB
    ANSELB = 0;     //EL PUERTO A SIRVE COMO ENTRA Y SALIDA DIGITAL
    //TRISB = 0x01;   //pinB0 es entrada
    //ANSELBbits.ANSB0 = 1;   //pinRB0 es entrada analogica
    
    PORTC = 0;      //LIMPIO PORTB
    LATC = 0;       //LIMPIO LATB
    ANSELC = 0;     //EL PUERTO C SIRVE COMO ENTRA Y SALIDA DIGITAL
    TRISCbits.TRISC7 = 0;//CON ESTO SOLO EL PIN C7 ES UNA SALIDA,
                         //LOS DEMAS PINES NO IMPORTAN
    
}


void main(void) {
    unsigned long lecturaAdc, mm=0;
    uint8_t adc,i=0, rx,cm_entero, cm_decimal, t_d, t_e;
    uint8_t T=100,H=0;
    uint8_t buffer[40];
    float voltaje = 0, temp;
    init();
    adc_init();
    I2C_init();
    dht11_init();
    serial_init(9600);
    printf("hola\n");
    lcd_init();
    sprintf(buffer,"\fMicrocontroladores\nAgosto 2021 ");
    lcd_puts(buffer);
    Ventilador = 0;
    Calefactor = 0;
    delay_ms(1000);
    //lm35 , 1°c = 10mV
    //con el adc un 1 en binario equivale a 3.225mV
    //si leo un 3 en binario con el adc significa que estoy leyendo 1°c con el lm35
    while(1){
        dht11_read(T,H);
        if( T > LimiteH){
            Ventilador = 1;
            Calefactor = 0;
        }else {
            Ventilador = 0;
            Calefactor = 1;
        }
        
               
    }
    return;
}

//lecturaAdc = Leer_adc(pot);
        ///semaforo 2
        //PORTB = b7,b6,b5-v2,b4-a2,b3-r2,b2-V1,b1-A1,b0-R1
        //PORTB = b7,b6,b5,b4,b3,b2,b1,b0
        //PORTB = 0b00100001;
        //led1 = !led1;
        //for(int i =0; i<6;i++){delay_ms(5000);}
        //for(uint16_t i =0; i<=lecturaAdc;i++){delay_ms(10);}
        /* 
        //parpadeo verde
        for(int i =0; i<2;i++){
            V2 = !V2; 
            delay_ms(200);
        }
        //cambio semaforo2
        //PORTB = b7,b6,b5-v2,b4-a2,b3-r2,b2-V1,b1-A1,b0-R1
        //PORTB = b7,b6,b5,b4,b3,b2,b1,b0
        PORTB = 0b00010001;
        delay_ms(3000);
         
        //semaforo1
        //PORTB = b7,b6,b5-v2,b4-a2,b3-r2,b2-V1,b1-A1,b0-R1
        //PORTB = b7,b6,b5,b4,b3,b2,b1,b0
        PORTB = 0b00001100;

        delay_ms(5000);
        //parpadeo verde
        for(int i =0; i<2;i++){
            V1 = !V1; 
            delay_ms(200);
        }
        //cambio semaforo2
        //PORTB = b7,b6,b5-v2,b4-a2,b3-r2,b2-V1,b1-A1,b0-R1
        //PORTB = b7,b6,b5,b4,b3,b2,b1,b0
        PORTB = 0b00001010;
        delay_ms(3000);*/