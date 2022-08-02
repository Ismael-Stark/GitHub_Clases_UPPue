#include <stdio.h>
#include <string.h>
#include <stdint.h> //para declarar variables tipo uint8_t....etc


struct producto{
	float precio[12];
	float p_producido[12];
	float p_vendido[12];
	float p_merma[12];
	float ganacia_mes[12];
	float ganacia_anual;	
};


//////////////////creacion de estructura para declarar variables e incializarlas
struct articulo{
	float precio[12];
	float ganacia_mes[12];
	float ganacia_anual;
};

typedef struct articulo verdura;	//se declara un nuevo tipo de dato tipo estructura
//ahora se utiliza para declarar una variable de tipo estructura y se inizializa la variable
verdura cebolla = {{1,2,3,4,5,6,7,8,9,10,11,12}, {1200,150.5,3000,2000,1900,2500,2400,400,750,2500,1000,932.53}, 0};
verdura pepino;//variable tipo estructura sin inicializar


//////////////////FIN  creacion de estructura para declarar variables e incializarlas

int main(){
	struct producto tomate, lechuga, zanahoria, acelga, chicharo;
	
	
	tomate.p_producido[0] = 500;
	tomate.p_producido[1] = 400;
	tomate.p_vendido[0] = 450;
	tomate.p_merma[0] = tomate.p_producido[0] -  tomate.p_vendido[0];
	
	
	printf("el tomate producido en el primer mes fueron: %f kg\n",tomate.p_producido[0]);
	printf("el tomate vendido en el primer mes fueron: %f kg\n",tomate.p_vendido[0]);
	printf("el lo que no se vendio en el primer mes fueron: %f kg\n\n\n",tomate.p_merma[0]);
	
	
	printf("precio cebolla: $ %.3f \n",cebolla.precio[9]);
	printf("ganancia cebolla: $ %.3f \n",cebolla.ganacia_mes[0]);
	
	cebolla.ganacia_mes[0] =100.05;
	
	printf("ganancia cebolla: $ %.3f \n",cebolla.ganacia_mes[0]);
}