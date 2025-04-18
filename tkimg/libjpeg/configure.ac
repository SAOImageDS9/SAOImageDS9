dnl
dnl Process this file with autoconf to produce a configure script.
dnl

#--------------------------------------------------------------------
# Configure script for package 'jpegtcl', as distributed at November 20, 2001.
# TEA compliant.
#--------------------------------------------------------------------

AC_INIT([jpegtcl],[9.6.0])

TEA_INIT([3.9])

AC_CONFIG_AUX_DIR(../tclconfig)

#--------------------------------------------------------------------
# Load the tclConfig.sh file
# Load the tkConfig.sh file
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

JPEG_CFLAGS="$CFLAGS"
TEA_SETUP_COMPILER
JPEG_CC=$CC

#-----------------------------------------------------------------------
# Specify the C source files to compile in TEA_ADD_SOURCES,
# public headers that need to be installed in TEA_ADD_HEADERS,
# stub library C source files to compile in TEA_ADD_STUB_SOURCES,
# and runtime Tcl library files in TEA_ADD_TCL_SOURCES.
# This defines PKG(_STUB)_SOURCES, PKG(_STUB)_OBJECTS, PKG_HEADERS
# and PKG_TCL_SOURCES.
#-----------------------------------------------------------------------

TEA_ADD_SOURCES([jpegtcl.c jpegtclStubInit.c])

TEA_ADD_SOURCES([
	../compat/libjpeg/jcapimin.c	../compat/libjpeg/jcapistd.c	../compat/libjpeg/jccoefct.c
	../compat/libjpeg/jccolor.c	../compat/libjpeg/jcdctmgr.c	../compat/libjpeg/jchuff.c
	../compat/libjpeg/jcinit.c	../compat/libjpeg/jcmainct.c	../compat/libjpeg/jcmarker.c
	../compat/libjpeg/jcmaster.c	../compat/libjpeg/jcomapi.c	../compat/libjpeg/jcparam.c
	../compat/libjpeg/jcarith.c	../compat/libjpeg/jcprepct.c	../compat/libjpeg/jcsample.c
	../compat/libjpeg/jctrans.c	../compat/libjpeg/jdapimin.c	../compat/libjpeg/jdapistd.c
	../compat/libjpeg/jdatadst.c	../compat/libjpeg/jdatasrc.c	../compat/libjpeg/jdcoefct.c
	../compat/libjpeg/jdcolor.c	../compat/libjpeg/jddctmgr.c	../compat/libjpeg/jdhuff.c
	../compat/libjpeg/jdinput.c	../compat/libjpeg/jdmainct.c	../compat/libjpeg/jdmarker.c
	../compat/libjpeg/jdmaster.c	../compat/libjpeg/jdmerge.c	../compat/libjpeg/jdarith.c
	../compat/libjpeg/jdpostct.c	../compat/libjpeg/jdsample.c	../compat/libjpeg/jdtrans.c
	../compat/libjpeg/jerror.c	../compat/libjpeg/jfdctflt.c	../compat/libjpeg/jfdctfst.c
	../compat/libjpeg/jfdctint.c	../compat/libjpeg/jidctflt.c	../compat/libjpeg/jidctfst.c
	../compat/libjpeg/jidctint.c	../compat/libjpeg/jaricom.c	../compat/libjpeg/jquant1.c
	../compat/libjpeg/jquant2.c	../compat/libjpeg/jutils.c	../compat/libjpeg/jmemmgr.c
	../compat/libjpeg/jmemansi.c
])

TEA_ADD_HEADERS([jpegtcl.h jpegtclDecls.h])

