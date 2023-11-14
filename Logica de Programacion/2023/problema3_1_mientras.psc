Algoritmo problema3_1
	cont = 1
	final = 10
	sumaimpar =0
	promepar=0
	sumapar=0
	cuentapar=0
	
	Mientras (cont <= final) hacer
		leer num
		si num <>0 Entonces
			
			Si (-1)^num > 0 Entonces
				sumapar = sumapar + num
				cuentapar= cuentapar+1
			SiNo
				sumaimpar = sumaimpar+num
			Fin Si
		FinSi
		
		cont=cont+1
	FinMientras
	promepar = sumapar/cuentapar
	Imprimir "promedio de numeros pares: ",promepar
	Imprimir "suma de impares ",sumaimpar
FinAlgoritmo
