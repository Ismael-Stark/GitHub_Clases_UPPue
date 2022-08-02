//enum

#include <stdio.h>
#include <stdint.h>
#include "stdbool.h"

/*enum{
	//codigo
}*/

enum{
	luis=-5,//0
	franco,//1
	Emmanuel,
	Israel=80,
	Ivan=80,
	Jose,
	Marco,
	John,
};

enum{
	programacion=0,
	algebra,
	calculo,
	ingles,
	mantenimiento,
	electricidad,
	inteligencia,
};


int main(){
	unsigned int y = 5,n=1;

	
	printf("Programa para entener que es un \"enum\"\n\n");
	printf("luis: %i\n",luis);
	printf("franco: %i\n",franco);
	printf("Emmanuel: %i\n",Emmanuel);
	printf("israel: %i\n",Israel);
	printf("ivan: %i\n",Ivan);
	printf("Jose: %i\n",Jose);
	printf("Marco: %i\n",Marco);
	printf("John: %i\n",John);
		printf("algebra: %i\n",algebra);
	
	
	
}