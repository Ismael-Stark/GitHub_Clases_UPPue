#include <stdio.h>


int main(){
	int numero, suma = 0,media;
	
	for(int i =1; i<=5;i++){
		printf("Dame el  numero %d\n",i);
		scanf("%d",&numero);
		suma += numero;
	}
	media = suma/5;
	
	printf("La media es: %d\n",media);
	
}