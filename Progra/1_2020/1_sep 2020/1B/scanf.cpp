#include <stdio.h>
#define PI 3.1416
int n;

int main(){
	int a,b,suma, res, mult;
	float div,c;
	printf("\nPrograma que lee numeros del teclado\nDame el primer numero: ");
	scanf("%i",&a);
	//scanf() es para leer valores del teclado
	//("%i",&variable)		%i es para leer numeros del tipo int
	//				&variable es la variable donde se guardara lo leido
	
	printf("\nDame el segundo numero: ");
	scanf("%i",&b);
	
	printf("\nDame un numero con decimales: ");
	scanf("%f",&c);
	
	suma	= a+b;
	res		= a-b;
	mult	= a*b;
	div		= (float)a/b;
	
	printf("\nEl numero 1 que escribiste fue: %i",a);
	printf("\nEl numero 2 que escribiste fue: %i",b);
	printf("\nEl numero con decimales que escribiste fue: %.3f",c);
	
	printf("\n\n\nLa suma  de a + b es: %i",suma);
	printf("\nLa resta de a - b es: %i",res);
	printf("\nLa multi de a * b es: %i",mult);
	printf("\nLa divic de a / b es: %.3f",div);
	
	//%i 	int
	//%d 	decimal
	//%u 	unsigned
	//%f	float, numero con decimales
	//%c	caracter
	//%s	string o cadena de caracteres
}

//A y P: cua, rec, trian, circ
