//Funciones, que son, tipos y como se declaran
#include <stdio.h>
#include "stdlib.h"


void menu(void);
void cuadrado();
void cubo();

int main(){
	int a, opcion, resultado;
	
	do{
		menu();
		scanf("%d",&opcion);
		getchar();
		switch(opcion){
			case 0:
				printf("Adios\n");
				break;
			case 1:
				system("cls");
				break;
			case 2:
				cuadrado();
				break;
			case 3:
				cubo();
				break;
			case 4:
				resultado = cuarta();
				printf("\nel el numero al cuandrado es %d\n\n",resultado);
				break;
			default:
				printf("Opcion no disponibe\n");
		}
	}while(opcion != 0);
	
}

void menu(void){
	
	printf("Menu desde una funcion\nEscribe 1 para volver a mostrar el menu\n");
	printf("Escribe 2 para obtener el cuadrado de un numero\nEscribe 3 para obtener el cubo de un numero");
	printf("\nEscribe 4 para el numero a la cuarta potencia\nEscribe 0 para salir\n");
}

void cuadrado(){
	int x;
	char txt[10];
	printf("\nFuncion cuadrado de un numero\ndame el numero a elevear al cuadrado\n");
	x = atoi( gets(txt) );
	printf("\nel cuadrado del numero %d, es: %d\n\n",x, x*x);
	
}

void cubo(){
	int x;
	char txt[10];
	printf("\nFuncion cubo de un numero\ndame el numero a elevear al cubo\n");
	x = atoi( gets(txt) );
	printf("\nel cubo del numero %d, es: %d\n\n",x, x*x*x);
}

int cuarta(){
	int x;
	char txt[10];
	printf("\nFuncion eleva un numero a la cuarta\ndame el numero a elevear\n");
	x = atoi( gets(txt) );
	return x*x*x*x;
}
