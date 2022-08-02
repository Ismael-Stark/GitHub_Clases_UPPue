#include <stdio.h>


//typedef  es una palabra reservada en C/C++ Su función es asignar un nombre alternativo a tipos existentes.

typedef unsigned char UINT8;
typedef unsigned int uint;
typedef long Lint;
typedef short sint;


typedef union
{
    UINT8 Val;
    struct
    {
        UINT8 b0:1;
        UINT8 b1:1;
        UINT8 b2:1;
        UINT8 b3:1;
        UINT8 b4:1;
        UINT8 b5:1;
        UINT8 b6:1;
        UINT8 b7:1;
    };
} UINT8_VAL, UINT8_BITS;


int main(){
	UINT8 a, b[90];	//declaro variables ahora usando UINT8 que significa que
					//es un dato del tipo unsigned char
	uint variable1;
	Lint variable2;
	sint variable3;

	
	UINT8_VAL mi;		//declaro mi variable de 8 bits a la que puedo acceder a cadabit
						//de forma independiente
	
	mi.Val = 'A'; // 0100  0001
	
	printf("mi variable original es una letra: %c",mi);
	
				// el bit 3 de la variable "mi" la pongo en 1
	mi.b3=1; 	//ahora equivale a 0100 1001
	
	printf("\nal modificar el bit3 de la variable ahora se convierte en: %c",mi); 	//imprimo mi varible ahora la leta 'A' se 
																					//convierte en una 'I'
						
				// el bit 4 de la variable "mi" la pongo en 1
	mi.b4=1; 	//ahora equivale a 0101 1001
	
	printf("\nal modificar el bit4 de la variable ahora se convierte en: %c",mi); 	//imprimo mi varible ahora la leta 'A' se 
																					//convierte en una 'Y'
	
	
	
	
	
	
	
}
