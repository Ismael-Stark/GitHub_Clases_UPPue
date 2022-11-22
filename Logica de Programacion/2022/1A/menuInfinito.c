 #include <stdio.h>
 
 
int main(){
	float num1, num2, resultado;
	char opcionMenu ;
	
	do{/// menu ciclico que se vuelve a ejecutar una vez finalizado el programa al menos que
			//se selecciones la opcion de salir
		printf("\nCalculadora basica usando Switch,\n");
		printf("1: suma\n");
		printf("2: resta\n");
		printf("3: multiplicacion\n");
		printf("4: division\n");
		printf("5: Salir\n\n");
		scanf("%i", &opcionMenu);
		switch(opcionMenu){
			case 1:
				
				break;
			
			case 2:
				
				break;
			
			case 3:
				
				break;
			
			case 4:
				
				break;
			
			case 5:
				printf("\n**********FIN*************\n");
				break;
			default:
				printf("\n----------Opcion no valida--------\n");
				break;
		}
		
	}while(opcionMenu !=5);
	
}