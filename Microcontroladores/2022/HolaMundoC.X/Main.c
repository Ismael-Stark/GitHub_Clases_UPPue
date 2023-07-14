    
#include <xc.h>
#include <pic16f18855.h>
#include "fuses.h"
#include "main.h"
#include "misVar.h"//variables globales para todo el proyecto
#include "uart.h"
#include "adc.h"
#include "I2C.h"
#include "LCD_i2c.h"
#include "EMC1001.h"
#include "teclado.h"
#include "interrupt.h"
#include "EEPROM_lib.h"

//tarea, activar RC5 como entrada analogica y leer en ella el LM35
//y mandar la lectura por puerto Serial

/*Tarea para los que no han entregado nada y para los que entregar tarde sus tareas
 * hacer 2 equipos para que les envie la tarea en vacaciones
 * no contar a ana y a victor
 * */

uint8_t Letra1[8]={0b11011,0b11011,0b00000,0b11111,0b10001,0b10001,0b01110,0b00000};

const uint8_t Letra2[8]={	0b11011,
						0b11011,
						0b00000,
						0b11111,
						0b10101,
						0b10101,
						0b01110,
						0b00000};


void port_init();

int miVar;//esto es una variable global pero solo funciona en el main.c


uint8_t rx, buffer[50];
uint16_t adc=0;
int8_t  high_byte, tecla;
uint8_t low_byte;
bool encontrado=0;
const float mv=(3.3/1023);
float volt, temperatura;
uint8_t contador = 0;


void main(void) {
    
    uint16_t eprom = 40;
    port_init();
    
    enable_interrupt();
    printf("Holaaa\n\n");
    
    
    lcd_init();
    sprintf(buffer,"\fhola mundo\n%i XC8\n3\n4",contador);
    lcd_puts(buffer);
    
    lcd_setCustomChar(Letra1,0);
	lcd_showCustomChar(12,1,0);
	lcd_setCustomChar(Letra2,1);
	lcd_showCustomChar(8,2,1);

    printf("Holaaa\n\n");
    __delay_ms(1000);
    EEPROM_Write_int16(0,5485);
    //eeprom_write(0,26);
    //eprom = eeprom_read(10);
    
    while(1)
    {//si se presiona y suelta el boton aumentar la variable contador y mostrar el resultado por puerto serial
       /* if ( (PORTA>>5) & 0x01 ){
            LATA = LATA & ~(1<<0);
            
        }else{
            LATA = LATA | (1<<0);
            contador++;
            while (  !( (PORTA>>5) & 0x01 ) );
            printf("%d\n",contador);
        }
        
        if(counts != countsAnterior){
            countsAnterior = counts;
            printf("%d\n",counts);
        }*/
        
        LATA = LATA & ~(1<<3);
        delay_ms(500);
        //EEPROM_WriteByte(10,23);
        LATA = LATA | (1<<3);
        delay_ms(500);
        eprom = EEPROM_Read_int16(0);
        //eprom = eeprom_read(10);
        printf("%d\n",eprom);
        /*sprintf(buffer,"\fhola mundo\n%i\n3\n4",contador++);
        lcd_puts(buffer);
        lcd_showCustomChar(15,1,0);
        lcd_showCustomChar(10,2,1);*/
    }
    
//     while(1){
//        
//        
//        EMC1001_read(&high_byte, &low_byte);
//        
//        sprintf(buffer,"%d.%d\n",high_byte, low_byte);
//        printf(buffer);
//        sprintf(buffer,"\f%d.%d\n",high_byte, low_byte);
//        lcd_puts(buffer);
//        
//        __delay_ms(1000);
//        
//    }
    
    
    while(1){
//        tecla = teclado_get();
//        if(tecla !=0 ){
//            printf("tecla presionada %c\n\n",tecla);
//        }
        __delay_ms(100);
        
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
        
        adc = adc_read(8);//leo pinB0
        sprintf(buffer,"ANB0 = %i \n\n",adc);
        printf(buffer);
                
        uart_send_string(buffer);
        
        /*if (rxFlag ==1){
            rx = uart_rx();
        }
                
        if (rx == 'b'){
            LATA = LATA | (1<<0);
        }else{
            LATA = LATA & ~(1<<0);
        }*/
        
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
    ANSELA = 0;
    ANSELA = ANSELA | (1<<4);//PIN A4 COMO ENTRADA ANALOGICA
    
    LATB=0;
    PORTB =0;
    TRISB = TRISA | (1<<0);
    ANSELB = 0;
    ANSELB = ANSELB | (1<<0);//rb0 entrada analogica
    
    TRISC = 0b10;
    ANSELC = 0;
    TRISC = TRISC  | (1<<4 |1<<3 );//ambos salidas para poner como "colector abierto" para i2c

    serial_init(9600);
    adc_init();
    i2c_init();
    teclado_init();
}

/*
    for (int i=0; i <=127 ; i++){
        
        i2c_start();
        encontrado = i2c_write(i);
        i2c_stop();
        if (encontrado==1){
            sprintf(buffer,"encontraste algo en %d, 0x%X\n",(i>>1),(i>>1));
            printf(buffer);
        }
        __delay_ms(10);
    }
    
    while(1){
        
        
        EMC1001_read(&high_byte, &low_byte);
        
        sprintf(buffer,"%d.%d\n",high_byte, low_byte);
        printf(buffer);
        sprintf(buffer,"\f%d.%d\n",high_byte, low_byte);
        lcd_puts(buffer);
        __delay_ms(1000);
        
    }
    */