//puntero a funcion
#include <stdio.h>
 
//Funcion de ejemplo
void funcion()
{
    printf("Se ha entrado en la funcion\n");
}
 
void funcion2()
{
    printf("Se ha entrado en la funcion222222\n");
}
 
int main()
{
    //Creamos el puntero a la funcion
    void (*puntero_funcion)() = &funcion;
 
    //Llamamos la funcion a traves del puntero
    puntero_funcion();
    
	puntero_funcion = &funcion2;
    
    puntero_funcion();
    
    //funcion();
 
    return 0;
}
