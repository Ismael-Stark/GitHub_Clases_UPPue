Algoritmo sin_titulo
	Definir  mon Como Real
	Definir enganche, resta, mensualidades Como Real
	Mostrar "dame el precio del auto en pesos:"
	Leer mon
	enganche = (mon/100)*35
	resta = mon - enganche
	mensualidades = resta / 18
	Mostrar "vas a dar de enganche: $" enganche, " mxn"
	Mostrar "y vas a pagar 18 mensualidades de a: $" mensualidades, " mxn c/u"
	
FinAlgoritmo
