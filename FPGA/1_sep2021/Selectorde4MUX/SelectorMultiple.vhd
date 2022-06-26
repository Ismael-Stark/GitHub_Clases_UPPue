LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
USE ieee.std_logic_arith.ALL;
USE ieee.std_logic_unsigned.ALL;

ENTITY SelectorMultiple IS
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
END SelectorMultiple;

--Estilo estructural
architecture estructural of SelectorMultiple is
component mux4a1
port(
d0,d1,d2,d3: in std_logic;
sel: in std_logic_vector(1 downto 0);
sal: out std_logic );
end component;
begin
Lazo: for i in 0 to ancho-1 generate 
Comp: mux4a1 port map (en0(i),en1(i),en2(i),en3(i),sel,sal(i));
end generate;
end estructural;


