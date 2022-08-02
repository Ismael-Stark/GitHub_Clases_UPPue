    
#include <xc.h>
#include <pic16f18855.h>
#include "fuses.h"
#include "main.h"
#include "misVar.h"//variables globales para todo el proyecto
#include "uart.h"
#include "I2C.h"
#include "LCD_i2c.h"
#include "interrupt.h"
#include "Timer0.h"
#include "Servo.h"
#include "Timer1.h"
#include "Timer2.h"
#include "Timer5.h"

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
    
    uint8_t valTIMER0;
    port_init();
    enable_Global_interrupt();
    enable_Peripheral_interrupt();
    //Timer0_8Bit_init(3,15,0x79);
    //Timer0_8Bit_init(0, 0b1001, 0xFF);///Servo
    Timer0_8Bit_Interrupt_init(PostDiv1, PrescDiv512, 0xFF);///Servo
    Timer1_Interrupt_init(T1PrescDiv8, 0xf424);
    Timer2_Interrupt_init(T2PostDiv16, T2PrescDiv1,0);
    Timer5_Interrupt_init(T5PrescDiv2, 0x63c0);
    
    printf("Holaaa\n\n");
    
    
    lcd_init();
    sprintf(buffer,"\fTimers en XC8\n%i ",contador);
    lcd_puts(buffer);

    __delay_ms(1000);
    
    while(1)
    {
        /*if(PIR0bits.TMR0IF){
            PIR0bits.TMR0IF = 0;
            contRTCC++;
            if (contRTCC ==4){
                Timer0_8Bit_set(AJUSTE_FINO_DE_RTCC);
            }
            if (contRTCC ==5){
                contRTCC = 0;
                flagRTCC =1;
            }
        }*/
        
         // DISPARO DEL PULSO PWM
        if(flagRTCC==1){
            flagRTCC=0;
            PIN_SERVO1 = 1;
            flagSERVO1=1;    
        }

        // CONTROL DE ANCHO DEL PULSO PWM
        if(flagSERVO1==1){
            valTIMER0 = Timer0_8Bit_get();
            if(valTIMER0>tSERVO1){
                flagSERVO1=0;
                PIN_SERVO1 = 0;
            }   
        }
          /*
        
        if(Keypress!=0x00){
            switch(Keypress){
                // Periodos Prefijados
                case '1':   tSERVO1=ticks_PULSO_MINIMO;
                            break;
                case '2':   tSERVO1=ticks_PULSO_MEDIO;
                            break;
                case '3':   tSERVO1=ticks_PULSO_MAXIMO;
                            break;
                case '+':   if(++tSERVO1>ticks_PULSO_MAXIMO){
                                tSERVO1=ticks_PULSO_MAXIMO;
                            }
                            break;
                case '-':   if(--tSERVO1<ticks_PULSO_MINIMO){
                                tSERVO1=ticks_PULSO_MINIMO;
                            }
                            break;
                case 'r':   printf("S=%d\r\n",tSERVO1);
                            break;
            }

            Keypress=0x00;
        }
        
        */
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
    
    TRISC = 0b00000010;
    ANSELC = 0;
    TRISC = TRISC  | (1<<4 |1<<3  );//ambos salidas para poner como "colector abierto" para i2c

    serial_init(9600);
    //adc_init();
    i2c_init();
    //teclado_init();
}