#include <stdio.h>
#include <string.h>
#include <stdint.h> //para declarar variables tipo uint8_t....etc


struct puerto{	//estructura de una variable acceso bit a bit
	 
	uint8_t var0:1;
	uint8_t var1:1;
	uint8_t var2:1;
	uint8_t var3:1;
	uint8_t var4:1;
	uint8_t var5:1;
	uint8_t var6:1;
	uint8_t var7:1;
}port;

void DecToBin( int x){
	if ( x != 0 ){ 
		DecToBin(x/2);
		printf("%d", x%2);
	} /*Cierra if */
	//else;
	/*printf("0\n");*/
}

int main(){
	
	struct puerto porta;
	port = 5;
	
	//1010
	porta.var1 = 1;
	porta.var3 = 1;
	porta.var4 = 1;
	
	
	printf("puerto a vale: %d\nen bianario es:", porta);
	//DecToBin(porta);
	
}