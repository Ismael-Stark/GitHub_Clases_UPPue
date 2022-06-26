LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
USE ieee.std_logic_arith.ALL;
USE ieee.std_logic_unsigned.ALL;

ENTITY mux4a1_unBit IS
	GENERIC(
		ancho: integer := 4 --bits de cada dato
	);
	PORT(
		entrada: IN std_logic_vector(ancho-1 DOWNTO 0);
		sel: IN std_logic_vector(1 DOWNTO 0);
		sal: OUT std_logic
	);
END mux4a1_unBit;

--estilo flujo de datos

ARCHITECTURE flujo_de_datos OF mux4a1_unBit IS
BEGIN
	with sel SELECT
		sal <= entrada(0) when "00",
				 entrada(1) when "01",
				 entrada(2) when "10",
				 entrada(3) when "11",
				 '0' when OTHERS;
end flujo_de_datos;