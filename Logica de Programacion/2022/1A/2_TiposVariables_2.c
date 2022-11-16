#include <stdio.h>

float pagaTrabajadorVinos;//lowerCamelCase, variables y funciones
float DescuentoTrabajador;//UpperCamelCase,solo para tipos datos
float BONO_TRABAJADOR;		//UPPER_CASE, constantes

const float PI = 3.1416; //UPPER_CASE

int main(){
	char a,b,c,d;
	int numerico,logica;
		
	a= 'A';
	b= 'a';
	c=9;
	d=12;
	numerico = (3==3)==(8==8);
	logica = !(a==b);
	
	printf("numerico guarda: %i\n",numerico);
	
	//printf("var logica guarda: %i\n",logica);

	

}