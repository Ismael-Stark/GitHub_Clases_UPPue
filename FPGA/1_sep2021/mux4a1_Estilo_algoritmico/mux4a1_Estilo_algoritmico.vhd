LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
USE ieee.std_logic_arith.ALL;
USE ieee.std_logic_unsigned.ALL;

ENTITY mux4a1_Estilo_algoritmico IS
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
END mux4a1_Estilo_algoritmico;

--estilo Estilo_algoritmico

ARCHITECTURE algoritmica OF mux4a1_Estilo_algoritmico IS
BEGIN
	uno: PROCESS (sel,en0,en1,en2,en3)
BEGIN
	CASE sel IS
		WHEN "00" => sal <= en0;
		WHEN "01" => sal <= en1;
		WHEN "10" => sal <= en2;
		WHEN "11" => sal <= en3;
		WHEN OTHERS => sal <= "0000";
		END CASE;
	END PROCESS;
END algoritmica;