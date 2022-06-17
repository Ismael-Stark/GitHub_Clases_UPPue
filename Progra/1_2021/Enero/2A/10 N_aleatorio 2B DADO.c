/* Figura 5.8: fig05_08.c
Tiro de un dado de seis lados 6000 veces */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>//para poder utilizar time como seed en el numero aleatorio

/* la función main comienza la ejecución del programa */
main(){
	register int frecuencia1 = 0; /* contador de lado 1 */
	int frecuencia2 = 0; /* contador de los puntitos, el 2 */
	int frecuencia3 = 0; /* contador del tiro 3 */
	int frecuencia4 = 0; /* contador del tiro 4 */
	int frecuencia5 = 0; /* contador del tiro 5 */
	int frecuencia6 = 0; /* contador del tiro 6 */
	
	int tiro; /* contador de tiros, valores de 1 a 6000 */
	int cara; /* representa un tiro del dado, valores de 1 a 6 */

	//srand( time( NULL ) );		//time(null) ayuda a generar numeros aleatorios y se alimenta de la hora del sistema
/* repite 6000 veces y resume los resultados */
	for ( tiro = 1; tiro <= 6000; tiro++ ) {
		
		cara = 1 + rand() % 6; /* número aleatorio de 1 a 6 */
		/* determina el valor de cara e incrementa el contador apropiado */
		switch ( cara ) {
			case 1: /* tiro 1 */
				++frecuencia1;
				break;
			case 2: /* tiro 2 */
				++frecuencia2;
				break;
			case 3: /* tiro 3 */
				++frecuencia3;
				break;
			case 4: /* tiro 4 */
				++frecuencia4;
				break;
			case 5: /* tiro 5 */
				++frecuencia5;
				break;
			case 6: /* tiro 6 */
				++frecuencia6;
				break; /* opcional */
		} /* fin de switch */
	} /* fin de for */
	/* despliega los resultados en forma tabular */
	printf( "%s%13s\n", "Cara", "Frecuencia" );
	printf( " 1%13d\n", frecuencia1 );
	printf( " 2%13d\n", frecuencia2 );
	printf( " 3%13d\n", frecuencia3 );
	printf( " 4%13d\n", frecuencia4 );
	printf( " 5%13d\n", frecuencia5 );
	printf( " 6%13d\n", frecuencia6 );
	return 0; /* indica terminación exitosa */
} /* fin de main */