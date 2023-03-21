#include <stdio.h>
//Funciones(metodos)
/*sirven para hacer que un codigo que se reptitivo.
no se tenga que escribir siempre que se necesite*/

//como se declaran las funciones?

// Tipo_de_funcion Nombre_Funcion (Argumentos);

/*tipos de funcion: practicamente los mismos que se
usan para declarar variables
ej: int, char, short, float, double.....void.....
void: significa que no regresa nada

los argumentos son para recibir parametros para que la funcion
los procese*/

void imprimeMensaje();///esto es un prototipo de funcion, solo 
//sirve para declara el nombre y tipo de funcion
//no se escribe el codigo completo, y se declara siempre antes
//de la funcion principal main()

void sumaDosNumeros(float x, float y){//si no se declara como protipo
//la funcion se puede escribir completa antes de la funcion main()
//esta funcion recibe dos argumentos de tipo float
    float suma;
    suma = x + y;
    printf("\nla suma en funcion es: %f\n\n",suma);
}

float sumaDosNumerosRegresaResultado(float x, float y);//recibe dos
//numeros flotantes, y regresa un resultado de tipo float


int main(){
    float resultado;

    printf("\n\n\nHola mundo\nSoy la funcion principal: main()\n");
    //para mandar a llamar la funcion se debe escribir
    //su nombre(con argumentos) y ya
    imprimeMensaje();
    
    sumaDosNumeros(5 , 3); //llamando una funcion que recibe argumentos
    resultado = sumaDosNumerosRegresaResultado(4, 8);
    printf("\nla suma que regresa la funcion es: %f\n\n",resultado);

    printf("\nla suma que regresa la funcion es: %f\n\n",sumaDosNumerosRegresaResultado(5, 5));


}

//las funciones una vez declaradas como protipos de funciones
//el codigo completo se escribe despues de la funcion main()

void imprimeMensaje(){
    printf("\n\n\nHola mundo\nSoy una funcion que imprime\nun mensaje\n\n\n");

}

float sumaDosNumerosRegresaResultado(float x, float y){
    int suma;
    suma = x + y;
    //return suma;//return sirve para regresar el resultado de la funcion
}