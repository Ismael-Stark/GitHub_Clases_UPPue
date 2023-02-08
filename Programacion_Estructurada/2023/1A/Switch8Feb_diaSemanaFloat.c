#include <stdio.h>

int main(){
    int dia;
    float tom1, tom2, tom3, tom4;
    float ptom1, ptom2, ptom3;
    float diaf;
    printf("Dame un numero del 1 al 7 (sin decimales) switch\n");
    scanf("%f",&diaf);//leemos ej 5.5
    dia = (int)diaf; //aqui se convierte float to int, 5
    ///tomates
    tom1 = 120; tom2 = 120; tom3 = 120; tom4 = 120; 
    ptom1= 12;

    //diaf-dia  5.5 - 5 = 0.5
    //leemos ej -5.5
    //aqui se convierte float to int, -5
    //diaf-dia  -5.5 - -5 = -0.5

    if( (diaf-dia > 0) || (diaf-dia < 0) ){
        printf("se te pidio un numero entero sin decimales");
        printf("%f\t%i",diaf,dia);
        return 0;//termina mi programa principal-5.5
    }

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
