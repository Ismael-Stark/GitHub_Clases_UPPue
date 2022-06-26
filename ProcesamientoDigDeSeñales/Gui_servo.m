%% Servo Serrial
function varargout=ServoSerial(varargin)
clear; close all; clc;
                                                       %  [left bottom width(c) height(f)]
fig(1)=figure('name','Multi Servo ','menubar','none','position',[0 0 400 200],'color',[0.4 0.8 0.5]);
movegui(fig(1),'center');                               %%  [left(c) bottom(f)posicion, width(c) height(f)tamaño]
uicontrol('parent',fig(1),'style','pushbutton','string','Arriba','position',[0 150 90 50],'Callback',@arriba,'FontSize',12);
uicontrol('parent',fig(1),'style','pushbutton','string','Abajo','position',[0 90 90 50],'Callback',@abajo,'FontSize',12);
uicontrol('parent',fig(1),'style','pushbutton','string','Derecha','position',[70 150 90 50],'Callback',@der,'FontSize',12);
uicontrol('parent',fig(1),'style','pushbutton','string','Izquierda','position',[70 90 90 50],'Callback',@izq,'FontSize',12);

uicontrol('parent',fig(1),'style','pushbutton','string','centro','position',[0 0 90 50],'Callback',@centro,'FontSize',12);


%% Funcion Arriba
function varargout=arriba(hObject,evendata)
    write(SerialP,'a',"uint8");
end
%% Funcion abajo
function varargout=abajo(hObject,evendata)
    write(SerialP,'d',"uint8");
end
%% Funcion izq
function varargout=izq(hObject,evendata)
write(SerialP,'j',"uint8");
end
%% Funcion der
function varargout=der(hObject,evendata)
write(SerialP,'l',"uint8");
end
%% Funcion centro
function varargout=centro(hObject,evendata)
write(SerialP,'k',"uint8");
end
%% Configura el Puerto Serial
SerialP = serialport("COM9",9600,"Timeout",5);




end