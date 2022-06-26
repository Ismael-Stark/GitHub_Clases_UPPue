clear;
close all;
clc;
%señal par
wo = (1/6)*pi;
n = -10:10;
y = 2*cos(wo*n);
figure(1);
stem(n,y);title("señal par"); xlabel("n"); ylabel("Y[n]");
grid on;

%señal impar
t=-1:0.0001:1;
wo1= 2*pi;
phi=2*pi; %desfase
h = 5*sin(wo1*t+phi);
figure(2);
plot(t,h);title("señal impar"); xlabel("t"); ylabel("H(t)");
grid on;