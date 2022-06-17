#include "stdio.h"

int main(){
	int x=0,y=0,d=0,i=0;
	scanf("%i",&x);
	
	while(i<x){
		scanf("%i",&d);
		y += d;	
		i++;
	}
	
	for(i = 0; i < x ;i++){
		scanf("%i",&d);
		y += d;		
	}
	
	
	printf("\n La suma de los numeros es: %i",y);
}
