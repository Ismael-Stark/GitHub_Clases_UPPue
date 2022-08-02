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

/*struct temp {//la estructura es la variable_sirve en CCS aqui no :c
   unsigned int b0:1;
   unsigned int b1:1;
   unsigned int b2:1;
   unsigned int b3:1;
   unsigned int b4:1;
   unsigned int b5:1;
   unsigned int b6:1;
   unsigned int b7:1;
   
} temp;*/

struct varU8bit {//con esto puedo declarar diferentes variables usando una estructura
   uint8_t b0:1;
   uint8_t b1:1;
   uint8_t b2:1;
   uint8_t b3:1;
   uint8_t b4:1;
   uint8_t b5:1;
   uint8_t b6:1;
   uint8_t b7:1;
   
};

struct var8bit {//con esto puedo declarar diferentes variables usando una estructura
   int8_t b0:1;
   int8_t b1:1;
   int8_t b2:1;
   int8_t b3:1;
   int8_t b4:1;
   int8_t b5:1;
   int8_t b6:1;
   int8_t b7:1;
   
};

struct varU16bit {//con esto puedo declarar diferentes variables usando una estructura
   uint16_t b0:1;
   uint16_t b1:1;
   uint16_t b2:1;
   uint16_t b3:1;
   uint16_t b4:1;
   uint16_t b5:1;
   uint16_t b6:1;
   uint16_t b7:1;
   uint16_t b8:1;
   uint16_t b9:1;
   uint16_t b10:1;
   uint16_t b11:1;
   uint16_t b12:1;
   uint16_t b13:1;
   uint16_t b14:1;
   uint16_t b15:1;
};

struct var16bit {//con esto puedo declarar diferentes variables usando una estructura
   int16_t b0:1;
   int16_t b1:1;
   int16_t b2:1;
   int16_t b3:1;
   int16_t b4:1;
   int16_t b5:1;
   int16_t b6:1;
   int16_t b7:1;
   int16_t b8:1;
   int16_t b9:1;
   int16_t b10:1;
   int16_t b11:1;
   int16_t b12:1;
   int16_t b13:1;
   int16_t b14:1;
   int16_t b15:1;
};


typedef union {
	uint8_t PORTB;
    struct {
        uint8_t RB0                    :1;
        uint8_t RB1                    :1;
        uint8_t RB2                    :1;
        uint8_t RB3                    :1;
        uint8_t RB4                    :1;
        uint8_t RB5                    :1;
        uint8_t RB6                    :1;
        uint8_t RB7                    :1;
    };
} PORTBbits;




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
	struct varU8bit temp;
	PORTBbits portb;
	portb.PORTB = 8;
	temp.b0 = 1;
	
	//1010
	porta.var1 = 1;
	porta.var3 = 1;
	porta.var4 = 1;
	
	
	printf("puerto a vale: %d\nen bianario es:", porta);
	//DecToBin(porta);
	
}