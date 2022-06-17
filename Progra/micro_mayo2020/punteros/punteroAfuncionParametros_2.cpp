//puntero a funcion con parametros
#include <stdio.h>
 
//Funcion que recibe dos enteros
void funcion(int valor1, int valor2)
{
    printf("Valor 1 = %d\n", valor1);
    printf("Valor 2 = %d\n", valor2);
}
 
int main()
{
    //Se crea el puntero a la funcion. Hay que indicar el tipo de los parametros que recibe.
    void (*puntero_funcion)(int, int) = &funcion;
 
    //Se llama la funcion a traves del puntero
    puntero_funcion(2, 5);
 
    return 0;
}
