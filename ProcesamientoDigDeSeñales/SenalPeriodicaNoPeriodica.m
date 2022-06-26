clear;
close all;
clc;

%señal periodica
Wo = 10*pi;
t = 0:0.001:1;
y = sawtooth(Wo*t,0.5);
figure(1);
plot(t,y);
title("señal periodica"); xlabel("tiempo(s)"); ylabel("Y(t)");
grid on;


%señal no periodica

A=10;
B=5;
wo1 = (1/6)*pi;
a = 0.1;
n = -30:30;
x = A*sin(wo1*n);
x2 = B*exp(-a*n);
z = x.*x2;
figure(2);
stem(n,z);
%plot(n,z);
title("señal no periodica"); xlabel("tiempo(s)"); ylabel("X(n)");



