#include <stdio.h>
#include <stdint.h>
#include "stdbool.h"

void cifras_entero_base_2(int x);

/*int cifras_entero_base_2(int x);
void cifras_entero_base_2(int *ptrX);*/

int main(){
	int y = 1000;
	printf("Programa que convierte un numero decimal a binario\ncon recursividad\n\n");
	printf("el el numero en decimal es: %i\n",y);
	printf("el el numero en binario es: ");
	// 5 en binario es: 0b101
	cifras_entero_base_2(y);
}

void cifras_entero_base_2(int x){
	int y, r;
	r = x%2;
	y = x/2;
	if(y != 0){
		cifras_entero_base_2(y);
	}
	printf("%i",r);
	return;	
}