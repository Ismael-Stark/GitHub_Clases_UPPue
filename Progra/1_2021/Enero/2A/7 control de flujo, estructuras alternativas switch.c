#include "stdio.h"
#include "math.h"

//uso del Switch case
int main(){
	int x;
	char c;
	//x = 10;
	
	printf("Escribe un numero\n");
	scanf("%i",&x);
	switch(x)
	{
		case 1:
			//codigo usuario
			printf("has seleccionado la opcion %d ",x);
			break;
		case 2:
			//codigo usuario
			printf("has seleccionado la opcion %d ",x);
			break;
		case 3:
			//codigo usuario
			printf("has seleccionado la opcion %d ",x);
			break;
		case 4:
			//codigo usuario
			printf("has seleccionado la opcion %d ",x);
			break;
		case 5:
			//codigo usuario
			printf("has seleccionado la opcion %d ",x);
			break;
		
		default:
			printf("Error! el numero %d no es una opcion",x);
			//codigo usuario
			break;
	}
	
	//system("pause");
	
	printf("\n\nEscribe una letra\n");
//	c = getchar();
	scanf("%c",&c); ///
	scanf("%c",&c);
	
	switch(c){
		case 'a':
			//codigo usuario
			printf("has escrito la vocal %c",c);
			break;
		case 'e':
			//codigo usuario
			printf("has escrito la vocal %c",c);
			break;
		case 'i':
			//codigo usuario
			printf("has escrito la vocal %c",c);
			break;
		case 'o':
			//codigo usuario
			printf("has escrito la vocal %c",c);
			break;
		case 'u':
			//codigo usuario
			printf("has escrito la vocal %c",c);
			break;
		
		
		default:
			printf("Error! la letra %c no es una vocal",c);
			//codigo usuario	
	}
	
	
}