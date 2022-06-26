library ieee;
use IEEE.STD_LOGIC_1164.ALL;
use ieee.std_logic_unsigned.all;
use ieee.std_logic_arith.all;

--declara entradas/salidas, entydad
entity main is port(
btn: in STD_LOGIC;
reset: in STD_LOGIC;
leds: buffer STD_LOGIC_vector (3 downto 0)

);
end main;

--la estructura del programa

architecture ejemplo of main is
--señales u otros objetos
begin 
	process(btn, reset)
begin
 --if pulsador'EVENT and pulsador = '1' then
	--if pulsador'EVENT and pulsador = '0' then
	if rising_edge(btn) then
	--if falling_edge(pulsador) then
		leds <= leds +1;
	end if;
end process;	
end ejemplo;