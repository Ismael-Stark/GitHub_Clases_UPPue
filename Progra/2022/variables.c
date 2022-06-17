#include <stdio.h>
#include <stdint.h>
#include "stdbool.h"
//int,float,char,double.....
//signed, unsigned

//unsigned int x
//const// para declarar constantes, siempre debe incializarse con algun valor desde que se declara
const unsigned int a = 3;

//volatile// para asignar memoria que debe actualizarse constantemente y demanera rapida
volatile unsigned int b = 54;

//todas las variables cuando se declaran son del tipo auto, se crean cuando se entra a la funcion
//pero cuando termina la funcion, la variable de tipo auto se destruye
// esto nos sirve para ahorrar memoria

//static//Son valriables que se crean una vez y no se eliminan ni pierden su valor hasta que
//termina/cierra todo el programa
void f1(){
	static int x = 0;//
	printf("%i\n\r",x);
	x++;
}


//el tipo auto, se crean cuando se entra a la funcion
//pero cuando termina la funcion, la variable de tipo auto se destruye, su valor guardado se pierde

void f2(){
	auto int y = 0;
	printf("%i\n\r",y);
	y++;
}


int main(){
	register  int x = 9;//por defaul es del tipo auto
	printf("Variable statica\n\r");
	f1();
	f1();
	f1();
	f1();
	printf("Variable auto\n\r");
	f2();
	f2();
	f2();
	f2();
	//printf("%i\n\r",b);
	
}










