#include "stdio.h"


int main(){
	int a = 5;
	
	if(a%2){ //para saber si un numero es par, hay que obtener el modulo del numero
		printf("\nel numero es impar");	
	} else {
		printf("\nel numero es par");
	}
	
	if(a%2==0){ //para saber si un numero es par, hay que obtener el modulo del numero
		printf("\n\nel numero es par");	
	} else {
		printf("\n\nel numero es impar");
	}
	
	switch (a%2){
		case 0:
			printf("\n\nel numero es par");
			break;
		case 1:
			printf("\n\nel numero es impar");
		break;
	}
		
	
}
