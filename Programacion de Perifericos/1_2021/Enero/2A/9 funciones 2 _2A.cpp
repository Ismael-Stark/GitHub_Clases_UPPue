//Funciones, que son, tipos y como se declaran
#include <stdio.h>

//TIPO  nombreFuncion(parametros);

//donde:
//parametros: TIPO var, TIPO2 var2, TIPO3 var3.........
//TIPO void pueden recibir parametros o no, pero no regresa ningun valor
//TIPO: int, float, double, char, ellas regresan parametros del tipo que se haya declarado

int cubo(int x);

void cuadrado(int x){
	printf("cuandrado del numero %d desde la funcion 1\n el cuadrado es: %d\n",x, x*x);
}

int main(){
	int a, resultado;
	a = 9;
	cuadrado(a);	//se manda a llamar la funcion y se envia un parametro
	
	resultado = cubo(a);//se manda a llamar la funcion y se envia un parametro
						//pero esta funcion nos devuelve un valor y se guarda en una variable
	printf("\n\nel cubo del numero %d desde la funcion cubo\nes: %d\n",a,resultado);
}

int cubo(int x){
	return (x*x*x);
}
