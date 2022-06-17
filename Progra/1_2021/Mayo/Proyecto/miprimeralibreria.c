//aqui se escribe todo el codigo de las funciones que se declararon en el archivo .h
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include "miprimeralibreria.h"

void saludar(void){
	printf("hola\n");
}
void bienvenida(void){
	printf("Bienvenidos\n");
}

uint8_t sumarnumeros(uint8_t a, uint8_t b){
	return (a+b);
}