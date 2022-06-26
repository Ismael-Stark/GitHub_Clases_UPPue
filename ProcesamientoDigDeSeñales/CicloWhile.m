%Realice un programa que permita hallar el N-esimo término de la serie de
%fibonacci f(0)=0 - f(1)=1 - f(2)=1 - f(3)=2 - f(4)=3 - f(5)=5 -f(6)=8 -
%f(7)=13. una variable entera <<term>> que representa el termino de la
%serie a hallar; mostrar el numero entero que representa el valor del
%termino    0,1,1,2,3,5,8,13

clear;
close all;
clc;
term = input("ingresa el tarmino a calcular de la serie: ");

actual = 0;
sigui=1;
cont=0;

while(cont < term)
    ant = actual;
    actual = sigui;
    sigui = ant + actual;
    cont = cont+1;
    %disp(actual);%aqui muestra la serie completa hasta el valor, pero no lo muestra 
                 %en una sola linea, resolver de tarea eso
                 %que imprima en una sola linea todos los valores
end

disp("la serie de fibonacci es: ");
disp(actual);