//estructuras, son una coleccion de diferentes tipos de variables
#include <stdio.h>
#include <stdint.h>

struct nombre{ //forma 1
	int x;
	char y;
	float f;
	char v[10];
	unsigned char a;
};

struct estructura2{ //forma 2
	int x;
	char y;
	float f;
	char v[10];
	unsigned char a;
}dato_s, dato_s2,dato_s3;//esto ya son variables directamente


int main(){
	//forma 1
	struct nombre dato, dato2, dato3, dato4;// usando "struct nombre", puedo declarar nuevas variables
	struct nombre dcd, dadsato2, dsa;
	
	dato.x = 234;
	dato.f = 314.54;
	//dato.v = "hola";		///no sirve de esta forma para guardar un strig
	sprintf(dato.v,"hola");
	printf("estructura dato entero %d\n",dato.x);
	printf("string %s\n",dato.v);
	printf("numero con decimales %f\n",dato.f);
	
	dato2.x = 4332;
	printf("dato %d, dato2 %d\n",dato.x,dato2.x);
	
	
	
	//--------------------forma 2---------------------------------
	dato_s.x = 432;
	dato_s2.x = 123;
	
	//sprintf(dato.v,"hola");
	printf("\n\nestructura forma2 dato entero %d\n",dato_s.x);
	//printf("string %s\n",dato.v);
//printf("numero con decimales %f\n",dato.f);
	
	//dato2.x = 4332;
	printf("forma 2 dato %d, dato2 %d\n",dato_s.x,dato_s2.x);
	
	
}