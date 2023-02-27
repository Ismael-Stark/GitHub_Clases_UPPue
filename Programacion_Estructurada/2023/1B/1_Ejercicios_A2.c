#include <stdio.h>

int main(){
    int minutos, minExtra;
    float cobroExtra;
    printf("\n\n\ndame los minutos consumidos en el mes\n");
    scanf("%i",&minutos);

    if (minutos <= 400){
         printf("\n\n\ndebes pagar solamente los $35 dolares del plan\n");
    }else{
        minExtra = minutos - 400;
        //cobroExtra = resta*0.1;
        printf("\n\n\nDebes pagar: $%f dolares\n", 35+(minExtra*0.1) );
    }
}