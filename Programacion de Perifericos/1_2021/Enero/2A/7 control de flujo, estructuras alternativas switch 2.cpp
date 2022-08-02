#include "stdio.h"
#include "math.h"

//uso del Switch case
int main(){
	char c;
	printf("Escribe una letra\n");
//	c = getchar();
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
	//system("pause");
	
}