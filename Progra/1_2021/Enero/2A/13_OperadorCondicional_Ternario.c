#include <stdio.h>

int main(){
	int x = 4;
	/*
	Operador condicional    ?    :     ;
	Es un operador ternario, es decir, tiene tres operandos.
	Su funcionamiento es el siguiente:
	para una ejecución 
	
	C ? R1 : R2 ;
	
	siendo C, R1 y R2 tres expresiones.
	
	Se evalúa C  (condicion)
	Si el resultado es cierto (es decir, distinto de cero)
	se evalúa R1 y éste sera el resultado.
	
	Si no (el resultado es falso o cero)
	se evalúa R2 y éste sera el resultado
	*/
	
	//Condicional   ?  si es true : si es False ;
	x>4 ? printf("hola\n\n") : printf("mundo\n\n") ;
	
	//es como si lo escribieramos de esta forma usando if
	if(x>4){				//condicional
		printf("hola\n");	//si es true
	}else{
		printf("mundo\n") ;	//si es false
	}
	
}





