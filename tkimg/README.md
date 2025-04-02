# Tcl/Tk Image formats (TkImg) #

This distribution contains a collection of format handlers for the
Tk photo image type, and a new image type **pixmap**.

It can be used in combination with Tcl/Tk 8.6 or later.
For older Tcl/Tk versions use the TkImg 1.4 version.

Included in this distribution are the most recent versions
of the libz, libpng, libjpeg, and libtiff libraries.
These are not required, unless you need support for the PNG, JPEG,
or TIFF format.

Note, that you have to build these libraries to
support the named formats, even if your system already has shared
libraries for these formats.
This is because the libraries here are built such, 
that they can be loaded as packages by the Tcl/Tk core,
making the handling of the various dependencies much easier.

An earlier version, 1.2.4, used a modified copy of Tcl's functions for
loading of shared libraries to load the support libraries at runtime.
These have been abandoned in favor of the new approach.


## Downloads ##

TkImg is hosted on SourceForge.

* Information and documentation is available at: https://tkimg.sourceforge.net/
* Source and binary distributions can be downloaded from: https://sourceforge.net/projects/tkimg/files/tkimg/


## Background to building ##

The TkImg sources consist of several small packages, most of which are
independent of each other.

All packages employ a TEA based build system (configure/make) for
easy configuration and building. This means that most of the options
to configure are the same for all the packages.

All packages (except the supporting packages) have names
starting with **tkimg**. For compatibility with older scripts the
package index file of the utility package `img::base` declares
pseudo-packages `img` and `Img`, which load all packages provided
by this extension with the exception of formats DTED, GIF, FLIR, RAW and PS.

See below for details on these packages.


## Building - The convenient way ##

The toplevel directory of TkImg contains a configure file for
convenient configuration and building of all packages in the
extension.

The most important options for configure are **--with-tcl** and **--with-tk**,
which tell the build system where to find Tcl and Tk
and **--prefix** and **--exec-prefix**, which tell the build system
where to install the results of the builds (header, documentation, shared libraries).

The following configure options should therefore be specified to build TkImg:

    --prefix=<dir>      Install header files in <dir>/include and documentation in <dir>/share.
                        Default: ${TCL_PREFIX} as specified in tclConfig.sh.
    --exec-prefix=<dir> Install binary files in <dir>/lib.
                        Default: ${TCL_EXEC_PREFIX} as specified in tclConfig.sh.
    --with-tcl=<dir>    Find Tcl libraries in <dir> and include files in <dir>/../include or <dir>/../generic.
                        Default: "${exec-prefix}/lib" or a sibling directory of the Img build directory.
    --with-tk=<dir>     Find Tk libraries in <dir> and include files in <dir>/../include or <dir>/../generic.
                        Default: the same values as given by --with-tcl or a sibling directory of the Img build directory.

Run the configure script with appropriate options in a build directory of your choice to
configure all packages.

Note for Linux users:
If using the distribution supplied Tcl/Tk development packages (ex. tcl-dev and tk-dev on Debian),
you have to specify both **--prefix** and **--exec-prefix**, if installing as simple user.

To compile the configured packages, execute `make`.

`make install` will install header and documentation files into the
directories specified via **--prefix/include** and **--prefix/share**
and binary files into the directories selected with options **--exec-prefix/lib**.

Note, that building the documentation needs Tcl script `dtplite`, which is part of tcllib.
To build and install without documentation, use `make install-libraries`.

This convenient build installs all shared libraries in a single
directory **Img<VERSION>**, together with a union package index for all
packages.

If the builder requires only a subset of the packages he can use
`make all` to build all packages, but must not use 
`make install` in the top build directory.
Instead run `make install` in the sub directories of the build 
directory which contain the requested packages and their dependencies.

Another possibility to exclude specific packages, is to edit the
`configure.ac` and `base/pkgIndex.tcl.in` files.

For example, to exclude the TIFF format handler, comment out the following lines:

    configure.ac:
        # TEA_CONFIG_SUBDIR(libtiff, ...)
        # TEA_CONFIG_SUBDIR(tiff, ...)
    base/pkgIndex.tcl.in:
        # package require img::tiff

You have to run script `GenerateConfigureFiles.sh` to update the configure files
and then proceed with configure and make.


## Packages and their dependencies ##

This section is for people who want to bypass the master
configure/Makefile.

At the bottom of the hierachy of dependencies are the **support packages**.
They encapsulate the support libraries for ZIP, TIFF, PNG
and JPEG in packages directly loadable by Tcl. They provide the
functionality of their underlying libraries via stub-tables.

