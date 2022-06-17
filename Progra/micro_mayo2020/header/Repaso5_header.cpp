#include <stdio.h>
#include "libreria.h"

int main(){
    int A = 1;
    int B = 2;
    printf("Resultado de %d+%d = %f\n", A,B,suma(A,B));
    printf("Resultado de %d-%d = %f\n", A,B,resta(A,B));
    printf("Resultadoss de %d*%d = %f\n", A,B,multiplicacion(A,B));
    return 0;
}
