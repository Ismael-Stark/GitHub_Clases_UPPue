//typedef
#include <stdio.h>
#include <stdint.h>
#include "stdbool.h"

//typedef el_tipo_real nuevo_nombre_de_tipo  
//typedef nos sirve para crear nuevos tipos para declarar variables

typedef unsigned char entero8bitSinSigno;
typedef signed char entero8bitConSigno;
typedef float numeroConDeciamles;

typedef enum{
	luis=0,//0
	franco,//1
	Emmanuel,
	Israel,
	Ivan,
	Jose,
	Marco,
	John,
}programacion;	//con esto puedo usar programacion para declar variables,
				//que pueden guardar datos del tipo enum



int main(){
	entero8bitSinSigno y = 5,n=3, w;//variable del tipo unsigned char
	entero8bitConSigno t;	//variable del tipo signed char
	uint16_t x;
	int16_t s;
	uint8_t r;
	numeroConDeciamles  f = 123.43;////variable del tipo float
	
	programacion lista; //variable lista del tipo enum
	lista = franco;
	
	
	
	w = n*y;
	t = -w;
	printf("Programa para entener que es un \"typedef\"\n\n");
	printf("w: %i\n",w);
	printf("t: %i\n",t);
	printf("f: %.2f\n",f);
	printf("franco: %i\n",lista);
	

	
	
	
}