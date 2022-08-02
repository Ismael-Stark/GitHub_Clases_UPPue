/* como usar gets() en lugar de scanf()
*/

#include <stdio.h>
#include <stdlib.h>	//libreria para hacer conversiones de string a numeros... etc

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
	
	printf("\nEl valor leido por gets es: %s\ny el valor convertido a numero entero es: %i\n", buffer, a);
	
	
	printf("\nDame otro numero entero: ");
	
	gets(buffer);		//leemos teclado y se guarda en un buffer, se guarda como una cadena de texto
	b = atoi(buffer);	//se convierte a numero entero
	
	printf("\nEl valor leido por gets es: %s\ny el valor convertido a numero entero es: %i\n", buffer, b);
	
	
	printf("\nLa suma de %d + %d es: %i\n\n",a,b, a+b);
	printf("\nLa resta de %d - %d es: %i\n\n",a,b, a-b);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	printf("\n Dame un numero floatnte: ");
	gets(buffer);		//leemos teclado y se guarda en un buffer, se guarda como una cadena de texto
	f = atof(buffer);	//se convierte a numero flotante
	
	printf("\nEl valor leido por gets es: %s\ny el valor convertido a numero flotante es: %.20f\n\n", buffer, f);
	
	
	
	printf("\n Dame un texto(cadena de caracteres): ");
	gets(s);		//leemos teclado y se guarda en un buffer, se guarda como una cadena de texto

	printf("\nEl valor leido por gets es: %s\n\n", s);
	
	
	printf("\n Dame un caracter: ");
	c = getchar();		//getchar  lee el teclado y valor lo guarda en la variable, como un caracter
	printf("\nEl valor leido por getchar es: %c\n\n", c);
	
			
	
}