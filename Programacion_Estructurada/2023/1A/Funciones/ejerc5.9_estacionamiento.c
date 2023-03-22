#include <stdio.h>

#define cuotaMin 2.0
#define adicional 0.5
#define cuotaMax 10.0

float calculaImporte(float horas);

int main(){
    float horasCliente1, horasCliente2, horasCliente3;
    float importe1, importe2, importe3, sumaHrs, sumaImporte;
    printf("programa que calcula el cobro de un estacionamiento\n");
    printf("dame el numero de Hrs del cliente 1\n");
    scanf("%f",&horasCliente1);
    printf("dame el numero de Hrs del cliente 2\n");
    scanf("%f",&horasCliente2);
    printf("dame el numero de Hrs del cliente 3\n");
    scanf("%f",&horasCliente3);

    sumaHrs = horasCliente1 + horasCliente2 + horasCliente3;

    importe1 = calculaImporte(horasCliente1);
    importe2 = calculaImporte(horasCliente2);
    importe3 = calculaImporte(horasCliente3);

    sumaImporte = importe1 + importe2 + importe3;

    printf("Automovil\tHoras\tImporte\n");
    printf("1\t\t%.2f\t%.2f\n",horasCliente1,importe1);
    printf("2\t\t%.2f\t%.2f\n",horasCliente2,importe2);
    printf("3\t\t%.2f\t%.2f\n",horasCliente3,importe3);
    printf("total\t%.2f\t%.2f\n",sumaHrs,sumaImporte);
}

float calculaImporte(float horas){//ejem horas = 5.5
    float cobro;
    float horasExtra = horas - 3;//5.5 - 3 = 2.5
    
    int horaExtraInt = horasExtra;// = 2
    float horaExtraFrac = horasExtra - horaExtraInt;//2.5 - 2 = 0.5


    if(horas<=3){
        cobro = cuotaMin;
        return cobro;
    }else if(horas == 24){
        cobro = cuotaMax;
        return cobro;
    }else if(horas>3){
        if(horaExtraFrac>0){
            cobro = 2.0 + (horaExtraInt * adicional) + adicional;
        }else{
            cobro = 2.0 + (horaExtraInt * adicional);
        }
        return cobro;
    }
    
}