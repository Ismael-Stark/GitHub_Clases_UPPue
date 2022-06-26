%un profesor acordó con sus estudiantes las siguientes reglas para la
%calficación final de una materia:
% si la nota es mayor de 3.5 se le suma 0.4. es decir, si la nota obtenida
% es de 3.6 el profesor suma 0,4 luego su nota final será de 4.0 (si la 
%nota calculada fuese superior a 5, la nota final se deja en 5.0),

% si la  nota es menor de 2.5 se le resta 0.3 (si saca 2.4 la nota final será de
% 2.1), si la nota final fuese menor a 0 (cero) la nota final se deja en 0
% (cero). realizar el ejercicio dada las 3 notas de un estudiante, calcular
% la nota final   if elseif else  end

clear;
close all;
clc;


n1 = input("ingresa la primera nota: ");
n2 = input("ingresa la segunda nota: ");
n3 = input("ingresa la tercera nota: ");

promedio = (n1+n2+n3)/3;
disp("su promedio es: ");
disp(promedio);

if (promedio>3.5 && promedio <= 5)
    calFinal = promedio+0.4;
    if calFinal >5
        calFinal = 5;
    end
    disp(calFinal);

elseif(promedio<2.5 && promedio >0)
    calFinal = promedio-0.3;
    if calFinal <0
        calFinal = 0;
    end
    disp(calFinal);

elseif (promedio >2.5 && promedio < 3.5)
    calFinal = promedio;
    disp(calFinal);
    
else
    disp("las notas ingresadas son erroneas");
end



