a=1
b=2
c=3
d=4

print(d,c,b,a)

#clase 8feb
dia = float( input("dame un numero del 1 al 7\n") )
if (dia == 1):
    print("lunes")
if (dia == 2):
    print("martes")
if (dia == 3):
    print("miercoles")
if (dia == 4):
    print("jueves")
if (dia == 5):
    print("viernes")
if (dia == 6):
    print("sabado")
if (dia == 7):
    print("domingo")
if (dia > 7 or dia <1):
    print("dia no existe")