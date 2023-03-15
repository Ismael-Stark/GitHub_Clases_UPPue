#include <stdio.h>
#include <math.h>







int main(){
    float a,b,c,d,e;

    printf("se sabe que un numero imaginario tiene la forma a + bi,\ndonde a y b son numeros reales\n");
    printf("y j/i denota al numero imaginario:\n\n");
    printf("dame en numero a : ");
    scanf("%f",&a);
    printf("dame en numero b : ");
    scanf("%f",&b);

    if (b >= 0){
        printf("0.- el numero imaginario que introduciste es: %.2f + %.2fj\n\n",a,b);
    }else{
        printf("0.- el numero imaginario que introduciste es: %.2f %.2fj\n\n",a,b);
    }

    printf("1.- la representacion polar del numero es: %f con unangulo de %f\n\n",(sqrt(a*a + b*b)), (atan(b/a) * 57.2957795));

    if( (a == 0) && (b != 0)) {
        printf("2.- numero imaginario es puro\n\n");
    }else{
        printf("2.- numero imaginario No es puro\n\n");
    }
    if (b >= 0){
        printf("3.- el conjugado del numero es: %.2f - %.2fj\n\n",a,b);
    }else{
        printf("3.- el conjugado del numero es: %.2f + %.2fj\n\n",a,b*(-1));
    }

}