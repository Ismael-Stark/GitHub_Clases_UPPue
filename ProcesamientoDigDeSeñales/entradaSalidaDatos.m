%calcular la altura de un cono conociendo el volumen y el radio de su base
%V=(1/3)*pi*(r^2)*h;
%h = v/((1/3)*pi*(r^2));
clear;
close all;
clc;

%forma1
%v = input("ingresa el volumen del cono: ");
%r = input("ingresa el radio del cono: ");

%forma 2
a = "ingresa el volumen del cono: ";
v = input(a);
b = "ingresa el radio del cono: ";
r = input(b);


h = v/((1/3)*pi*(r^2));  %si se le quita el ; se muestra el resultado
                        % de la operacion

disp("la altura del cono es: ");
disp(h);

