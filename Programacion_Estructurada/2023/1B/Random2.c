#include <stdio.h>
#include <stdlib.h>//para usar random
#include <time.h>       /* time */

int main(){

    /* initialize random seed: */
    srand (time(NULL));
    printf("\n\n\nel numero aleatorio es: %d\n\n\n" , rand()% 1000);
    //rand() % 1000 //para generar numeros entre 0 y mil

}