//Funciones, que son, tipos y como se declaran
#include <stdio.h>
#include "stdlib.h"
void menu();
	
void cuadrado(int x){
	printf("\n\nes cuadrado de %d, es: %d\n",x, x*x);
}

int main(){
	int a, opcion = -1;
	a = 4;
	do{
		menu();
		scanf("%d",&opcion);
		switch(opcion){
			case 1:
				system("cls");	//stdlib.h
				break;
			case 2:
				cuadrado(a);
				break;
			default:
				printf("no es una opcion");
		}
	}while(opcion !=3 );
}

void menu(){
	printf("\nmenu desde una funcion\nescribe 1 para volver a mostrar el menu\n2 para obtener el cuadrado de un numero\n3 para salir\n");
}
