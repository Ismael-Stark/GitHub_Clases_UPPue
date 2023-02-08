#include <stdio.h>

#define or ||
#define and &&

#define PI   3.141519


int main(){
    float dia;
    printf("Dame un numero del 1 al 7 IF\n");
    scanf("%f",&dia);


    if(dia == 1.0){
        printf("El dia es Lunes");
    }
    if(dia == 2.0){
        printf("El dia es martes");
    }
    if(dia == 3){
        printf("El dia es miercoles");
    }
    if(dia == 4){
        printf("El dia es jueves");
    }
    if(dia == 5.0){
        printf("El dia es viernes");
    }
    if(dia == 6){
        printf("El dia es sabado");
    }
    if(dia == 7){
        printf("El dia es domingo");
    }
    
    if(dia > 7 or dia < 1){
        printf("El dia no existe");
    }

}
