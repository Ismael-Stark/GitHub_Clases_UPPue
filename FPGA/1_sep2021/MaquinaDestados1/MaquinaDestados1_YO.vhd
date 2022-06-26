library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

entity secuencia_YO is
	Port (
		reset: in std_logic;
		clock: in std_logic;
		input: in std_logic;
		Output: out std_logic
		);
end secuencia_YO;

architecture MaquinaDestados1 of secuencia_YO is

	type state is (S0, S1); 
	signal Mealy_state: state; --U_Mealy: 
	begin	
	process(clock, reset)
	Begin
	if(reset = '1') then 
		Mealy_state <= S0;
	elsif (clock = '1' and clock'event) then 
		case Mealy_state is
		when S0 => 		if input = '1' then Mealy_state <= S1; end if; 
		when S1 =>		if input = '0' then Mealy_state <= S0; end if; end case;
		end if; 
	End process;
	
	Output <= '1' when (Mealy_state = S1 and input = '0') else '0';
end MaquinaDestados1;
