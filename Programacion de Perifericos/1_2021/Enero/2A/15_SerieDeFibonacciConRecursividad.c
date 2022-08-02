//Serie de fibonacci usando recursividad

#include <stdio.h>
#include <stdlib.h>

int fibonacci(int x){
	if (x <= 1){
		return x;
	}else{
		return ( fibonacci(x - 1) +  fibonacci( x - 2) );
	}	
}

int main (void){
  int numero, resultado ;
  char txt[5];
  
  printf("programa que calcula la serie de fibonacci\nDame el numero a calcular");
  
  gets(txt);
  numero = atoi(txt);
  
  resultado = fibonacci(numero);
  printf("El fibonacci de %d es: %d", numero, resultado);
  
  return 0;
}