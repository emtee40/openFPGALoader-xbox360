# openFPGALoader
Universal utility for programming FPGA

__Current support kits:__

* [Acorn CLE 215+](http://squirrelsresearch.com/acorn-cle-215/) (memory and spi flash)
* Trenz cyc1000 Cyclone 10 LP 10CL025 (memory and spi flash)
* [Colorlight 5A-75B (version 7)](https://fr.aliexpress.com/item/32281130824.html) (memory and spi flash)
* [Digilent Arty A7 xc7a35ti](https://reference.digilentinc.com/reference/programmable-logic/arty-a7/start) (memory and spi flash)
* [Digilent Arty S7 xc7s50](https://reference.digilentinc.com/reference/programmable-logic/arty-s7/start) (memory and spi flash)
* [Digilent Nexys Video xc7a200t](https://reference.digilentinc.com/reference/programmable-logic/nexys-video/start) (memory and spi flash)
* [FairWaves XTRXPro](https://www.crowdsupply.com/fairwaves/xtrx) (memory and flash)
* [Fireant Trion T8](https://www.crowdsupply.com/jungle-elec/fireant) (spi flash active mode)
* [iCEBreaker](https://1bitsquared.com/collections/fpga/products/icebreaker)
* [icestick](https://www.latticesemi.com/icestick)
* [iCE40-HX8K](https://www.latticesemi.com/Products/DevelopmentBoardsAndKits/iCE40HX8KBreakoutBoard.aspx)
* [Lattice MachXO2 Breakout Board Evaluation Kit (LCMXO2-7000HE)](https://www.latticesemi.com/products/developmentboardsandkits/machxo2breakoutboard) (memory and flash)
* Lattice MachXO3LF Starter Kit LCMX03LF-6900C (memory and flash)
* [Lattice MachXO3D Development Board (LCMXO3D-9400HC)](https://www.latticesemi.com/products/developmentboardsandkits/machxo3d_development_board)
* [Lattice CrossLink-NX Evaluation Board (LIFCL-40-EVN)](https://www.latticesemi.com/en/Products/DevelopmentBoardsAndKits/CrossLink-NXEvaluationBoard) (memory and spi flash)
* [Lattice ECP5 5G Evaluation Board (LFE5UM5G-85F-EVN)](https://www.latticesemi.com/en/Products/DevelopmentBoardsAndKits/ECP5EvaluationBoard) (memory and spi flash)
* [Olimex iCE40HX1K-EVB](https://www.olimex.com/Products/FPGA/iCE40/iCE40HX1K-EVB/open-source-hardware)
* [Olimex iCE40HX8K-EVB](https://www.olimex.com/Products/FPGA/iCE40/iCE40HX8K-EVB/open-source-hardware)
* [QMTech CycloneV Core Board](https://fr.aliexpress.com/i/1000006622149.html) (memory)
* [Trenz Gowin LittleBee (TEC0117)](https://shop.trenz-electronic.de/en/TEC0117-01-FPGA-Module-with-GOWIN-LittleBee-and-8-MByte-internal-SDRAM)
* [Saanlima Pipistrello LX45](http://pipistrello.saanlima.com/index.php?title=Welcome_to_Pipistrello) (memory)
* [SeeedStudio Gowin RUNBER](https://www.seeedstudio.com/Gowin-RUNBER-Development-Board-p-4779.html) (memory and flash)
* [SeeedStudio Spartan Edge Accelerator Board](http://wiki.seeedstudio.com/Spartan-Edge-Accelerator-Board) (memory)
* [Sipeed Tang Nano](https://tangnano.sipeed.com/en/) (memory)
* [Sipeed Lichee Tang](https://tang.sipeed.com/en/hardware-overview/lichee-tang/) (memory and spi flash)
* [Terasic de0nano](https://www.terasic.com.tw/cgi-bin/page/archive.pl?No=593) (memory)
* LambdaConcept ECPIX-5 (memory and flash)
* [Efinix Xyloni](https://www.efinixinc.com/products-devkits-xyloni.html) (spi flash (*xyloni_spi*))
* [honeycomb](https://github.com/Disasm/honeycomb-pcb) (memory and internal flash)

__Supported (tested) FPGA:__

* Anlogic [EG4S20](http://www.anlogic.com/prod_view.aspx?TypeId=10&Id=168&FId=t3:10:3) (SRAM and Flash)
* Efinix [Trion T8](https://www.efinixinc.com/products-trion.html) (active mode)
* Gowin [GW1N (GW1N-1, GW1N-4, GW1NR-9, GW1NS-2C)](https://www.gowinsemi.com/en/product/detail/2/) (SRAM and Flash)
* Lattice [iCE40 (HX1K,HX8K, UP5K)](https://www.latticesemi.com/en/Products/FPGAandCPLD/iCE40)
* Lattice [MachXO2](https://www.latticesemi.com/en/Products/FPGAandCPLD/MachXO2) (SRAM and Flash)
* Lattice [MachXO3LF](http://www.latticesemi.com/en/Products/FPGAandCPLD/MachXO3.aspx) (SRAM and Flash)
* Lattice [MachXO3D](http://www.latticesemi.com/en/Products/FPGAandCPLD/MachXO3D.aspx) (SRAM and Flash)
* Lattice [ECP5 (25F, 5G 85F](http://www.latticesemi.com/Products/FPGAandCPLD/ECP5) (SRAM and Flash)
* Lattice [ECP5 (25F, 5G 85F, CrossLink-NX (LIFCL-40)](https://www.latticesemi.com/en/Products/FPGAandCPLD/CrossLink-NX) (SRAM and Flash)
* Xilinx Artix 7 [xc7a35ti, xc7a50t, xc7a100t, xc7a200t](https://www.xilinx.com/products/silicon-devices/fpga/artix-7.html) (memory and spi flash)
* Xilinx Spartan 6 [xc6slx45](https://www.xilinx.com/products/silicon-devices/fpga/spartan-6.html) (memory)
* Xilinx Spartan 7 [xc7s15, xc7s25, xc7s50](https://www.xilinx.com/products/silicon-devices/fpga/spartan-7.html) (memory (all) and spi flash (xc7s50))
* Intel Cyclone IV CE [EP4CE22](https://www.intel.com/content/www/us/en/products/programmable/fpga/cyclone-iv/features.html) (memory. See note below)
* Intel Cyclone V E [5CEA2](https://www.intel.com/content/www/us/en/products/programmable/fpga/cyclone-v.html)
* Intel Cyclone 10 LP [10CL025](https://www.intel.com/content/www/us/en/products/programmable/fpga/cyclone-10.html)

**Note**: cyclone IV and cyclone 10 have same idcode. A WA is mandatory to
detect correct model for flash programming.

__Supported cables:__

* anlogic JTAG adapter
* [digilent_hs2](https://store.digilentinc.com/jtag-hs2-programming-cable/): jtag programmer cable from digilent
* [DirtyJTAG](https://github.com/jeanthom/DirtyJTAG): JTAG probe firmware for STM32F1
  (Best to use release (1.4 or newer) or limit the --freq to 600000 with older releases. New version https://github.com/jeanthom/DirtyJTAG/tree/dirtyjtag2 is also supported)
* Intel USB Blaster: jtag programmer cable from intel/altera
* JTAG-HS3: jtag programmer cable from digilent
* FT2232: generic programmer cable based on Ftdi FT2232
* FT232RL and FT231X: generic USB<->UART converters in bitbang mode
* [Tang Nano USB-JTAG interface](https://github.com/diodep/ch55x_jtag): FT2232C clone based on CH552 microcontroler
  (with some limitations and workaround)
* [honeycomb USB-JTAG interface](https://github.com/Disasm/f042-ftdi): FT2232C clone based on STM32F042 microcontroler

## compile and install

This application uses **libftdi1**, so this library must be installed (and,
depending of the distribution, headers too)
```bash
apt-get install libftdi1-2 libftdi1-dev libudev-dev cmake
```
**libudev-dev** is optional, may be replaced by **eudev-dev** or just not installed.

By default, **(e)udev** support is enabled (used to open a device by his */dev/xx*
node). If you don't want this option, use:

```bash
-DENABLE_UDEV=OFF
```

And if not already done, install **pkg-config**, **make** and **g++**.

Alternatively you can manually specify the location of **libusb** and **libftdi1**:

```bash
-DUSE_PKGCONFIG=OFF -DLIBUSB_LIBRARIES=<path_to_libusb> -DLIBFTDI_LIBRARIES=<path_to_libftdi> -DLIBFTDI_VERSION=<version> -DCMAKE_CXX_FLAGS="-I<libusb_include_dir> -I<libftdi1_include_dir>"
```

You may also need to add this if you see link errors between **libusb** and **pthread**:

```bash
-DLINK_CMAKE_THREADS=ON
```

To build the app:
```bash
$ mkdir build
$ cd build
$ cmake ../ # add -DBUILD_STATIC=ON to build a static version
            # add -DENABLE_UDEV=OFF to disable udev support and -d /dev/xxx
$ cmake --build .
or
$ make -j$(nproc)
```
To install
```bash
$ sudo make install
```
The default install path is `/usr/local`, to change it, use
`-DCMAKE_INSTALL_PREFIX=myInstallDir` in cmake invokation.

## access right

By default, users have no access to converters. A rule file
(*99-openfpgaloader.rules*) for *udev* is provided at the root directory
of this repository. These rules set access right and group (*plugdev*)
when a converter is plugged.

```bash
$ sudo cp 99-openfpgaloader.rules /etc/udev/rules.d/
$ sudo udevadm control --reload-rules && udevadm trigger # force udev to take new rule
$ sudo usermod -a YourUserName -G plugdev # add user to plugdev group
```
After that you need to unplug and replug your device.

## Usage

```bash
openFPGALoader --help
Usage: openFPGALoader [OPTION...] BIT_FILE
openFPGALoader -- a program to flash FPGA

      --bitstream arg     bitstream
  -b, --board arg         board name, may be used instead of cable
  -c, --cable arg         jtag interface
      --ftdi-serial arg   FTDI chip serial number
      --ftdi-channel arg  FTDI chip channel number (channels 0-3 map to A-D)
  -d, --device arg        device to use (/dev/ttyUSBx)
      --detect            detect FPGA
      --file-type arg     provides file type instead of let's deduced by
                          using extension
      --freq arg          jtag frequency (Hz)
  -f, --write-flash       write bitstream in flash (default: false, only for
                          Gowin and ECP5 devices)
      --list-boards       list all supported boards
      --list-cables       list all supported cables
      --list-fpga         list all supported FPGA
  -m, --write-sram        write bitstream in SRAM (default: true, only for
                          Gowin and ECP5 devices)
  -o, --offset arg        start offset in EEPROM
      --pins arg          pin config (only for ft232R) TDI:TDO:TCK:TMS
      --quiet             Produce quiet output (no progress bar)
  -r, --reset             reset FPGA after operations
      --spi               SPI mode (only for FTDI in serial mode)
  -v, --verbose           Produce verbose output
  -h, --help              Give this help list
  -V, --Version           Print program version

Mandatory or optional arguments to long options are also mandatory or optional
for any corresponding short options.

Report bugs to <gwenhael.goavec-merou@trabucayre.com>.
```
To have complete help

### Generic usage

- when a bitstream file is compatible with both memory load and FLASH write, the default behavior is to load bitstream in memory
- with FPGA using an external SPI flash (*xilinx*, *lattice ECP5/nexus/ice40*, *anlogic*, *efinix*) option  **-o** allows one to write raw binary file to an arbitrary adress in FLASH.

#### display FPGA

With board name:
```bash
openFPGALoader -b theBoard
```
(see `openFPGALoader --list-boards`)

With cable:
```bash
openFPGALoader -c theCable
```
(see `openFPGALoader --list-cables`)

With device node:
```bash
openFPGALoader -d /dev/ttyUSBX
```

**Note:** for some cable (like *digilent* adapters) signals from the converter
are not just directly to the FPGA. For this case, the *-c* must be added.

**Note:** when -d is not provided, *openFPGALoader* will opens the first *ftdi*
found, if more than one converter is connected to the computer,
the *-d* option is the better solution

#### Reset device

```bash
openFPGALoader [options] -r
```

#### load bitstream device (memory or flash)

```bash
openFPGALoader [options] /path/to/bitstream.ext
```

##### Using pipe

```bash
cat /path/to/bitstream.ext | openFPGALoader --file-type ext [options]
```

`--file-type` is required to detect file type

Note: It's possible to load a bitstream through network:

```bash
# FPGA side
nc -lp port | openFPGALoader --filetype xxx [option
# Bitstream side
nc -q 0 host port < /path/to/bitstream.ext
```

#### Automatic file type detection bypass

Default behavior is to use file extension to determine file parser. To avoid
this mecanism `--file-type type` must be used.

#### bitbang mode and pins configuration

*FT232R* and *ft231X* may be used as JTAG programmer. JTAG communications are
emulated in bitbang mode.

To use these devices user needs to provides both the cable and the pin mapping:
```bash
openFPGALoader [options] -cft23XXX --pins=TDI:TDO:TCK:TMS /path/to/bitstream.ext
```
where:
* ft23XXX may be **ft232RL** or **ft231X**
* TDI:TDO:TCK:TMS may be the pin ID (0 <= id <= 7) or string value

allowed values are:

| value | ID |
|-------|----|
|  TXD  | 0  |
|  RXD  | 1  |
|  RTS  | 2  |
|  CTS  | 3  |
|  DTR  | 4  |
|  DSR  | 5  |
|  DCD  | 6  |
|  RI   | 7  |

#### FX2 cables and pins configuration

FX2 cables need to have their pin mapping provided

```bash
openFPGALoader [options] -cfx2 --pins=TDI:TDO:TCK:TMS /path/to/bitstream.ext
```
where:
* TDI:TDO:TCK:TMS may be the pin ID (A0 <= id <= D7) for pins PA0...PD7

### CYC1000 and de0nano

#### loading in memory:

sof to svf generation:
```bash
quartus_cpf -c -q -g 3.3 -n 12.0MHz p project_name.sof project_name.svf
```
file load:
```bash
openFPGALoader -b cyc1000 project_name.svf
```

```bash
openFPGALoader -b de0nano -b project_name.svf
```

#### SPI flash:
sof to rpd:
```bash
quartus_cpf -o auto_create_rpd=on -c -d EPCQ16A -s 10CL025YU256C8G project_name.svf project_name.jic
```
file load:
```bash
openFPGALoader -b cyc1000 -r project_name_auto.rpd
```

**Note about SPI flash:
svf file used to write in flash is just a bridge between FT2232 interfaceB
configured in SPI mode and sfl primitive used to access EPCQ SPI flash.**

**Note about FT2232 interfaceB:
This interface is used for SPI communication only when the dedicated svf is
loaded in RAM, rest of the time, user is free to use for what he want.**

### <span style="text-decoration:underline">Xilinx based boards</span>

To simplify further explanations, we consider the project is generated in the
current directory.

**Note:**
1. Spartan Edge Accelerator Board has only pinheader, so the cable must be provided
2. a *JTAG* <-> *SPI* bridge (used to write bitstream in FLASH) is available for some device, see
[spiOverJtag](https://github.com/trabucayre/openFPGALoader/tree/master/spiOverJtag) to check if your model is supported

<span style="color:red">**Warning** *.bin* may be loaded in memory or in flash, but this extension is a classic extension
for CPU firmware and, by default, *openFPGALoader* load file in memory, double check
*-m* / *-f* when you want to use a firmware for a softcore
(or anything, other than a bitstream) to write somewhere in the FLASH device).</span>

*.bit* file is the default format generated by *vivado*, so nothing special
task must be done to generates this bitstream.

*.bin* is not, by default, produces. To have access to this file you need to configure the tool:
- **GUI**: *Tools* -> *Settings* -> *Bitstreams* -> check *-bin_file*
- **TCL**: append your *TCL* file with `set_property STEPS.WRITE_BITSTREAM.ARGS.BIN_FILE true [get_runs impl_1]`

#### loading in memory:

<span style="text-decoration:underline">*.bit* and *.bin* are allowed to be loaded in memory.</span>

__file load:__
```bash
openFPGALoader [-m] -b arty *.runs/impl_1/*.bit (or *.bin)
```
or
```bash
openFPGALoader [-m] -b spartanEdgeAccelBoard -c digilent_hs2 *.runs/impl_1/*.bit (or *.bin)
```

#### SPI flash:

<span style="text-decoration:underline">*.bit*, *.bin*, and *.mcs* are supported for FLASH.</span>

.mcs must be generates through vivado with a tcl script like
```tcl
set project [lindex $argv 0]

set bitfile "${project}.runs/impl_1/${project}.bit"
set mcsfile "${project}.runs/impl_1/${project}.mcs"

write_cfgmem -format mcs -interface spix4 -size 16 \
    -loadbit "up 0x0 $bitfile" -loaddata "" \
    -file $mcsfile -force

```
**Note:
*-interface spix4* and *-size 16* depends on SPI flash capability and size.**

The tcl script is used with:
```bash
vivado -nolog -nojournal -mode batch -source script.tcl -tclargs myproject
```

__file load:__
```bash
openFPGALoader -f -b arty *.runs/impl_1/*.mcs (or .bit / .bin)
```
**Note: *-f* is required to write bitstream (without them *.bit* and *.bin* are loaded in memory)**

### MachXO2/MachXO3 Starter Kit

#### Flash memory:

*.jed* file is the default format generated by *Lattice Diamond*, so nothing
special must be done to generates this file.

__file load__:
```bash
openFPGALoader [-b yourboard] impl1/*.jed
```
where *yourboard* may be:
* *machX02EVN*
* *machXO3SK*

#### SRAM:

To generates *.bit* file **Bitstream file** must be checked under **Exports Files** in *Lattice Diamond* left panel.

__file load__:
```bash
openFPGALoader [-b yourboard] impl1/*.bit
```
where *yourboard* may be:
* *machX02EVN*
* *machXO3SK*

### Lattice ECP5 (Colorlight 5A-75b, Lattice ECP5 5G Evaluation board, ULX3S) CrossLink-NX

#### SRAM:

```bash
openFPGALoader [-b yourBoard] [-c yourCable] -m project_name/*.bit
```

**By default, openFPGALoader load bitstream in memory, so the '-m' argument is optional**

#### SPI Flash:

##### bit

```bash
openFPGALoader [-b yourBoard] [-c yourCable] -f project_name/*.bit # or *.bin
```

##### mcs

To generates *.mcs* file **PROM File** must be checked under **Exports Files** in *Lattice Diamond* left panel.

```bash
openFPGALoader [-b yourBoard] [-c yourCable] project_name/*.mcs
```


### GOWIN GW1N (Trenz TEC0117, Sipeed Tang Nano and RUNBER)

*.fs* file is the default format generated by *Gowin IDE*, so nothing
special must be done to generates this file.

Since the same file is used for SRAM and Flash a CLI argument is used to
specify the destination.

#### Flash SRAM:

with **-m**

```bash
openFPGALoader -m -b BOARD_NAME impl/pnr/*.fs
```
where *BOARD_NAME* is:
- *tec0117*
- *tangnano*
- *runber*

#### Flash (only with Trenz TEC0117 and runber):

with **-f**

__file load__:
```bash
openFPGALoader -f -b BOARD_NAME impl/pnr/*.fs
```
where *BOARD_NAME* is:
- **tec0117**
- **runber**

### Sipeed Lichee Tang

For this target, *openFPGALoader* support *svf* and *bit*

__bit file load (memory)__

```bash
openFPGALoader -m -b licheeTang /somewhere/project/prj/*.bit
```

Since *-m* is the default, this argument is optional

__bit file load (spi flash)__

```bash
openFPGALoader -f -b licheeTang /somewhere/project/prj/*.bit
```

__svf file load__

It's possible to produce this file by using *TD*:
* Tools->Device Chain
* Add your bit file
* Option : Create svf

or by using [prjtang project](https://github.com/mmicko/prjtang)

```bash
mkdir build
cd build
cmake ../
make
```

Now a file called *tangbit* is present in current directory and has to be used as
follow:
```bash
tangbit --input /somewhere.bit --svf bitstream.svf
```

```bash
openFPGALoader -b licheeTang /somewhere/*.svf
```

### Firant and Xyloni boards (efinix trion T8)

*.hex* file is the default format generated by *Efinity IDE*, so nothing
special must be done to generates this file.

*openFPGALoader* support only active mode (SPI) (*JTAG* is WIP).

__hex file load__

```bash
openFPGALoader -b fireant /somewhere/project/outflow/*.hex
```
or, for xyloni board
```bash
openFPGALoader -b xyloni_spi /somewhere/project/outflow/*.hex
```

Since openFPGALoader access the flash directly in SPI mode the *-b fireant*, *-b xyloni_spi* is required (no autodetection possible)

### ice40 boards (icestick, iCE40-HX8K, iCEBreaker, iCE40HX1K-EVB, iCE40HX8K-EVB)

*.bin* is the default format generated by *nextpnr*, so nothing special
must be done.

Since most ice40 boards uses the same pinout between *FTDI* and *SPI flash* a generic *ice40_generic* board is provided.

For the specific case of the *iCE40HXXK-EVB* where no onboard programmer is present, please use this:

|     FTDI     | iCE40HXXK-EVB        |
|--------------|----------------------|
| SCK (ADBUS0) | Pin 9                |
| SI  (ADBUS1) | Pin 8                |
| SO  (ADBUS2) | Pin 7                |
| CS  (ABDUS4) | Pin 10               |
| RST (ADBUS6  | Pin 6                |
| DONE (ADBUS7)| Pin 5                |

__bin file load__
```bash
openFPGALoader -b ice40_generic /somewhere/*.bin
```

Since it's a direct access to the flash (SPI) the *-b* option is required.
