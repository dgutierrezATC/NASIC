"""--/////////////////////////////////////////////////////////////////////////////////
--//                                                                                //
--//    Copyright (c) 2021  Daniel Gutierrez Galan (University of Seville)          //
--//                                                                                //
--//    This file is part of NASIC.                                                 //
--//                                                                                //
--//    NASIC is free software: you can redistribute it and/or modify               //
--//    it under the terms of the GNU General Public License as published by        //
--//    the Free Software Foundation, either version 3 of the License, or           //
--//    (at your option) any later version.                                         //
--//                                                                                //
--//    NASIC is distributed in the hope that it will be useful,                    //
--//    but WITHOUT ANY WARRANTY; without even the implied warranty of              //
--//    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.See the                 //
--//    GNU General Public License for more details.                                //
--//                                                                                //
--//    You should have received a copy of the GNU General Public License           //
--//    along with NASIC. If not, see <http://www.gnu.org/licenses/>.               //
--//                                                                                //
--////////////////////////////////////////////////////////////////////////////////////"""

###############################################################
# Imports
###############################################################
from pyNAVIS import *
import os
import matplotlib.pyplot as plt

###############################################################
# NAS parameters configuration
###############################################################
# NAS parameter
nas_num_channels = 8          # 64 frequency channels
nas_mono_stereo = 0            # If stereo was used, then use 1
nas_polarity_on_off_both = 1   # If merged polarity was used, then use 1

###############################################################
# Recording platform configuration
###############################################################

# Recordings parameters: MATLAB
nas_address_size = 2           # If matlab was used, then use 2
nas_ts_tick = 0.2              # If matlab was used, then use 0.2
nas_bin_size = 10000           # Not relevant

"""# Recordings parameters: JAER
nas_address_size = 4           # If matlab was used, then use 2
nas_ts_tick = 1.0              # If matlab was used, then use 0.2
nas_bin_size = 10000           # Not relevant"""

settings = MainSettings(num_channels=nas_num_channels, 
                        mono_stereo=nas_mono_stereo, 
                        on_off_both=nas_polarity_on_off_both, 
                        address_size=nas_address_size, 
                        ts_tick=nas_ts_tick, 
                        bin_size=nas_bin_size)

###############################################################
# Path configuration
###############################################################

# Get the absolute path of the python file
dataset_path = os.path.dirname(__file__)
# Go back to the parent directoy
dataset_path = dataset_path.replace('Analysis','')
# And go through to the events folder
dataset_path = dataset_path + 'Datasets\\dataset\\events_chip2\\events\\chirp_aedats\\'

###############################################################
# Files processing
###############################################################

# Load the AEDAT file
tonefreq = ['261', '349', '523', '698', '1046', '1396']

filename = dataset_path + 'chirp_10sec_100_20000_hz_mono.wav.aedat'
imagename = dataset_path + 'Fig_NASIC_chip2_' + 'chirp_10sec_100_20000_hz_mono_'
#filename = 'D:\\prueba.aedat'
print("Processing file " + filename + "...")

# Load the file
recording_file_nas = Loaders.loadAEDAT(filename, settings)

# Adapt timestamps and check the NAS file
recording_file_nas.timestamps = Functions.adapt_timestamps(recording_file_nas.timestamps, settings)
Functions.check_SpikesFile(recording_file_nas, settings)

# Generate plots
Plots.spikegram(recording_file_nas, settings)
plt.savefig(imagename + 'spikegram.png')
Plots.sonogram(recording_file_nas, settings)
plt.savefig(imagename + 'sonogram.pdf')
Plots.histogram(recording_file_nas, settings)
plt.savefig(imagename + 'histogram.pdf')
Plots.average_activity(recording_file_nas, settings)
plt.savefig(imagename + 'average_activity.pdf')
plt.close('all')

#plt.show()