library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

entity NASIC_monitor is
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
end NASIC_monitor;

architecture Architect of NASIC_monitor is

	--
	-- Spikes Distributed Monitor
	--
	component AER_DISTRIBUTED_MONITOR is
		generic (
			N_SPIKES       : integer := 16; 
			LOG_2_N_SPIKES : integer := 4; 
			TAM_AER        : integer := 2048; 
			IL_AER         : integer := 11
		);
		port (
			CLK          : in  STD_LOGIC;
			RST          : in  STD_LOGIC;
			SPIKES_IN    : in  STD_LOGIC_VECTOR(N_SPIKES - 1 downto 0);
			AER_DATA_OUT : out STD_LOGIC_VECTOR(15 downto 0);
			AER_REQ      : out STD_LOGIC;
			AER_ACK      : in  STD_LOGIC
		);
	end component;
	
	component clock48mhz
		port (
			-- Clock in ports
			CLK_IN1           : in     std_logic;
			-- Clock out ports
			CLK_OUT1          : out    std_logic;
			-- Status and control signals
			RESET             : in     std_logic;
			CLK_VALID         : out    std_logic
		);
	end component;

	--Reset siganl
	signal reset : std_logic;
	signal reset_local : std_logic;
	signal clock_valid : std_logic;
	signal w_aer_data : std_logic_vector(15 downto 0);
	signal r_generated_clock : std_logic;
	signal r_generated_glock_latched : std_logic;
	signal r_input_spikes_counter : std_logic_vector(7 downto 0);
	
	begin
		
		reset <= not i_ext_rst or not i_ext_rst_from_NASIC;
		reset_local <= not reset and clock_valid;

		--Spikes Distributed Monitor
		U_AER_DISTRIBUTED_MONITOR: AER_DISTRIBUTED_MONITOR
			generic map (
				N_SPIKES       => 16, 
				LOG_2_N_SPIKES => 4, 
				TAM_AER        => 64, 
				IL_AER         => 6
			)
			port map (
				CLK          => r_generated_clock,
				RST          => reset_local,--reset,
				SPIKES_IN    => i_spikes_from_NASIC,
				AER_DATA_OUT => w_aer_data,
				AER_REQ      => o_aer_req,
				AER_ACK      => i_aer_ack
			);
		o_aer_data <= w_aer_data;
		
--		p_clock_generation: process(reset, i_clock)
--		begin
--			if(reset = '0') then
--                r_generated_clock <= '0';
--			else
--                r_generated_clock <= i_clock;
--			end if;
--			
--		end process;
--		
		p_clock_latched_generation: process(reset, r_generated_clock)
        begin
            if(reset = '0') then
                r_generated_glock_latched <= '0';
            else
                r_generated_glock_latched <= r_generated_clock;
            end if;
            
        end process;
		  
		U_NASIC_clk_gen : clock48mhz
			port map (
				-- Clock in ports
				CLK_IN1 => i_clock,
				-- Clock out ports
				CLK_OUT1 => r_generated_clock,
				--
				RESET => reset,
				CLK_VALID => clock_valid
				
			);

        o_ext_clock_to_NASIC <= r_generated_glock_latched;
        
        p_input_spikes_counter: process(reset_local, r_generated_clock)
        begin
            if(reset_local = '0') then
                r_input_spikes_counter <= (others => '0');
            else
                if(rising_edge(r_generated_clock)) then
                    if(conv_integer(unsigned(i_spikes_from_NASIC)) > 0) then
                        r_input_spikes_counter <= r_input_spikes_counter + 1;
                    else
                    
                    end if;                
                else
                
                end if;
            end if;
            
        end process;
        o_status_leds <= r_input_spikes_counter(5 downto 2);

end Architect;
