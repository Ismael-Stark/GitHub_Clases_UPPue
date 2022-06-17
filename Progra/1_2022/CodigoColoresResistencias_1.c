#include <stdio.h>
#include <stdint.h>

void imprimirColor(uint32_t valor){
	switch(valor){
		case 0:
			printf("negro ");
			break;
		case 1:
			printf("cafe ");
			break;
		case 2:
			printf("rojo ");
			break;
		case 3:
			printf("naranja ");
			break;
		case 4:
			printf("amarillo ");
			break;
		case 5:
			printf("verde ");
			break;
		case 6:
			printf("azul ");
			break;
		case 7:
			printf("violeta ");
			break;
		case 8:
			printf("gris ");
			break;
		case 9:
			printf("blanco ");
			break;
		}
}

int main(){
	//uint8_t  puede guardar numeros del 0 al 255
	//uint16_t puede guardar numeros del 0 al 65535
	//uint32_t puede guardar numeros del 0 al 4294967295
	// con una variable de 32bits podemos guardar numero de hasta 6cifras
	uint32_t valResisteciaNum, multiplicador, unidades, decenas;
	
	printf("Programa que convierte a c%cdigo de colores(resistencias) un n%cmero introducido\n",162,163);
	printf("Dame un n%cmero entre 1 y 10Mohm sin decimales\n",163);
	scanf("%d",&valResisteciaNum);
	
	if(valResisteciaNum >= 1){
		
		if(valResisteciaNum<100 && valResisteciaNum >=10){
			unidades = (valResisteciaNum)%10;
			decenas = (valResisteciaNum/10);
			//printf("unidades %d, decenas %d",unidades,decenas);
			imprimirColor(decenas);
			imprimirColor(unidades);
			printf("negro \n");
		}

		if(valResisteciaNum<1000 && valResisteciaNum >=100){
			unidades = (valResisteciaNum/10)%10;
			decenas = (valResisteciaNum/10)/10;
			//printf("unidades %d, decenas %d",unidades,decenas);
			imprimirColor(decenas);
			imprimirColor(unidades);
			printf("cafe \n");
		}
		if(valResisteciaNum<10000 && valResisteciaNum >=1000){
			unidades = (valResisteciaNum/100)%10;
			decenas = (valResisteciaNum/100)/10;
			//printf("unidades %d, decenas %d",unidades,decenas);
			imprimirColor(decenas);
			imprimirColor(unidades);
			printf("rojo \n");
		}
		
		if(valResisteciaNum<100000 && valResisteciaNum >=10000){
			unidades = (valResisteciaNum/1000)%10;
			decenas = (valResisteciaNum/1000)/10;
			//printf("unidades %d, decenas %d",unidades,decenas);
			imprimirColor(decenas);
			imprimirColor(unidades);
			printf("naranja \n");
		}
		
	}else{//si valor de resistencia mmenor a 1ohm
		printf("Valor muy peque%co para calcular",164);
	}
}