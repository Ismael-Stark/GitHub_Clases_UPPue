#include <stdio.h>

int main(){
	char c;
	int i,d;
	unsigned int u;
	float f;
	char s[10];// = {"Hola mundo"};
	
	printf("Dame un dato de tipo entero con o sin signo\n");
	scanf("%i",&i);
	printf("Dame un dato de tipo entero con o sin signo\n");
	scanf("%u",&d);
	printf("Dame un dato de tipo entero sin signo\n");
	scanf("%u",&u);
	/*printf("Dame un dato de tipo flotante\n");
	scanf("%f",&f);
	fflush(stdin);
	printf("Dame un dato de tipo carcater\n");
	scanf("%c",&c);
	printf("Dame un dato de tipo string\n");
	scanf("%s",&s);*/

	printf("\n\nel dato entero es: %i\n",i);
	printf("el dato entero es: %u\t %i\n",d,d);
	printf("el dato entero sin signo es: %u\t %i\n",u,u);
	printf("\n\nel dato entero es: %f\n",i);
	/*printf("el dato flotanto es: %f\n",f);
	printf("el dato caracter es: %c\n",c);
	printf("el dato string es: %s\n",s);*/
	
	//%i 	int,	enteros con signo(sin decimales)
	//%d 	int, enteros con signo(sin decimales)
	//%u 	unsigned, enteros sin signo(solo num positivos)
	//%f	float, numero con decimales
	//%c	caracter
	//%s	string o cadena de caracteres
}