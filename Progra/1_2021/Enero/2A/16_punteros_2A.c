#include "stdio.h"

void h (int *ptrV){
	for ( int i = 0; i < 10; i++ ) {
		ptrV[i] = i; /* establece el elemento i a 0 */
	}
}

int main(){
	int a; //variable normal
	int *ptrA;	//puntero
	int v[10];	//vector
	
	a = 5;	
	ptrA = &a;	//el puntero apunta a la variable A
	
	printf("la variable a tiene: %i\n",a);
	printf("la puntero a tiene: %i\n",*ptrA);
	
	printf("la direccion de memoria de la variable a: %p\n",&a);
	printf("la direccion de memoria que guarda el puntero %p\n",ptrA);
	
	*ptrA = 20;
	
	printf("la variable a tiene: %i\n",a);
	
	
	h(&v);// llamando la funcion y pasando el vector como puntero
	
	for ( int i = 0; i < 10; i++ ) {
		printf( "%i = %i\n",i, v[ i ] );
	}

}