#include <stdio.h>
#include <stdint.h>
#include "stdbool.h"
int varGlobal;//esto es un identificador de alcance de archivo


void funcionx(int x, float f,char c);///prototipo de funcion con variables con alcance de prototipo de funcion

void f1(){
	varGlobal++;
	printf("%d\n\n",varGlobal);
}


int main(){
	int x=50;
	varGlobal++;
	f1();
	
	bucle:
		{//incio bloque
			int x;
			//y++;
			x=45;
			
			{//bloque3
				//y++;
				x++;
				printf("%i\n\r",x);
			}
		}//fin bloque
	printf("%i\n\r",x);

	goto fin;//  nuca usar en C/C++ GOTO
		printf("dame valor\n\r");
		scanf("%i",&x);
	 	printf("valor: %i\n\r",x);
	
	
	fin:
		printf("llegaste al final\n\r");
	
}