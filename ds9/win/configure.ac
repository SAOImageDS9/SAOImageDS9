#!/bin/bash -norc
dnl	This file is an input file used by the GNU "autoconf" program to
dnl	generate the file "configure", which is run during Tcl installation
dnl	to configure the system for the local environment.

#-----------------------------------------------------------------------
# Sample configure.ac for Tcl Extensions.  The only places you should
# need to modify this file are marked by the string __CHANGE__
#-----------------------------------------------------------------------

#-----------------------------------------------------------------------
# __CHANGE__
# Set your package name and version numbers here.
#
# This initializes the environment with PACKAGE_NAME and PACKAGE_VERSION
# set as provided.  These will also be added as -D defs in your Makefile
# so you can encode the package version directly into the source files.
# This will also define a special symbol for Windows (BUILD_<PACKAGE_NAME>
# so that we create the export library with the dll.
#-----------------------------------------------------------------------

AC_INIT([ds9], [8.3])

#--------------------------------------------------------------------
# Call TEA_INIT as the first TEA_ macro to set up initial vars.
# This will define a ${TEA_PLATFORM} variable == "unix" or "windows"
# as well as PKG_LIB_FILE and PKG_STUB_LIB_FILE.
#--------------------------------------------------------------------

TEA_INIT()

AC_CONFIG_AUX_DIR(../tclconfig)

#--------------------------------------------------------------------
# Load the tclConfig.sh file
#--------------------------------------------------------------------

TEA_PATH_TCLCONFIG
TEA_LOAD_TCLCONFIG

#--------------------------------------------------------------------
# Load the tkConfig.sh file if necessary (Tk extension)
#--------------------------------------------------------------------

TEA_PATH_TKCONFIG
TEA_LOAD_TKCONFIG

#--------------------------------------------------------------------
# Load the *.sh file if necessary
#--------------------------------------------------------------------

TEA_PATH_CONFIG(util)
TEA_LOAD_CONFIG(util)

TEA_PATH_CONFIG(vector)
TEA_LOAD_CONFIG(vector)

TEA_PATH_CONFIG(fitsy)
TEA_LOAD_CONFIG(fitsy)

TEA_PATH_CONFIG(tifftcl)
TEA_LOAD_CONFIG(tifftcl)

TEA_PATH_CONFIG(jpegtcl)
TEA_LOAD_CONFIG(jpegtcl)

TEA_PATH_CONFIG(zlibtcl)
TEA_LOAD_CONFIG(zlibtcl)

TEA_PATH_CONFIG(tcliis)
TEA_LOAD_CONFIG(tcliis)

TEA_PATH_CONFIG(tclfitsy)
TEA_LOAD_CONFIG(tclfitsy)

TEA_PATH_CONFIG(tclxml)
TEA_LOAD_CONFIG(tclxml)

TEA_PATH_CONFIG(tls)
TEA_LOAD_CONFIG(tls)

TEA_PATH_CONFIG(tkblt)
TEA_LOAD_CONFIG(tkblt)

TEA_PATH_CONFIG(tkhtml1)
TEA_LOAD_CONFIG(tkhtml1)

TEA_PATH_CONFIG(tkimg)
TEA_LOAD_CONFIG(tkimg)

TEA_PATH_CONFIG(tkimgjpeg)
TEA_LOAD_CONFIG(tkimgjpeg)

TEA_PATH_CONFIG(tkimgtiff)
TEA_LOAD_CONFIG(tkimgtiff)

TEA_PATH_CONFIG(tkimgwindow)
TEA_LOAD_CONFIG(tkimgwindow)

TEA_PATH_CONFIG(tkmpeg)
TEA_LOAD_CONFIG(tkmpeg)

TEA_PATH_CONFIG(tksvg)
TEA_LOAD_CONFIG(tksvg)

TEA_PATH_CONFIG(tkagif)
TEA_LOAD_CONFIG(tkagif)

TEA_PATH_CONFIG(tksao)
TEA_LOAD_CONFIG(tksao)

TEA_PATH_CONFIG(tktable)
TEA_LOAD_CONFIG(tktable)

TEA_PATH_CONFIG(tkwin)
TEA_LOAD_CONFIG(tkwin)

#-----------------------------------------------------------------------
# Handle the --prefix=... option by defaulting to what Tcl gave.
# Must be called after TEA_LOAD_TCLCONFIG and before TEA_SETUP_COMPILER.
#-----------------------------------------------------------------------

TEA_PREFIX

#-----------------------------------------------------------------------
# Standard compiler checks.
# This sets up CC by using the CC env var, or looks for gcc otherwise.
# This also calls AC_PROG_CC and a few others to create the basic setup
# necessary to compile executables.
#-----------------------------------------------------------------------

TEA_SETUP_COMPILER

#-----------------------------------------------------------------------
# __CHANGE__
# Specify the C source files to compile in TEA_ADD_SOURCES,
# public headers that need to be installed in TEA_ADD_HEADERS,
# stub library C source files to compile in TEA_ADD_STUB_SOURCES,
# and runtime Tcl library files in TEA_ADD_TCL_SOURCES.
# This defines PKG(_STUB)_SOURCES, PKG(_STUB)_OBJECTS, PKG_HEADERS
# and PKG_TCL_SOURCES.
#-----------------------------------------------------------------------

