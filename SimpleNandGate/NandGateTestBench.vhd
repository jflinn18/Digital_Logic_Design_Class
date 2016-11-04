--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   09:50:16 11/02/2016
-- Design Name:   
-- Module Name:   X:/CS373-1/SimpleNandGate/NandGateTestBench.vhd
-- Project Name:  SimpleNandGate
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: NandGate
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
USE ieee.std_logic_unsigned.ALL;
USE ieee.numeric_std.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY NandGateTestBench IS
END NandGateTestBench;
 
ARCHITECTURE behavior OF NandGateTestBench IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT NandGate
    PORT(
 --        a : IN  std_logic;
 --        b : IN  std_logic;
			a : IN std_logic_vector(1 downto 0);
         y : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal a_s : std_logic := '0';
   signal b_s : std_logic := '0';

 	--Outputs
   signal c_s : std_logic;
   -- No clocks detected in port list. Replace <clock> below with 
   -- appropriate port name 
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: NandGate PORT MAP ( a(0) => a_s, a(1) => b_s, y => c_s );

   -- Stimulus process
  stim_proc: process
   begin		
		-- insert stimulus here 
		a_s <= '0'; b_s <= '0'; wait for 10 ns; --This can only happen in the simulation code
		assert c_s = '1' report "00 failed!";
		a_s <= '0'; b_s <= '1'; wait for 10 ns;
		assert c_s = '1' report "01 failed!"; -- this will print 01 failed!
		a_s <= '1'; b_s <= '0'; wait for 10 ns;
		assert c_s = '1' report "10 failed!"; -- this will print 10 failed!
		a_s <= '1'; b_s <= '1'; wait for 10 ns;
		assert c_s = '0' report "11 failed!";
      wait;
   end process;

END;
