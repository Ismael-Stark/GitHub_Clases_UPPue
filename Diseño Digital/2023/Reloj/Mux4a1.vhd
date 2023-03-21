----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    20:58:54 03/05/2023 
-- Design Name: 
-- Module Name:    Mux4a1 - Behavioral 
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

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity Mux4a1 is
    Port ( Horas_D : in  STD_LOGIC_VECTOR (3 downto 0);
           Horas_U : in  STD_LOGIC_VECTOR (3 downto 0);
           Min_D : in  STD_LOGIC_VECTOR (3 downto 0);
           Min_U : in  STD_LOGIC_VECTOR (3 downto 0);
           sel : in  STD_LOGIC_VECTOR (1 downto 0);
			  ----------------------------------------------
			  sel_dsplay : out STD_LOGIC_VECTOR (3 downto 0);--
           Salida : out  STD_LOGIC_VECTOR (3 downto 0));
end Mux4a1;




architecture Behavioral of Mux4a1 is

	begin
	process (sel)
	begin
		case sel is
			when "00" => Salida <= Horas_D;
							 sel_dsplay <= "0001";
			when "01" => Salida <= Horas_U;
							 sel_dsplay <= "0010";
			when "10" => Salida <= Min_D;
							 sel_dsplay <= "0100";
			when "11" => Salida <= Min_U;
							 sel_dsplay <= "1000";
			when others => Salida <= "0000";
							 sel_dsplay <= "0000";
		end case;

	end process;


end Behavioral;





		--sel_dsplay <= "0000";
		--case sel is
			--when "00" => Salida <= Horas_D;
			--when "01" => Salida <= Horas_U;
			--when "10" => Salida <= Min_D;
			--when "11" => Salida <= Min_U;
			--when others => Salida <= "0000";
		--end case;


		--case sel is
			--when "00" => Salida <= Horas_D;
							 --sel_dsplay <= "0001";
			--when "01" => Salida <= Horas_U;
							 --sel_dsplay <= "0010";
			--when "10" => Salida <= Min_D;
							 --sel_dsplay <= "0100";
			--when "11" => Salida <= Min_U;
							 --sel_dsplay <= "1000";
			--when others => Salida <= "0000";
							 --sel_dsplay <= "0000";
		--end case;
