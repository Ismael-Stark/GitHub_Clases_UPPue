#include <stdio.h>

int factorial(int x);

int main(){
	int x, resultado;
	x = 10;
    printf("Facatorial de un numero con recursividad\n");
	resultado = factorial(x);	
	printf("Facatorial del numero %i es: %i\n",x,resultado);
}

int factorial(int x){
	
	if (x == 0 || x == 1){
		return 1;
	}else{
		return (x * factorial(x-1));
	}
	
	
}
