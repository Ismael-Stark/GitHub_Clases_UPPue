#include <stdio.h>
#include <stdint.h>
#include "stdbool.h"

int main(){
	unsigned int y = 2,n=1,n_ant=1;
	printf("Programa que obtiene el numero de fibonacci\nsin recursividad\n\n");
	printf("el el numero a obtener es: %i\n",y);
	printf("su numero de fibonacci es: ");
	if( y == 0 || y==1 ){
		printf("%d",y);
	}else{
		printf("0 1");
		for (int i = 2;i <= y;i++ ){
			n_ant = n + n_ant;
			n = n_ant - n;
			printf(" %d",n);
		}
		//printf(" %d",n);
	}
	
}