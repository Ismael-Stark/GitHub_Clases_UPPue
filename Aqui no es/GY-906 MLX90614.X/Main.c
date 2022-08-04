//PIC 1
#include <xc.h>
//#include <pic16f18855.h>
#include "fuses.h"
#include "main.h"
#include "uart.h"
#include "adc.h"
#include "MLX90614.h"


#ifdef __XC8//code si se usa compilador xc8

#endif

#define boton ((PORTA>>5) & 0x01) 

int8_t  high_byte;
uint8_t low_byte;

void port_init();
void sensorPlaca();
bool detecta_flanco(void);
void FLOAT_to_string(double number, char *text, char decimal);


void main(void) {
    float temp ;
    bool flag=0;
    uint16_t leerReg;
    uint8_t buffer[8];
    port_init();
    serial_init(9600);
    adc_init();
    i2c_init();
    //printf("\n\nSensor MLX90614\n\n");
    
    
    //flag = MLX90614_init();
    //MLX90614_writeEmissivity(0.95);
    /*if (flag == 1){
    //if (MLX90614_init() == 1){
        printf("Sensor MLX90614 Existe\n\n");
    }else{
        printf("Sensor MLX90614 NO Existe\n\n");}
    
    /*while(MLX90614_init()==1){
        printf("Sensor MLX90614 Existe\n\n");
        __delay_ms(500);
    }*/
    while(1){
        //temp = (float)MLX90614_ReadTemp(MLX90614_TAmb);
        //temp = (temp * 0.02) - 273.15;
        temp = MLX90614_readAmbientTempC();
        FLOAT_to_string(temp,buffer,2);
        //printf("tempAmb: %s\n",buffer);
        //printf("{\"tAmb\":\"%s\",\"tobj\":\"%s\",\"tplaca\":\"%s\"}");//json completo, que enviare en partes
        printf("{\"tAmb\":\"%s\",\"tobj\":\"",buffer);
        //printf("tempAmb: %3.2f\n",temp);
        //leerT = (float)MLX90614_ReadTemp(MLX90614_TOBJ1);
        //temp = (leerT * 0.02) - 273.15;
        //__delay_ms(500);
        temp = MLX90614_readObjectTempC();
        
        //printf("Tobj: %3.2f\t%d\t0x%x\n",temp,leerT,leerT);
        //printf("Tobj: %3.2f\n",temp);
        //temp = MLX90614_readEmissivity();
        //printf("readEmissivity: %3.2f\n",temp);
        
        //leerReg = MLX90614_ReadReg(MLX90614_CONFIG);
        //printf("ConfigReg: %u\n",leerReg);
        FLOAT_to_string(temp,buffer,2);
        //printf("Tobj: %s\n",buffer);
        printf("%s\",\"tplaca\":\"",buffer);
        sensorPlaca();
        //printf("\n");
        __delay_ms(1000);
    }
    //printf("Sensor MLX90614 NO Existe\n\n");
    
    while(1){
        
        __delay_ms(1000);
        
    }
    return;
}

void sensorPlaca(){
    i2c_start();
        i2c_write(0b01110000);  //ESCRITURA
        i2c_write(0);
        i2c_restart();
        i2c_write(0b01110001); //LECTURA
        high_byte = (int8_t)i2c_read(0);
        i2c_stop();
        
        i2c_start();
        i2c_write(0b01110000);  //ESCRITURA
        i2c_write(2);
        i2c_restart();
        i2c_write(0b01110001); //LECTURA
        low_byte = i2c_read(0);
        i2c_stop();
        
        low_byte = low_byte >> 6;
        //printf("La temperatura es: %d.%d*C\n\n", high_byte, low_byte *25 );
        printf("%d.%d\"}",high_byte, low_byte *25);
       
}

void port_init(){
    
    ANSELA = 0;
    LATA=0;
    PORTA =0;
    TRISA = 0b11110000;
    //TRISA = TRISA & ~(1<<0 | 1<<1 | 1<<2 | 1<<3);//A0 - A3 COMO SALIDA
    //TRISA = TRISA | (1<<5); //A5 ENTRADA
    ANSELA = ANSELA | (1<<4);//PIN A4 COMO ENTRADA ANALOGICA
    
    LATB=0;
    PORTB =0;
    TRISB = TRISA | (1<<0);
    ANSELB = ANSELB | (1<<0);//rb0 entrada analogica
    
    //TRISC = 0b10;
    //ANSELC = 0;
    
    
}

void FLOAT_to_string(double number, char *text, char decimal)
{ 
    int largo_entera, largo_n, cont_for, tempo_int;
    double tempo_float;

    largo_n = decimal + 1;
    largo_entera = 0;
    
    if (number < 0)         //Es negativo ?
    {
        *text++ = '-';
        number = -number;
    }
    //si es menor que no multiplica por 10
    if (number > 0.0) while (number < 1.0)
    {
        number =number* 10.00;
        largo_entera--;
    }

    //realiza division varias veces hasta que sea menor que 10
    while (number >= 10.0)
    {
        number = number/10.0;
        largo_entera++;   //sube el largo de la trama por ser deciaml
    }
    largo_n = largo_n+largo_entera;   //el largo es la decimal mas la parte entera

    // round. num is between 1 and 10 and largo_n will be printed to
    // right of decimal point so rounding is ...
    
    for (tempo_float = cont_for = 1; cont_for < largo_n; cont_for++)
        tempo_float = tempo_float/10.0;
    
    number += tempo_float/2.0;
    if (number >= 10.0)
    {
        number = 1.0; 
        largo_entera++;
    }
    if (largo_entera<0)                                 //  si tiene decimales
    {
        *text++ = '0'; *text++ = '.';
        if (largo_n < 0) 
            largo_entera = largo_entera-largo_n;
        for (cont_for = -1; cont_for > largo_entera; cont_for--)  
            *text++ = '0';
    }
    for (cont_for=0; cont_for < largo_n; cont_for++)
    {
        tempo_int = (int)number;
        *text++ = (char)tempo_int + 48;                  //convierte a ascci
        if (cont_for ==  largo_entera ) 
            *text++ = '.';
        number -= (tempo_float=tempo_int);
        number = number *10.0;
    }
    *text =0;                                            //anexa final de linea
}