//typedef sirve para declarar nuevos nombres para los tipos de variables
#include <stdio.h>
#include <stdint.h>

typedef int entero;			//ahora puedo usar la palabra: entero para declar variables de tipo int
typedef char caracter ;
typedef char int8;
typedef unsigned char uint8;
typedef float decimales ;
typedef float flotante ;

//las palabas: entero, caracter, int8, uint8 y decimales NO SON VARIABLES
//Se utilizan para declarar variables



int main(){
	entero x,y,i;
	caracter c;
	uint8 a;
	decimales f;
	flotante d;
	
	x = 3;
	y = 9;
	i = 7;
	
	c = 'f';
	
	a = 2;
	
	f = 4.56;
	d = 76.56;
	
	printf("enteros %d\t%d\t%d\n",x,y,i);
	printf("carcater %c\n",c);
	printf("enteros de 8bit sin signo %d\n",a);
	printf("numero con decimales %f\t%f\n",f,d);
	
}