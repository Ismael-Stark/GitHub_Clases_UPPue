/*Variables locales y Globales*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char nombre[30], numero[3];
float calificacion;

void pedir_nombre(){
	gets(nombre);	//gets lee el teclado y todo lo recibe como caracteres
}

void f_calificacion(){
	calificacion = atof (gets(numero));
}

int main(){
	printf("uso de variables locales y globales\n");
	printf("dame tu nombre\n");
	pedir_nombre();
	printf("dame tu calificacion en algebra\n");
	f_calificacion();
	printf("Tu nombre es %s, y tienes de calificacion en algebra %f", nombre, calificacion);
}
