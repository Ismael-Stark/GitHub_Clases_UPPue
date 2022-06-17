#include <stdio.h>
#include <stdint.h>
#include "stdbool.h"

int32_t mcd(int32_t a, int32_t b);

int32_t mcm(int32_t a, int32_t b);

int main(){
	int d,m,a,b;
	printf("indica los dos numeros\n");
	scanf("%d%d",&a,&b);
	d = mcd(a,b);
	m = mcm(a,b);
	
	printf("\nlos  numeros son: %d, %d\n",a,b);
	printf("su max comun divisor es: %d\n",d);
	printf("su min comun multiplo es:%d\n",m);
	
}


int32_t mcd(int32_t a, int32_t b){//maximo comun divisor
	int r;
	r=1;
	while(r!=0){
		r = a%b;
		a=b;
		b=r;
	}
	return a;
}

int32_t mcm(int32_t a, int32_t b){//minimo comun multiplo
	return (  (a*b)/ mcd(a,b) )  ;
}