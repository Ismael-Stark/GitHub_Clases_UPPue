#include <stdio.h>
#include <stdint.h>
#include "stdbool.h"

int main(){
	int y = 5;
	int *ptrY;
	
	ptrY = &y;
	printf("mi variable y guarda el valor: %i\n",y);
	printf("la direccion de memoria de la variable y es: %p\n\n",&y);
	printf("mi apuntador y guarda la direccion de memoria: %p de la variable Y\n",ptrY);
	printf("mi apuntador y apunta al valor %i de la variable y\n",*ptrY);
	printf("la direccion de memoria de mi apuntador ptrY es: %p",&ptrY);
	
	*ptrY= *ptrY+15;//estoy sumando indirectamente con el puntero a la variable Y un +15,
					//ahora la variable Y guarda el valor de 20
	printf("mi variable Y guarda el valor: %i\n",y);
	
	ptrY++;// ahora vamos a apuntar a una direccion de memoria de y+1
	printf("la direccion de memoria de mi apuntador ptrY es: %p",ptrY);
}

