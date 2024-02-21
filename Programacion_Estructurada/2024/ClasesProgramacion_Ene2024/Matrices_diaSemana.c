#include "stdio.h"


void main(){
	char cal[3] = {7,8,9};
	char dia, diaSemana[7][10] = {"lunes","martes","miercoles","jueves","viernes","sabado","domingo"};
	
	printf("Dame un numero del 1 al 7\n");
	scanf("%d",&dia);
	
//	como se usa arreglos para este ejemplo es mejor usar un
	//simple if-else para resolver el ejercico
	if(dia > 0 && dia <8){
		printf("\nusando if %s",diaSemana[dia-1]);
	}else{
		printf("\ndia no existe");
	}
	
	//el uso del switch-case no tiene caso ya que se usarian mas lineas de codigo
	/*switch (dia){
		case 1:
			printf("%s",diaSemana[0]);
			break;
		case 2:
			printf("%s",diaSemana[1]);
			break;	
			////y seguiria el codigo hasta llegar a domingo y default:
	}*/
	//printf("%s",diaSemana[2]);
	
	//pero usando un truco se puede usar switch-case
	
	switch (dia){
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:		
			printf("\n\nswitch-case %s",diaSemana[dia-1]);
			break;
		default:
			printf("\n\ndia no existe");
	}
}