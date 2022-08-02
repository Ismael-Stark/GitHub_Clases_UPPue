#include "stdio.h"

int main(){
	int a = 2, b =3, c= 4, d =5,  x;
	
	//x = a<=  || (3>a);
	
//	x =  || (a>=b);
	x =  ((a>=b) || (a<d)) && 16;
	
	printf("%d",x);
	
	x=0;
	
	x  = ((b>d) || (a < c) && (a=c));
	printf("\n\n a = %d, el resultado de la operacion es %d",a,x);
}