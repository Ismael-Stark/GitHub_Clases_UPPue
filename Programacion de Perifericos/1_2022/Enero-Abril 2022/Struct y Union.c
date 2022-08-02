#include <stdio.h>
#include <string.h>
#include <stdint.h> //para declarar variables tipo uint8_t....etc


union puerto{
	uint8_t var;
	struct {	//estructura de una variable acceso bit a bit
		uint8_t var0:1;
		uint8_t var1:1;
		uint8_t var2:1;
		uint8_t var3:1;
		uint8_t var4:1;
		uint8_t var5:1;
		uint8_t var6:1;
		uint8_t var7:1;
	};
}port;

typedef union {			///con esto no necesito poner union a la hora de declarar una variable
	int8_t var;
	struct {	//estructura de una variable acceso bit a bit
		uint8_t var0:1;
		uint8_t var1:1;
		uint8_t var2:1;
		uint8_t var3:1;
		uint8_t var4:1;
		uint8_t var5:1;
		uint8_t var6:1;
		uint8_t var7:1;
	};
}int8_val;

int main(){
	union puerto porta;//170;//0b10101010;// 0xAA;
	porta.var = 170;
	printf("var0: %i \n", porta.var);
	printf("var7: %i \n", porta.var7);
	printf("var6: %i \n", porta.var6);
	printf("var5: %i \n", porta.var5);
	printf("var4: %i \n", porta.var4);
	printf("var3: %i \n", porta.var3);
	printf("var2: %i \n", porta.var2);
	printf("var1: %i \n", porta.var1);
	printf("var0: %i \n", porta.var0);
	
	porta.var5 = 0;
	printf("\n\nvar0: %i \n", porta.var);
	printf("var7: %i \n", porta.var7);
	printf("var6: %i \n", porta.var6);
	printf("var5: %i \n", porta.var5);
	printf("var4: %i \n", porta.var4);
	printf("var3: %i \n", porta.var3);
	printf("var2: %i \n", porta.var2);
	printf("var1: %i \n", porta.var1);
	printf("var0: %i \n", porta.var0);
}