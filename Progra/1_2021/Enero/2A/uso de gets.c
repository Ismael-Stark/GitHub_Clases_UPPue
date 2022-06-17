/* como usar gets() en lugar de scanf()
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	int a,b;
	float f;
	char c;
	char s[100];
	
	char buffer[20];	//variable que sirve para guardar lo que se lee desde el teclado para despues convertir
						//ese valor a otro tipo de variable de ser necesario
	
	printf("Programa que lee datos desde el teclado\nusando la funcion gets\ndame un numero entero: ");
	
	gets(buffer);		//leemos teclado y se guarda en un buffer, se guarda como una cadena de texto
	a = atoi(buffer);	//se convierte a numero entero
	printf("\nEl valor leido por gets es: %s\ny el valor convertido a numero entero es: %i", buffer, a);
	printf("\ndame otro numero entero: ");
	gets(buffer);		//leemos teclado y se guarda en un buffer, se guarda como una cadena de texto
	b = atoi(buffer);	//se convierte a numero entero
	printf("\nEl valor leido por gets es: %s\ny el valor convertido a numero entero es: %i\n\n", buffer, b);
	printf("La suma de a + b es: %i\n\n", a + b);
	
	
	
	printf("dame un numero flotante: ");	
	gets(buffer);		//leemos teclado
	f = atof(buffer);	//se convierte a numero flotante
	printf("\nEl valor leido por gets es: %s\ny el valor convertido a numero flotante es: %f\n\n", buffer, f);
	
	
	printf("dame un string(cadena de texto) de maximo 100 caracteres: ");	
	gets(s);		//leemos teclado
	printf("\nEl valor leido por gets es: %s\n\n", s);
	
	
	printf("dame un caracter: ");	
	c = getchar();		//getchar, solo lee un caracter desde el teclado
	//f = atof(buffer);	//se convierte a numero flotante
	printf("\nEl valor leido por getchar es: %c\n\n", c);
	//printf("\nEl valor leido por gets es: %s\ny el valor convertido a numero flotante es: %f\n\n", buffer, f);
}




