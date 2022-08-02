//Recursividad, fibonacci
#include <stdio.h>

//Funcion de ejemplo
					//-std=c++14
int fibonacci(int x){
	if(x<=1){
		return x;
	}else{
		return( fibonacci(x-1) + fibonacci(x-2)  );
	}
}
int main()
{
	int res, x=6;
	
	res = fibonacci(x);
	
	printf("El fiboncci de %i, es: %i",x,res);
	
}
