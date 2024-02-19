#include "stdio.h"



int main(){
	int n,numeros, P=0,N=0,NN=0;	
	printf("cuantos numeros voy a leer?\n");
	scanf("%i",&n);	
	for(int i = 0; i<n;i++){
		scanf("%i",&numeros);
		if(numeros==0){
			NN++;
		}
		if(numeros>0){
			P++;
		}
		if(numeros<0){
			N++;
		}
	}
	printf("\nlos positivos son: %i",P);
	printf("\nlos negativos son: %i",N);
	printf("\nlos nulos son: %i",NN);
}