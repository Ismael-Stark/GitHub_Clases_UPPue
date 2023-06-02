#include <stdio.h>

int fibonacci(int x);

int main(){
	int n[5] = { 32, 27, 64, 18,};
	int x, resultado;
	x = 8;
    printf("fibonacci de un numero con recursividad\n");
	resultado = fibonacci(x);	
	printf("fibonacci del numero %i es: %i\n",x,resultado);
}

int fibonacci(int x){
	
	if (x == 0 ){
		return 0;
	}else if (x == 1 ){
		return 1;
	}else{
		return (fibonacci(x-1) + fibonacci(x-2));
	}
	
	
}
