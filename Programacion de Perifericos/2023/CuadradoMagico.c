#include <stdio.h>




int main(){
	int numeros[4][4],sumaFilas[3],sumaColumnas[3],sumaDiagonales[2];
	int leeNumero;
    printf("Programa cuadrado magico\nDame 9 numeros que solo sean del 1 al 9\n");
    
    
    for(int i=0;i<3;i++){//pido matriz
    	for(int j=0;j<3;j++){
    		do{		
	    		printf("Dame el numero [%i][%i]\n",i+1,j+1);
	    		scanf("%i",&leeNumero);
    		}while(leeNumero < 1 || leeNumero > 9);
    		
    		
    		numeros[i][j] = leeNumero;
    	}
	}
    
    for(int i=0;i<3;i++){//imprimo matriz
    	for(int j=0;j<3;j++){
    		printf("\t%i",numeros[i][j]);
    	}
    	printf("\n");
	}
	//sumaFilas[0] = numeros[0][0] + numeros[0][1] + numeros[0][2];
	
	sumaFilas[0] = 0;
	sumaFilas[1] = 0;
	sumaFilas[2] = 0;
	/*for(int i=0;i<3;i++){
		sumaFilas[1] += numeros[1][i];
	}*/
	
	for(int i=0;i<3;i++){//imprimo matriz
    	for(int j=0;j<3;j++){
    		sumaFilas[i] += numeros[i][j];
    	}
	}
	
	printf("suma1 %i\n",sumaFilas[0]);
	printf("suma2 %i\n",sumaFilas[1]);
	printf("suma2 %i\n",sumaFilas[2]);
}