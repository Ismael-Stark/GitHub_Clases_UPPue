#include <stdio.h>
#include <stdint.h>
#include "stdbool.h"

int main(){

	char cadena[100];// = "Hola mundo";
	int i=0;
	
	//printf("%s__\n",cadena);
	//printf("el array cadena[] tiene el valor '%c' en la posicion %d\n",cadena[10],  10);
	
	int c;
  	puts ("Enter text. Include a dot ('.') in a sentence to exit:");
	do {
		c = fgetchar();
		cadena[i] = c;
		i++;

	} while (c != '\n');
	
	//gets(cadena);
	
	cadena[i-1] = '\0';// es para eliminar el enter del array, e indicar que ahi termina mi mensaje
	puts (cadena);
	puts ("Fin mensaje");
  return 0;


	/*for(int i=0; i<=30;i++){
		printf("el array edades[] tiene el valor %d en la posicion %d\n",edades[i],  i);
	}*/
	

}