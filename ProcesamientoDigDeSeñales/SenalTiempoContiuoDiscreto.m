clear;
close all;
clc;

%señal tiempo continuo
t = 0:0.01:30;
x = exp(-0.15*t).*sin(2*t);  %  .* multiplicacion punto a punto
figure(1);
plot(t,x);
title("señal tiempo continuo"); xlabel("tiempo(s)"); ylabel("X(t)");


%señal tiempo discreto
n = -3:4;
vector = [1,-1,0,2,3,-1,2,1];
figure(2);
stem(n,vector);
title("señal tiempo discreto"); xlabel("n"); ylabel("X(n)");