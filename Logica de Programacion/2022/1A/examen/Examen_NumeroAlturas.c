#include <stdio.h>

int main(){
	int altura, media, maximo=0, minimo=0, contador=0;
	do{
		printf("\n\nDame la altura:\t");
		scanf("%i",&altura);
		fflush(stdin);
		if (altura >=0) {
			contador++;
			media += altura;
			if (contador == 1){
				minimo = altura;
			}
			if(altura < minimo){
				minimo = altura;
			}
			if(altura > maximo){
				maximo = altura;
			}
		}
	}while(altura >=0);
	
	media /= contador;
	printf("\nLa media es: %i\n",media);
	printf("\nEl maximo es: %i\n",maximo);
	printf("\nel minimo es: %i\n",minimo);
}