#include <stdio.h>
#include <stdint.h>

union puerto{ //una union todos las variables deben ser del mismo tipo de dato
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
	
	x.var0 = 7;
	printf("var0: %d\n",x.var0);	
	printf("var1: %d\n",x.var1);	
	printf("var7: %d\n\n\n",x.var7);
	
	x.var4 = 21321;		
	printf("var0: %d\n",x.var0);	
	printf("var1: %d\n",x.var1);	
	printf("var7: %d\n\n\n",x.var7);
	
	x.var4 = 12;		
	printf("var0: %d\n",x.var0);	
	printf("var1: %d\n",x.var1);	
	printf("var7: %d\n\n\n",x.var7);
	
}