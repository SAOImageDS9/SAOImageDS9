dnl	This file is an input file used by the GNU "autoconf" program to
dnl	generate the file "configure", which is run during Tk installation
dnl	to configure the system for the local environment.

AC_INIT([Img],[2.0.1])

TEA_INIT([3.9])

AC_CONFIG_AUX_DIR(tclconfig)

#--------------------------------------------------------------------
# Configure script for package 'Img', as distributed at March 18, 2005.
# TEA compliant.
#--------------------------------------------------------------------

#--------------------------------------------------------------------
# Load the tclConfig.sh file
#--------------------------------------------------------------------

TEA_PATH_TCLCONFIG
TEA_LOAD_TCLCONFIG

TEA_PATH_TKCONFIG
TEA_LOAD_TKCONFIG

#-----------------------------------------------------------------------
# Handle the --prefix=... option by defaulting to what Tcl gave.
# Must be called after TEA_LOAD_TCLCONFIG and before TEA_SETUP_COMPILER.
#-----------------------------------------------------------------------

TEA_PREFIX

#-----------------------------------------------------------------------
# Standard compiler checks.
# This sets up CC by using the CC env var, or looks for gcc otherwise.
# This also calls AC_PROG_CC, AC_PROG_INSTALL and a few others to create
# the basic setup necessary to compile executables.
#-----------------------------------------------------------------------

TEA_SETUP_COMPILER

#--------------------------------------------------------------------
# __CHANGE__
# Choose which headers you need.  Extension authors should try very
# hard to only rely on the Tcl public header files.  Internal headers
# contain private data structures and are subject to change without
# notice.
# This MUST be called after TEA_LOAD_TCLCONFIG / TEA_LOAD_TKCONFIG
#--------------------------------------------------------------------

# This module is special. On windows it requires access to the
# internal headers of Tk and thus tcl to implement its functionality
# (TkWinReleaseDrawableDC).

if test "${TEA_PLATFORM}" = "windows" ; then
    TEA_PRIVATE_TCL_HEADERS
    TEA_PRIVATE_TK_HEADERS
else
    TEA_PUBLIC_TCL_HEADERS
    TEA_PUBLIC_TK_HEADERS
fi

#--------------------------------------------------------------------
# Check whether --enable-threads or --disable-threads was given.
# So far only Tcl responds to this one.
#--------------------------------------------------------------------

TEA_ENABLE_THREADS

#--------------------------------------------------------------------
# The statement below defines a collection of symbols related to
# building as a shared library instead of a static library.
#--------------------------------------------------------------------

TEA_ENABLE_SHARED

#--------------------------------------------------------------------
# This macro figures out what flags to use with the compiler/linker
# when building shared/static debug/optimized objects.  This information
# can be taken from the tclConfig.sh file, but this figures it all out.
#--------------------------------------------------------------------

TEA_CONFIG_CFLAGS

#--------------------------------------------------------------------
# Set the default compiler switches based on the --enable-symbols option.
#--------------------------------------------------------------------

TEA_ENABLE_SYMBOLS

#--------------------------------------------------------------------
# For Unix/Tk builds, make sure that the X libraries/headers are found.
# This must be called after TEA_CONFIG_CFLAGS as it adjusts LIBS.
#--------------------------------------------------------------------

TEA_PATH_X

#-----------------------------------------------------------------------
# All relevant packages are configuration subdirectories.
#-----------------------------------------------------------------------

# I. Support

# Remove all arguments after the command name. Without doing that we
# might transmit something like 'gcc -pipe' down to the sub
# configure's, and they may hang in 'which gcc -pipe' (platform
# dependent. So far only seen for Linux).

CC=`echo $CC | sed -e 's/ .*$//'`

TEA_CONFIG_COLLECT
TEA_CONFIG_SUBDIR(zlib,       [--disable-option-checking])
TEA_CONFIG_SUBDIR(libpng,     [--with-zlibtcl=`pwd`/zlib --disable-option-checking])
TEA_CONFIG_SUBDIR(libtiff,    [--disable-option-checking])
TEA_CONFIG_SUBDIR(libjpeg,    [--disable-option-checking])
TEA_CONFIG_SUBDIR(base,       [--disable-option-checking])
TEA_CONFIG_SUBDIR(bmp,        [--with-tkimg=`pwd`/base --disable-option-checking])
TEA_CONFIG_SUBDIR(gif,        [--with-tkimg=`pwd`/base --disable-option-checking])
TEA_CONFIG_SUBDIR(ico,        [--with-tkimg=`pwd`/base --disable-option-checking])
TEA_CONFIG_SUBDIR(jpeg,       [--with-tkimg=`pwd`/base --with-jpegtcl=`pwd`/libjpeg --disable-option-checking])
TEA_CONFIG_SUBDIR(pcx,        [--with-tkimg=`pwd`/base --disable-option-checking])
TEA_CONFIG_SUBDIR(pixmap,     [--with-tkimg=`pwd`/base --disable-option-checking])
TEA_CONFIG_SUBDIR(png,        [--with-tkimg=`pwd`/base --with-pngtcl=`pwd`/libpng --with-zlibtcl=`pwd`/zlib --disable-option-checking])
TEA_CONFIG_SUBDIR(ppm,        [--with-tkimg=`pwd`/base --disable-option-checking])
TEA_CONFIG_SUBDIR(ps,         [--with-tkimg=`pwd`/base --disable-option-checking])
TEA_CONFIG_SUBDIR(sgi,        [--with-tkimg=`pwd`/base --disable-option-checking])
TEA_CONFIG_SUBDIR(sun,        [--with-tkimg=`pwd`/base --disable-option-checking])
TEA_CONFIG_SUBDIR(tga,        [--with-tkimg=`pwd`/base --disable-option-checking])
TEA_CONFIG_SUBDIR(tiff,       [--with-tkimg=`pwd`/base --with-tifftcl=`pwd`/libtiff --with-zlibtcl=`pwd`/zlib --with-jpegtcl=`pwd`/libjpeg --disable-option-checking])
TEA_CONFIG_SUBDIR(window,     [--with-tkimg=`pwd`/base --disable-option-checking])
TEA_CONFIG_SUBDIR(xbm,        [--with-tkimg=`pwd`/base --disable-option-checking])
TEA_CONFIG_SUBDIR(xpm,        [--with-tkimg=`pwd`/base --disable-option-checking])
TEA_CONFIG_SUBDIR(dted,       [--with-tkimg=`pwd`/base --disable-option-checking])
TEA_CONFIG_SUBDIR(raw,        [--with-tkimg=`pwd`/base --disable-option-checking])
TEA_CONFIG_SUBDIR(flir,       [--with-tkimg=`pwd`/base --disable-option-checking])

#--------------------------------------------------------------------
#	Finally
#--------------------------------------------------------------------

AC_CONFIG_FILES([Makefile])
AC_OUTPUT

