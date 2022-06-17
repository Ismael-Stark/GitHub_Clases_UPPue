#include <stdio.h>
#include <stdint.h>
#include "stdbool.h"



int main(){
	char c;
	scanf("%c",&c);
	switch(c){
		case 'a':
			printf("Hola");
			break;
		case 'b':
			printf("Hola2");
			break;
		default:
			printf("opcion no encontrada");
			break;
	}
	
}