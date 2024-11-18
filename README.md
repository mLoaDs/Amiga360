![386543012-a09d876c-a95a-458b-b116-8b2c9c7b2294](https://github.com/user-attachments/assets/7904f4e9-32b1-4fad-8567-52cba84fd25d)

# Amiga360
 Amiga360 - P-UAE 2.3.3 emulator port for Xbox 360

Amiga360 by Lantus is a complete emulation of a Amiga, you will have full access to applications such as an Internet browser, an IRC client etc.

![386551905-fe110071-a102-4ab9-83ff-bef1dc949b64](https://github.com/user-attachments/assets/0db8f8c2-4a2b-4563-8fe2-a717df33af33)

Features:
---------
- Based off P-UAE V2.3.3
- Simple and easy to use GUI
- Full Mouse/Keyboard support
- OCS/ECS/AGA/Picasso96 emulation
- Hardfile emulation
- Savestate support
- BSD Socket Emulation (experimental)
- Filesystem emulation (experimental)
- Drive click support
- Prebuilt config files included.
- Source code included.
- Tested and working with Amiga-SYS, ClassicWB and AIAB

Installation:
-------------
The package contains 2 files.

Amiga360.xex – if you are running a retail (JTAG) console. Use this version.

Amiga360-Dev.xex – if you have access to a devkit, this version will replace the analog stick mouse with real mouse support. Plug in a 
mouse into any USB port.

Note – you cannot run Amiga360-Dev.xex on a retail console.


Requirements:
-------------

Before you can run Amiga360. You need at least one valid KickStart rom image. It needs to be called 'kick.rom' and live in the KickStarts/ subfolder.

Once in place Amiga360 will now boot up to the KickStart screen.

Pressing Left Trigger at any time during emulation will pause Amiga360 and bring up the Menu.


Directory Structure:
--------------------
Roms/ - Place adf images here. Use 'Disks' menu option to insert disk images. Use 'Hard Disk Images' menu options to mount/unmount harddrive images.

Hardfiles/ - Place harddisk (hdf) images here. Use 'Hard Disk Images' menu to mount hdd images.

Config/ - Place config files here. Use the 'Config Files' menu option to select/load and save a config
KickStarts/ - Place kickstart rom images here. Use the 'KickStart' menu option to select and use a rom. To use Amiga360 you will need at least one kickstart rom called 'kick.rom' to exist in this folder.

Save/ - This is the location of any savestates.


Mounting Filesystem Drives:
---------------------------
An example is in the config file 'Amiga-Sys'

filesystem2=rw,DH0:Usb0:\System,0

filesystem=rw,System:Usb0:\System

filesystem2=rw,DH1:Usb0:\Work,0

filesystem=rw,Work:Usb0:\Work

This example is mounting 2 Amiga volumes DH0 and DH1 with volume names System and Work and are mapped to Usb0:\System and Usb0:\Work

Notes:
------
UI Configuration is not complete. For the more advanced tasks options you will need to directly modify configuration files.

BSDSocket emulation is not 100%. Tested and working apps include AWeb, Voyager, IBrowse, AmiIRC, YAM, AmiRSS, AmiTradeCenter and others. There are a small number of tcp/ip apps that do not work correctly.

Currently the GUI will only display roms in Game:\Roms

Bugs and Issues:
----------------
- There are slowdowns with certain games/demos. For now to workaround setting frameskip to 2 on this titles should be sufficient.
- Picasso96 16/32bit screenmodes color pallete is incorrect. For now use 24 bit screens only.
- Filesystem disk geometry size is incorrect.
- There is no CD/CD32/CDTV support (yet)

Important Links:
----------------
ClassicWB - [Classic Amiga Workbench](http://classicwb.abime.net/)

Kickstart - [Kickstart Roms](https://digiex.net/attachments/amiga-kickstarts-rar.7428/)
- Workbench disc/image which contains the GUI System ﻿of the Amiga Computer.
- The Kickstart is only the OS data that is stored in the Rom of a Amiga Computer.


Greets and Thanks:
------------------
Gnostic, coz, cancerous, Razkar, Artik and Logic-Sunrise, idc and all Amiga fans worldwide!




PUAE 2.3.3 beta series
---------------------------------------------------
PUAE tries to continue where E-UAE left off..

PUAE versioning is based on the merged WinUAE version..

All is done by:
	Mustafa 'GnoStiC' TUFAN (mustafa.tufan@gmail.com)

Thanks:
 Steven 'xaind' Saunders (MacOSX fix), 'wuffe' (FreeBSD fix)
 'internetzel' (PPC fix), Nick 'chiark' Lines (morale support)
