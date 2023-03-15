#include <stdio.h>

//Tipo_deFuncion  Nombre(argumentos); prototipo de funcion

//un programa que haga el cuadrado y cubo de un numero entero
//usando funciones.
//una funcion debe regresar el valor y la otra no.

void cudrado(int numero);// esto es el protipo de la funcion
//esta funcion no regresa ningun resultado

int cubo(int numero2);// esta funcion regresa un resultado
//al programa prncipal (main)


int main(){
    int numero,resultadoCubo;
    printf("programa que calcula el cuadrado y cubo de un numero\n");
    printf("dame el numero: \n");
    scanf("%i",&numero);
    //se llama a la funcion que calcula el cuadrado del numero
    //esta funcion no regresa ningun valor(resultado)
    cudrado(numero);

    //forma1
    resultadoCubo = cubo(numero);
    printf("f1:el cubo del numero es: %i\n",resultadoCubo);

    //forma 2
    //printf("f2:el cubo del numero es: %i\n", cubo(numero));

    if(resultadoCubo > 10){
        printf("el cubo es mayor que 10");
    }else{
        printf("el cubo es menor que 10");
    }

}

/// los codigos de las fuciones se escribem
/// despues del main()

void cudrado(int numero){
    //int Rcuadrado = numero * numero;//forma 1
    //printf("el cuadrado del numero es: %i\n", Rcuadrado);//forma 1

    //forma 2
    printf("F2: el cuadrado del numero es: %i\n",  numero * numero);

}

int cubo(int numero2){
    //forma 1
    //int Rcubo = numero2 * numero2 * numero2;
    //return Rcubo;

    //forma2
    return (numero2 * numero2 * numero2);

}