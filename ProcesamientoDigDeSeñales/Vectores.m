clear;
close all;
clc;

v = [1 4 3 5 7 2 6 8 9,12,34,87];
length(v)
v(3) = 122;
v(20) = 34;
%disp(v)
suma = 0;

for i=1: length(v)
    suma = suma+v(i);
end
prom = suma / length(v);
disp("el promedio es:");
disp(prom);

%v1 = randi(40,1,10);%maximo,filas,columnas
v1 = randi([-10 10],1,10) %Rango,filas,columnas

for i=1: length(v1)%converir de vector fila a columna
   %v2(fila,columna)
    v2(i,1)= v1(i);
end
disp(v2);

%convertir vector a matriz
M = zeros(5,4);%creo una matriz de ceros de tamaño 5x4
[f,c] = size(M);%obtenemos el tamaño de la fila y la comna de la matriz M
contador = 1;
for i1=1:f
    for j1=1:c
        M(i1,j1) = v(contador);
        contador = contador + 1;
    end
end
disp(M);





