#include <16LF18857.h>
#include "PIC16F18857_registers.h"
#device ADC=10

#fuses RSTOSC_HFINTRC_32MHZ
//#fuses RSTOSC_HFINTRC
//#fuses RSTOSC_HFINTRC_1MHZ
#fuses NOEXTOSC,NOCLKOUT,NOCKS,NOFCMEN
#fuses MCLR,PUT,NOLPBOR,NOBROWNOUT,BORV24,NOPPS1WAY,NOSTVREN,NODEBUG
#fuses WDTSW,NOWDT,WDTWIN_100%,WDTCLK_LFINTRC
#fuses NOWRT,NOSCANE,NOLVP, NOPROTECT,NOCPD
#fuses ZCDDIS
//#fuses NOZCDDIS
#use delay(clock=32M)
//#use delay(internal=32MHz)

//directivas
//!#use rs232(baud=9600,parity=N,stop=1,bits=8, UART1)// ,STREAM=SERIAL) 
#use     rs232(baud=9600,parity=N,xmit=PIN_C6,rcv=PIN_C7,bits=8)
#use     i2c(Master,slow,sda=PIN_C3,scl=PIN_C4)
//!#define  PCF       112  // Puede ser 112 ó 64 (PCF8574T=64, PCF8574A=112, PCF8574=64)
//!#include "LCD_i2c.c"


#define  TC_CLK    PIN_B6   //SCK B6
#define  TC_CS     PIN_B7   //CS B7
#define  TC_DATA   PIN_B5   //SO B5
#include "MAX6675_Y.c"
//#include "max6675.c"

//////////////////////////////Salidas
#define triac        PIN_A0   //resistencia
#define rele         PIN_A1   //Selenoide
#define ventilador   PIN_A2   //Ventilador
#define buzzer       PIN_A3   //buzer

//////////////////////////////Salidas LATS
#define triacl       LATA.LATA0   //resistencia
#define relel        LATA.LATA1   //Selenoide
#define ventiladorl  LATA.LATA2   //Ventilador
#define buzzerl      LATA.LATA3   //buzer

//////////////////////////////Entradas
#define cruce        PIN_B0      //in
#define anular       PIN_B1
#define selector     PIN_B2
#define sube         PIN_B3
#define baja         PIN_B4
//////////////////////////////Entradas PORT
#define crucep       PORTB.RB0   //in
#define anularp      PORTB.RB1
#define selectorp    PORTB.RB2
#define subep        PORTB.RB3
#define bajap        PORTB.RB4


   #define LCD_DB4   PIN_C0
   #define LCD_DB5   PIN_C1 
   #define LCD_DB6   PIN_C2 
   #define LCD_DB7   PIN_C3 
   #define LCD_RS    PIN_A4 
   #define LCD_E     PIN_A5
   #include "lcd20x4.c"
   
//!   #define LCD_ENABLE_PIN  PIN_A5                                    ////
//!   #define LCD_RS_PIN      PIN_A4                                    ////
//!   //#define LCD_RW_PIN      PIN_A6    //NO usar                       ////
//!   #define LCD_DATA4       PIN_C0                                    ////
//!   #define LCD_DATA5       PIN_C1                                    ////
//!   #define LCD_DATA6       PIN_C2                                    ////
//!   #define LCD_DATA7       PIN_C3
//!   #include "lcd.c"

