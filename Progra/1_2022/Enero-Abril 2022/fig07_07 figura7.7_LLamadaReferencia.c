 /* Figura 7.7: fig07_07.c
Eleva  al  cubo  una  variable  mediante  una  llamada  por  referencia,  con  un apuntador como argumento */

#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include <math.h>

void cuboPorReferencia( int *ptrN ); /* prototipo */

bool raiz(float *ptrV);

int main()
{
	int numero = 5; /* inicializa numero */
	bool valor;
	
	//printf( "El valor original de numero es %d", numero );
	
	/* pasa la dirección de numero a cuboPorReferencia */
	//cuboPorReferencia( &numero );
	
	//printf( "\nEl nuevo valor de numero es %d\n", numero );
	
	float numero2=4.5;
	//valor = raiz(&numero2);
	
	if ( raiz(&numero2) == 1) {
		printf( "\nla raiz cuadrada sin decimales\n");
	}else{
		printf( "\nla raiz cuadrada conn decimales\n");
	}
	//printf( "\nla raiz cuadrada es: %.3f\n", numero2 );
	//printf( "\n%i\n", valor );
	return 0; /* indica terminación exitosa */
} /* fin de main */

/* calcula el cubo de *ptrN; modifica la variable numero en main */
void cuboPorReferencia( int *ptrN )
{
	*ptrN = *ptrN * *ptrN * *ptrN;  /* cubo de *ptrN */
} /* fin de la función cuboPorReferencia */


bool raiz(float *ptrV){
	int x=0;
	*ptrV = sqrt(*ptrV);
	
	x = *ptrV;
	if( (*ptrV-x) == 0  ){
		return 1; //raiz cuadrada sin decimales
	}else{
		return 0;
	}
	
	
	
}