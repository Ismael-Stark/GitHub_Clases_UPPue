

#include "mcc_generated_files/mcc.h"
#include "mcc_generated_files/examples/i2c1_master_example.h"
#include "LCD_i2c.h"

const char Letra1[8]= { 0b00000,
                        0b11011,
                        0b11011,
                        0b00000,
                        0b11111,
                        0b11111,
                        0b01110,
                        0b00000};

void main(void)
{
    char mensaje[] = {"mensaje rotativo saludos a todos mensaje rotativo saludos a todos "};
	char buffer[40];
	uint8_t posicion = 0;
	uint8_t caracter =0, i=0;
    
    // initialize the device
    SYSTEM_Initialize();
    
    lcd_init();
    CGRAM_x(5);
    for(i=0;i<=7 ;i++) lcd_send_byte(1,Letra1[i]);
    // When using interrupts, you need to set the Global and Peripheral Interrupt Enable bits
    // Use the following macros to:

    // Enable the Global Interrupts
    //INTERRUPT_GlobalInterruptEnable();

    // Enable the Peripheral Interrupts
    //INTERRUPT_PeripheralInterruptEnable();

    // Disable the Global Interrupts
    //INTERRUPT_GlobalInterruptDisable();

    // Disable the Peripheral Interrupts
    //INTERRUPT_PeripheralInterruptDisable();
    lcd_puts("\fHola\nMayo 2021");
    lcd_gotoxy(16,2);
    CGRAM(5);
    while (1)
    {
        for(posicion=0;posicion<20;posicion++)     // Con el bucle for incrementamos en una unidad la variable posicion.
	      {
	         buffer[posicion]=mensaje[posicion+caracter]; // LCD_buffer2 almacena en la posición "posicion" el valor de "posicion"+"caracter" de LCD_buffer1 
	      }
	    caracter++;
        lcd_gotoxy(1,1);
		lcd_puts(buffer);		//NO SE IMPLEMENTA EN EL MICRO
		__delay_ms(500);
		if(caracter==34)  // Si "caracter" es igual a 25 (25 es el número de caracteres del mensaje a desplazar incluyendo el espacio").
      	{
        	caracter=1;  
     	}	
        // Add your application code
    }
}
/**
 End of File
*/