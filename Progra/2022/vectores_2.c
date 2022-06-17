#include <stdio.h>
#include <stdint.h>
#include "stdbool.h"

#define posicion 8



//18	19	20	17	18	19	25	23	21	18	19	20	20	17	18
int main(){
	int vector1[31] = {12,24,20, 8,14,18,15,41,60,30,22,11,15,23,45};
	//vector 2, que se inicializa desde su declaracion
	int vector2[15] = {18,19,20,17,18,19,25,23,21,18,19,20,20,17,18};
	int sumaV[31];
	int suma, resta, multiplicacion ;
	float dision;
	
	
	suma = vector1[9] + vector2[10];
	resta = vector1[0] - vector2[10];
	multiplicacion = vector1[5] * vector2[9];
	dision = (float)vector1[9]/ vector2[5];
	
	printf("Suma: %d\n",suma);
	printf("Resta: %d\n",resta);
	printf("Multi: %d\n",multiplicacion);
	printf("Div: %f\n",dision);
	
	for (int i=0; i<15;i++){
		sumaV[i] = vector1[i] + vector2[i];

	}
	
	for (int i=0; i<15;i++){
		printf("Suma: %d\n",sumaV[i]);
	}
	
	suma = vector1[9] + 17;
	resta = 0 - vector2[10];
	multiplicacion = 2 * vector2[9];
	dision = (float)vector1[9]/ 3;
	
	printf("\nSuma: %d\n",suma);
	printf("Resta: %d\n",resta);
	printf("Multi: %d\n",multiplicacion);
	printf("Div: %f\n",dision);
	
	

}