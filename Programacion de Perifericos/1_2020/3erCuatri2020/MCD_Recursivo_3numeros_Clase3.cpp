//MCD de dos numeros recursivo

//tarea para sabado 30may
//MCD de dos numeros sin usar recursividad
//MCD de 3 numeros usando recursividad
//m.c.m dos numeros usando recursividad

//binario guardaro en una variable tipo int
//decimal a BCD
//BCD a decimal
#include <stdio.h>


int MCD(int m, int n) {
  if (n == 0) {
  	return m; // Condicion de parada
  }
  return MCD(n, mm%n);   // Llamada recursiva
}

int MCD3 (int a, int b, int c){
	if (a == 0 ){
		return b;
	}else{
		MCD(b%a,a);	
	}
}





int main(){
	int a, b,c,x;
	printf("Programa que calcula el MCD de dos numeros\n");
	printf("numero a:");
	scanf("%i",&a);
	printf("\nnumero b:");
	scanf("%i",&b);
	printf("\nnumero c:");
	scanf("%i",&c);
	
	printf("\nEL MCD es: %i",MCD3(a,b,c));
	
}


