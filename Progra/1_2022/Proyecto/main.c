#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include "stdbool.h"
#include "prototiposFunciones.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float resultado=0;
	imprimir_mensaje();
	suma(5,6) ;//llamando una funcion a la cual le debo enviar parametros
	resultado = resta(8.2,4.3);
	printf("\nla resta = %.2f",resultado);
	return 0;
}

