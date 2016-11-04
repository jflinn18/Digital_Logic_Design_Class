--------------------------------------------------------------------------------
-- Copyright (c) 1995-2013 Xilinx, Inc.  All rights reserved.
--------------------------------------------------------------------------------
--   ____  ____ 
--  /   /\/   / 
-- /___/  \  /    Vendor: Xilinx 
-- \   \   \/     Version : 14.7
--  \   \         Application : sch2hdl
--  /   /         Filename : AutoLogic.vhf
-- /___/   /\     Timestamp : 10/26/2016 09:23:05
-- \   \  /  \ 
--  \___\/\___\ 
--
--Command: sch2hdl -intstyle ise -family spartan3 -flat -suppress -vhdl //CS1/students/2018/jflinn18/CS373-1/AutoLogic/AutoLogic.vhf -w //CS1/students/2018/jflinn18/CS373-1/AutoLogic/AutoLogic.sch
--Design Name: AutoLogic
--Device: spartan3
--Purpose:
--    This vhdl netlist is translated from an ECS schematic. It can be 
--    synthesized and simulated, but it should not be modified. 
--

library ieee;
use ieee.std_logic_1164.ALL;
use ieee.numeric_std.ALL;
library UNISIM;
use UNISIM.Vcomponents.ALL;

entity AutoLogic is
   port ( Door     : in    std_logic; 
          Ignition : in    std_logic; 
          Seatbelt : in    std_logic; 
          Buzzer   : out   std_logic);
   attribute LOC : string ;
   attribute LOC of Door : signal is "E11";
   attribute LOC of Ignition : signal is "K2";
   attribute LOC of Seatbelt : signal is "A13";
   attribute LOC of Buzzer : signal is "M6";
end AutoLogic;

architecture BEHAVIORAL of AutoLogic is
   attribute BOX_TYPE   : string ;
   signal XLXN_1   : std_logic;
   signal XLXN_2   : std_logic;
   signal XLXN_3   : std_logic;
   signal XLXN_5   : std_logic;
   signal XLXN_6   : std_logic;
   signal XLXN_7   : std_logic;
   signal XLXN_8   : std_logic;
   signal XLXN_9   : std_logic;
   component AND2
      port ( I0 : in    std_logic; 
             I1 : in    std_logic; 
             O  : out   std_logic);
   end component;
   attribute BOX_TYPE of AND2 : component is "BLACK_BOX";
   
   component OR2
      port ( I0 : in    std_logic; 
             I1 : in    std_logic; 
             O  : out   std_logic);
   end component;
   attribute BOX_TYPE of OR2 : component is "BLACK_BOX";
   
   component INV
      port ( I : in    std_logic; 
             O : out   std_logic);
   end component;
   attribute BOX_TYPE of INV : component is "BLACK_BOX";
   
   component BUF
      port ( I : in    std_logic; 
             O : out   std_logic);
   end component;
   attribute BOX_TYPE of BUF : component is "BLACK_BOX";
   
begin
   XLXI_1 : AND2
      port map (I0=>XLXN_3,
                I1=>XLXN_1,
                O=>XLXN_5);
   
   XLXI_3 : AND2
      port map (I0=>XLXN_2,
                I1=>XLXN_3,
                O=>XLXN_6);
   
   XLXI_4 : OR2
      port map (I0=>XLXN_6,
                I1=>XLXN_5,
                O=>XLXN_9);
   
   XLXI_5 : INV
      port map (I=>XLXN_7,
                O=>XLXN_1);
   
   XLXI_6 : INV
      port map (I=>XLXN_8,
                O=>XLXN_2);
   
   XLXI_7 : BUF
      port map (I=>Door,
                O=>XLXN_7);
   
   XLXI_8 : BUF
      port map (I=>Ignition,
                O=>XLXN_3);
   
   XLXI_9 : BUF
      port map (I=>Seatbelt,
                O=>XLXN_8);
   
   XLXI_10 : BUF
      port map (I=>XLXN_9,
                O=>Buzzer);
   
end BEHAVIORAL;


