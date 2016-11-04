----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    09:34:52 11/02/2016 
-- Design Name: 
-- Module Name:    NandGate - Behavioral 
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

--This is structural code
entity NandGate is
--   Port (  a, b : in  STD_LOGIC;
--     c : out  STD_LOGIC );
	Port ( a : in STD_LOGIC_VECTOR(1 downto 0);
			y : out STD_LOGIC);
end NandGate;

--This is behavioral code
architecture Behavioral of NandGate is
begin
-- c <= NOT ( a AND b );
	y <= NOT (a(0) AND a(1));
end Behavioral;

