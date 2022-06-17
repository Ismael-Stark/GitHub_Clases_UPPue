#include "stdio.h"


struct mes{
	float enero, febrero, marzo, abril, mayo, junio, julio, agosto, septiembre,octubre,noviembre, diciembre;
};


struct producto{
	struct mes entregado;
	struct mes producido;
	struct mes importe;//cuanto dinero gane por mes
	float total;//total de kg producidos en el año
	float dineroProducido;//total de dinero producido en el año

};


int main(){
	struct producto tomates,lechuga, acelgas,zanahorias,chicharos;
	float  produtoMasDineroProdujoEn365Dias, productoMasKgRindioEn365Dias; 
	struct mes P_tomates,P_lechuga, P_acelgas, P_zanahorias, P_chicharos;
	
	
	printf("dame el precio de los tomates por mes (escribe una solalinea y separa por espacios)");
	scanf("%f %f %f %f %f %f %f %f %f %f %f %f",&P_tomates.enero, &P_tomates.febrero,&P_tomates.marzo,&P_tomates.abril,&P_tomates.mayo
	,&P_tomates.junio,&P_tomates.julio,&P_tomates.agosto,&P_tomates.septiembre,&P_tomates.octubre,&P_tomates.noviembre
	,&P_tomates.diciembre);
	
	tomates.producido.enero = 250;
	tomates.entregado.enero = 240;
	tomates.importe.enero = tomates.entregado.enero * P_tomates.enero;
	//tomates.total = tomates.importe.enero +tomates.importe.febrero..abril.....
	
	printf("lechuga producida enero %.2f",lechuga.producido.enero);
	
}