#include <stdio.h>
#include <math.h>



int main(){
    int dia, mes, annio;
    char mesLestras[13][13] = {"","enero","feb","marz","abril","may","jun","jul","agos","sep","oct","nov","dic"};
    dia = 4;
    mes = 8;
    annio = 2024;
    printf("\n\ndia incial: %d de %d del %d\n\n",dia,mes, annio);

    dia++;
    switch (mes)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
        if(dia == 32){
            dia = 1;
            mes++;
        }
        break;
    case 2:
        if ( (dia == 29 && annio%4 !=0) || (dia == 30 && annio%4 ==0)){
            dia = 1;
            mes++;
        }
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        if(dia == 31){
            dia = 1;
            mes++;
        }
        break;
        //if (annio%400 == 0 || (annio%4==0 && annio%100!=0)){}
     case 12:
        if(dia == 32){
            dia = 1;
            mes = 1;
            annio ++;
        }
        break;
    default:
        break;
    }
    printf("dia siguiente es: %d de %d del %d\n\n",dia,mes, annio);
    printf("dia siguiente es: %d de %s del %d\n\n",dia,mesLestras[mes], annio);
}