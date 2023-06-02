#include <stdio.h>

void llamadaPorValor(int x);
void llamadaPorReferencia (int *x);


int main(){
	int x = 8;
    printf("la variable x en Main vale %i\n",x);
    llamadaPorValor(x);
    printf("la variable x en Main despues de llamadaPorValor vale %i\n",x);
    llamadaPorReferencia(&x);
    printf("la variable x en Main despues de llamadaPorReferencia vale %i\n",x);

}


void llamadaPorValor(int x){
    x = x + 5;
    printf("la variable x en llamadaPorValor vale %i\n",x);
}
void llamadaPorReferencia (int *x){
    *x = *x + 5;
    printf("la variable x en llamadaPorReferencia vale %i\n",*x);
}

