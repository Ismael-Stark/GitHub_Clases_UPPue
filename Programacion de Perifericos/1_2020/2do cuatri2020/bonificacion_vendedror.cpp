#include "stdio.h"
//bonificacion
int main(){
	float monto=0, bonificacion=0;
	while(1){
		printf("\n\ncalcula la bonificacion a un vendedor segun el monto vendido");
		printf("\ndame el monto vendido:");
		scanf("%f",&monto);			//pido el monto		
		if (monto >0 && monto <1000){
			bonificacion=0;
			printf("\nla bonificacion por el monto vendido es: %.3f $",bonificacion);			
		}else if (monto >=1000 && monto <5000){
			//bonificacion=monto*.03;
			//printf("\nla bonificacion por el monto vendido es: %.3f $",bonificacion);
			printf("\nla bonificacion por el monto vendido es: %.3f $",(monto*0.03));		
		}else if (monto >=5000 && monto <20000){
			//bonificacion=monto*.05;
			//printf("\nla bonificacion por el monto vendido es: %.3f $",bonificacion);
			printf("\nla bonificacion por el monto vendido es: %.3f $",(monto*0.05));			
		}else if (monto >=20000){
			//bonificacion=monto*.08;
			//printf("\nla bonificacion por el monto vendido es: %.3f $",bonificacion);
			printf("\nla bonificacion por el monto vendido es: %.3f $",(monto*0.08));
		}
	}
}
