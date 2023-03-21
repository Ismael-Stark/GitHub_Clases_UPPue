----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    00:49:31 03/19/2023 
-- Design Name: 
-- Module Name:    contador_RelojPared - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use ieee.std_logic_unsigned.all;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity contador_RelojPared is
    Port ( clk : in  STD_LOGIC;
           reset : in  STD_LOGIC;
           DispMinU : out  STD_LOGIC_VECTOR (3 downto 0);
           DispMinD : out  STD_LOGIC_VECTOR (3 downto 0);
           DispHrsU : out  STD_LOGIC_VECTOR (3 downto 0);
           DispHrsD : out  STD_LOGIC_VECTOR (3 downto 0));
end contador_RelojPared;



architecture Behavioral of contador_RelojPared is
	signal segundos: integer range 0 to 60 := 55;
	
	signal minU: std_logic_vector(3 downto 0):= x"9";
	signal minD: std_logic_vector(3 downto 0):= x"5";
	signal HrsU: std_logic_vector(3 downto 0):= x"3";
	signal HrsD: std_logic_vector(3 downto 0):= x"2";
	
	
begin
	process (clk,reset)
begin
	
		if (clk'EVENT and clk = '1') then
			segundos <= segundos + 1;
			if (segundos = 59) then
				segundos <= 0;
				minU <= minU + x"1";
				if (minU = x"9") then
					minU <= x"0";
					minD <= minD + x"1";
					if (minD = 5) then
						minD <= x"0";
						HrsU <= HrsU + x"1";
						if (HrsU = 9) then
							HrsU <= x"0";
							HrsD <= HrsD + x"1";							
						end if;
					if (HrsD <= x"2" and HrsU = x"3")then
						HrsU <= x"0";
						HrsD <= x"0";
					end if;
						
					end if;
				
				end if;
				
			end if;
			
		end if;
		
		if (reset = '1') then
			minU <= x"9";
			minD <= x"5";
			HrsU <= x"3";
			HrsD <= x"2";
			segundos <= 55;
		end if;
	
	end process;

	DispMinU <= minU;
	DispMinD <= minD;
   DispHrsU <= HrsU;
   DispHrsD <= HrsD;

end Behavioral;

