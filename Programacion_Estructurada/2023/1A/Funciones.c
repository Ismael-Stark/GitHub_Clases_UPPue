#include <stdio.h>
//Funciones(metodos)
/*sirven para hacer que un codigo que sea reptitivo.
no se tenga que escribir siempre que se necesite*/

//como se declaran las funciones?

// Tipo_de_funcion Nombre_Funcion (Argumentos);

/*tipos de funcion: practicamente los mismos que se
usan para declarar variables
ej: int, char, short, float, double.....void.....
void: significa que no regresa nada

los argumentos son para recibir parametros para que la funcion
los procese*/

void imprimeMensaje(void);///esto es un prototipo de funcion 
//solamente sirve para declarar el nombre y tipo de funcion
//no se escribe el codigo completo, y se declara siempre antes
//de la funcion principal main()
//el codigo comleto se escribe despues del main()

void cuadrado_numero(int numero);
//funcion que recibe un numero y no regresa el resultado

float suma_numeros(float numero1, float numero2);
//funcion que recibe dos numero y regresa el resultado


int main(){
    float rSuma;
    printf("ejemplo funciones\nMensaje dentro del Main()\n\n");
    //se manda a llamar una funcion, escribiendo el nombre de la funcion
    //enviando parametros si es que los requiere;
    imprimeMensaje();

    cuadrado_numero(2);
    rSuma = suma_numeros(4.5 , 6.9);
    printf("el resultado de la suma es: %.2f",rSuma);

}///fin MAIN


void imprimeMensaje(void){
    printf("Hola mundo desde una funcion\n\n");
}

void cuadrado_numero(int numero){
    int cuadrado = numero * numero;
    printf("el cuadrado del numero %i es: %i\n\n",numero,cuadrado);
    imprimeMensaje();
}

float suma_numeros(float numero1, float numero2){
    float suma = numero1 + numero2;
    imprimeMensaje();
    return suma;
    
}