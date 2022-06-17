#include "stdio.h"
int main(){
	int a,a1,a2,a3,a4;
	unsigned int b,b1;
	a=40;
	a1=3;
	a2=-3;
	a3=1.5;
	a4=-1.5;
	b=3;
	b1=-6;	
	printf("\n%d",a);
	printf("\n%d",a1);
	printf("\n%d",a2);
	printf("\n%d",a3);
	printf("\n%f",a3);
	printf("\n%d",a4);
	printf("\n%.2f",(float)a4);
	
	printf("\n\n%i",b);
	printf("\n%u",b);
	printf("\n%i",b1);
	printf("\n%u",b1);
	
	printf("\n%d",a);
	printf("\n%i",a);
	printf("\n%f",a);
	printf("\n%l",a);
	printf("\n%lu",a);
	printf("\n%h",a);
	printf("\n%o",a);
	printf("\n%u",a);
	printf("\n%c",a);
	printf("\n%s",a);
	
}
