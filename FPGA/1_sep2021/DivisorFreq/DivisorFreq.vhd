library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use ieee.std_logic_unsigned.all;
use ieee.std_logic_arith.all;


entity DivisorFreq is port (

	clk, reset: in STD_LOGIC;
	salida: out STD_LOGIC_vector (1 downto 0)  );
end DivisorFreq;


architecture Behavioral of DivisorFreq is
	constant max: integer := 50000000;
	constant divisor: integer:= (max/1);
	constant mitad: integer:= (divisor/2);
	
	
	signal contador: integer range 0 to max;
begin 
	process(clk, reset)
begin
	--if pulsador'EVENT and pulsador = '1' then
	--if pulsador'EVENT and pulsador = '0' then
	if rising_edge(clk) then
	--if falling_edge(pulsador) then
		if (contador < divisor) then
			contador <= contador + 1;
			
		else
			contador <= 0;
			
		end if;
		
		if (contador < mitad) then
			salida <= "11";
		else
			salida <= "00";
		end if;
		
	end if;
	
	if reset = '1' then
		salida <= "00";
	end if;

end process;
end Behavioral;