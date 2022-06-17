#include "stdio.h"
//ciclo D0 while
long factorial(long f);
int main(){
	float y,x=0;
	printf("Ciclo DO WHILE");
	printf("\ndame un numero:");
	scanf("%f",&y);
	
	do{
		printf("\n%f",x);
		x-=0.2;	
	}while(x>=y);
}
