//union
#include <stdio.h>
#include <stdint.h>
#include "stdbool.h"

//union nombre{
//una union todos las variables que se declaran dentro deben ser del mismo tipo de dato
///
//};


struct puerto{//estructura de una variable acceso bit a bit
	uint8_t var0:1;
	uint8_t var1:1;
	uint8_t var2:1;
	uint8_t var3:1;
	uint8_t var4:1;
	uint8_t var5:1;
	uint8_t var6:1;
	uint8_t var7:1;
};

int main(){
	struct puerto port;//170;//0b10101010;// 0xAA;
	port.var0 = 1;
	printf("var0: %i \n", port.var0);
	printf("var1: %i \n", port.var1);
	printf("var7: %i \n", port.var7);
	

	
	
	
}