#include <stdio.h>

int main(){
	int a;
	a=54;
	printf("programa que dice si un numero es par o impar\n\n");
	
	if(a%2){ // necesitamos una condicion verdadera para entrar
		printf("El numero es impar\n\n");
	}else {	//entra si la condicion es falsa
		printf("El numero es par\n\n");
	}
	
	if(a%2==0){ // necesitamos una condicion verdadera para entrar 
		printf("El numero es par\n\n");
	}else {	//entra si la condicion es falsa
		printf("El numero es impar\n\n");
	}
	
	switch(a%2){
		case 0:
			printf("El numero es par case\n\n");
			break;	// es forzoso poner el break
		case 1:
			printf("El numero es impar case\n\n");
			break;
	}
}
