//Recursividad, factorial
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
//Funcion de ejemplo
int factorial(unsigned long long int a)
{	if (a <=1){
    	return 1;
    }else{
    	return (a * factorial(a-1) );
    }
}
 	//							-std=c++14
int main()
{
    unsigned long long int x,y;

    char texto[10];
    printf("Calcular el factoial de un numero\ndame el numero\n");
    
    scanf("%i",&y);
    x = factorial(y);
	//y = atoi(gets(texto));
	//x = factorial(y);
	
	//x = factorial(atoi(gets(texto)));	
	
	printf("el factorial es: %lu\n",x);
 
    
}
