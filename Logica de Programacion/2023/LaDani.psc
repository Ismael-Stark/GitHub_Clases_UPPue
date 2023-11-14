Algoritmo LaDani
	Para i<-1 Hasta 25 Con Paso 1 Hacer
		
		si (i==6 o i==11 o i==16 o i ==21) Entonces
			Imprimir "" 
		FinSi
		
		si ( i<=5 o i >= 21 ) Entonces
			Imprimir "*" Sin Saltar
		FinSi
		
		si (i==6 o i==10 o i==11 o i==15 o i==16 o i==20) Entonces
			Imprimir "*" Sin Saltar			
		FinSi		
		si ( (i>6 y i<10) o (i>11 y i<15)  o (i>16 y i<20) ) Entonces
			Imprimir " " Sin Saltar
		FinSi
	Fin Para
	
	Imprimir " "
FinAlgoritmo
