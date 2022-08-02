#include "stdio.h"
//ciclo while
long factorial(long f);
int main(){
	float y, x=0;
	printf("Ciclo while");
	printf("\ndame un numero:");
	scanf("%f",&y);
	while( x>=y){
		printf("\n%f",x);
		x-=0.2;	
	}
}
