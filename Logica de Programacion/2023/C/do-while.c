#include "stdio.h"

int main(){
	unsigned short int  cont, suma,numerosAsumar;
	cont = 11;
	suma = 0;
	// Imprimir "dime cuantos numeros quieres sumar"
	// leer numerosAsumar
	numerosAsumar = 10;
	
	do{
		suma = suma + cont;
		cont = cont + 1;
	}while(cont>=numerosAsumar);	
	
	printf("%i,\t%i",suma, cont);
	
	
}