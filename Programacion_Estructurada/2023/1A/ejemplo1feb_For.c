#include <stdio.h>

int main(){
    int contador, fin=10;

    for(contador = 0; contador <= fin; ++contador){
        printf("for: +contador = %i\n",contador);
    }
    printf("\n\n\n");
    ///while
    contador = 0;
    while (contador <= fin){
        printf("while: contador = %i\n",contador);
        contador++;
    }
    printf("\n\n\n");
    ///do-while
    contador = 0;
    do{
        printf("Do: contador = %i\n",contador);
        contador++;
    }while (contador <= fin);
    

}