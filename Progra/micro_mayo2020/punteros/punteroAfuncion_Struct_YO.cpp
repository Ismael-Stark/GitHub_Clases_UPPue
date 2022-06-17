#include <stdio.h> 
#include <stdlib.h>
#include <string.h>

void f1();
void f2();
void f3();

struct celular{
	void (*ptrfun)(void);
	int x;
};

typedef struct celular Styp;

Styp nk[3]={{&f1,1},
			{&f2,2},
			{&f3,3},
			};

int main(){
	char txt[10];
	
	printf("%s\n",txt);
	
	nk[0].ptrfun();
	nk[1].ptrfun();
	nk[2].ptrfun();
	
}

void f1(){
	printf("funcion1\n");
}
void f2(){
	printf("funcion2\n");
}
void f3(){
	printf("funcion3\n");
}
