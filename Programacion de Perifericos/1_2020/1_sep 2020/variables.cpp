#include <stdio.h>
#include <time.h>
#include <windows.h>
#define PI 3.1416
#define PRINTF  printf

int n;

int main(){
	short int a=0;
	unsigned short int a1=0;
	//char 8bit
	//int realmente es de 32bit
	//short int es de 16bit
	
	//for inicio; Final; el aumento del conteo{
	//para-  inicio; final
	//}
	
	//mientras (condicion){
	//}
	printf("\n%i",a);
	while(1){
		printf("\n%i",a1++);
		//el a++ es lo mismo que poner a = a+1
		Sleep(.1);
	}
	
	
	

						//%.1f indica que imprime solo un decimal
	
	//%i 	int
	//%d 	decimal
	//%u 	unsigned
	//%f	float, numero con decimales
	//%c	caracter
	//%s	string o cadena de caracteres
	
}
