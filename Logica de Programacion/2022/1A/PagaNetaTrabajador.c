 #include <stdio.h>
 
 
 int main(){
 	const float TASA = 0.16; //16% DE IMPUESTOS
 	float pagoHora, pagaNeta, pagaBruta, impuestos;
 	unsigned int hrsTrabajadas;
 	
 	printf("Programa que calcula la paga neta a un trabajador\n");
 	printf("Dame las horas tabajadas\n");
 	scanf("%u",&hrsTrabajadas);//el scanf debe de llevar el amperson(&) antes de la varibale
	 //sino se rompe el programa y termina abruptamente
	 
 	printf("Dame el pago por hora\n");
 	scanf("%f",&pagoHora);
 	
 	pagaBruta = hrsTrabajadas*pagoHora;
 	impuestos = pagaBruta*TASA;
 	pagaNeta = pagaBruta - impuestos;
 	
 	printf("el pago al trabajador por las %u Hrs trabajadas es: $%.3f pesos\n",hrsTrabajadas,pagaNeta);
 }