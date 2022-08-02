//Recursividad, factorial
#include <stdio.h>

//hacer el factorial de un numero usando funciones  for, while...
//hacer un conversor de decimal a binario, usando recursividad y sin usar recursividad
//1 = 1
//2 = 10
//3 = 11

//Funcion de ejemplo
					//-std=c++14
int factorial(int x){
	if(x<=1){
		return 1;
	}else{
		return ( (x * factorial(x-1)) );
	}
	
}
int main()
{
	int res, x=10;
	
	res = factorial(x);
	
	printf("El factorial de %b, es: %i",x,res);
	
}
