LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
USE ieee.std_logic_arith.ALL;
USE ieee.std_logic_unsigned.ALL;

ENTITY mux4a1_FLujoDeDAtos IS
	GENERIC(
		ancho: integer := 4 --bits de cada dato
	);
	PORT(
		en0: IN std_logic_vector(ancho-1 DOWNTO 0);
		en1,en2,en3: IN std_logic_vector(ancho-1 DOWNTO 0);
		sel: IN std_logic_vector(1 DOWNTO 0);
		sal: OUT std_logic_vector(ancho-1 DOWNTO 0);
		G: INOUT std_logic_vector(ancho-1 DOWNTO 0)
	);
END mux4a1_FLujoDeDAtos;

--estilo flujo de datos

ARCHITECTURE flujo_de_datos OF mux4a1_FLujoDeDAtos IS
BEGIN
	with sel SELECT
		sal <= en0 when "00",
				 en1 when "01",
				 en2 when "10",
				 en3 when "11",
				 "0000" when OTHERS;
end flujo_de_datos;