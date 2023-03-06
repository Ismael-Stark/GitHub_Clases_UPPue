
#include <stdio.h>


int main(){
    //system("cls");
    printf("\n1\n");
    for(int i = 0; i < 10; i++){//filas
        for(int j=0; j < i+1 ; j++){//columnas
            printf("*");
        }
        printf("\n");
    }

    printf("\n2\n");

    for(int i = 0; i < 10; i++){//filas 0
        for(int j=10; j > i ; j--){//columnas
            printf("*");
        }
        printf("\n");
    }

    printf("\n3\n");

    for(int i = 0; i < 10; i++){//filas 0
        
        for(int k = 0; k < i; k++){
            printf(" ");
        }
        for(int j=10; j > i ; j--){//columnas *
            printf("*");
        }
        printf("\n");
    }

    printf("\n4\n");

    for(int i = 0; i < 10; i++){//filas 0
        for(int k = 9; k > i; k--){
            printf(" ");
        }
        for(int j=0; j < i+1 ; j++){//columnas
            printf("*");
        }
        printf("\n");
    }
}