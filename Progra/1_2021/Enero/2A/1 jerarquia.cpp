#include "stdio.h"

int main(){
	int m, y;
	float z;
	
	printf("jerarquia de operadores\n\n");
	
	m = 1 + 2 + 3 + 4 + 5 / 5;
	printf("forma incorrecta: %d\n",m);
	m = (1 + 2 + 3 + 4 + 5) / 5;
	printf("forma correcta: %d\n",m);
	
	y = 2 * 3 + 6;
	printf("\n\nforma 1: %d\n",y);
	y = (2 * 3) + 6;
	printf("forma 2: %d\n",y);
	
	z = 1 * 2 % 3 + 4 / 5 - 6;
	printf("\n\nforma 1: %f\n",z);
	z = 1 * 2 % 3 + 4.0 / 5 - 6;
	printf("forma 2: %f\n",z);//alt + 92 = diag invertida \
	z = 1 * 2 % 3 + 4 / 5.0 - 6;
	printf("forma 3: %f\n",z);
	z = 1 * 2 % 3 + 4.0 / 5.0 - 6;
	printf("forma 4: %f\n",z);
	
	//z = 1 * 2 % 3 + 4.0 / m.0 - 6;// m.0 no se puede hacer , no se puede convertir a float una variable poniendole .0
	//printf("forma 4: %f\n",z);
	
	z = 9 / 7;
	printf("\n\ndivision1 9/7: %.3f\n",z);
	
	z = 9.0 / 7;
	printf("\n\ndivision2 9/7: %.3f\n",z);
	
	z = 9 / 7.0;
	printf("\n\ndivision3 9/7: %.3f\n",z);
	
	z = (float)9 / 7;
	printf("\n\ndivision4 9/7: %.3f\n",z);
	
	z = 9 / (float)7;
	printf("\n\ndivision5 9/7: %.3f\n",z);
	
	z = (float)9 / (float)7;	/// no es necesario hacer esto
	printf("\n\ndivision5 9/7: %.3f\n",z);
	
	z = (float)(9 / 7); //mala sintaxis en el uso de (float)
	printf("\n\ndivision6 9/7: %.3f\n",z);
	
	int a,b,c;
	a = 9;
	b = 5;
	z = a / b;	//da un resultado entero aunque tenga decimales la division, ya que es division
				//entre numeros de tipo entero (int)
	printf("\n\ndivision7 a/b: %.3f\n",z);
	
	z =  (float) a / b;	//para corregir el resultado de la division entre numeros de tipo entero(int)
						//se pone (float) antes de alguna de las variables de la division
	printf("\n\ndivision8 a/b: %.3f\n",z);
	z = a / (float)b;
	printf("\n\ndivision9 a/b: %.3f\n",z);
	
	z = (float)(a / b);	///mala sintaxis en el uso de (float)
	printf("\n\ndivision10 a/b: %.3f\n",z);
	
	c = a / b;
	printf("\n\ndivision11 a/b: %d\n",c);
	c = (float)a / b;
	printf("\n\ndivision12 a/b: %d\n",c);
	
	//y = a*x*x+b*x+c
	y = 2 * 3 * 3 + 8 * 3 + 12;
	printf("\n\nforma 1: %d\n",y);
	
}