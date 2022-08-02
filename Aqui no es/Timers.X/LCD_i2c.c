#include "LCD_i2c.h"

/*uint8_t const LCD_INIT_STRING[4] =
{
	0x20 | (lcd_type << 2),  // Set mode: 4-bit, 2+ lines, 5x8 dots
	0xc,                     // Display on
	1,                       // Clear display
	6                        // Increment cursor
};*/
uint8_t g_LcdX=0, g_LcdY=0;


void Write_PCF(char dato){
    #if defined(__XC8) || STM32
        I2C1_Write1ByteRegister( PCF|(PCF_ID),0, (dato | blacking) );
    #else
       i2c_start();
       i2c_write(PCF|(PCF_ID<<1));
       i2c_write(dato|blacking );
       i2c_stop();
       //I2C1_Write1ByteRegister( PCF|(PCF_ID),0, (dato | blacking) );
    #endif
      
}

void Send_D7_D4(uint8_t address,uint8_t nibble){  
   char datos=0;

   if((nibble & 1)==1) datos= datos|LCD_DB4; else datos = datos&~LCD_DB4;
   if((nibble & 2)==2) datos= datos|LCD_DB5; else datos = datos&~LCD_DB5;
   if((nibble & 4)==4) datos= datos|LCD_DB6; else datos = datos&~LCD_DB6;
   if((nibble & 8)==8) datos= datos|LCD_DB7; else datos = datos&~LCD_DB7;
#if defined(__XC8) || defined(__PCH__) || defined(__PCM__)//si se usa xc8 o ccs podemos usar delay_us
   delay_us(60);
   #warning("Este mensaje 1 se imprime si CCS o xc8");
#else
   //delay_ms(1);
   for(uint16_t i = 0; i < 60;i++);
    #warning("Este mensaje 1 se imprime si STM32");
#endif


   if(address)
      datos= datos |LCD_RS;   
   else
     datos = datos &~LCD_RS; 
      

   Write_PCF( datos | LCD_E);
#if defined(__XC8) || defined(__PCH__) || defined(__PCM__)//si se usa xc8 o ccs podemos usar delay_us
   delay_us(2);
   #warning("Este mensaje 2 se imprime si CCS o xc8");
#else
   //delay_ms(1);
   for(uint16_t i = 0; i < 2;i++);
   #warning("Este mensaje 2 se imprime si STM32");
#endif
   Write_PCF( datos & ~LCD_E);
}

void lcd_send_byte(uint8_t address, uint8_t n){
   Send_D7_D4(address,n >> 4);
   Send_D7_D4(address,n & 0xf);
}

void lcd_init(void){
   uint8_t i;
   
   #if defined(__XC8) || STM32
        I2C1_Write1ByteRegister(PCF|(PCF_ID),0,0);
   #else
        i2c_start();
        i2c_write(PCF|(PCF_ID<<1));
        i2c_write(0x00);
        i2c_stop();
   #endif
   
   delay_ms(35);

   for(i=0 ;i < 3; i++){
      Send_D7_D4(0,0x03);
      delay_ms(5);
   }
    Send_D7_D4(0,0x02);


    lcd_send_byte(0, 0x28);
    delay_ms(5);
    lcd_send_byte(0, 0x08);
    delay_ms(5);
    lcd_send_byte(0, 0x01);
    delay_ms(5);
    lcd_send_byte(0, 0x06);
    delay_ms(5);
    lcd_send_byte(0, 0x0C);


    //uint8_t  LCD_INIT_STRING[5] = {  0x20 | (lcd_type << 2),  0xc,  1,  6   };

    /*lcd_send_byte(0, 0x20 | (lcd_type << 2));
    delay_ms(5);
    lcd_send_byte(0, 0xc);
    delay_ms(5);
    lcd_send_byte(0, 0x01);
    delay_ms(5);
    lcd_send_byte(0, 0x06);
    */
/*
   for(i=0; i < sizeof(LCD_INIT_STRING); i++)
   {
      lcd_send_byte(0, LCD_INIT_STRING[i]);
      delay_ms(5);
   }*/

   g_LcdX = 0;
   g_LcdY = 0;
}

void lcd_gotoxy(uint8_t x, uint8_t y){
   uint8_t address;
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

void lcd_putc(uint8_t c){
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

void lcd_puts(uint8_t *dato){
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

/*void CGRAM(uint8_t n){
   lcd_send_byte(1,n);
}
void CGRAM_x(uint8_t p){
    lcd_send_byte(0,0x40+p*8);
}*/


void lcd_setCustomChar(uint8_t *dato, uint8_t dir){ // Donde dir es la posicion en donde se escribiran los caracteres, va de 0 a 7
	//CGRAM_x(dir);         // Donde n es la posicion en donde se escribiran los caracteres, va de 0 a 7
	lcd_send_byte(0,0x40+dir*8);
	for(uint8_t i=0;i<=7 ;i++) {
		lcd_send_byte(1,*dato++);  // E una vez definido la funcion, envia lo 8bytes,
	}
}

void lcd_showCustomChar(uint8_t x, uint8_t y, uint8_t dir){
	lcd_gotoxy( x,  y);
	//CGRAM(dir); // Muestra el caracter especial almacenado en la posicion dir;*/
	lcd_send_byte(1,dir);

}
