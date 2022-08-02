#include <stdio.h>
#include <stdlib.h>

int main(){
	unsigned int semilla;
	
	
	printf("Introduzca semilla \n");
	scanf("%i",&semilla); //pido semilla
	
	srand(semilla);	//sembrar semilla
	
	//rand(); //genera numeros aleatorios
	
	for(int i=1;i<=10;i++){
			printf("%d ",1+rand()%10);
	}
}
