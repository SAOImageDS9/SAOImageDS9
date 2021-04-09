#!/bin/bash -norc
dnl	This file is an input file used by the GNU "autoconf" program to
dnl	generate the file "configure", which is run during Tcl installation
dnl	to configure the system for the local environment.

#-----------------------------------------------------------------------
# Sample configure.in for Tcl Extensions.  The only places you should
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

AC_INIT([saods9], [8.3])

#--------------------------------------------------------------------
# Call TEA_INIT as the first TEA_ macro to set up initial vars.
# This will define a ${TEA_PLATFORM} variable == "unix" or "windows"
# as well as PKG_LIB_FILE and PKG_STUB_LIB_FILE.
#--------------------------------------------------------------------

TEA_PLATFORM=windows
TEA_INIT()

AC_CONFIG_AUX_DIR(../tclconfig)

#-----------------------------------------------------------------------
# Standard compiler checks.
# This sets up CC by using the CC env var, or looks for gcc otherwise.
# This also calls AC_PROG_CC and a few others to create the basic setup
# necessary to compile executables.
#-----------------------------------------------------------------------

TEA_SETUP_COMPILER
AC_PROG_CXX

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

AC_ARG_WITH([arch],AC_HELP_STRING([--with-arch],[build name]),[],[with_arch=unknown])

OS="win"
AC_SUBST(OS)

ARCH=$with_arch
AC_SUBST(ARCH)

prefix=$ac_pwd
exec_prefix=$ac_pwd

case $with_arch in
    win32 | WIN32 )
	ENABLE64BIT=
	TARGET=i686-w64-mingw32
	;;
    win64 | WIN64 | *)
	ENABLE64BIT=--enable-64bit
	TARGET=x86_64-w64-mingw32
	;;
esac
XML2CONFIG=/usr/$TARGET/sys-root/mingw/bin/xml2-config
XSLTCONFIG=/usr/$TARGET/sys-root/mingw/bin/xslt-config
CORES=`grep -c ^processor /proc/cpuinfo`

AC_SUBST(XML2CONFIG)
AC_SUBST(XSLTCONFIG)
AC_SUBST(ENABLE64BIT)
AC_SUBST(TARGET)
AC_SUBST(CORES)

#--------------------------------------------------------------------
# Specify files to substitute AC variables in. You may alternatively
# have a special pkgIndex.tcl.in or other files which require
# substituting the AC variables in. Include these here.
#--------------------------------------------------------------------

AC_CONFIG_FILES([Makefile])

#--------------------------------------------------------------------
# Finally, substitute all of the various values into the files
# specified with AC_CONFIG_FILES.
#--------------------------------------------------------------------

AC_OUTPUT()

