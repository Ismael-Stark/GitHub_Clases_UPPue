 
 
struct miestructura{
	void (*ptrvoid) (int);
	int x;
	float y;
};
/*Comprobar si el numero es PAR*/
void funcion1(int a)
{
    if(a % 2 == 0)
        printf("El numero es par\n");
    else
        printf("El numero es impar\n");
}
 
 
/*Comprobar si el numero es POSITIVO/NEGATIVO*/
void funcion2(int a)
{
    if(a > 0)
        printf("El numero es positivo\n");
    else if(a < 0)
        printf("El numero es negativo\n");
    else
        printf("El numero es cero\n");
}
 
 
/*Comprobar si el numero es PRIMO*/
void funcion3(int a)
{
    if(a <= 1)
    {
        printf("El numero NO es primo\n");
        return;
    }
  
    for(int i = 2; i <= (a)/2; i++)
    {
        if ( a%i == 0 )
        {
            printf("El numero NO es primo\n");
            return;
        }
    }
    printf("El numero es primo\n");
}
 


