#include <stdio.h>
#include <string.h>


int main(){
	int i,j;
	unsigned int u;
	float f;
	char x,y;
	char s[20];

	printf("dame un numero entero\n");
	scanf("%d",&i);
	printf("dame un numero entero\n");
	scanf("%u",&j);
	printf("dame un numero entero\n");
	scanf("%u",&u);
	/*printf("dame un numero flotante\n");
	scanf("%f",&f);
	fflush(stdin);
	printf("dame un caracter\n");
	scanf("%c",&x);
	fflush(stdin);
	printf("dame un frase de no mas de 10 carcateres\n");
	scanf("%s",&s);*/

	printf("\n\nescribiste como entero: %i\n",i);
	printf("escribiste como entero u: %u\t %i\n",j,j);
	printf("escribiste como entero u : %u\t %i\n",u,u);
	printf("\n\nescribiste como entero: %f\n",i);
	/*printf("escribiste como flotante: %f\n",f);
	printf("escribiste como caracter: %c\n",x);
	printf("escribiste como frase: %s\n",s);*/
	//%i 	int
	//%d 	int
	//%u 	unsigned, enteros sin signo
	//%f	float, numero con decimales
	//%c	caracter
	//%s	string o cadena de caracteres
}