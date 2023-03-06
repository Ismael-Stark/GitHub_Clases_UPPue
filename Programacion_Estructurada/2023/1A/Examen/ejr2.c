#include <stdio.h>
//Ctrl + Shift + P y seleccione Terminal:clear
//Fuente: https://www.iteramos.com/pregunta/86308/como-puedo-borrar-el-terminal-en-visual-studio-code

int main(){

    for(int i = 0; i < 10;i++){//imprime filas
        for(int j = 0; j<i+1; j++){//imprime columnas
            printf("*");
        }
        printf("\n");
    }
}