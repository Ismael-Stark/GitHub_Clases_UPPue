#include "stdio.h"

void f(int *a){
	for ( int i = 0; i < 10; i++ ) {
		a[i] = 5; /* establece el elemento i a 0 */
	}
}

int main(){
	int a, b[10];
	int *ptrA;
	
	a = 5;
	ptrA = &a;
	
	printf("la variable a tiene: %i\n",a);
	printf("la puntero a tiene: %i\n",*ptrA);
	
	*ptrA = 10;
	
	printf("\nla variable a tiene: %i\n",a);
	printf("la puntero a tiene: %i\n",*ptrA);
	
	f(&b);
	
	for ( int i = 0; i < 10; i++ ) {
		printf( "%i = %i\n",i, b[ i ] );
	}
}