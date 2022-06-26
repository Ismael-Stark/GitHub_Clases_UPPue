library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

Entity display is port(
SW: in std_logic_vector(4 downto 0);
f: out std_logic_vector(6 downto 0));
end display;


Architecture segmentos of display is
begin
	
	with SW select
	f <= 	"1111110" WHEN "10000",
			"0110000" WHEN "10001",
			"1101101" WHEN "10010",
			"1111001" WHEN "10011",
			"0110011" WHEN "10100",
			"1011011" WHEN "10101",
			"1011111" WHEN "10110",
			"1110000" WHEN "10111",
			"1111111" WHEN "11000",
			"1110011" WHEN "11001",
			"0000000" WHEN OTHERS;
			--"1001111" WHEN OTHERS;

	
end segmentos;