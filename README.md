
Experimental fork of the original repository https://github.com/JvanKatwijk/eti-stuff


# eti-stuff

"eti-stuff" is an attempt to understand the eti structure as defined in ETS 300 799.

[eti-cmdline](#eti-cmdline) is based on the dab-cmdline software  with code
included from [dabtools](https://github.com/Opendigitalradio/dabtools) to actually decode the eti frames.
It is - as the name suggests - a command line version.

When constructing, select the input device of choice in the CMake command
(currently supported are SDRplay (all RSP's using the 3.06 library, all apart from the RSP-Dx using the 2.13 library), AIRspy, DABsticks, Hackrf and Lime devices,  ".sdr" and ".iq" files)

By piping the output from eti-cmdline into eti-backend, a more or less complete DAB receiver exists.

## eti-backend

which is a stripped Qt-DAB version that takes eti-frames as input. A command line option (`-s`) can be used to specify an input file or stdinput. If none is specified, the program will show a widget for selecting an input file.
   
The GUI is simple, it will show the name of the ensemble and the names of programs. Selecting a program is as in the Qt-DAB software. 

It will start reading after pressing the start button.

Build eti-backend using the qmake/make commands


### Syntax

If you want to emulate a full DAB receiver, then run

      eti-cmdline-xxx -C 11C -G 80 | eti-backend -s -
      
Or you can use dablin or dablin_gtk from https://github.com/Opendigitalradio/dablin by running
      
      eti-cmdline-xxx -C 11C -G 80 | dablin_gtk
      
where xxx refers to the input device being supported, one of (`rtlsdr`, `sdrplay`, `airspy`, `hackrf', `limesdr', `rawfiles`, `wavfiles`).
      
# Disclaimer

The software is under development and most likely contains errors.

eti-stuff is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.


# Copyright

Copyright Jan van Katwijk <J.vanKatwijk@gmail.com>.
Lazy Chair Computing

This software is part of the Qt-DAB collection, Qt-DAB is free software; you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation; either version 2 of the License, or (at your option) any later version, taking into account the licensing conditions of the parts of the software that are derived from wotk of others.

This software uses parts of dabtools. Excerpt from the README of dabtools reads

"dabtools is written by Dave Chapman <dave@dchapman.com>
   
Parts of the code in eti-backend are copied verbatim (or with trivial modifications) from David Crawley's OpenDAB and hence retain his copyright."

Obviously, the copyrights for the parts copied (or directly derived) from the dabtools remain with Dave Chapman.
