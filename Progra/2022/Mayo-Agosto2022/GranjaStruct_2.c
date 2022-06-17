#include "stdio.h"



struct meses{
	float mes[12];
};

struct producto{
	struct meses entregado;
	struct meses producido;
	struct meses importe;//cuanto dinero gane por mes
	float total;//total de kg producidos en el año
	float dineroProducido;//total de dinero producido en el año

};


int main(){
	struct producto tomates,lechuga, acelgas,zanahorias,chicharos;
	float  produtoMasDineroProdujoEn365Dias, productoMasKgRindioEn365Dias; 
	struct meses P_tomates,P_lechuga, P_acelgas, P_zanahorias, P_chicharos;
	
	
	printf("dame el precio de los tomates por mes (escribe una solalinea y separa por espacios)");
	scanf("%f %f %f %f %f %f %f %f %f %f %f %f",&P_tomates.mes[0], &P_tomates.mes[1],&P_tomates.mes[2],&P_tomates.mes[3],&P_tomates.mes[4]
	,&P_tomates.mes[5],&P_tomates.mes[6],&P_tomates.mes[7],&P_tomates.mes[8],&P_tomates.mes[9],&P_tomates.mes[10]
	,&P_tomates.mes[11]);
	
	tomates.producido.mes[0]= 250;
	tomates.entregado.mes[0] = 240;
	tomates.importe.mes[0] = tomates.entregado.mes[0] * P_tomates.mes[0];
	//tomates.total = tomates.importe.enero +tomates.importe.febrero..abril.....
	
	printf("\ntomates producida enero %.2f kg\n",tomates.producido.mes[0]);
	printf("tomates entregada enero %.2f kg\n",tomates.entregado.mes[0]);
	printf("tomates importe ganado enero $%.2f ",tomates.importe.mes[0]);
	for(int i=0;i<=11;i++){
		tomates.total += tomates.entregado.mes[i];
	}
	
}