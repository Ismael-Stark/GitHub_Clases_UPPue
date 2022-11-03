Algoritmo sin_titulo
	Definir x1,x2,x3,y1,y2,y3 Como Real
	Definir  d1,d2,d3 , perimetro, area Como Real
	Mostrar "programa que calcula el perimetro de un trinangulo"
	Mostrar " dados los puntos x1,x2,x3,y1,y2,y3"
	Mostrar " dame las coordenadas (x1,y1) "
	Leer x1,y1
	Mostrar " dame las coordenadas  (x2,y2) "
	Leer x2,y2
	Mostrar " dame las coordenadas (x3,y3) "
	Leer x3,y3
	
	d1 = raiz( (x1-x2)^2 + (y1-y2)^2 ) 
	d2 = raiz( (x2-x3)^2 + (y2-y2)^2 ) 
	d3 = raiz( (x1-x3)^2 + (y1-y3)^2 ) 
	perimetro = d1+d2+d3
	Mostrar "el perimetro del triangulo es: ", perimetro
	
FinAlgoritmo
