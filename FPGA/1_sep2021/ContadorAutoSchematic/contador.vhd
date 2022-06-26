library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use ieee.std_logic_unsigned.all;
use ieee.std_logic_arith.all;


entity contador is port (
	pulsador, reset: in STD_LOGIC;
	salida: buffer STD_LOGIC_vector (4 downto 0)  );
end contador;



architecture Behavioral of contador is

begin 
	process(pulsador, reset)
begin
	--if pulsador'EVENT and pulsador = '1' then
	--if pulsador'EVENT and pulsador = '0' then
	if rising_edge(pulsador) then
	--if falling_edge(pulsador) then
		salida <= salida + 1;
		if salida = "11111" then
			salida <= "00000";
		end if;
	end if;
	
	if reset = '1' then
		salida <= "00000";
	end if;
	end process;
end Behavioral;