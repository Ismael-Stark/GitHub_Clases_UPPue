#include <main_h.h>
#include "PIC16F18855_registers.h"
#include <stdint.h>

#define PCF      64  // Puede ser 112 ó 64 (PCF8574T=64, PCF8574A=112, PCF8574=64)
#include "LCD_i2c.c"

char Caracter1[8]= { 0b00000,
                     0b11011,
                     0b11011,
                     0b00000,
                     0b11111,
                     0b11111,
                     0b01110,
                     0b00000};
char Caracter2[8]= {0b00000,0b11000,0b11011,0b00000,0b11111,0b11111,0b01110,0b00000};

char Caracter3[8]={0b11111,                  0b11110,
                  0b11100,
                  0b00000,
                  0b00000,
                  0b00000,
                  0b10000,
                  0b10000};
                  
char Caracter4[8]= { 0b10000,
                  0b1100,
                  0b1100,
                  0b00000,
                  0b11111,
                  0b11111,
                  0b01110,
                  0b00000};



void leer_sensor(int8_t *tempE, uint8_t *tempD);

void main(){
   //setup_adc(ADC_LEGACY_MODE|ADC_CLOCK_DIV_32);
   setup_adc(ADC_LEGACY_MODE|ADC_CLOCK_INTERNAL);
   setup_adc_ports(sAN4|sAN8|sAN9|sAN10|VSS_VDD);       ///pinA4 y pinB0(an8) como entradas analogicas
   setup_oscillator(OSC_HFINTRC_32MHZ|OSC_CLK_DIV_BY_1|OSC_HFINTRC_ENABLED);
   uint8_t contador = 0, leer_boton;
   uint8_t leerSerial,TL;
   int8_t TH;
   uint16_t LeerADC;
   float voltaje;
   
   uint8_t buffer[50];
   lcd_init();
   lcd_putc("Hola mundo");
   lcd_setCustomChar(0,&Caracter1);//carita1
   lcd_setCustomChar(1,&Caracter2);//carita2
   lcd_setCustomChar(2,&Caracter3);//carita2
   lcd_setCustomChar(3,&Caracter4);//carita2
   
   
   TRISA = 0b11110000;//DE RA0 A RA3, COMO SALIDAS, LODEMAS SON ENTRADAS
   PORTA = 0; //LIMPIO PORTA
   LATA = 0; //LIMPIO LATA
   ANSELA = 0; //TODO DIGITAL
   ANSELA <<= (1<<p4);  //ra4 ENTRADA ANALOGICA
   WPUA = 0;//SIN RESISTENCIAS PULL-UP  
   
   TRISB = TRISB|(1<<p0);
   ANSELB <<= (1<<p0);  //rb0 ENTRADA ANALOGICA
   PORTB = 0; //LIMPIO PORTA
   LATB = 0; //LIMPIO LATA
   WPUB = 0;//SIN RESISTENCIAS PULL-UP  
   printf("\nHola mundo usando la tarjeta PIC16f18855 y la panta LCD 20x4 i2c\n");
   while(TRUE)
   {
      
   leer_sensor(&TH,&TL);
   printf("la temperatura del sensor de la tarejeta es:%d.%u\n",TH, TL);
   
   lcd_gotoxy(1,1);
   sprintf(buffer,"La temperatura es:\n %d.%d",TH,TL);//guardo el texto en una variable vector
   lcd_puts(buffer);//se imprime el mensaje en la pantalla
   
   lcd_showCustomCharXY(5,3,2);//X,Y, caracter
   lcd_showCustomCharXY(5,4,3);//X,Y, caracter
   
   lcd_showCustomCharXY(3,3,0);//X,Y, caracter
   delay_ms(500);
   lcd_showCustomCharXY(3,3,1);//X,Y, caracter
   delay_ms(500);      
   }
}


void leer_sensor(int8_t *tempE, uint8_t *tempD){
      i2c_start(); 
      i2c_write(0b01110000);
      i2c_write(0);
      i2c_start();
      i2c_write(0b01110001); //LECTURA
      *tempE = i2c_read(0);
      i2c_stop();
         
      delay_us(50);
          
      i2c_start();
      i2c_write(0b01110000);  //ESCRITURA
      i2c_write(2);
      i2c_start();
      i2c_write(0b01110001); //LECTURA
      *tempD = i2c_read(1);
      i2c_stop();
      *tempD >>= 6;
      *tempD *= 25;
}