TEA_ADD_INCLUDES([-I\"`\${CYGPATH} \${srcdir}`\"])
TEA_ADD_INCLUDES([-I\"./libjpeg\"])
TEA_ADD_LIBS([])
TEA_ADD_CFLAGS([])
TEA_ADD_STUB_SOURCES([jpegtclStubLib.c])
TEA_ADD_SOURCES([jpegtclStubLib.c])
TEA_ADD_TCL_SOURCES([])

#--------------------------------------------------------------------
# __CHANGE__
# Choose which headers you need.  Extension authors should try very
# hard to only rely on the Tcl public header files.  Internal headers
# contain private data structures and are subject to change without
# notice.
# This MUST be called after TEA_LOAD_TCLCONFIG / TEA_LOAD_TKCONFIG
#--------------------------------------------------------------------

TEA_PUBLIC_TCL_HEADERS
TEA_PUBLIC_TK_HEADERS

#--------------------------------------------------------------------
# A few miscellaneous platform-specific items:
#
# Windows creates a few extra files that need to be cleaned up.
# We can add more files to clean if our extension creates any extra
# files in the future.
#
# Define any extra compiler flags in the PACKAGE_CFLAGS variable.
# These will be appended to the current set of compiler flags for
# your system.
#--------------------------------------------------------------------

if test "${TEA_PLATFORM}" = "windows" ; then
    CLEANFILES="*.lib *.dll *.exp *.ilk *.pdb vc*.pch"
else
    CLEANFILES=""
fi
AC_SUBST(CLEANFILES)

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

# See [Bug #82910]
#TEA_PATH_X

#--------------------------------------------------------------------
# Everyone should be linking against the Tcl stub library.  If you
# can't for some reason, remove this definition.  If you aren't using
# stubs, you also need to modify the SHLIB_LD_LIBS setting below to
# link against the non-stubbed Tcl library.
#--------------------------------------------------------------------

AC_DEFINE(USE_TCL_STUBS)

#--------------------------------------------------------------------
# This macro generates a line to use when building a library.  It
# depends on values set by the TEA_ENABLE_SHARED, TEA_ENABLE_SYMBOLS,
# and TEA_LOAD_TCLCONFIG macros above.
#--------------------------------------------------------------------

TEA_MAKE_LIB

#--------------------------------------------------------------------
# __CHANGE__
# Add platform libs to LIBS or SHLIB_LD_LIBS as necessary.
#--------------------------------------------------------------------

SHLIB_LD_LIBS="${SHLIB_LD_LIBS} \${TCL_LIBS}"

#--------------------------------------------------------------------
# Find tclsh so that we can run pkg_mkIndex to generate the pkgIndex.tcl
# file during the install process.  Don't run the TCLSH_PROG through
# ${CYGPATH} because it's being used directly by make.
# Require that we use a tclsh shell version 8.2 or later since earlier
# versions have bugs in the pkg_mkIndex routine.
# Add WISH as well if this is a Tk extension.
#--------------------------------------------------------------------

TEA_PROG_TCLSH
TEA_EXPORT_CONFIG(jpegtcl)

#--------------------------------------------------------------------
# We call the configure for the jpeg code on our own, without using
# AC_CONFIG_SUBDIR ... Using that requires a symlink, thus making setup
# difficult, and the transfer information ot it is busted, due to how
# TEA handles CFLAGS.
#--------------------------------------------------------------------

case "$srcdir" in
.) # No --srcdir option.  We are building in place.
  jpegdir=../$srcdir/../compat/libjpeg ;;
/*) # Absolute path.
  jpegdir=$srcdir/../compat/libjpeg ;;
*) # Relative path.
  jpegdir=../$ac_dots$srcdir/../compat/libjpeg ;;
esac

mkdir -p libjpeg
sleep 2        ; # Wait two seconds for the directory to actually appear (Windows).
cd    libjpeg
env CC="$JPEG_CC" CFLAGS="$JPEG_CFLAGS" $jpegdir/configure --enable-maxmem=500
cd ..

#--------------------------------------------------------------------
# Finally, substitute all of the various values into the Makefile.
# You may alternatively have a special pkgIndex.tcl.in or other files
# which require substituting th AC variables in.  Include these here.
#--------------------------------------------------------------------

AC_CONFIG_FILES([Makefile jpegtclConfig.sh])
AC_OUTPUT

#--------------------------------------------------------------------
