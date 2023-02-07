#include <stdio.h>

int main(){
    int x = 9;
    // ejemplo uso del if
    if (x > 6){
        printf("if: x(%i) es mayor que 6\n",x);
    }

    //Ejemplo uso del if-else
    if (x < 6){
        printf("if: x(%i) es menor que 6\n",x);
    }else{
        printf("\nelse: x(%i) es no es menor que 6\n",x);
    }

    x = 9;
    while(x>=7){
        printf("\nwhile:x = %i",x);
        x = x - 1;
        //en el ciclo while y en el do-while es necesario tener una
		//variable tipo contador para saber cuando se debe terminar
		//el ciclo while/do-while, de lo contrario se quedara dentro
		//del ciclo infinamente	
    }
    printf("\nx = %i, salio del bucle while\n\n",x);

        x = -10;
        printf("ahora x =%i",x);
    do{
        printf("\nestoy dentro del bucle do-while %i",x);
        x = x + 1;
    }while ( x < 3);

    printf("\n sali del bucle do-while, %i",x);

        
    


}