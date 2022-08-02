#include <stdio.h> 
#include <stdlib.h>
#include <string.h>

//creo mis propios nombre de tipos de variables  usando typedef
//typedef su función es asignar un nombre alternativo a tipos existentes
typedef char int8;
typedef char byte;

typedef int entero;
typedef long int32;

//funcion que me devuelve el numero de espacios usados en un array
int str_largo(char *x){// puntero x
	int i = 0;
	while( *x != '\0'){ //verifico cuantos espacios hay ocupados antes de encontrar el caracter nulo
		x++;
		i++;
	}
	
	return i;
}


int main(){
	
	int8 txt[80]= "hola";
	byte txt2[30];
	int32 d=30;
	
	entero num;
	num = sizeof(txt);
	printf("%i\n\n",num);//imprime
	num = strlen(txt);
	printf("\nUsando strlen: %i",num);//imprime
	
	num = str_largo(txt);

	printf("\nCon mi funcion: %i\n otros datos %s %lu",num,txt,d);//imprime
	
	
}
