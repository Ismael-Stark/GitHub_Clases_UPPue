#include <stdio.h>


int calculaentero(int a, int b);
int calculaResiduo(int a, int b);
void imprimeNumeroEspacios(int numero);

int main(){
    int a,b,c,r1,r2;

    printf("dame numero a,b y c\n");
    scanf("%d %d %d", &a,&b,&c);
    r1 = calculaentero(a,b);
    r2 = calculaResiduo(a,b);
    printf("el entero es: %i\n",r1);
    printf("el residuo es: %i\n",r2);
    imprimeNumeroEspacios(c);
}

int calculaentero(int a, int b){
    return (a / b);

}
int calculaResiduo(int a, int b){
    return (a % b);
}
void imprimeNumeroEspacios(int numero){
    int u,d,c,um;
    um = numero/1000;
    c = numero/10000;
    d = numero/100000;
    u = numero/1000000;
    
    printf("%d\t%d\t%d\t%d",um,c,d,u);

}