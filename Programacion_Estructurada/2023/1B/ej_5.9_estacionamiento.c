/*Un estacionamiento cobra la cuota mínima de $2.00 por las tres primeras horas
de estacionamiento. El estacionamiento cobra $0.50 adicional por hora o fracción
después del tiempo mínimo. El cobro máximo para cualquier periodo de 24 horas
es de $10.00. Suponga que ningún automóvil se estaciona por más de 24 horas,
al mismo tiempo que otro. Escriba un programa que calcule e imprima los cobros
por cada uno de los tres clientes que se estacionaron ayer en el estacionamiento.
Debe introducir el número de horas que cada cliente pasó estacionado ahí.
Su programa debe imprimir los resultados en una forma tabular, y debe
calcular e imprimir los recibos de las percepciones de ayer.
El programa debe utilizar la función calculaImporte para determinar
el importe de cada cliente. Sus salidas deben ser semejantes al formato siguiente:*/

#include <stdio.h>
//defino el precio fijo por las 3 primeras horas
#define precioFijo  2.0
//defino el precio adicional por cada hora adicional
#define cobroHrAdicional 0.5

#define cobroMax 10.0 //por las 24Hrs



float calculaImporte(float horas);

int main(){
    float hrsCliente1,hrsCliente2,hrsCliente3;
    float cobroClienete1,cobroClienete2,cobroClienete3;
    float sumaHoras, sumaImportes;
    printf("\n\n\nProgrma que calcula el cobro de estacionamiento por hora, maximo de 24hr\n\n");
    printf("dame las horas del primer cliente:\n");
    scanf("%f",&hrsCliente1);
    printf("dame las horas del segundo cliente:\n");
    scanf("%f",&hrsCliente2);
    printf("dame las horas del tercer cliente:\n");
    scanf("%f",&hrsCliente3);

    cobroClienete1 = calculaImporte(hrsCliente1);
    cobroClienete2 = calculaImporte(hrsCliente2);
    cobroClienete3 = calculaImporte(hrsCliente3);

    sumaHoras = hrsCliente1 + hrsCliente2 + hrsCliente3;
    sumaImportes = cobroClienete1 + cobroClienete2 + cobroClienete3;

    printf("Autom%cvil\tHoras\tImporte\n",162);
    printf("1\t\t%.2f\t%.2f\n",hrsCliente1,cobroClienete1);
    printf("2\t\t%.2f\t%.2f\n",hrsCliente2,cobroClienete2);
    printf("3\t\t%.2f\t%.2f\n",hrsCliente3,cobroClienete3);
    printf("Total:\t\t%.2f\t%.2f\n\n\n\n",sumaHoras, sumaImportes);

    system("pause");


    
}

float calculaImporte(float horas){
    float horasExtra = horas - 3;
    int hrsEnteras = horasExtra;
    float hrfraccion = horasExtra - hrsEnteras;
    float cobro;
    
    //printf("\n%f\n",hrfraccion);
    if (horas <= 3){
        return 2.0;
    }else if(horas == 24){
        return 10;
    }
    else{
        if(hrfraccion == 0){
            cobro = 2 + (horasExtra * cobroHrAdicional);
        }else{
            cobro = 2 + (hrsEnteras * cobroHrAdicional) + 0.5;
        }        
        return cobro;
    }    
}