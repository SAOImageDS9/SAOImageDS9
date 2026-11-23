# TktableConfig.sh --
#
# This shell script (for sh) is generated automatically by Tktable's
# configure script.  It will create shell variables for most of
# the configuration options discovered by the configure script.
# This script is intended to be included by the configure scripts
# for Tktable extensions so that they don't have to figure this all
# out for themselves.  This file does not duplicate information
# already provided by tclConfig.sh, so you may need to use that
# file in addition to this one.
#
# The information in this file is specific to a single platform.

# Tktable's version number.
Tktable_VERSION='2.12.2'

# The name of the Tktable library (may be either a .a file or a shared library):
Tktable_LIB_FILE=libtcl9Tktable2.12.2.a

# String to pass to linker to pick up the Tktable library from its
# build directory.
Tktable_BUILD_LIB_SPEC='-L/scratch1/kjg/DS9/build_from_source/SAOImageDS9/ds9_pkgs_update/tktable -lTktable2.12.2'

# String to pass to linker to pick up the Tktable library from its
# installed directory.
Tktable_LIB_SPEC='-L/scratch1/kjg/DS9/build_from_source/SAOImageDS9/ds9_pkgs_update/lib/Tktable2.12.2 -lTktable2.12.2'

# The name of the Tktable stub library (a .a file):
#Tktable_STUB_LIB_FILE=libTktablestub.a

# String to pass to linker to pick up the Tktable stub library from its
# build directory.
#Tktable_BUILD_STUB_LIB_SPEC='-L/scratch1/kjg/DS9/build_from_source/SAOImageDS9/ds9_pkgs_update/tktable -lTktablestub'

# String to pass to linker to pick up the Tktable stub library from its
# installed directory.
#Tktable_STUB_LIB_SPEC='-L/scratch1/kjg/DS9/build_from_source/SAOImageDS9/ds9_pkgs_update/lib/Tktable2.12.2 -lTktablestub'

# String to pass to linker to pick up the Tktable stub library from its
# build directory.
#Tktable_BUILD_STUB_LIB_PATH='/scratch1/kjg/DS9/build_from_source/SAOImageDS9/ds9_pkgs_update/tktable/libTktablestub.a'

# String to pass to linker to pick up the Tktable stub library from its
# installed directory.
#Tktable_STUB_LIB_PATH='/scratch1/kjg/DS9/build_from_source/SAOImageDS9/ds9_pkgs_update/lib/Tktable2.12.2/libTktablestub.a'
