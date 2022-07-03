
#include <xc.h>
#include <pic16f18855.h>
#include "fuses.h"
#include "main.h"
#include "uart.h"
#include "adc.h"
#include "I2C.h"
#include "LCD_i2c.h"

//tarea, activar RC5 como entrada analogica y leer en ella el LM35
//y mandar la lectura por puerto Serial
const float mv=(3.3/1023);
float volt, temperatura;

void port_init();


void main(void) {
    uint8_t rx, buffer[50], contador = 0;
    uint16_t adc=0;
    int8_t  high_byte;
    uint8_t low_byte;

    port_init();
    serial_init(9600);
    adc_init();
    I2C_init();
    
    lcd_init();
    sprintf(buffer,"\fhola mundo\n%i",contador);
    lcd_puts(buffer);
    
    while(1){
        I2C_start();
        I2C_write(0b01101000);
        I2C_stop();//*/
        
        /*I2C_start();
        I2C_write(0b01110000);  //ESCRITURA
        I2C_write(0);
        I2C_restart();
        I2C_write(0b01110001); //LECTURA
        high_byte = I2C_read();
        I2C_nack();
        I2C_stop();
        
        I2C_start();
        I2C_write(0b01110000);  //ESCRITURA
        I2C_write(2);
        I2C_restart();
        I2C_write(0b01110001); //LECTURA
        low_byte = I2C_read();
        I2C_nack();
        I2C_stop();*/
        
        __delay_ms(1);
    }
    
    
    while(1){
        /*LATA = LATA | (1<<3);
        __delay_ms(500);
        LATA = LATA & ~(1<<3);
        __delay_ms(500);
        sprintf(buffer,"hola mundo %i\n",contador++);
        printf(buffer);
        
        //lcd_gotoxy(1,1);
        sprintf(buffer,"\fhola mundo %u\n",contador);
        lcd_puts(buffer);
        
        adc = adc_read(4);//leo pinA4
        volt = adc*mv;
        temperatura = volt/(0.01);
        sprintf(buffer,"adc = %i, volt %f, temp=%f\n",adc, volt,temperatura);
        printf(buffer);
        
        sprintf(buffer,"v%.2f,t=%.2f",volt,temperatura);
        lcd_puts(buffer);
         * 
         * */
        
        /*adc = adc_read(8);//leo pinB0
        sprintf(buffer,"ANB0 = %i \n\n",adc);
        printf(buffer);*/
        
        //uart_send_string(buffer);
        
        if (rxFlag ==1){
            rx = uart_rx();
        }
                
        if (rx == 'b'){
            LATA = LATA | (1<<0);
        }else{
            LATA = LATA & ~(1<<0);
        }
        /*//LEER ENTRADA
        if ( (PORTA>>5) & 0x01 ){
            LATA = LATA & ~(1<<2);
        }else{
            LATA = LATA | (1<<2);
        }*/
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
    
    TRISC = 0b10;
    ANSELC = 0;
    
    TRISC = TRISC  | (1<<4 |1<<3 );//ambos salidas para poner como "colector abierto" para i2c
}