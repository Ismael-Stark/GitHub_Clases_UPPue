#include "LCD_i2c.h"

void Write_PCF(char dato){
   /*I2C_start();
   I2C_write(PCF|(PCF_ID<<1));
   I2C_write(dato|blacking );
   I2C_stop();*/
   
   I2C1_Write1ByteRegister( PCF|(PCF_ID),0,(dato|blacking) );
      
}

void Send_D7_D4(int8 address,int8 nibble){  
   char datos=0;

   if((nibble & 1)==1) datos= datos|LCD_DB4; else datos = datos&~LCD_DB4;
   if((nibble & 2)==2) datos= datos|LCD_DB5; else datos = datos&~LCD_DB5;
   if((nibble & 4)==4) datos= datos|LCD_DB6; else datos = datos&~LCD_DB6;
   if((nibble & 8)==8) datos= datos|LCD_DB7; else datos = datos&~LCD_DB7;
      delay_us(60);
   if(address)
      datos= datos |LCD_RS;   
   else
     datos = datos &~LCD_RS; 
      

   Write_PCF( datos | LCD_E);
   delay_us(2);
   Write_PCF( datos & ~LCD_E);
}

void lcd_send_byte(int8 address, int8 n){
   Send_D7_D4(address,n >> 4);
   Send_D7_D4(address,n & 0xf);
}

void lcd_init(void){
   int8 i;
   /*I2C_start();
   I2C_write(PCF|(PCF_ID<<1));
   I2C_write(0x00);
   I2C_stop();*/
   
   I2C1_Write1ByteRegister(PCF|(PCF_ID),0,0);
   
   delay_ms(35);

   for(i=0 ;i < 3; i++){
      Send_D7_D4(0,0x03);
      delay_ms(5);
   }
    Send_D7_D4(0,0x02);
    
    /* lcd_send_byte(0, 0x28);
    delay_ms(5);
    lcd_send_byte(0, 0x08);
    delay_ms(5);
    lcd_send_byte(0, 0x01);
    delay_ms(5);
    lcd_send_byte(0, 0x06);
    delay_ms(5);
    lcd_send_byte(0, 0x0C);
    */
    
   for(i=0; i < sizeof(LCD_INIT_STRING); i++) 
   {
      lcd_send_byte(0, LCD_INIT_STRING[i]); 
      delay_ms(5);
   } 
   g_LcdX = 0;
   g_LcdY = 0;
}

void lcd_gotoxy(int8 x, int8 y){
   int8 address;
   switch(y) 
   { 
      case 1: 
         address = LCD_LINE_1_ADDRESS; 
         break; 
      case 2: 
         address = LCD_LINE_2_ADDRESS; 
         break; 
      case 3: 
         address = LCD_LINE_3_ADDRESS; 
         break; 
      case 4: 
         address = LCD_LINE_4_ADDRESS; 
         break; 
      default: 
         address = LCD_LINE_1_ADDRESS; 
         break; 
   } 
   address += x-1;
   lcd_send_byte(0, 0x80 | address);
   
   g_LcdX = x - 1;
   g_LcdY = y - 1;
}

void lcd_putc(unsigned char c){
    switch(c){
        case '\f':
            lcd_send_byte(0,1);
            delay_ms(2);
            g_LcdX = 0;
            g_LcdY = 0;
            delay_ms(2); 
            break;
         case '\n':
            lcd_gotoxy(1, g_LcdY+2);
            break;
         default:
            lcd_send_byte(1,c);
            break;
    }
}

void lcd_puts(unsigned char *dato){
    while (*dato){
        switch(*dato){
            case '\f':
                lcd_send_byte(0,1);
                delay_ms(2);
                g_LcdX = 0;
                g_LcdY = 0;
                delay_ms(2); 
                break;
            case '\n':
                lcd_gotoxy(1, g_LcdY+2);
                break;
            default:
                lcd_send_byte(1,*dato);
                break;
        }
      
        //lcd_send_byte(1,*dato);    // Envio el dato al LCD
        dato++;             // Incrementa el buffer de dato
    }
}

void Clear_LCD(){
     lcd_send_byte(0,1);
     delay_ms(2); 
}
/*void Clear_LCD(){
   lcd_send_byte(1,n);
}*/

void CGRAM(uint8_t n){
   lcd_send_byte(1,n);
}

void CGRAM_x(uint8_t p){
    lcd_send_byte(0,0x40+p*8);
}
