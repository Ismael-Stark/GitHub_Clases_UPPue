#include <stdio.h>
#include <stdint.h>
#include "stdbool.h"

int fibonacci(int x){
	if(x == 0 || x==1 ){
		return x;
	}else{
		return ( fibonacci(x-1)+ fibonacci(x-2) );
	}	
}
int main(){
	unsigned int y = 5,n=1;
	printf("Programa que obtiene el numero de fibonacci\nsin recursividad\n\n");
	printf("el el numero a obtener es: %i\n",y);
	printf("su numero de fibonacci es: ");
	
	n =  fibonacci(y);
		printf("%d",n);
	
	
}