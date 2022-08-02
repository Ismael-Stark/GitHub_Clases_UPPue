#include <stdio.h>
#include <string.h>
#include <stdlib.h>


#include "repaso5_recursividad_h.h"

int main(){
	unsigned int x,y=1,t=80;
	char c[10];
	printf("programa con libreria .h,\n dame un numero\n");
	//putchar(t);
	//scanf("%d",&x);
	
	x = atoi(gets(c));
	
	y = factorial(x);
	
	printf("el factorial de %d es %d\n",x, y );
	
	
	
	/*for(int i=1;i<=x;i++){
		y*=i;
	}*/
	
}
