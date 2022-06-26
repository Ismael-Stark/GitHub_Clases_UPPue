%Escribir un programa que muestre la sumatoria de todos los múltiplos de 3 
%encontrados entre el 0 y un numero (rango)
clear;
close all;
clc;

suma = 0;
rango = input("ingresa el rango: ");


for i=0: rango %incrementa de 1 en 1 la variable i
    if(mod(i,3)==0)
        suma = suma + i;
    end
end

disp("la suma de los multiplos de 3 es: ");
disp(suma);

%PARA C----incio:fin: incremento/decremento
%inicio: incrimento: fin
for j=0:2:100
    disp(j);
end

for j=10:-1:0
    %disp(j);
end



