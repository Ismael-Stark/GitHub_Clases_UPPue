clear
close all;
clc;

SerialP = serial('COM8', 'BaudRate',9600,'StopBits',1,'DataBits',8,'Parity','none', 'Timeout', 10);
%SerialP = serial('COM8');
%set(SerialP,'Baudrate',9600); % se configura la velocidad a 9600 Baudios
%set(SerialP,'StopBits',1); % se configura bit de parada a uno
%set(SerialP,'DataBits',8); % se configura que el dato es de 8 bits, debe estar entre 5 y 8
%set(SerialP,'Parity','none'); % se configura sin paridad

fopen(SerialP);

for(i=0:20)
    fprintf(SerialP,'d');
    pause(0.1);
end
fclose(SerialP);