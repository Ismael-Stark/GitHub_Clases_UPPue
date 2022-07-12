//PIC 1
#include <xc.h>
//#include <pic16f18855.h>
#include "fuses.h"
#include "main.h"
#include "uart.h"
#include "adc.h"
#include "MLX90614.h"


#define boton ((PORTA>>5) & 0x01) 

int8_t  high_byte;
uint8_t low_byte;
//0b0111000


void port_init();
bool detecta_flanco(void);


void main(void) {
    
    bool flag=0;

    port_init();
    serial_init(9600);
    adc_init();
    I2C_init();
    printf("\n\nSensor MLX90614\n\n");
    
    
    flag = MLX90614_init();
    
    //if (flag == 1){
    if (MLX90614_init() == 1){
        printf("Sensor MLX90614 Existe\n\n");
    }else{
        printf("Sensor MLX90614 NO Existe\n\n");}
    
    while(MLX90614_init()==1){
        printf("Sensor MLX90614 Existe\n\n");
        __delay_ms(500);
    }
    
    while(1){
        I2C_start();
        I2C_write(0b01110000);  //ESCRITURA
        I2C_write(0);
        I2C_restart();
        I2C_write(0b01110001); //LECTURA
        high_byte = (int8_t)I2C_read();
        I2C_nack();
        I2C_stop();
        
        I2C_start();
        I2C_write(0b01110000);  //ESCRITURA
        I2C_write(2);
        I2C_restart();
        I2C_write(0b01110001); //LECTURA
        low_byte = I2C_read();
        I2C_nack();
        I2C_stop();
        
        low_byte = low_byte >> 6;
        printf("La temperatura es: %d.%d C\n\r", high_byte, low_byte *25 );
       
        __delay_ms(1000);
        
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
    ANSELA = ANSELA | (1<<4);//PIN A4 COMO ENTRADA ANALOGICA
    
    LATB=0;
    PORTB =0;
    TRISB = TRISA | (1<<0);
    ANSELB = ANSELB | (1<<0);//rb0 entrada analogica
    
    //TRISC = 0b10;
    //ANSELC = 0;
    
    
}