#include <stdio.h>
#include <stdlib.h>//para usar random
#include <time.h>

int main(){
    int x;

    srand(time(NULL));

    x = 1 + (rand() % 100);
    printf("\n\n\nel numero aleatorio es: %d\n\n\n" , x);
    //rand() % 1000 //para generar numeros entre 0 y mil

}