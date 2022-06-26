%matrices
clear;
close all;
clc;

matriz = [1,2,3;4,5,6;7,8,9];
%disp(matriz);



    %randi(40,2,3);%maximo,filas,columnas
M = randi(10,3);%(%maximo,x) x indica que va a crear una matriz cudrada de x filas y x columnas

[f,c] = size(M);
%transpuesta usando for
for i=1:f
    for j=1:c
        M2(j,i)= M(i,j);
    end
end
%disp(M2);

%transpuesta usando comandos de Matlab
%M3 = M.'; %FORMA 1
%M3 = transpose(M);%forma 2

%calcular suma de la diagonal principal
M4 = randi(5,5,5);
[m,n] = size(M4);
diagPrincipal = 0;
for i=1:m
    diagPrincipal = diagPrincipal + M4(i,i);
end
%disp(diagPrincipal);

%calcular suma de la diagonal secundaria
diagSecundaria = 0;
x=1;
for y=m:-1:1
    diagSecundaria = diagSecundaria + M4(x,y);
    x=x+1;
end
%disp(diagSecundaria);


%Convertir matriz a vector
t=1;
for i=1:m
    for j=1:n
        V(t) = M4(i,j);
        t=t+1;
    end
end
disp(V);

