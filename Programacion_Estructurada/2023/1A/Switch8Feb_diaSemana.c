#include <stdio.h>

int main(){
    char dia;
    printf("Dame un numero del 1 al 7 switch\n");
    scanf("%i",&dia);

    switch (dia)//solo datos tipo Char o int
    {
    case 1:
        printf("El dia es Lunes");
        break;
    case 2:
        printf("El dia es martes");
        break;
    case 3:
        printf("El dia es miercoles");
        break;
    case 4:
        printf("El dia es jueves");
        break;
    case 5:
        printf("El dia es viernes");
        break;
    case 6:
        printf("El dia es sabado");
        break;
    case 7:
        printf("El dia es domingo");
        break;
    
    default:
        printf("El dia no existe");
        break;
    }

}
