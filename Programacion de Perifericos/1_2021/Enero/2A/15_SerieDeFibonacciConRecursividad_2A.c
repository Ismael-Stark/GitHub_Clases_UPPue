#include <stdio.h>
#include <stdlib.h>


int fibonacci(int x){
	if (x <= 1){
		return x;
	}else{
		return ( fibonacci(x - 1) + fibonacci(x - 2) );
	}	
}

int main(){
	int numero, resultado;
	char txt[5];
	
	//numero = 8;
	printf("Pograma que calcula el fibonacci de un numero\nDame el numero: ");
	gets(txt);
	numero = atoi(txt);
	
	
	resultado = fibonacci(numero);
	
	printf("el fibonacci de %d, es: %d", numero, resultado);
	
}