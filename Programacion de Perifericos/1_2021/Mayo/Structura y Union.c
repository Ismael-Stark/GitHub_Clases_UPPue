#include <stdio.h>
#include <string.h>
#include <stdint.h> //para declarar variables tipo uint8_t....etc

//Tarea complemento A2

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


void DecToBin( uint8_t x){
	if ( x != 0 ){ 
		DecToBin(x/2);
		printf("%d", x%2);
	}
	
}

int main(){
	int8_t temp;
	union puerto porta;
	porta.var = 10;
	printf("puerto a vale: %d\nen bianario es:", porta.var);
	DecToBin(porta.var);
	
	printf("\n\n");
	
	porta.var0 = 1;
	porta.var2 = 1;
	printf("puerto a vale: %d\nen bianario es:", porta.var);
	DecToBin(porta.var);
	
	
	
	int8_val temperatura;	//se declara la variable sin unsa union o struct
	printf("\n\n");
	temperatura.var = -12; //1111 0100   a decimal es 244
						  //0000 1100  +12 a decimal
	printf("puerto a vale: %d\nen bianario es:", temperatura.var);
	DecToBin((unsigned)temperatura.var);
	
	
	printf("\n\n");
	
	//temperatura.var7 = 1;
	if (temperatura.var7 == 1){
		printf("La temperatura es negativa, pasado a positivo es:\n");
		printf("%d\n\n",~temperatura.var+1); 	//complemento A2 para volver un numero negativo a positivo
		printf("%d\n\n",temperatura.var*-1);	//se multiplica -1 por la variable para convertir a positivo
	}
	
	DecToBin(~temperatura.var);
	
	
	
	
}