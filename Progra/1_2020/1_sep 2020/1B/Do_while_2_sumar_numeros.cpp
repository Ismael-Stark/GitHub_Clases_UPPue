//estructuras iterativas
//usando Do-while
//Leer números enteros por el teclado, hasta que el usuario ingrese el 0.
//Finalmente, mostrar la sumatoria de todos los números ingresados.

#include "stdio.h"


int main(){
	int suma = 0;
	int i;
	
	
	printf("Ciclo Do while\n");
	
	do{		
		printf("ingresa un numero\n");
		scanf("%i",&i);
		suma  = suma + i;
	}while( i != 0);
	
	printf("la suma de los numeros es: %i\n",suma);	
}
