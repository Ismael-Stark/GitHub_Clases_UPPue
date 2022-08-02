#include "stdio.h"
long factorial(long f);
int main(){
	float x,y;
	printf("Programa que calcula el aumento de sueldo");
	printf("\ndame el sueldo: ");
	scanf("%f",&x);
	
	if(x <10000){
		printf("\nEl aumento es del 10%, el sueldo final es de: %f",(x*1.1));
	}else if(x >=10000&& x <=25000 ){
		printf("\nEl aumento es del 8%, el sueldo final es de: %f",(x*1.08));
	}else if(x >25000){
		printf("\nEl aumento es del 7%, el sueldo final es de: %f",(x*1.07));
	}
	
}
