
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use ieee.std_logic_unsigned.all;
use ieee.std_logic_arith.all;


entity CondatorDescendente is port (
	pulsador, reset: in STD_LOGIC;
	salida: buffer STD_LOGIC_vector (3 downto 0)  );
end CondatorDescendente;



architecture Behavioral of CondatorDescendente is

begin 
	process(pulsador, reset)
begin
	--if pulsador'EVENT and pulsador = '1' then
	--if pulsador'EVENT and pulsador = '0' then
	if rising_edge(pulsador) then
	--if falling_edge(pulsador) then
		salida <= salida - 1;
		if salida = "0000" then
			salida <= "1111";
		end if;
	end if;
	
	if reset = '1' then
		salida <= "1111";
	end if;
	end process;
end Behavioral;