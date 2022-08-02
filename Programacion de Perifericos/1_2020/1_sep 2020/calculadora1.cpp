#include <stdio.h>
#define PI 3.1416
#define PRINTF  printf

int n;

int main(){
	int suma,res,mult;
	float div;
	suma  = 4 + 8;
	res   = 4 - 8;
	mult  = 4 * 8;
	div   = 9 / 2.0;
	//div	  = (float)9 / 2;
	//  para la diagonl invertida \ se obtiene pulsando
	//	alt+92(con teclado numerico)
	printf("\nLa suma  de 4 + 8 es: %i",suma);
	printf("\nLa resta de 4 - 8 es: %i",res);
	printf("\nLa multi de 4 * 8 es: %i",mult);
	//printf("\nLa divic de 9 / 2 es: %f",div);
	printf("\nLa divic de 9 / 2 es: %.3f",div);
						//%.1f indica que imprime solo un decimal
	
	//%i 	int
	//%d 	decimal
	//%u 	unsigned
	//%f	float, numero con decimales
	//%c	caracter
	//%s	string o cadena de caracteres
	
}
