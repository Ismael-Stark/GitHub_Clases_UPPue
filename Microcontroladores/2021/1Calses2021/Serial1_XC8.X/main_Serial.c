
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

void init(){
    PORTA = 0;      //LIMPIO PORTA
    LATA = 0;       //LIMPIO LATA
    ANSELA = 0;     //EL PUERTO A SIRVE COMO ENTRA Y SALIDA DIGITAL

    TRISA = 0b11110000;
    
    PORTB = 0;      //LIMPIO PORTB
    LATB = 0;       //LIMPIO LATB
    ANSELB = 0;     //EL PUERTO A SIRVE COMO ENTRA Y SALIDA DIGITAL
    TRISB = 0x01;   //pinB0 es entrada
    ANSELBbits.ANSB0 = 1;   //pinRB0 es entrada analogica
    
    PORTC = 0;      //LIMPIO PORTB
    LATC = 0;       //LIMPIO LATB
    ANSELC = 0;     //EL PUERTO C SIRVE COMO ENTRA Y SALIDA DIGITAL
    TRISCbits.TRISC7 = 0;//CON ESTO SOLO EL PIN C7 ES UNA SALIDA,
                         //LOS DEMAS PINES NO IMPORTAN
    
}


void main(void) {
    uint16_t lecturaAdc, mm=0;
    uint8_t adc,i=0, rx,cm_entero, cm_decimal, t_d, t_e;
    uint8_t T=0,H=0;
    uint8_t buffer[40];
    float voltaje = 0, temp;
    init();
    adc_init();
    serial_init(9600);
    hc_sr04_init();
    dht11_init();
    I2C_init();
    
    lcd_init();
    sprintf(buffer,"\fMicrocontroladores\nJulio 2021 ");
    lcd_puts(buffer);
    delay_ms(1000);
    //lm35 , 1°c = 10mV
    //con el adc un 1 en binario equivale a 3.225mV
    //si leo un 3 en binario con el adc significa que estoy leyendo 1°c con el lm35
    while(1){
        I2C_start();
        I2C_write(sensorW);
        I2C_write(0x00);
        I2C_restart();
        I2C_write(sensorR);
        high_byte = I2C_read();
        I2C_nack();
        I2C_stop();
        
        I2C_start();
        I2C_write(sensorW);
        I2C_write(0x02);
        I2C_restart();
        I2C_write(sensorR);
        low_byte = I2C_read();
        I2C_nack();
        I2C_stop();
                
        low_byte = low_byte >> 6;
        printf("Micros: La temperatura es: %d.%d C, %i\n\r", high_byte, low_byte *25,mm++ );
//        sprintf(buffer,"\fLa temperatura es:\n%d.%d",high_byte,low_byte*25);
//        lcd_puts(buffer);
        
        
//        lecturaAdc = Leer_adc(lm35); //leo potenciometro
//        temp = (3.3 * lecturaAdc * 100) / 1023;
//        t_e = temp;
//        t_d = (temp - t_e)*10;
//        printf("El lm35 = %i bits, y la temperatura es: %i.%i\n",lecturaAdc,t_e,t_d);
//        mm = hc_sr04_lee_mm();
//        cm_entero = mm/10;
//        cm_decimal = mm%10;
//        printf("la distancia del objeto es %imm\n",mm);
//        printf("y en cm es: %i.%icm\n\n",cm_entero,cm_decimal);
        
//        delay_ms(10);
//        lecturaAdc = Leer_adc(pot); //leo potenciometro
//        adc = lecturaAdc>>2;
//        LATA = adc;
//        
//        voltaje = lecturaAdc*(3.3/1023);
//        printf("Hola mundo\nEl dato recibido por el puerto serial es: %i\n",lecturaAdc);
//        printf("el voltaje en el ADC = %fV\n\n",voltaje);
        
//        dht11_read(&T,&H);
//        //printf("Sensor DHT11, la T:%i, y la humedad:%i\n\n",T,H);
//        if (GlobalErr !=0){
//            printf("Error %i DHT11 %i\n",GlobalErr, i++);
//        }else{
//            printf("Clase: Micros\nSensor DHT11, la T:%i, y la humedad:%i\n\n",T,H);
//        }
        
//        I2C_start();
//        I2C_write(0b01110000);  //ESCRITURA
//        I2C_write(0);
//        I2C_restart();
//        I2C_write(0b01110001); //LECTURA
//        high_byte = I2C_read();
//        I2C_nack();
//        I2C_stop();
//        
//        I2C_start();
//        I2C_write(0b01110000);  //ESCRITURA
//        I2C_write(2);
//        I2C_restart();
//        I2C_write(0b01110001); //LECTURA
//        low_byte = I2C_read();
//        I2C_nack();
//        I2C_stop();
        
        
        delay_ms(500);
               
    }
    return;
}
