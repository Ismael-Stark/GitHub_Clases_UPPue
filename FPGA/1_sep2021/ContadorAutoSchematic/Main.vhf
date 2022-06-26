--------------------------------------------------------------------------------
-- Copyright (c) 1995-2013 Xilinx, Inc.  All rights reserved.
--------------------------------------------------------------------------------
--   ____  ____ 
--  /   /\/   / 
-- /___/  \  /    Vendor: Xilinx 
-- \   \   \/     Version : 14.7
--  \   \         Application : sch2hdl
--  /   /         Filename : Main.vhf
-- /___/   /\     Timestamp : 02/25/2022 15:13:56
-- \   \  /  \ 
--  \___\/\___\ 
--
--Command: sch2hdl -intstyle ise -family spartan3a -flat -suppress -vhdl "D:/OneDrive - Soluciones Marva/Xilinx/1_sep2021/ContadorAuto/Main.vhf" -w "D:/OneDrive - Soluciones Marva/Xilinx/1_sep2021/ContadorAuto/Main.sch"
--Design Name: Main
--Device: spartan3a
--Purpose:
--    This vhdl netlist is translated from an ECS schematic. It can be 
--    synthesized and simulated, but it should not be modified. 
--

library ieee;
use ieee.std_logic_1164.ALL;
use ieee.numeric_std.ALL;
library UNISIM;
use UNISIM.Vcomponents.ALL;

entity Main is
   port ( CLK    : in    std_logic; 
          RST    : in    std_logic; 
          RST1   : in    std_logic; 
          Salida : out   std_logic_vector (4 downto 0));
end Main;

architecture BEHAVIORAL of Main is
   signal XLXN_1 : std_logic;
   component DivisorFreq
      port ( clk    : in    std_logic; 
             reset  : in    std_logic; 
             salida : out   std_logic);
   end component;
   
   component contador
      port ( pulsador : in    std_logic; 
             reset    : in    std_logic; 
             salida   : out   std_logic_vector (4 downto 0));
   end component;
   
begin
   XLXI_3 : DivisorFreq
      port map (clk=>CLK,
                reset=>RST,
                salida=>XLXN_1);
   
   XLXI_4 : contador
      port map (pulsador=>XLXN_1,
                reset=>RST1,
                salida(4 downto 0)=>Salida(4 downto 0));
   
end BEHAVIORAL;


