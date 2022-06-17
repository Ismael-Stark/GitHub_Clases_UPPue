#include <stdio.h>
#include <stdint.h>
#include <windows.h> 

void lcd_puts(char *c){		//NO SE IMPLEMENTA EN EL MICRO
	int i = 0;
	for (i=0;i<=16;i++){
		printf("%c",*c++);
	}
	//printf("\n\n");
}

int main(){
	char mensaje[] = {"mensaje rotativo saludos a todos mensaje rotativo saludos a todos "};
	char buffer[40];
	uint8_t posicion = 0;
	uint8_t caracter =0;
	
	for(int r = 0 ; r<=80; r++){	//no se implementa en micro
		
		for(posicion=0;posicion<20;posicion++)     // Con el bucle for incrementamos en una unidad la variable posicion.
	      {
	         buffer[posicion]=mensaje[posicion+caracter]; // LCD_buffer2 almacena en la posición "posicion" el valor de "posicion"+"caracter" de LCD_buffer1 
	      }
	    caracter++;

		lcd_puts(buffer);		//NO SE IMPLEMENTA EN EL MICRO
		_sleep(500);
		system("cls");			/// ES PARA LIMPIAR LA TERMINAL, NO SE IMPLEMENTA EN UN MICROCOLADOR
		if(caracter==34)  // Si "caracter" es igual a 25 (25 es el número de caracteres del mensaje a desplazar incluyendo el espacio").
      	{
        	caracter=1;  
     	}	
	}	
}