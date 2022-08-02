/*
 Los cuatro tipos de alcance para un identificador son:
 alcance de función, alcance de archivo, alcance de bloque, y alcance de prototipo de función.
*/

/*	alcance de función
	Las etiquetas (un identificador seguido por dos puntos, como en inicio:)
	son los únicos identificadores con alcance de función
	tambien los case: que van dentro de la funcion switch
	son de alcance de funcion
	
	porque solo sirven en la funcion en la que aparecen
	por ejemplo los case, solo pueden ser usados dentro del
	switch y no fuera de el
*/

/*	alcance de archivo
	Un identificador que se declara fuera de cualquier función tiene alcance de archivo. A tal identificador se le
“reconoce” (es decir, es accesible) en todas las funciones desde el punto en el que se declara, y hasta el final
del archivo. Las variables globales, las definiciones de funciones y los prototipos de funciones que se colocan
fuera de una función tienen alcance de archivo.
*/

/*	 alcance de bloque
	Los identificadores que se definen dentro de un bloque tienen alcance de bloque.
	{   }  
	
*/


#include <stdio.h>
#include <stdint.h>
#include "stdbool.h"
int varGlobal;//esto es un identificador de alcance de archivo


void funcionx(int x, float f,char c);///prototipo de funcion con variables con alcance de prototipo de funcion

void f1(){
	funcionx(3,4,'a');
	inicio:
	varGlobal++;
	printf("%d\n\n",varGlobal);
	//goto inicio;
	
}


int main(){
	int x =9;
	funcionx(3,4,'a');
	f1();
	goto inicio;
	switch(x){
		case 0:
			break;
		case 1:
			break;
	}

			

	
	inicio:
	printf("%i\n\r",x);
	
}

void funcionx(int x, float f,char c){
	
}