#include <stdio.h>


int main(){
	int numero, suma = 0,media;
	int i =1;
	while(i<=5){
		printf("Dame el  numero %d\n",i);
		scanf("%d",&numero);
		suma = numero + suma;
		i++;
	}
	media = suma/5;
	
	printf("La media es: %d\n",media);
	
}