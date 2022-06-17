#include <stdio.h>
#include <string.h>


int main(){
	int opcionMenu;
	float num1,num2, resultado;


	int i=0;
	while(i<=1){//con este ciclo el menu y la calculadora se ejecutara infinitamente hasta seleccionar
				//la opcion correcta en el menu para salir
	
		printf("\n\nCalculadora basica (while)\n");
		printf("1: para suma\n");
		printf("2: para resta\n");
		printf("3: para multiplicacion\n");
		printf("4: para division\n");
		printf("5: salir del programa\n");
		scanf("%d",&opcionMenu);
		
		/*if (opcionMenu==5){
			break;// en este caso el break sirve para terminar el ciclo while abrubtamente(sin mostrar mensaje de adios)
		}*/
		if (opcionMenu==5){
			i = 3;// en este caso el break sirve para terminar el ciclo while pero muestra un mensaje de adios
		}
		
		
		if (opcionMenu>=1 && opcionMenu<=4){//si opcion >=1  Y opcion<=4 entrar en la condicion
			printf("Dame en numero A y el numero B\n");
			scanf("%f%f",&num1,&num2);
		}
		
		switch(opcionMenu){
			case 1:
				//suma
				resultado = num1 + num2;
				//para imprimir una cantidad de decimales a gusto del programador
				//se utilza .x de pues del %, quedando de la forma %.xf
				//donde x es la cantida numerica de decimales que se quieran imprimir
				printf("El resultado de la suma con los numeros %.2f y %.2f es: %.3f\n",num1,num2,resultado);			
				break;//rompe, o hece que se salga del case 1 y termine el switch(no afeta al while de la linea 11)
			case 2:
				//operacion
				printf("El resultado de la resta con los numeros %.2f y %.2f es: %.3f\n",num1,num2,num1-num2);	
				break;
			case 3:
				//operacion
				resultado = num1 * num2;
				printf("El resultado de la multiplicacion con los numeros %.2f y %.2f es: %.3f\n",num1,num2,resultado);	
				break;
			case 4:
				//operacion
				printf("El resultado de la divison con los numeros %.2f y %.2f es: %.3f\n",num1,num2,num1/num2);	
				break;
			case 5:
				//operacion
				printf("Adios\n");	
				break;
			default:
				printf("Opcion no valida");
				//operacion
				break;
			
		}//fin switch
	
	}//fin for
	
	/*printf("escribiste como flotante: %f\n",f);
	printf("escribiste como caracter: %c\n",x);
	printf("escribiste como frase: %s\n",s);*/
	//%i 	int
	//%d 	int
	//%u 	unsigned, enteros sin signo
	//%f	float, numero con decimales
	//%c	caracter
	//%s	string o cadena de caracteres
}//fin main