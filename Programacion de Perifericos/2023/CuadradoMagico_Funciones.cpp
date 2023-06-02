#include <stdio.h>

	int numeros[4][4],sumaDiagonales[2] = {0,0};
	int sumaFilas[3] = {0,0,0};
	int sumaColumnas[3] = {0,0,0};
	int row = 3, col = 3;
	int leeNumero;

void lee_datos(void);
void muestra_cuadrado(void);
void suma_filas(void);
void suma_columnas(void);
void suma_diag_principal(void);
void suma_diag_invertida(void);


int main(){
	
    printf("Programa cuadrado magico\nDame 9 numeros que solo sean del 1 al 9\n");
    
    lee_datos();    
    muestra_cuadrado();    
    suma_filas();
		
	if( (sumaFilas[0] == sumaFilas[1]) && (sumaFilas[0]== sumaFilas[2]) ){
		suma_columnas();		
		
		if((sumaColumnas[0] == sumaColumnas[1]) && (sumaColumnas[0]== sumaColumnas[2])){
			//suma de Diagonales
			suma_diag_principal();			
			suma_diag_invertida();
			
			if (sumaDiagonales[1] == sumaDiagonales[0]){
				printf("\nFelicidades es un cuadrado magico");
			}else{
				printf("\nError la suma de Diagonales no coincide");
			}			
		}else{
			printf("\nError la suma de Columnas no coincide");
		}		
	}else{
		printf("\nError la suma de Filas no coincide");
	}
	
}


void lee_datos(void){
	for(int i=0;i<3;i++){//pido matriz
    	for(int j=0;j<3;j++){
    		do{		
	    		printf("Dame el numero [%i][%i]\n",i+1,j+1);
	    		scanf("%i",&leeNumero);
    		}while(leeNumero < 1 || leeNumero > 9);
    		numeros[i][j] = leeNumero;
    	}
	}
}

void muestra_cuadrado(void){
	for(int i=0;i<3;i++){//imprimo matriz
    	for(int j=0;j<3;j++){
    		printf("\t%i",numeros[i][j]);
    	}
    	printf("\n");
	}
}


void suma_filas(void){
	//sumaFilas[0] = numeros[0][0] + numeros[0][1] + numeros[0][2];
	//sumaFilas[0] = 0;
	//sumaFilas[1] = 0;
	//sumaFilas[2] = 0;
	/*for(int i=0;i<3;i++){
		sumaFilas[1] += numeros[1][i];
	}*/
	
	for(int i=0;i<3;i++){//suma filas
    	for(int j=0;j<3;j++){
    		sumaFilas[i] += numeros[i][j];
    	}
	}
	
	printf("\nsumaF1 %i\n",sumaFilas[0]);
	printf("sumaF2 %i\n",sumaFilas[1]);
	printf("sumaF2 %i\n",sumaFilas[2]);
}
void suma_columnas(void){
	//Sumar columnas
	for(int i=0;i<3;i++){//suma Columnas
	   	for(int j=0;j<3;j++){
	   		sumaColumnas[i] += numeros[j][i];
	   	}
	}
	printf("\nsumaC1 %i\n",sumaColumnas[0]);
	printf("sumaC2 %i\n",sumaColumnas[1]);
	printf("sumaC2 %i\n",sumaColumnas[2]);
}

void suma_diag_principal(void){
	for(int i=0;i<3;i++){//suma diagonal principal
	   	sumaDiagonales[0] += numeros[i][i];
	}
	printf("\nsumaDiagPrincipal %i\n",sumaDiagonales[0]);
			
			
}
void suma_diag_invertida(void){
	//suma diagonal invertida Forma 1, usando un for  y una var fuera del for
	/*int j = 2;
	for(int i=0;i<3;i++){//suma diagonal invertida  
	   	sumaDiagonales[1] += numeros[i][j--];
	   	//j--;
	}*/
			
	//suma diagonal invertida Forma 2, usando un for  y dos var dentro del for
	for(int i = 0, j = 2 ;i<3;i++, j--){//suma diagonal invertida  
	    	sumaDiagonales[1] += numeros[i][j];
	}
	printf("\nsumaDiagInverida %i\n",sumaDiagonales[1]);
}





