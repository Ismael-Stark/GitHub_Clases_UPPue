//incluir librerias
#include <stdio.h>//a fuerza debe estar includo

//if ( condicional)   		forma1, basica

//if ( condicional) 		forma2, 
//else

//if ( condicional)			forma3, 
//else if ( condicional)
//else

//if ( condicional)
//else if ( condicional)
//else if ( condicional)
//else if ( condicional)
//else.......

int main(){
	int a,b,c,d;
	a = 7;
	b = 7;
	c = 7;
	d=8;
	
	/*if (a<b){
		printf("a es menor que b");
	}*/
	
	/*if (a<b){
		printf("a es menor que b");
	}else{
		printf("b es menor que a");
	}*/
	
	/*if (a<b){
		printf("a es menor que b");
	}else if(b<a){
		printf("b es menor que a");
	}else if(b<c){
		printf("b es menor que c");
	}else if(c<b){
		printf("c es menor que b");
	}*/
	
	int boton1 = 1, boton2 = 1;
	
		/// 1      and    1 = 1
	if (boton1 ==1  && boton2 == 1){
		printf("motor encendido");
	}else{
		printf("motor apagado");
	}
	
	//para declara constantes se usa: const el tipo de variable y la variable
	const float pi = 3.1416;
	printf("\n\n%f",pi);
	
	pi;
	printf("\n\n%f",pi);
	
}