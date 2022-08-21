
/*
Estas librerias fueron escritas por: https://circuitdigest.com/microcontroller-projects/4x4-keypad-interfacing-with-pic16f877a
 * pero modificadas por mi para poder adaptarlas al nuevo XC8, dale like.
 * 
Youtube   ? https://www.youtube.com/channel/UCyocHq5iN-7DmFRPmLYJBcg?sub_confirmation=1
 * 
Instagram ? https://www.instagram.com/pictrance/
 * 
Facebook  ? https://www.facebook.com/groups/2427784587295489
Facebook  ? https://www.facebook.com/Proyectos-PIC-102477961454131
 * 
Telegram  ? https://t.me/PicTrance1
 * 
 * La libreria puede funcionar con dos puertos distintos sin necesidad de usar solamente el
 * Puerto B como comunmente se hace,
 * en este ejemplo se utiliza el puerto A y el Puerto B, para las Filas y columnas
 * Agosto 2021
*/

#include "teclado.h"

void teclado_init(void){
   
     Keypad_PORT    = 0x00;        // Set Keypad port pin values zero0
     Keypad_LAT     = 0;
     Keypad_PORT_Direction = 0x0F;      // First 4 pins input
     Keypad_LAT_Direction  = 0x00;      // First 4 pins output  
     //OPTION_REG &= 0x7F;
     WPUA = 0x0F;
     WPUB = 0x0F;
}

char teclado_getc(void){
            X_1 = 0; X_2 = 1; X_3 = 1; X_4 = 1;
            __delay_us(10);
            if (Y_1 == 0) { __delay_ms(100); while (Y_1==0); return '1'; }
            if (Y_2 == 0) { __delay_ms(100); while (Y_2==0); return '2'; }
            if (Y_3 == 0) { __delay_ms(100); while (Y_3==0); return '3'; }
            if (Y_4 == 0) { __delay_ms(100); while (Y_4==0); return 'A'; }
            
            X_1 = 1; X_2 = 0; X_3 = 1; X_4 = 1;
            //__delay_us(100);
            if (Y_1 == 0) { __delay_ms(100); while (Y_1==0); return '4'; }
            if (Y_2 == 0) { __delay_ms(100); while (Y_2==0); return '5'; }
            if (Y_3 == 0) { __delay_ms(100); while (Y_3==0); return '6'; }
            if (Y_4 == 0) { __delay_ms(100); while (Y_4==0); return 'B'; }
            
            X_1 = 1; X_2 = 1; X_3 = 0; X_4 = 1;
            //__delay_us(100);
            if (Y_1 == 0) { __delay_ms(100); while (Y_1==0); return '7'; }
            if (Y_2 == 0) { __delay_ms(100); while (Y_2==0); return '8'; }
            if (Y_3 == 0) { __delay_ms(100); while (Y_3==0); return '9'; }
            if (Y_4 == 0) { __delay_ms(100); while (Y_4==0); return 'C'; }
           
            X_1 = 1; X_2 = 1; X_3 = 1; X_4 = 0;
            __delay_us(10);
            if (Y_1 == 0) { __delay_ms(100); while (Y_1==0); return '*'; }
            if (Y_2 == 0) { __delay_ms(100); while (Y_2==0); return '0'; }
            if (Y_3 == 0) { __delay_ms(100); while (Y_3==0); return '#'; }
            if (Y_4 == 0) { __delay_ms(100); while (Y_4==0); return 'D'; }
            
    return 0;         
}


char keypad_scanner(void)  
{ 
    X_1 = 0; X_2 = 1; X_3 = 1; X_4 = 1;
    __delay_us(10);
            if (Y_1 == 0) { __delay_ms(100); while (Y_1==0); return KEYS[0][0]; }
            if (Y_2 == 0) { __delay_ms(100); while (Y_2==0); return KEYS[0][1]; }
            if (Y_3 == 0) { __delay_ms(100); while (Y_3==0); return KEYS[0][2]; }
            if (Y_4 == 0) { __delay_ms(100); while (Y_4==0); return KEYS[0][3]; }
            
            X_1 = 1; X_2 = 0; X_3 = 1; X_4 = 1;    
            if (Y_1 == 0) { __delay_ms(100); while (Y_1==0); return KEYS[1][0]; }
            if (Y_2 == 0) { __delay_ms(100); while (Y_2==0); return KEYS[1][1]; }
            if (Y_3 == 0) { __delay_ms(100); while (Y_3==0); return KEYS[1][2]; }
            if (Y_4 == 0) { __delay_ms(100); while (Y_4==0); return KEYS[1][3]; }
            
            X_1 = 1; X_2 = 1; X_3 = 0; X_4 = 1;    
            if (Y_1 == 0) { __delay_ms(100); while (Y_1==0); return KEYS[2][0]; }
            if (Y_2 == 0) { __delay_ms(100); while (Y_2==0); return KEYS[2][1]; }
            if (Y_3 == 0) { __delay_ms(100); while (Y_3==0); return KEYS[2][2]; }
            if (Y_4 == 0) { __delay_ms(100); while (Y_4==0); return KEYS[2][3]; }
           
            X_1 = 1; X_2 = 1; X_3 = 1; X_4 = 0;
            __delay_us(10);
            if (Y_1 == 0) { __delay_ms(100); while (Y_1==0); return KEYS[3][0]; }
            if (Y_2 == 0) { __delay_ms(100); while (Y_2==0); return KEYS[3][1]; }
            if (Y_3 == 0) { __delay_ms(100); while (Y_3==0); return KEYS[3][2]; }
            if (Y_4 == 0) { __delay_ms(100); while (Y_4==0); return KEYS[3][3]; }
            
    return 0;                   
}