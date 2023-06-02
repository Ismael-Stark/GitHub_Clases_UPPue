#include <stdio.h>

void llamadaPorValor(int x);
void llamadaPorReferencia (int *ptrX);


int main(){
	int x = 8;
    printf("la variable x en Main vale %i\t y su direccion de memoria es: 0x%p\n",x, &x);
    llamadaPorValor(x);
    printf("la variable x en Main despues de llamadaPorValor vale %i\n",x);
    llamadaPorReferencia(&x);
    printf("la variable x en Main despues de llamadaPorReferencia vale %i\n",x);

}


void llamadaPorValor(int x){
    x = x + 5;
    printf("la variable x en llamadaPorValor vale %i\n",x);
}
void llamadaPorReferencia (int *ptrX){
    *ptrX = *ptrX + 5;
    printf("la variable x en llamadaPorReferencia vale %i\n",*ptrX);
    printf("y la dir de memoria que guarda prtX es: %p \n",*ptrX);
}