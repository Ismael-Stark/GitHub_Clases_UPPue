#include <stdio.h>

int main(){
    int fin=10, tabla;
    tabla = 5;

    for(int j = 1; j <= fin; j++){
        printf("for: %i X %i = %i\n",tabla,j, tabla*j );
    }

    printf("\n\n\n");
    ///while
    tabla = 7;
    int i = 1;
    while (i <= fin){
        printf("while: %i X %i = %i\n",tabla,i, tabla*i );
        i++;
    }
    printf("\n\n\n");
    ///Do-while
    tabla = 34;
    i = 1;
    do{
        printf("Do-while: %i X %i = %i\n",tabla,i, tabla*i );
        i++;
    }while (i <= fin);
}