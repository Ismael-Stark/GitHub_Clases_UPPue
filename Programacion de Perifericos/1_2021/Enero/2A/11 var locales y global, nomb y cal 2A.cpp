/*Variables locales y Globales*/
#include <stdio.h>
#include <stdlib.h>

//variables globales
char nombre[30], numero[3];
float calificacion;

void f_nombre(){
	gets(nombre);	//gets lee el teclado y todo lo recibe como caracteres, sale de ahi hasta que recibe un enter
}

void f_calificacion(){
	//calificacion = atoi(	gets(numero) );  //gets recibe caracteres, con atoi se convierten
												//esos caracteres a un numero de tipo entero
												
	calificacion = atof( gets(numero) );  //gets recibe caracteres, con atof se convierten
											//esos caracteres a un numero de tipo flotante
}

int main(){
	
	printf("programa que recibe nombre y calificacion usando variables globales\n dame tu nombre:\n");
	f_nombre();
	printf("\nDame tu calificacion de Algebra:\n");
	f_calificacion();
	printf("\nHola %s tu calificacion en Agebra es: %f", nombre, calificacion );
}