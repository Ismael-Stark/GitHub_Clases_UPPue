//union
#include <stdio.h>
#include <stdint.h>
#include "stdbool.h"

//union nombre{
//una union todos las variables que se declaran dentro deben ser del mismo tipo de dato
///
//};

//en una union todas las variables que se declaren dentro  hacen referencia al mismo espacio de memoris
//asi que si se modifica alguna, todas obtendran ese mismo valor

union puerto{//una union todos las variables que se declaran dentro deben ser del mismo tipo de dato
	int var0;
	int var1;
	int var2;
	int var3;
	int var4;
	int var5;
	int var6;
	int var7;
};

int main(){
	union puerto x;
	
	x.var0 = 56;
	

	
	printf("Programa para entener que es un \"union\"\n\n");
	printf("var0: %i \n", x.var0);
	printf("var1: %i \n", x.var1);
	printf("var7: %i \n", x.var0);
	
	
	x.var4 = 45;
	printf("\n");
	printf("var0: %i \n", x.var0);
	printf("var1: %i \n", x.var1);
	printf("var7: %i \n", x.var0);
	

	
	
	
}