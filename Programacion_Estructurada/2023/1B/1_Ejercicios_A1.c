#include <stdio.h>
#include <math.h>

int main(){
    float a,b,c, discriminante;
    float x1,x2;

    printf("\n\n\ndame a,b y c de la formula cuadratica\n");
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);

    discriminante = (b*b) - (4*a*c);

    if (discriminante >=0) {
        x1 = (-b + sqrt(discriminante) )/(2*a);
        x2 = (-b - sqrt(discriminante) )/(2*a);
        printf("\n\nlos resultados son: x1 = %f\tx2 = %f\n\n\n\n",x1,x2);
    }else{
        printf("\n\nNo existen raices negativas (%f)\n\n\n\n",discriminante);
    }

}