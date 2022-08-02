#include <stdio.h>

float area (float x); //declarar funcion area
float CtoF(float x);
float FtoC(float x);
void graficar(int x,int y);

int main(){
	float x,y;
	printf("area de un cuadrado\n");
	scanf("%f",&x);
	
	y = area(x);  //llamar funcion
	
	printf("area de un cuadrado es: %.3f\n",y);
	printf("32\n ");
	for(int i=-32;i<=x;i++){
			printf("");
	}
}


float area (float x){ //declarar funcion area
	/*int y;
	y= x*x;
	return y;*/

	return (x*x);
}

float CtoF(float x){
	f= (9/5*C) + 32;
	
}

float FtoC(float x){
	c= (f-32)*5/9;
}

void graficar(int x,int y){
	
}