#TEA_ADD_SOURCES([sample.c tclsample.c])
#TEA_ADD_HEADERS([])
#TEA_ADD_INCLUDES([])
TEA_ADD_LIBS([-lstdc++])
#TEA_ADD_CFLAGS([])
#TEA_ADD_STUB_SOURCES([])
#TEA_ADD_TCL_SOURCES([])

#--------------------------------------------------------------------
# __CHANGE__
#
# You can add more files to clean if your extension creates any extra
# files by extending CLEANFILES.
# Add pkgIndex.tcl if it is generated in the Makefile instead of ./configure
# and change Makefile.in to move it from CONFIG_CLEAN_FILES to BINARIES var.
#
# A few miscellaneous platform-specific items:
# TEA_ADD_* any platform specific compiler/build info here.
#--------------------------------------------------------------------

#CLEANFILES="$CLEANFILES pkgIndex.tcl"
if test "${TEA_PLATFORM}" = "windows" ; then
    # Ensure no empty if clauses
    :
    #TEA_ADD_SOURCES([win/winFile.c])
    #TEA_ADD_INCLUDES([-I\"$(${CYGPATH} ${srcdir}/win)\"])
else
    # Ensure no empty else clauses
    :
    #TEA_ADD_SOURCES([unix/unixFile.c])
    #TEA_ADD_LIBS([-lsuperfly])
fi

#--------------------------------------------------------------------
# __CHANGE__
# Choose which headers you need.  Extension authors should try very
# hard to only rely on the Tcl public header files.  Internal headers
# contain private data structures and are subject to change without
# notice.
# This MUST be called after TEA_LOAD_TCLCONFIG / TEA_LOAD_TKCONFIG
#--------------------------------------------------------------------

TEA_PUBLIC_TCL_HEADERS
#TEA_PRIVATE_TCL_HEADERS

TEA_PUBLIC_TK_HEADERS
#TEA_PRIVATE_TK_HEADERS
#TEA_PATH_X

#--------------------------------------------------------------------
# Check whether --enable-threads or --disable-threads was given.
# This auto-enables if Tcl was compiled threaded.
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

CXX="$CC"
CXXFLAGS="$CFLAGS"
AC_SUBST(CXX)
AC_SUBST(CXXFLAGS)

#--------------------------------------------------------------------
# Set the default compiler switches based on the --enable-symbols option.
#--------------------------------------------------------------------

TEA_ENABLE_SYMBOLS

#--------------------------------------------------------------------
# This macro generates a line to use when building a library.  It
# depends on values set by the TEA_ENABLE_SHARED, TEA_ENABLE_SYMBOLS,
# and TEA_LOAD_TCLCONFIG macros above.
#--------------------------------------------------------------------

TEA_MAKE_LIB

#--------------------------------------------------------------------
# Determine the name of the tclsh and/or wish executables in the
# Tcl and Tk build directories or the location they were installed
# into. These paths are used to support running test cases only,
# the Makefile should not be making use of these paths to generate
# a pkgIndex.tcl file or anything else at extension build time.
#--------------------------------------------------------------------

TEA_PROG_TCLSH
#TEA_PROG_WISH

#--------------------------------------------------------------------
# Load libxml2 configuration
#--------------------------------------------------------------------

AC_MSG_CHECKING([for xml2-config script])

AC_ARG_WITH(xml2-config,
    [  --with-xml2-config      the xml2-config configuration script],
    with_xml2_config=${withval})

LIBXML2_CONFIG=
if test "x${with_xml2_config}" = "x" ; then
    for c in \
	${prefix}/bin/xml2-config \
	/usr/bin/xml2-config \
	/usr/local/bin/xml2-config
    do
	if test -x "$c" ; then
	    LIBXML2_CONFIG="$c"
	    break
	fi
    done
else
    LIBXML2_CONFIG="${with_xml2_config}"
fi
if test "x$LIBXML2_CONFIG" = "x" ; then
    AC_MSG_ERROR([unable to find xml2-config])
else
    AC_MSG_RESULT([${LIBXML2_CONFIG}])
    XML2_CFLAGS=`${LIBXML2_CONFIG} --cflags`
    XML2_LIBS="`${LIBXML2_CONFIG} --libs`"
fi

AC_SUBST(XML2_CFLAGS)
AC_SUBST(XML2_LIBS)

#--------------------------------------------------------------------
# Setup a *Config.sh.in configuration file.
#--------------------------------------------------------------------

#TEA_EXPORT_CONFIG([sample])
#AC_SUBST(SAMPLE_VAR)

#--------------------------------------------------------------------
# Specify files to substitute AC variables in. You may alternatively
# have a special pkgIndex.tcl.in or other files which require
# substituting the AC variables in. Include these here.
#--------------------------------------------------------------------

AC_CONFIG_FILES([Makefile])
#AC_CONFIG_FILES([sampleConfig.sh])

#--------------------------------------------------------------------
# Finally, substitute all of the various values into the files
# specified with AC_CONFIG_FILES.
#--------------------------------------------------------------------

AC_OUTPUT()
