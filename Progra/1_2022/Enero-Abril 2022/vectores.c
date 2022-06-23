#include <stdio.h>
#include <stdint.h>
#include "stdbool.h"

#define posicion 8



//18	19	20	17	18	19	25	23	21	18	19	20	20	17	18
int main(){
	int edades[31];//vector sin inizailizar
	//vector 2, que se inicializa desde su declaracion
	int edades_2[15] = {18,19,20,17,18,19,25,23,21,18,19,20,20,17,18};
	//vector3 para guardar texto, o cadenas de caracteres
	char letra = 'H';
	char cadena[20] = "Hola a todos";
	
	printf("%c\n\n%s\n\n",letra, cadena);
	//guardar un dato en especifico en vector 1 en una posicion x
	
	edades[0] = 1;
	edades[1] = 2;
	edades[2] = 3;
	edades[10] = 4;
//	........
	
	printf("el array edades_2[] tiene el valor %d en la posicion %d\n",edades[posicion],  posicion);
	printf("el array edades[] tiene el valor %d en la posicion %d\n",edades[10],  10);

	for(int i=0; i<=30;i++){
		edades[i] = i+1;
	}
	/*for(int i=0; i<=30;i++){
		printf("el array edades[] tiene el valor %d en la posicion %d\n",edades[i],  i);
	}*/
	

}