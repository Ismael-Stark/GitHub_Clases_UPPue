#include <stdio.h>

int main(){
	char caracter;
	do{
		printf("\n\nPresiona una tecla y te digo que caracter es:\t");
		scanf("%c",&caracter);
		fflush(stdin);
		if (caracter >=97 && caracter <=122 ){
			printf("Es un carcater minusculo");
		} else if (caracter >=65 && caracter <=90 ){
			printf("Es un carcater mayusculo");
		}else if (caracter >=48 && caracter <=57 ){
			printf("Es un numero");
		}else if (caracter == '(' ||caracter == '.' ||caracter == ',' || caracter == ':' ||caracter == ';' ||caracter == ')' ){
			printf("Es un signo de puntuacion");
		}else {
			printf("Es un carcater desconocido");
		}
	}while(1);
		
}