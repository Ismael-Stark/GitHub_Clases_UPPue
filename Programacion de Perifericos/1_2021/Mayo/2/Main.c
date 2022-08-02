#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include "ultrasonico.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	uint8_t distancia;
	
	distancia = hc_sr04_cm();
	
	printf("la distancia del objetos es: %d",distancia);
	
	return 0;
}