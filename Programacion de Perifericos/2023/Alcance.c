 /* Figura 5.12: fig05_12.c		Ejemplo de alcance
 4 tipos de alcance: de funcion, de archivo, de bloque, y alcance de prototipo  */
#include <stdio.h>

//--las etiquetas (un identificador seguido por dos puntos, como en inicio:)
//son los unicos identificadores con alcance de funcion:
//ej:  case:,			inicio:

//--Un identificador que se declara fuera de cualquier función tiene alcance de archivo. 
//tambien se les conoce como variables globales

extern int x = 15; //esta es una variable de alcance de archivo o variable global


//Los identificadores que se definen dentro de un bloque tienen alcance de bloque.
//El alcance de bloque termina al encontrar la llave derecha (}) de terminación de un bloque.
//Las variables locales que se encuentran al principio de una función tienen alcance de bloque,
//así como los parámetros de la función, los cuales se consideran variables locales de la función.

void SumaDeNumeros(int a, int b);	//Los únicos identificadores con alcance de prototipo de función
									//son aquellos que se utilizan en la lista de
									//parámetros de un prototipo de función.
void imprime_global(void);
void var_local_de_funcion(void);
void var_Static_local_de_funcion(void);

int main(){
	auto int x = 30;//variable de alcance de bloque, o variable local
    printf("el valor de x local en main es: %i\n",x);
    x++;    
    imprime_global();
    var_local_de_funcion();
    var_Static_local_de_funcion();
    
    printf("\nel valor de x local en main es: %i\n",x);
    x++;    
    imprime_global();
    var_local_de_funcion();
    var_Static_local_de_funcion();
    
    printf("\nel valor de x local en main es: %i\n",x);
    x++;    
    imprime_global();
    var_local_de_funcion();
    var_Static_local_de_funcion();
    
    printf("\nel valor de x local en main es: %i\n",x);
    x++;    
    imprime_global();
    var_local_de_funcion();
    var_Static_local_de_funcion();
    
    printf("\nel valor de x local en main es: %i\n",x);
    x++;    
    imprime_global();
    var_local_de_funcion();
    var_Static_local_de_funcion();
	
}

void imprime_global(void){
	printf("el valor de x global es: %i\n",x);
	x++;
}

void var_local_de_funcion(void){
	int x = -10;//se crea la var local
	printf("el valor de x local en funcion es: %i\n",x);
	x--;
	printf("el valor de x local en funcion es: %i\n",x);
}//termina la funcion y al mismo tiempo se destruye la variable x local de funcion


void var_Static_local_de_funcion(void){
	static int x = -69;//se crea la var local static
	printf("el valor de x Static local de funcion es: %i\n",x);
	x--;
} //termina la funcion pero no se destruye la variable x local de funcion por ser del tipo STATIC
