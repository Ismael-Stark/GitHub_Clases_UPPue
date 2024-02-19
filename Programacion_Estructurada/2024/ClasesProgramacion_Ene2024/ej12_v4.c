#include <stdio.h>


int main(){
	int numero, suma = 0,media;
	int i =1;
	
	do{
		printf("Dame el  numero %d\n",i);
		scanf("%d",&numero);
		suma = numero + suma;
		i++;
	}while(i<=5);
	
	media = suma/5;
	
	printf("La media es: %d\n",media);
	
}