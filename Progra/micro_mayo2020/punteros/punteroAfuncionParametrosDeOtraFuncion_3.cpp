//puntero a funcion con parametro a otra funcion
#include <stdio.h>
 
int sumar(int a, int b)
{
    return a+b;
}
 
int restar(int a, int b)
{
    return a-b;
}
 
void funcion_principal(int a, int b, int (*funcion)(int, int))
{
    int resultado = funcion(a,b);
    printf("El resultado es %d\n", resultado);
}
 
int main()
{
    //Se definen dos valores enteros cualesquiera
    int num1 = 5;
    int num2 = 4;
 
    //Se invoca la funcion principal, pasandole la funcion de SUMA
    printf("\nSuma:\n");
    funcion_principal(num1, num2, sumar);
 
    //Se invoca la funcion principal, pasandole la funcion de RESTA
    printf("Resta:\n");
    funcion_principal(num1, num2, restar);
 
    return 0;
}
