#include <stdio.h>

int main(){
    char dia[6] = "lunes";
    char dias[7][10] = {"lunes","martes","miercoles","jueves","viernes","sabado","domingo"};
    int tomates[13];
    
    //dia[5] = '5';//'\0';
    
    int mes = 1 ;

    tomates[1] = 200;
    tomates[0] = 50;
    tomates[3] = 100;
    printf("\n\nla cantidad de tomates del mes: %i,es: %iKg\n\n",mes, tomates[mes - 1]);
    for(int r=0; r<7;r++){
        printf("%s\n",dias[r]);
    }
    //printf("%s",dia);
    /*char matrix[4][4];
    char leer;
    for(int i = 1; i<=3;i++){//filas
        for(int j = 1; j<=3;j++){//columnas
            printf("dame el numero para para la psicion: %i,%i : ",i, j);
            scanf("%i",&leer);
            matrix[i][j] = leer;
        }
    }
    printf("\n\n\n");
    for(int i = 1; i<=3;i++){//filas
        for(int j = 1; j<=3;j++){//columnas
            printf("%i\t",matrix[i][j]);
        }
         printf("\n");
    }
    */
    //system("pause");

}