The names of these packages are:

    Name        Directory             Dependency
    -------------------------------------------------
    zlibtcl     tkimg/compat/libz
    pngtcl      tkimg/compat/libpng   zlibtcl
    jpegtcl     tkimg/compat/libjpeg
    tifftcl     tkimg/compat/libtiff
    -------------------------------------------------

The package **pngtcl** depends on **zlibtcl** and has to be built after
it. Beyond that the order of building is free. Their TEA build systems
can be found in the directories listed above.

The configure/Makefile's in the directories

    tkimg/compat/libz
    tkimg/compat/libpng
    tkimg/compat/libjpeg
    tkimg/compat/libtiff

must _not_ be used directly under any circumstances.


At the next level is the package **tkimg**. It provides utility
functions used by all format handlers, and therefore has to be built
before any of them. Its TEA build system can be found in the directory

    Name        Directory       Dependency
    -------------------------------------------------
    img::base   tkimg/base
    -------------------------------------------------

Beyond that are the packages providing the various format
handlers. They can be built in any order. Some of them depend on
supporting packages, as noted below.

Their names and directories are

    Name        Directory     Dependency
    -------------------------------------------------
    img::bmp    tkimg/bmp
    img::dted   tkimg/dted
    img::flir   tkimg/flir
    img::gif    tkimg/gif
    img::ico    tkimg/ico
    img::jpeg   tkimg/jpeg    jpegtcl
    img::pcx    tkimg/pcx
    img::pixmap tkimg/pixmap
    img::png    tkimg/png     pngtcl, zlibtcl
    img::ppm    tkimg/ppm
    img::ps     tkimg/ps
    img::sgi    tkimg/sgi
    img::sun    tkimg/sun
    img::raw    tkimg/raw
    img::tga    tkimg/tga
    img::tiff   tkimg/tiff    tifftcl, zlibtcl, jpegtcl
    img::window tkimg/window
    img::xbm    tkimg/xbm
    img::xpm    tkimg/xpm
    -------------------------------------------------

The packages img::dted, img::gif, img::flir, img::raw and img::ps are special,
because they are not included when doing a "package require Img".
These must be explicitely loaded via a `package require img::FORMAT`.

* img::gif is not loaded automatically, as the builtin GIF parser of Tk seems
to give better results.

* img::ps reads Postscript files and transforms the first page into a photo
image using the external Ghostscript program.

* img::dted reads Digital Terrain Elevation Data and transforms the elevation
data into photo images.

* img::flir reads FLIR files and transforms the temperature information
into photo images.

* img::raw can transform any form of binary matrix data
(8-bit, 16-bit and 32-bit integer, 32-bit and 64-bit float) into a photo image.
As DTED and RAW files do not have a magic key or other identifier at the
beginning of the file, it is not possible to automatically detect the
format by reading some file header.


## Use ##

If you want to use one or more of new image formats to be available in
your own scripts, add a line like the following somewhere in your
script:

    package require img::FORMAT

where FORMAT stands for the name of the format requested.
Each format will automatically load all of the packages, it is dependent on.

The line

    package require Img

is still legal and will load all format handlers except DTED, FLIR, GIF, RAW and PS.

As an example, have a look at the file "tests/demo.tcl".

For further options see the manpages.


## Documentation ##

The reference documentation coming with the distribution is written
in the doctools format and is located in directory **doc**.
A HTML version of the reference documentation can be found at
https://tkimg.sourceforge.net/RefMan/toc.html

## Platforms ##

The following platforms are regularly tested:

* Linux           (gcc)
* Raspberry Pi OS (gcc)
* RiscV Debian    (gcc)
* Windows         (MSys/MinGW, Visual Studio C++)
* Darwin          (gcc)

Other machines and OS's should work, too.

Feedback about other operating systems and compilers is appreciated.
Please help us in making this package better.


## Developers and contributors ##

* Jan Nijtmans    (nijtmans@users.sourceforge.net)
* Andreas Kupries (andreas_kupries@users.sourceforge.net)
* Paul Obermeier  (obermeier@users.sourceforge.net)


* Roger E Critchlow Jr (rec@elf.org)     : BMP improvements
* Nick Ing-Simmons (nick@ni-s.u-net.com) : XBM write function
* Ioi K. Lam (ioi@eng.sun.com)           : Pixmap image type
* Tom Lane (tgl@sss.pgh.pa.us)           : First version of JPEG handler
* Lolo (lolo@pcsig22.etsimo.uniovi.es)   : Original GIF87 write function
* Ashok P. Nadkarni                      : nmake build system
* Larry Virden (lvirden@cas.org)         : Bug reports and other useful remarks
* Mario Weilguni (mweilguni@sime.com)    : Many improvements to XPM handler

