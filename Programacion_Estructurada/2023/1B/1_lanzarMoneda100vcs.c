 /* Figura 5.7: fig05_07.c
    Escalamiento y cambio de enteros producidos por 1 + rand() % 6 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

bool lanzarMoneda(){
    return (rand()%2);
}

int main()
{
    int i, lanzamiento; /* contador */
    int  cara=0, cruz=0;//0 cara, 1 cruz
    
    srand (time(NULL)); 

    /* repite 20 veces */
    for ( i = 1; i <= 100; i++ ) {
        lanzamiento = lanzarMoneda();
        if(lanzamiento==1){
            cruz++;
            printf("Cruz\n");
        }else{
            cara++;
            printf("Cara\n");
        }

    } /* fin de for */
    printf("\n\nEn total salieron %d Caras y %d Cruces\n",cara,cruz);

    return 0; /* indica terminación exitosa */

} /* fin de main */ 