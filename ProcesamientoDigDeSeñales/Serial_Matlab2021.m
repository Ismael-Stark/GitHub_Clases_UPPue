clear
close all;
clc;

SerialP = serialport("COM8",9600,"Timeout",5);


for(i=0:20)
    write(SerialP,'a',"uint8");
    pause(0.1);
end
