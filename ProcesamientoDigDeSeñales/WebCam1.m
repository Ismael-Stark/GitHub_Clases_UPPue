clear; clc; close all;

% Creamos un objeto para la webcam
cam = webcam();
videoFrame = snapshot(cam);
frameSize = size(videoFrame);

% Creamos un objeto para mostrar la imagen en un video
videoPlayer = vision.VideoPlayer('Position',[500 500 [frameSize(2),frameSize(1)]+30]);%toolbox vision

for i = 1:100
    videoFrame = snapshot(cam); % Toma las fotos
    step(videoPlayer,videoFrame); % Muestra el video
end

% Guarda la imagen en la ubicación especificada y con el nombre declarado
ent = input('Nombre de la imagen: ','s'); % El usuario escribe el nombre de la foto
mkdir('fotos'); % Crea la carpeta
imwrite(videoFrame,['fotos\',ent,'.jpg']); % Se guarda en la carpeta fotos con la extensión .jpg