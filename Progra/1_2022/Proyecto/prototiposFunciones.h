
//funciones o subAlgoritmos
//
//tipo_de_funcion   Nomre_de_la_funcion (lista deparametros) { }
//
//una funcion se define por
//su nombre: que debe ser un identificador unico
//Su tipo: que es el tipo de valor que la funcion regresa
//la lista de parametros: donde cada parametro tiene un nombre y un tipo, debido a la cual 
//						  se dice que los parametros son formales

//tipo de funcion: int, short, long, double, float....esto es cuando una funcion 
///				  va a regresar algun dato con comando return ();
//sino va a regresar algun valor(dato) entonces se declara del tipo: void()


//prototipo de funciones
/*
*para escribir corretamente la llamada de una funcion
*se debe conocer:
El tipo de funcion
El nombre asignado a la funcion
la lista de parametros

*el prototipo de una funcion se hace de la siguiente forma:
tipo Nomre_de_la_funcion (lista deparametros o  lista de tipos de arcumentos);

*/

/**declaracion de prororipos de funciones*/ //van antes del int main(){}
//o los prototipos de funcion, se escriben dentro de algun archivo *.h

void nada();
void nada2();
void linea();
void imprimir_mensaje();
///las funciones pueden aceptar parametros y no regresar nada a la funcion que la llamo
void suma(float a, float b);
///las funciones pueden aceptar y regresar valores a la funcion le le hizo el llamado
float resta(float d, float e);

/**FIN declaracion de prororipos de funciones*/