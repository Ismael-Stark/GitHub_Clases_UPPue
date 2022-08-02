#include "stdio.h"
//ciclo for
long factorial(long f);
int main(){
	float y;
	printf("Ciclo WHILE");
	printf("\ndame un numero:");
	scanf("%f",&y);
	for(float x=1; x<=y;x+=2 ){
		printf("\n%f",x);	
	}
}
