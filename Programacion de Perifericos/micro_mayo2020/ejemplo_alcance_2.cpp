 /* Figura 5.12: fig05_12.c		Ejemplo de alcance
 4 tipos de alcance: de funcion, de archivo, de bloque, y alcance de prototipo  */
#include <stdio.h>

void usoLocal( void );        	/* prototipo de funci�n */
void usoStaticLocal( void );  	/* prototipo de funci�n */
void usoGlobal( void );       	/* prototipo de funci�n */
void funcion( int x );			/* prototipo de funci�n */		//x es alcance de prototipo de funcion

int x = 1; /* variable global */								//Alcance de archivo
/* la funci�n main comienza la ejecuci�n del programa */
int main(){
	//las etiquetas (identificador seguido de dospuntos como case: goto:) son identificadores con alcande de funcion
	int x = 5; /* variable local en main */

	printf("la x local fuera del alcance de main es %d\n", x );
	
	{ /* comienza el nuevo alcance */							//alcance de bloque 1
		int x = 7; /* variable local con nuevo alcance */

		printf( "la x local en el alcance interno de main es %d\n", x );
		
		{ /* comienza el nuevo alcance */		//alcance de bloque 2, dentro del bloque 1
			int x = 40; /* variable local con nuevo alcance */

			printf( "la x local en el alcance interno del interno de main %d\n", x );
		} /* fin de nuevo alcance */
	
	} /* fin de nuevo alcance */								//fin de alcance de bloque

	printf( "la x local en el alcance externo de main es %d\n", x );

	usoLocal();       /* usoLocal contiene una x local */
	usoStaticLocal(); /* usoStaticLocal contiene una x local est�tica */
	usoGlobal();      /* usoGlobal utiliza una x global */
	usoLocal();       /* usoLocal reinicializa la x local autom�tica */
	usoStaticLocal(); /* static local x retiene su valor previo */
	usoGlobal();      /* x global tambi�n retiene su valor */

	printf( "\nx local en main es %d\n", x );

	return 0; /* indica terminaci�n exitosa */

} /* fin de main */

/* usoLocal reinicializa a la variable local x durante cada llamada */
void usoLocal( void )
{
	int x = 25;  /* se inicializa cada vez que se llama usoLocal */

	printf( "\nla x local en usoLocal es %d despues de entrar a usoLocal\n", x );
	x++;
	printf( "la x local en usoLocal es %d antes de salir de usoLocal\n", x );
	{ /* comienza el nuevo alcance */							//alcance de bloque
		int x = 70; /* variable local con nuevo alcance */
		printf( "la x local en el alcance interno de usolocal es %d\n", x );
	} /* fin de nuevo alcance */								//fin de alcance de bloque

} /* fin de la funci�n usoLocal */

/* usoStaticLocal inicializa la variable static local x s�lo la primera vez
que se invoca a la funci�n; el valor de x se guarda entre las llamadas a esta
funci�n */
void usoStaticLocal( void )
{
/* se inicializa s�lo la primera vez que se invoca a usoStaticLocal */
	static int x = 50;  

	printf( "\n la x local estatica es %d al entrar a usoStaticLocal\n", x );
	x++;
	printf( "la x local estatica  es %d al salir de usoStaticLocal\n", x );
} /* fin de la funci�n usoStaticLocal */

/* la funci�n usoGlobal modifica la variable global x durante cada llamada */
void usoGlobal( void )
{
	printf( "\nla x global es %d al entrar a usoGlobal\n", x );
	x *= 10;
	printf( "la x global es %d al salir de usoGlobal\n", x );
} /* fin de la funci�n usoGlobal */
