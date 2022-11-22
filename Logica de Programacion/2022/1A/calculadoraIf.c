 #include <stdio.h>
 
 
int main(){
	float num1, num2, resultado;
	char opcionMenu ;
	
	printf("Calculadora basica usando if\n");
	printf("1: suma\n");
	printf("2: resta\n");
	printf("3: multiplicacion\n");
	printf("4: division\n");
	printf("5: Salir\n");
	scanf("%i", &opcionMenu);

	
	if(opcionMenu == 1){
		printf("Ingresa el primer numero\n");	//pedir los numeros dentro de cada if
		scanf("%f", &num1);						//eso es repetitivo e ineficiente
		printf("Ingresa el segundo numero\n");	//mas adelante veremos como corregir eso
		scanf("%f", &num2);
		resultado = num1 + num2;
		printf("la suma de los numeros es: %.3f",resultado);
		
	}else 	if(opcionMenu == 2){
		printf("Ingresa el primer numero\n");
		scanf("%f", &num1);
		printf("Ingresa el segundo numero\n");
		scanf("%f", &num2);
		resultado = num1 - num2;
		printf("la resta de los numeros es: %.3f",resultado);
		
	}else	 if(opcionMenu == 3){
		printf("Ingresa el primer numero\n");
		scanf("%f", &num1);
		printf("Ingresa el segundo numero\n");
		scanf("%f", &num2);
		resultado = num1 * num2;
		printf("el producto de los numeros es: %.3f",resultado);
		
	}else	if(opcionMenu == 4){
		printf("Ingresa el primer numero\n");
		scanf("%f", &num1);
		printf("Ingresa el segundo numero\n");
		scanf("%f", &num2);
		resultado = num1 / num2;
		printf("la division de los numeros es: %.3f",resultado);
		
	}else	if(opcionMenu >= 5 || opcionMenu < 1) {
		printf("FIN");
	}
	
 
}