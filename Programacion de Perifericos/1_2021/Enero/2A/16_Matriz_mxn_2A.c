int main(){
	int i,j, m,n , contador = 1;
	
	printf("m: ");
	scanf("%d",&m);
	printf("n: ");
	scanf("%d",&n);
	printf("matriz de %d,%d\n",m,n);
	
	int A[m][n];
	
	for ( i = 0; i < m; i++ ) { //filas
		for ( j = 0; j< n; j++ ) { //columnas
			printf("Dame un numero: ");
			scanf("%d",&contador);
			A[ i ][j] = contador;
		}
	}
	
	printf("\n");
	
	for ( i = 0; i < m; i++ ) { //filas
		for ( j = 0; j < n; j++ ) { 
			printf("\t%i",A[ i ][j] );
		}
		printf("\n");
	}
}