#include <stdio.h>
#include <stdint.h>
#include "stdbool.h"

int main(){
	int y = 18, r[100], i=0;
	printf("Programa que convierte un numero decimal a binario\nsin recursividad\n\n");
	printf("el el numero en decimal es: %i\n",y);
	printf("el el numero en binario es: ");
	// 5 en binario es: 0b101
	
	//usando do while
	do{
		r[i++] = y%2;
		y = y / 2;				
	}while(y != 0);
	
	i=i-1;
	do{
		printf("%i",r[i--]);
	}while(i>=0);
	
	
	//usando FOR
	/*
	for(i=0; n>0; i++){    
		a[i]=n%2;    
		n= n/2;
	}
		
	for(i=i-1 ;i>=0 ;i--){
		printf("%i",r[i]);
	}*/
}