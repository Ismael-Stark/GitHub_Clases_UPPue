#ifndef   lcd
#define	  lcd

#include <xc.h>
//#include "config.h"


#define RS LATDbits.LD0
#define EN LATDbits.LD2
#define D4 LATDbits.LD7
#define D5 LATDbits.LD6
#define D6 LATDbits.LD5
#define D7 LATDbits.LD4  


// These are the line addresses for most 4x20 LCDs. 
#define LCD_LINE_1_ADDRESS 0x00 
#define LCD_LINE_2_ADDRESS 0x40 
#define LCD_LINE_3_ADDRESS 0x14 
#define LCD_LINE_4_ADDRESS 0x54 

// These are the line addresses for LCD's which use 
// the Hitachi HD66712U controller chip. 
/* 
#define LCD_LINE_1_ADDRESS 0x00 
#define LCD_LINE_2_ADDRESS 0x20 
#define LCD_LINE_3_ADDRESS 0x40 
#define LCD_LINE_4_ADDRESS 0x60 
*/ 


//======================================== 

#define lcd_type 2   // 0=5x7, 1=5x10, 2=2 lines(or more) 

unsigned char lcd_line; 

unsigned char const LCD_INIT_STRING[4] = 
{ 
 0x20 | (lcd_type << 2),  // Set mode: 4-bit, 2+ lines, 5x8 dots 
 0xc,                     // Display on 
 1,                       // Clear display 
 6                        // Increment cursor 
 }; 
                              

//------------------------------------- 
void lcd_send_nibble(unsigned char a) 
{ 
// Note:  !! converts an integer expression 
// to a boolean (1 or 0). 
    D4 = !!(a & 1);
    D5 = !!(a & 2);
    D6 = !!(a & 4);
    D7 = !!(a & 8);  

    //delay_cycles(1);
    asm("nop");
    EN  = 1;             // => E = 1
    //__delay_ms(4);      //delay_us(2); en CCS
    __delay_us(2);
    EN  = 0;             // => E = 0
} 


//---------------------------------------- 
// Send a byte to the LCD. 
void lcd_send_byte(unsigned char address, unsigned char n) 
{ 
    RS = 0;             // => RS = 0
    __delay_us(60); 
  
    if(address){ 
        RS = 1;
    }else {
        RS = 0;
    }
      
    asm("nop");//delay_cycles(1); 

    EN = 0; 

    lcd_send_nibble(n >> 4); 
    lcd_send_nibble(n & 0xf); 
} 
//---------------------------- 

void lcd_init(void) 
{ 
    unsigned char i;
    lcd_line = 1; 

    PORTD   = 0X00;
    LATD    = 0X00;
    TRISD   = 0x00;               //Configuramos el Puerto D como salida digital.
    
    RS = 0;
    EN = 0,

    // Some LCDs require 15 ms minimum delay after 
    // power-up.  Others require 30 ms.  I'm going 
    // to set it to 35 ms, so it should work with 
    // all of them. 
    __delay_ms(35);          

    for(i=0 ;i < 3; i++){ 
        lcd_send_nibble(0x03); 
       __delay_ms(5); 
    } 

   lcd_send_nibble(0x02); 

   for(i=0; i < sizeof(LCD_INIT_STRING); i++) { 
      lcd_send_byte(0, LCD_INIT_STRING[i]); 
   } 

} 

//---------------------------- 
                    //columna   , y fila
void lcd_gotoxy(unsigned char x, unsigned char y) 
{ 
    unsigned char address; 
    switch(y){ 
        case 1: 
            address = LCD_LINE_1_ADDRESS;
            lcd_line = 1;
            break; 
        case 2: 
            address = LCD_LINE_2_ADDRESS;
            lcd_line = 2;
            break; 
        case 3: 
            address = LCD_LINE_3_ADDRESS;
            lcd_line = 3;
            break; 
        case 4: 
            address = LCD_LINE_4_ADDRESS;
            lcd_line = 4;
            break; 
        default: 
            address = LCD_LINE_1_ADDRESS;
            lcd_line = 1;
            break; 
    } 

    address += x-1; 
    lcd_send_byte(0, 0x80 | address); 
} 

//----------------------------- 
void lcd_putc(char *c) 
{
    //while(*c != '\0'){
    for(int i=0;c[i]!='\0';i++){
        //switch(*c){ 
        switch(c[i]){ 
            case '\f': 
                lcd_send_byte(0,1); 
                lcd_line = 1; 
                __delay_ms(2); 
                break; 
            case '\n': 
                lcd_gotoxy(1, ++lcd_line); 
                break; 
            case '\b': 
                lcd_send_byte(0,0x10); 
                break; 
            default:
                //lcd_send_byte(1,*c); 
                lcd_send_byte(1,c[i]); 
                break; 
        }
        //c++;
    }
} 

void lcd_clear(){
    lcd_send_byte(0,1); 
    lcd_line = 1; 
    __delay_ms(2); 
}

void lcd_get_cgram(unsigned char n){
   lcd_send_byte(1,n);
}
void lcd_set_cgram(unsigned char p, char *ptr){
    lcd_send_byte(0,0x40+p*8);

    /*p <<= 3;
    p &= 0x38;
    lcd_send_byte(0, 0x40 | p);*/

    for(unsigned char i=0; i<8; i++)
    {
        lcd_send_byte(1, *ptr++);
    }
}

void lcd_cursor_on(unsigned char on)
{
    if (on){
        lcd_send_byte(0,0x0F);           //turn LCD cursor ON
    }else{
        lcd_send_byte(0,0x0C);           //turn LCD cursor OFF
    }
}

#endif