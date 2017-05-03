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

AC_INIT([saods9], [7.6])

#--------------------------------------------------------------------
# Call TEA_INIT as the first TEA_ macro to set up initial vars.
# This will define a ${TEA_PLATFORM} variable == "unix" or "windows"
# as well as PKG_LIB_FILE and PKG_STUB_LIB_FILE.
#--------------------------------------------------------------------

TEA_INIT([3.10])

AC_CONFIG_AUX_DIR(../tclconfig)

#--------------------------------------------------------------------

AC_ARG_WITH([arch],AC_HELP_STRING([--with-arch],[build name]),[],[with_arch=unknown])

OS="win"
AC_SUBST(OS)

ARCH=$with_arch
AC_SUBST(ARCH)

case $with_arch in
    win32 | WIN32 )
	CONFIGFLAGS='CC=i686-w64-mingw32-gcc AR=i686-w64-mingw32-ar'
	CROSSCOMPILE=i686-w64-mingw32-
	ENABLE64BIT=
	TARGET=i686-unknown-mingw32
	;;
    win64 | WIN64 | *)
	CONFIGFLAGS='CC=x86_64-w64-mingw32-gcc AR=x86_64-w64-mingw32-ar'
	CROSSCOMPILE=x86_64-w64-mingw32-
	ENABLE64BIT=--enable-64bit
	TARGET=x86_64-unknown-mingw32
	;;
esac
AC_SUBST(CONFIGFLAGS)
AC_SUBST(CROSSCOMPILE)
AC_SUBST(ENABLE64BIT)
AC_SUBST(TARGET)

prefix=$ac_pwd
exec_prefix=$ac_pwd

CORES=`grep -c ^processor /proc/cpuinfo`
AC_SUBST(CORES)

AC_OUTPUT([Makefile])

