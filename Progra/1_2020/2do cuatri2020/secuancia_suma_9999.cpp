#include "stdio.h"

int main(){
	int x=0,y=0,i=0;
		
	while(x!=9999){
		y += x;
		scanf("%i",&x);	
		i++;	
	}
	
	for(;;){//Ciclo for "infinito"
		scanf("%i",&x);
		if(x==9999){ break;	}
		y += x;
		i++;
	}
	
	printf("\n La suma de los numeros es: %i",y);
	printf("\n El promedio es: %f",(float)y/(i));
}
