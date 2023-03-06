#include <stdio.h>

int main(){
    int dia, mes, annio;

    dia = 31;
    mes = 12;
    annio = 2010;

    printf("\n\n\nla fecha actual es: %i de %i del %i",dia,mes,annio);

    dia++;
    switch (mes)
    {
    case 1://grupo de meses de 31 dias
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
        if (dia==32){
            dia = 1;
            mes++;
        }        
        break;
    case 4://grupo de meses de 30 dias
    case 6:
    case 9:
    case 11:
        if (dia==31){
            dia = 1;
            mes++;
        }        
        break;
    case 2://febrero
        if ((dia == 29 && annio%4 != 0) || (dia==30 && annio%4 == 0)){
            dia = 1;
            mes++;
        }        
        break;
    case 12:
        if (dia==32){
            dia = 1;
            mes = 1;
            annio++;
        }        
        break;
    
    default:
        break;
    }
    printf("\n\nel dia siguiente es: %i de %i del %i",dia,mes,annio);
}