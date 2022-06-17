//Funciones como Arrays
#include <stdio.h>
 
/*Comprobar si el numero es PAR*/
void funcion1(int a)
{
    if(a % 2 == 0)
        printf("El numero es par\n");
    else
        printf("El numero es impar\n");
}
 
 
/*Comprobar si el numero es POSITIVO/NEGATIVO*/
void funcion2(int a)
{
    if(a > 0)
        printf("El numero es positivo\n");
    else if(a < 0)
        printf("El numero es negativo\n");
    else
        printf("El numero es cero\n");
}
 
 
/*Comprobar si el numero es PRIMO*/
void funcion3(int a)
{
    if(a <= 1)
    {
        printf("El numero NO es primo\n");
        return;
    }
  
    for(int i = 2; i <= (a)/2; i++)
    {
        if ( a%i == 0 )
        {
            printf("El numero NO es primo\n");
            return;
        }
    }
    printf("El numero es primo\n");
}
 
int main()
{
 
 
    //Vector de funciones
    void (*array[]) (int) = {funcion1, funcion2, funcion3};
 
    //Se pide al usuario que entre un numero
    int val;
    printf("\nIntroduce un numero entero: ");
    scanf("%d", &val);
     
    //Se recorre el vector para llamar las funciones
    for(int i = 0; i < 3; i++)
    {
        array[i] (val);
    }
 
    return 0;
}
