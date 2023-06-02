#include <stdio.h>


int main(){
	int x, resultado;
	x = 0;
	resultado = 1;
    printf("Facatorial de un numero con FOR\n");
    
    for (int i = 1; i <= x; i++){
    	resultado *= i;
	}
	
	printf("Facatorial del numero %i es: %i\n",x,resultado);
}
