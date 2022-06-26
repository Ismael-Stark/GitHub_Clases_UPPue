library ieee;
USE IEEE.STD_LOGIC_1164.ALL;

--declara entradas/salidas, entydad
entity main is port(
btn: in bit;
ldrojo: out bit;
led1: out bit
-- logic_vector(0 upto 10)
-- logic_vector(10 downto 0)
-- buffer // es para declara una salida que se puede retroalimentar ella misma (contador = contador +1)
);
end main;

--la estructura del programa

architecture ejemplo of main is
--señales u otros objetos
begin
	led1 <= btn;
	
end ejemplo;