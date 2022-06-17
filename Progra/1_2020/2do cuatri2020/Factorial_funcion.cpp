#include "stdio.h"
//calcular el fatorial de u numero usando 
//funciones
long factorial(long f);
int main(){
	long x,y;
	printf("Programa que calcula el factorial");
	printf("\nde un numero:");
	scanf("%Lu",&x);
	
	y=factorial(x);	//llamo a mi funcion factorial
	
	printf("El factorial del numero %Lu es: %Lu",x,y);
}
long factorial(long f){
	long acumulador=1;
	
	if(f==0 || f==1 ){
		return 1;
	}
	//x++ == x=x+1
	//x-- == x=x-1
	//++x
	//--x
	for(int x=1; x<=f;x=x+1){
		//acumulador =acumulador*x;
		acumulador *=x;		
	}
	return acumulador;	
}

