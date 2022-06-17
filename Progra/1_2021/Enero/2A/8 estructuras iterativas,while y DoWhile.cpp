#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	int opcion;
	
	/*opcion = 0;
	do{
		printf("ingrese un 1 para mostrar mensaje\n");
		printf("ingrese un 2 para hacer algo\n");
		printf("ingrese un 0 para salir\n");
		scanf("%d",&opcion);
		system("cls");		//limpia pantalla
	}while( opcion != 0); */
	
	opcion = -1;
	while( opcion != 0){
		printf("ingrese un 1 para mostrar mensaje\n");
		printf("ingrese un 2 para hacer algo\n");
		printf("ingrese un 0 para salir\n");
		scanf("%d",&opcion);
		system("cls");		//limpia pantalla
	}
	
	//exit(0)
}