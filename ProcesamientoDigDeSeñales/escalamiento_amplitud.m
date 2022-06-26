%operaciones sobre la variable dependiente
%escalamiento en amplitud
%tiempo continuo
clear
close all;
clc;

k = 5; %factor de escalamiento
fs = 5000;
f = 0.1;
t= 0:(1/fs):50;
x = sin(2*pi*f.*t);
x_escalada = k * sin(2*pi*f.*t);
figure(1);
%subplot(fila,columna,posicionImagen)
subplot(2,1,1), plot(t,x); title("señal original"); xlabel("t"); ylabel("Amplitud");
subplot(2,1,2), plot(t,x_escalada); title("señal escalonada"); xlabel("t"); ylabel("Amplitud");

%tiempo discreto
n =0:50;
x = sin(2*pi*f.*n);
x_escalada = k * sin(2*pi*f.*n);
figure(2);
%subplot(fila,columna,posicionImagen)
subplot(2,1,1), stem(n,x); title("señal original"); xlabel("t"); ylabel("Amplitud");
subplot(2,1,2), stem(n,x_escalada); title("señal escalonada"); xlabel("t"); ylabel("Amplitud");

