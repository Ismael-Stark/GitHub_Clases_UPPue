#include <stdio.h>
#include <math.h>//libreria para funciones trigonometrias, exponenciales y raices
#include <stdbool.h>//libreria para usar funciones, variables booleanas

int main(){
    int q,n;//q contador de divisiones, n el numero a saber si es primo
    bool esPrimo;//variable tipo booleana que se usa como bandera (flag)
                //sirve para saber si el numero es primo o no
                //si es true(1) es primo, false(0) cuando no es primo
    printf("\n\n\ndame el numero que deseas saber si es primo: \n");
    scanf("%i",&n);

    //for(inicio, fin, contador)
    for(q = 2, esPrimo = true; q <= sqrt(n) && esPrimo == true;){
        printf("for: n%%q = %i\n",n%q);
        if(n%q == 0){
            esPrimo = false;// con esto se dice que no es primo, 2 divide a n
        }else if(q == 2){
            q = 3;
        }else{
            q = q + 2;
        }
    }

    if(esPrimo == true){
        printf("n es primo");
    }else{
        printf("n NO es primo");
    }

}