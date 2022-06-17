#include "stdio.h"
//
long Funcion_que_mis_alumnos_haran_XD(float x,int n);
//float pow(float x, int n);
float pow();//mi funcion que yo quise
	//variables globales
	float y=1,x;
	int n,i;
	
int main(){
	
	printf("hacer la funcion y=x^n");
	printf("\ndame x:");
	scanf("%f",&x);
	printf("\ndame n:");
	scanf("%i",&n);	
	if (n<0){
		n*=-1;
	}
	//y=pow(x,n);
	y=pow();
	printf("\ny = %f:",y);
}
float pow(){
	for(i=1;i<=n;i++){
		y*=x;	
	}
	return y;
}

	
