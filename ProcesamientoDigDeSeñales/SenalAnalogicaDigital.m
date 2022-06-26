clear;
close all;
clc;

%señal analogica
fs=150;
t = 0:1/fs:1;
f=10;
y=sin(2*pi*f*t);
y(10)=y(10)-0.5;
y(30)=y(30)+0.5;
y(120)=y(120)+0.5;
figure(1);
plot(t,y);
title("señal analogica"); xlabel("tiempo(s)"); ylabel("Y(t)");




%señal Digital
t1=-6:0.01:6;
d = rectpuls((1/2)*t1,2);
figure(2);
plot(t1,d); axis([-5 5 -1 2]) %axis(xmin xmax ymin ymax)
title("señal digital"); xlabel("tiempo(s)"); ylabel("D(t)");



