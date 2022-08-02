#include <stdio.h>
#include <string.h>

int main(){
	int opcionMenu;
	float num1, num2, resultado;
	int i = 0;
	while(i<=1){
		printf("\n\n\nCalculadora basica, Selecciona:\n");
		printf("1: para suma\n");
		printf("2: para resta\n");
		printf("3: para multiplicacion\n");
		printf("4: para division\n");
		printf("5: salir\n");
		scanf("%i",&opcionMenu);
		
		if(opcionMenu==5){
			break;// en este caso el break sirve para terminar el ciclo while abrubtamente(sin mostrar mensaje de adios)
		}
		/*if(opcionMenu==5){
			i=3;// en este caso el break sirve para terminar el ciclo while pero muestra un mensaje de adios
		}*/
		if(opcionMenu >=1 && opcionMenu <=4){
			printf("Dame el numero A y el numero B\n");
			scanf("%f%f",&num1,&num2);
		}

		switch(opcionMenu){
			case 1:
				//operacion suma
				resultado = num1 + num2;
				printf("el resultado de la suma con los numeros %.2f y %.2f es: %.3f\n",num1,num2,resultado);
				break;//rompe, o hace que se salga del case1 y termina el Switch
			case 2:
				//operacion resta
				printf("el resultado de la resta con los numeros %.2f y %.2f es: %.3f\n",num1,num2, num1 - num2);
				break;
			case 3:
				//operacion
				resultado = num1 * num2;
				printf("el resultado de la multiplicacion con los numeros %.2f y %.2f es: %.3f\n",num1,num2,resultado);
				break;
			case 4:
				//operacion
				printf("el resultado de la division con los numeros %.2f y %.2f es: %.3f\n",num1,num2, num1/num2);
				break;
			case 5:
				//operacion
				printf("Adios\n");
				break;
			default:
				printf("Opcion no disponible\n");
				break;
			
		}//fin switch	
	}//fin ciclo for
}//fin main



