//Un ejemplo práctico del caso anterior es la función qsort().
//Esta función propia de C permite ordenar cualquier vector utilizando el algoritmo Quick Sort.
//La signatura de la función qsort() en C es:
//void qsort (void* array, size_t nelementos, size_t bytes, int (*comparador)(const void*,const void*));
//
//Dónde void* array es un puntero al vector que se quiere ordenar,
//nelementos es el número de elementos dentro del vector y bytes es el tamaño que ocupan.
//
//El parámetro más importante es el último: el puntero a la función comparador.
//Para ordenar un vector hace falta un criterio para comparar dos elementos y decidir
//cuál de ellos va primero. Por ejemplo, en el caso de que los elementos del vector sean
//enteros, basta con comparar sus valores. Pero ordenar alfabéticamente un vector de Strings
//(u otro tipo de estructura más compleja) puede requerir de funciones más elaboradas.

//La función qsort() de C está pensada para poder ordenar un vector de cualquier tipo,
//y para ello el programador debe pasarle como parámetro la función para comparar elementos.
//Puedes programar esta función comparadora a tu gusto, pero debe recibir como argumentos
//dos punteros void (correspondientes a dos elementos del vector) y devolver 1 o -1
//según cuál de los dos elementos vaya primero.
#include <stdio.h>
#include <stdlib.h>
 
struct Envase
{
    int id; //Identificador
    int volumen; //Volumen en mililitros
    float precio; //Precio en euros
};
 
/* Metodo de ordenacion I: ordenar por identificador*/
int ordenarID (const void * a, const void * b)
{
    /*Se hace un casting para convertir los punteros void a punteros de Envases
      y se guarda su identificador*/
    int id_a = ((struct Envase*)a)->id;
    int id_b = ((struct Envase*)b)->id;
 
    //Se comparan los dos identificadores
    if(id_a > id_b)
        return 1;
 
    else
        return -1;
}
 
 
/* Metodo de ordenacion II: ordenar por precio/unidad de volumen */
int ordenar_precio_volumen (const void * a, const void * b)
{
    /*Se hace un casting para convertir los punteros void a punteros de Envases
      y se guarda su volumen y precio*/
    float precio_a = ((struct Envase*)a)->precio;
    int volumen_a = ((struct Envase*)a)->volumen;
    float precio_b = ((struct Envase*)b)->precio;
    int volumen_b = ((struct Envase*)b)->volumen;
 
    //Se calcula precio/volumen
    float val_a = precio_a/volumen_a;
    float val_b = precio_b/volumen_b;
 
    //Se comparan los dos valores
    if(val_a > val_b)
        return 1;
 
    else
        return -1;
}
 
 
int main()
{
    int dimension = 4; //Dimension del vector
 
    struct Envase array[4]; //Vector de envases
    array[0].id = 5;
    array[0].volumen = 600;
    array[0].precio = 12;
 
    array[1].id = 6;
    array[1].volumen = 550;
    array[1].precio = 7.99;
 
    array[2].id = 1;
    array[2].volumen = 400;
    array[2].precio = 25;
 
    array[3].id = 3;
    array[3].volumen = 600;
    array[3].precio = 9.5;
 
 
     
    //Ordenar el vector por ID
    qsort((void*)array, dimension, sizeof(struct Envase), ordenarID);
 
 
    //Mostrar el vector por ID. El output es {1 3 5 6}
    printf("\nOrdenado por ID: {");
    for(int i = 0; i < dimension; i++)
    {
        printf("%d ", array[i].id);
    }
    printf("}\n");
 
 
    //Ordenar el vector por precio/volumen
    qsort((void*)array, dimension, sizeof(struct Envase), ordenar_precio_volumen);
 
 
    //Mostrar el vector por ID. El output ahora es {6 3 5 1}
    printf("\nOrdenado por precio/vol: {");
    for(int i = 0; i < dimension; i++)
    {
        printf("%d ", array[i].id);
    }
    printf("}\n\n");
 
     
    return 0;
}
