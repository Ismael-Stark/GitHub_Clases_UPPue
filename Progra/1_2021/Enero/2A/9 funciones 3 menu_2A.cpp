//Funciones, que son, tipos y como se declaran
#include <stdio.h>
#include <stdlib.h>


void menu(void);
void cuadrado();
void cubo();
int cuarta();

int main(){
	int a, opcion, resultado;
	
	do{
		menu();
		scanf("%d",&opcion);
		getchar();
		switch(opcion){
			case 0:
				printf("Adios\n");
				break;
			case 1:
				system("cls");
				break;
			case 2:
				cuadrado();
				break;
			case 3:
				cubo();
				break;
			case 4:
				resultado = cuarta();
				printf("El numero elevado a la cuarta potencia es: %d\n",resultado);
				break;
		}
	}while(opcion != 0);
}

void menu(void){
	
	printf("Menu desde una funcion\nEscribe 1 para volver a mostrar el menu\n");
	printf("Escribe 2 para obtener el cuadrado de un numero\nEscribe 3 para obtener el cubo de un numero");
	printf("\nEscribe 4 para elevar el numeroa la cuarta potencia\nEscribe 0 para salir\n");
}

void cuadrado(){
	int x;
	char txt[10];
	printf("Cuadrado de un numero desde una funcion\nEscribe el numero a elevar al cuadro\n");
	//scanf("%d",&x);
	x = atoi( gets(txt) );
	printf("El cuadrado del numero %d es: %d\n",x, x*x);
}

void cubo(){
	int x;
	char txt[10];
	printf("Cubo de un numero desde una funcion\nEscribe el numero a elevar al cubo\n");
	gets(txt);		//lee el teclado y se espera hasta recibir un enter, y lo guarda en la variable txt
	x = atoi( txt );// lo que se guardo en txt se convierte a numero enter y se guarda en X
	printf("El cubo del numero %d es: %d\n",x, x*x*x);
}

int cuarta(){
	int x;
	char txt[10];
	printf("Numero elevado a la cuarta potencia\nEscribe el numero a elevar\n");
	//gets(txt);		//lee el teclado y se espera hasta recibir un enter, y lo guarda en la variable txt
	x = atoi( gets(txt));// lo que se guardo en txt se convierte a numero enter y se guarda en X
	
	return x*x*x*x;
}
	