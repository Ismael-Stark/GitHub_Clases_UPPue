library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
--esto es un comentario
Entity HolaMundo is port(
SW: in bit;
led: out bit);
end HolaMundo;


Architecture Orlando of HolaMundo is
--señales u otros objetos
begin
	led <= SW;
	
end Orlando;