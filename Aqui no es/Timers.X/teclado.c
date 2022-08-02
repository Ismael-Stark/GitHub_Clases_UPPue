#include "teclado.h"



void teclado_init(){
    Keypad_PORT    = 0x00;        // Set Keypad port pin values zero0
    Keypad_LAT     = 0;
    Keypad_PORT_Direction = 0b01111111;      // First 4 pins input
    //Keypad_LAT_Direction  = Keypad_LAT_Direction & ~(1<<0 | 1<<1 | 1<<2 | 1<<3) ;      // First 4 pins output  
    Keypad_LAT_Direction = 0b11110000;
    //OPTION_REG &= 0x7F;
    //WPUA = 0x0F;
    WPUB = 0b00011110;
    
}

uint8_t teclado_get(){
    X_1 = 0; X_2 = 1; X_3 = 1; X_4 = 1;
            __delay_us(10);
            if (Y_1 == 0) { __delay_ms(100); while (Y_1==0){}; return '1'; }
            if (Y_2 == 0) { __delay_ms(100); while (Y_2==0){}; return '2'; }
            if (Y_3 == 0) { __delay_ms(100); while (Y_3==0){}; return '3'; }
            if (Y_4 == 0) { __delay_ms(100); while (Y_4==0){}; return 'A'; }
            
            X_1 = 1; X_2 = 0; X_3 = 1; X_4 = 1;
            //__delay_us(100);
            if (Y_1 == 0) { __delay_ms(100); while (Y_1==0){}; return '4'; }
            if (Y_2 == 0) { __delay_ms(100); while (Y_2==0){}; return '5'; }
            if (Y_3 == 0) { __delay_ms(100); while (Y_3==0){}; return '6'; }
            if (Y_4 == 0) { __delay_ms(100); while (Y_4==0){}; return 'B'; }
            
            X_1 = 1; X_2 = 1; X_3 = 0; X_4 = 1;
            //__delay_us(100);
            if (Y_1 == 0) { __delay_ms(100); while (Y_1==0){}; return '7'; }
            if (Y_2 == 0) { __delay_ms(100); while (Y_2==0){}; return '8'; }
            if (Y_3 == 0) { __delay_ms(100); while (Y_3==0){}; return '9'; }
            if (Y_4 == 0) { __delay_ms(100); while (Y_4==0){}; return 'C'; }
           
            X_1 = 1; X_2 = 1; X_3 = 1; X_4 = 0;
            __delay_us(10);
            if (Y_1 == 0) { __delay_ms(100); while (Y_1==0){}; return '*'; }
            if (Y_2 == 0) { __delay_ms(100); while (Y_2==0){}; return '0'; }
            if (Y_3 == 0) { __delay_ms(100); while (Y_3==0){}; return '#'; }
            if (Y_4 == 0) { __delay_ms(100); while (Y_4==0){}; return 'D'; }
            
    return 0;
}