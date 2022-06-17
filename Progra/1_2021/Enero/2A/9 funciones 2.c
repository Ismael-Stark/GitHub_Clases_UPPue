//Funciones, que son, tipos y como se declaran
#include <stdio.h>

//TIPO  nombreFuncion(parametros);
//donde:
//parametros: TIPO var, TIPO2 var2, TIPO3 var3.........
//TIPO void pueden recibir parametros o no, pero no regresa ningun valor
//TIPO: int, float, double, char, ellas regresan parametros del tipo que se haya declarado


void funcion1(int x);	//prototipo de una funcion

int funcion2(int x){//funcion2 esta antes de main() escrita completa, no se le llama: prototipo de una funcion
	//printf("funcion2 cuadrado de un numero\n");
	return (x*x);
}
	

int main(){
	int a = 2, resultado;
	resultado = funcion2(a);
	printf("el resultado de la funcion 2 es: %d\n\n",resultado);
	funcion1(a);

}

void funcion1(int x){
	printf("cubo desde funcion 1, sin regresar parametros\nX3: %d",x*x*x);
}
