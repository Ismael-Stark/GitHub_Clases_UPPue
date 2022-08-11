///cp ${ImagePath} X:/

#include <xc.h>
#include <pic16f18855.h>
#include "fuses.h"
#include "main.h"
#include "misVar.h"//variables globales para todo el proyecto
#include "uart.h"
#include "interrupt.h"
#include "servo.h"
#include "Timer1.h"
#include "MultiServo.h"
#include "Timer5.h"




void port_init();

void main(void) {
    port_init();
    
    enable_Global_interrupt();
    enable_Peripheral_interrupt();

    printf("Holaaa\n\n");
    //Timer1_init(3, 34286);
    Timer1_InterruptInit(3, 55286);
    
    
    //Time5 para servo
    Timer5_Interrupt_init(T5PrescDiv2,0x63c0);
    
    __delay_ms(1000);
    //eeprom_write(0,26);
    //eprom = eeprom_read(10);
    
    while(1)
    {
        
        if(command!='\0'){
          //command=toupper(command);//#include <ctype.h> //Convierte un carácter a mayúsculas
          valid_command=0;
          //printf("%c\r\n>",command);
          
          if(command=='a'){
            Servo_PWM[0] -= 580;
            if ( Servo_PWM[0] < Ticks4Minimum) {
                Servo_PWM[0] = Ticks4Minimum;
            }
            valid_command=1;
          }
          if(command=='d'){
            Servo_PWM[0] += 580;
            if ( Servo_PWM[0] > Ticks4Maximum) {
                Servo_PWM[0] = Ticks4Maximum;
            }
            valid_command=1;
          }
          if(command=='j'){
            Servo_PWM[0] = Ticks4Minimum;
            valid_command=1;
          }
          if(command=='k'){
            Servo_PWM[0] = Ticks4Center;
            valid_command=1;
          }
          if(command=='l'){
            Servo_PWM[0] = Ticks4Maximum;
            valid_command=1;
          }
          
          
          
          if(command=='w'){
            Servo_PWM[1] += 580;
            valid_command=1;
          }
          if(command=='s'){
            Servo_PWM[1] -= 580;
            valid_command=1;
          }
           if(command=='i'){
            Servo_PWM[1] = Ticks4Minimum;
            valid_command=1;
          }
          if(command=='o'){
            Servo_PWM[1] = Ticks4Center;
            valid_command=1;
          }
          if(command=='p'){
            Servo_PWM[1] = Ticks4Maximum;
            valid_command=1;
          }
          

          //if(!valid_command) printf("?\r\n>");
          command='\0';
        }
       
        
        
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

    serial_Interrupt_init(9600);
    

}


/*
 */