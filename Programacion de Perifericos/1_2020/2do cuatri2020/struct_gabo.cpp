#include "stdio.h"

void Avance_N(void);
void Espera_N(void);
void Avance_E(void);
void Espera_E(void);

struct state{
   void(*funcionPt)(void);   //Puntero de funcion
   unsigned int time;
   unsigned char  next[4];
};

typedef struct state Styp;

#define goN    0
#define waitN  1
#define goE    2
#define waitE  3

Styp FSM[4]={
            {&Avance_N,3000,{goN,waitN,goN,waitN}},
            {&Espera_N,0,{goE,goE,goE,goE}},
            {&Avance_E,3000,{goE,goE,waitE,waitE}},
            {&Espera_E,0,{goN,goN,goN,goN}}
            };

char actual, inpt;
            
int main(){
	(FSM[actual].funcionPt)();
	actual=1;
	(FSM[actual].funcionPt)();
}


void Avance_N(void){
	printf("Soy la funciona Avance_N");
}

void Espera_N(void){
	printf("Soy la funciona Espera_N");
}

void Avance_E(void){
}

void Espera_E(void){
}
