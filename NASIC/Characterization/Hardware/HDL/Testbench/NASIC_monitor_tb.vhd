----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date: 12.10.2020 18:53:57
-- Design Name: 
-- Module Name: NASIC_monitor_tb - Behavioral
-- Project Name: 
-- Target Devices: 
-- Tool Versions: 
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
-- any Xilinx leaf cells in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity NASIC_monitor_tb is
--  Port ( );
end NASIC_monitor_tb;

architecture Behavioral of NASIC_monitor_tb is

    component NASIC_monitor is
        port (
            i_clock              : in  std_logic;
            i_ext_rst            : in  std_logic;
            -- Input spikes_out
            i_spikes_from_NASIC  : in  std_logic_vector(15 downto 0);
            -- External reset from NASIC
            i_ext_rst_from_NASIC : in  std_logic;
            -- Clock from monitor
            o_ext_clock_to_NASIC : out std_logic;
            -- NASIC LEDs
            o_status_leds        : out std_logic_vector(3 downto 0);
            -- Output AER
            o_aer_data           : out std_logic_vector(15 downto 0);
            o_aer_req            : out std_logic;
            i_aer_ack            : in  std_logic
        );
    end component;
    
    signal i_clock   : std_logic := '1';
    signal i_ext_rst : std_logic := '0';
    signal i_spikes_from_NASIC  : std_logic_vector(15 downto 0) := (others => '0');
    signal i_ext_rst_from_NASIC : std_logic := '0';
    signal o_ext_clock_to_NASIC : std_logic;
    signal o_status_leds : std_logic_vector(3 downto 0);
    signal o_aer_data : std_logic_vector(15 downto 0);
    signal o_aer_req : std_logic;
    signal i_aer_ack : std_logic;
    
    constant c_clock_period : time := 20 ns;

begin

    DUT: NASIC_monitor
        port map(
            i_clock => i_clock,
            i_ext_rst => i_ext_rst,
            -- Input spikes_out
            i_spikes_from_NASIC => i_spikes_from_NASIC,
            -- External reset from NASIC
            i_ext_rst_from_NASIC => i_ext_rst_from_NASIC,
            -- Clock from monitor
            o_ext_clock_to_NASIC => o_ext_clock_to_NASIC,
            -- NASIC LEDs
            o_status_leds => o_status_leds,
            -- Output AER
            o_aer_data => o_aer_data,
            o_aer_req => o_aer_req,
            i_aer_ack => i_aer_ack
        );
    
    i_clock <= not i_clock after c_clock_period / 2;
    
    p_main_process: process
    begin
        wait for 1 us;
        
        i_ext_rst <= '1';
        
        wait for 1 us;
        
        i_ext_rst_from_NASIC <= '1';
        
        wait for 1 us;
        
        wait until rising_edge(i_clock);
        
        wait for c_clock_period * 10;
        
        i_spikes_from_NASIC <= "0000000000100000";
        
        wait for c_clock_period;
        
        i_spikes_from_NASIC <= "0000000000000000";
        
        wait;
    
    end process;
    
    i_aer_ack <= o_aer_req after c_clock_period * 3;


end Behavioral;
