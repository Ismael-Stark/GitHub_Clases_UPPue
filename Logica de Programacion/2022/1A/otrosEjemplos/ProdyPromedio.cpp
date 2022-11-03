#include <stdio.h>


int main(){
	int a,b;
	float prom;
	printf("programa que calcula el promedio de dos numeros\n");//mostrar
	printf("dame el numero A y B\n");
	scanf("%i %i",&a,&b);//Leer
	//prom = (a+b)/2;
	
	//scanf("%f %f",&a,&b);//Leer
	prom = (a+b)/2.0;
	printf("el promedio es: %.9f\n",prom);
	
	//return 0;
}