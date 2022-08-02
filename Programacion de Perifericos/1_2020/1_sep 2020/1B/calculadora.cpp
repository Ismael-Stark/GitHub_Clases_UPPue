#include <stdio.h>
#define PI 3.1416
int n;

int main(){
	int suma, res, mult;
	float div;
	
	suma = 5 + 6;
	res	 = 5 - 6;
	mult = 5 * 6;
	//div  = 6 / 5.0;
	div  = (float)6 / 5;
	
	//  para la diagonal invertida \ se obtiene pulsando
	//	alt+92(con teclado numerico)
	printf("La suma de 5+6 es: %i\n",suma);
	printf("La resta de 5-6 es: %i\n",res);
	printf("La multiplicacion de 5*6 es: %i\n",mult);
	printf("La division es: %.3f\n",div);
							//%.1f indica que imprime solo un decimal

	//%i 	int
	//%d 	decimal
	//%u 	unsigned
	//%f	float, numero con decimales
	//%c	caracter
	//%s	string o cadena de caracteres
}
