#include <stdio.h>


int main(){
	//char nombreDia[]
	int precioLechug[12];
	char nombre[12] = "Eduardo XD";
	
	precioLechug[0] = 23;
	precioLechug[1] = 30;
	precioLechug[2] = 13;
	
	printf("la lechuga vale en enero: %i\n",  precioLechug[0]);
	printf("la lechuga vale en marzo: %i\n",  precioLechug[2]);
	printf("la lechuga vale en diciembre: %i\n",  precioLechug[11]);
	printf("el  nombre es: %s \n",  nombre);
	

}