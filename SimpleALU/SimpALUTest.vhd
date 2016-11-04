--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   09:53:22 11/04/2016
-- Design Name:   
-- Module Name:   X:/CS373-1/SimpleALU/SimpALUTest.vhd
-- Project Name:  SimpleALU
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: SimpALU
-- 
-- Dependencies:
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
--
-- Notes: 
-- This testbench has been automatically generated using types std_logic and
-- std_logic_vector for the ports of the unit under test.  Xilinx recommends
-- that these types always be used for the top-level I/O of a design in order
-- to guarantee that the testbench will bind correctly to the post-implementation 
-- simulation model.
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY SimpALUTest IS
END SimpALUTest;
 
ARCHITECTURE behavior OF SimpALUTest IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT SimpALU
    PORT(
         a : IN  std_logic_vector(3 downto 0);
         b : IN  std_logic_vector(3 downto 0);
         y1 : OUT  std_logic_vector(3 downto 0);
         y2 : OUT  std_logic_vector(3 downto 0);
         y3 : OUT  std_logic_vector(3 downto 0);
         y4 : OUT  std_logic_vector(3 downto 0);
         y5 : OUT  std_logic_vector(3 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal a : std_logic_vector(3 downto 0) := (others => '0');
   signal b : std_logic_vector(3 downto 0) := (others => '0');

 	--Outputs
   signal y1 : std_logic_vector(3 downto 0);
   signal y2 : std_logic_vector(3 downto 0);
   signal y3 : std_logic_vector(3 downto 0);
   signal y4 : std_logic_vector(3 downto 0);
   signal y5 : std_logic_vector(3 downto 0);
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: SimpALU PORT MAP (
          a => a,
          b => b,
          y1 => y1,
          y2 => y2,
          y3 => y3,
          y4 => y4,
          y5 => y5
        );
 

   -- Stimulus process
   stim_proc: process
   begin		
		a <= "1110"; b <= "1110"; wait for 10 ns;
		assert y1 = "1110" report "a and b failed!";
		assert y2 = "1110" report "a or b failed!"; 
		assert y3 = "0000" report "a xor b failed!"; 
		assert y4 = "0001" report "a nand b failed!"; 
		assert y5 = "0001" report "a nor b failed!";
      wait;
   end process;

END;
