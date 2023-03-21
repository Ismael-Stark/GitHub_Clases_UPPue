

library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use ieee.std_logic_unsigned.all;
use ieee.std_logic_arith.all;

entity DivFreq_1Hz_1Khz_contador0a3 is
	Port ( clk : in  STD_LOGIC;
           reset : in  STD_LOGIC;
			  
			  salida1Hz: out   STD_LOGIC;
			  --salida1Khz: out   STD_LOGIC;
           salidacontador : buffer  STD_LOGIC_vector(1 downto 0) );
end DivFreq_1Hz_1Khz_contador0a3;

architecture Behavioral of DivFreq_1Hz_1Khz_contador0a3 is
	constant max: integer := 100000000;--frecuencia FPGA
	-------varibles para divisor 1Hz
	constant divisor: integer:= (max/1);--max/X  donde x es para seleccionar la freq deseada
	constant mitad: integer:= (divisor/2);
	signal contador: integer range 0 to max;
	
	-------varibles para divisor 1Khz
	constant divisor2: integer:= (max/1000);--max/X  donde x es para seleccionar la freq deseada
	constant mitad2: integer:= (divisor2/1);
	signal contador2: integer range 0 to max;
	signal salidaFreq: std_logic;--para salida contador

begin
	process(clk, reset)-----------comienza mi div de 1Hz
begin

	if rising_edge(clk) then
		
		if (contador < divisor)then
			contador <= contador +1;
		else
			contador <= 0;
		end if;
		
		if (contador < mitad)then
			salida1Hz <= '1';
		else
			salida1Hz <= '0';
		end if;
		
	end if;

	if reset = '1' then
		salida1Hz <= '0';
	end if;
	
end process;---termina mi divisor de frecuencia

	process(clk, reset) ---comienza div 1Khz
begin

	if rising_edge(clk) then
		
		if (contador2 < divisor2)then
			contador2 <= contador2 +1;
		else
			contador2 <= 0;
		end if;
		
		if (contador2 < mitad2)then
			--salida1Khz <= '1';
			salidaFreq <= '1';
		else
			--salida1Khz <= '0';
			salidaFreq <= '0';
		end if;
		
	end if;

	if reset = '1' then
		--salida1Khz <= '0';
		salidaFreq <= '0';
	end if;
	
end process;---termina mi divisor de frecuencia

--------------comienza mi contador
	process(salidaFreq,reset)
begin
	if salidaFreq'EVENT and salidaFreq = '0' then
	--if rising_edge(salidaFreq) then
		salidacontador <= salidacontador + 1;
		if  salidacontador = "11" then
			salidacontador <= "00";
	end if;
	end if;
	
	if reset = '1' then
		salidacontador <= "00";
	end if;
	end process;
end Behavioral;

