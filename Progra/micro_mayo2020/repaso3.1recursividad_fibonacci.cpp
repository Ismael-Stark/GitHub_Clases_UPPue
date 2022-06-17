#include <stdio.h>

long fibonacci(long  x ){
	if ( x==0 || x == 1 ){
		return x;
	}else{
		return fibonacci(x-1) + fibonacci(x-2);
	}	
}  

//fibonacci(0)=0
//fibonacci(1)=1
//fibonacci(n)= fibonacci(n-1) + fibonacci(n-2)
//tarea, hacer la funcion de fibonacci usando ciclos
//usando recursividad hacer un convertidor decimal a binario y sin usar recur
// (para martes, van 3 programas)
int main(){
	int x=4,y;
	
	y = dectobin(x);
	//100
	
	printf("Fibonacci de %d es %d\n",x, y );
	
	
}
