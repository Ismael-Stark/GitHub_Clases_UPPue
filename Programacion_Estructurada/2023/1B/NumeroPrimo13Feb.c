#include <stdio.h>
#include <stdlib.h>
#include <math.h>//para usar funciones matematicas como la raiz cuadrada

int main(){
    int n, d;
    char esPrimo;//bandera para saber si el numero es primo o no
                // 1 si es primo, 0 si no es primo
    printf("Dame el numero para saber si es primo\n");
    scanf("%i",&n);
    
    for( d=2, esPrimo = 1; d <= sqrt(n) && esPrimo == 1 ;){
         printf("n%%d %i\n",n%d);
        if(n%d==0){
            esPrimo = 0;
        }else if( d == 2){
            d = 3;
        }else{
            d = d + 2;
        }
    }
    if (esPrimo == 1){
        printf("es primo");
    }else{
        printf("no es primo");
    }
}