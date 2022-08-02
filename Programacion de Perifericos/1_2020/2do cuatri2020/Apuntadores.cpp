#include "stdio.h"
//bonificacion
int main(){
	int a=4;
	printf("Valor de a: %i, su direccion es: %p",a,&a);
	printf("\nEl contenido de la direccion &a = %d",*&a);		

}
