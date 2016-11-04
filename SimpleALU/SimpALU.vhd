----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    09:49:26 11/04/2016 
-- Design Name: 
-- Module Name:    SimpALU - Behavioral 
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

entity SimpALU is

	Port ( a, b: in STD_LOGIC_VECTOR(3 downto 0);
		y1, y2, y3, y4, y5 : out STD_LOGIC_VECTOR(3 downto 0) );

end SimpALU;

architecture Behavioral of SimpALU is

begin

	y1 <= a and b;
	y2 <= a or b;
	y3 <= a xor b;
	y4 <= a nand b;
	y5 <= a nor b;

end Behavioral;

