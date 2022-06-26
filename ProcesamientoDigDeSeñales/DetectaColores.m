clc;
close all;
control=1;
figure(1);%se crea la figura
h(1)=figure(1);%apuntador de la figura

info=imaqhwinfo('winvideo');%proporciona los datos de dispositivo de video
vid=videoinput('winvideo',1,'YUY2_640x480');%seleccion del dispositivo a utilizar


%vid=videoinput('winvideo',1,'YUY2_1280x800');%seleccion del dispositivo a utilizar
%vid=videoinput('winvideo',1,'YUY2_1280x1024');%seleccion del dispositivo a utilizar
x=preview(vid);%activa el dispositivo de video
pause(3)
figure(h(1))%figura a utilizar
%subplot(1,1,1);
h(2)=subplot(1,1,1);%posicion de muestra del grafico o imagen
img=get(x,'Cdata');%toma una imagen en un instante
image(img);%plotea la imagen en el axes adecuado
t=size(img);
%2 min para que me digan porque el 480x640 x3 => toribio

rojo=uint8(zeros(t));
verde=uint8(zeros(t));
azul=uint8(zeros(t));
rojo(:,:,1)=255;
verde(:,:,2)=255;
azul(:,:,3)=255;
s1=img-rojo-verde;
[C,I]=min(min(s1(:,:,3)'));%max(max(s1(:,:,3)));
[C2,I2]=min(min(s1(:,:,3)));%max(max(s1(:,:,3)'));
yj=I;
xj=I2;%*480/640;

while(control == 1)
   
    img=get(x,'Cdata');%toma una imagen en un instante
    image(img);%plotea la imagen en el axes adecuado
    y= img;
            
    rojo=y(:,:,1);
    verde=y(:,:,2);
    azul=y(:,:,3);

    solo_azul=(azul-rojo/2-verde/2) > 70;%intensidad de los pixeles
    solo_azul1=bwareaopen(solo_azul,30);%busca los agrupamientos de pixeles mayores al numero
    
    s  = regionprops(solo_azul1, {'centroid','area'});
    [~,indice]=max([s.Area]);
    figure(1)
    imagesc(y);
    hold on
    if ( indice >0)
        plot(s(indice).Centroid(1),s(indice).Centroid(2),'wp','MarkerSize',20,'MarkerFaceColor','b')
        X = s(indice).Centroid(1);
        Y = s(indice).Centroid(2);
        act_servo=1;

    end


    pause(0.5)
end
closepreview



