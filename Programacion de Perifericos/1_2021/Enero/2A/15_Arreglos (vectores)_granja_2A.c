#include <stdio.h>
#include <stdlib.h>

int main(){
	int TOM[12],  PTOM[12],  LEC[12],  PLEC[12],  ACE[12],  PACE[12],  ZAN[12],  PZAN[12],  CHI[12], PCHI[12];
	int tomatesProducidos[12] = {80,50,41,89,45,62,78,41,95,12,11,15};
	
	int PTOM_YEAR = 0;
	
	char txt[5];
	
	printf("introdice los kilos de tomate producidos por mes\n");
	
	for (int i = 0 ; i<12; i++){
		printf("Dame los kilos de tomate producidos en el mes %d: ", i+1);
		gets(txt);
		PTOM[i] = atoi(txt);
		
	}
	
	printf("\n\n");
	
	for (int i =0 ; i<12; i++){
		printf("Los kilos de tomate producidos en el mes %d, fueron: %d\n", i+1,PTOM[i]);
		
	}
	
	for (int i =0 ; i<12; i++){
		PTOM_YEAR += PTOM[i];
	}
	
		printf("Los kilos de tomate producidos EN TODO EL YEAR FUERON: %d\n", PTOM_YEAR);
	
	
	
	
	
	
}