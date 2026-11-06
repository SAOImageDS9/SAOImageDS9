###############################################################################
##
## Makefile - Microsoft Visual C++ makefile
##
###############################################################################

##
## Please, update the following parameters to reflect your system.
##

## Location of the Tcl installation:
TCL			= C:\Program Files\Tcl
TCL_VERSION		= 8.5  # or 8.6
TCL_VERSION_NO_DOTS	= 85   # or 86
MACHINE			= I386 # or AMD64 

TKDND_VERSION		= 2.9
TKDND_VERSION_NO_DOTS	= 29

##
## Usage:
## nmake -f Makefile
##

##
## No need to modify below this point...
##

!if !exist("makefile.vc") && !exist("makefile")
MSG = ^
You must run this makefile only from the directory it is in.^
Please `cd` to its location first.
!error $(MSG)
!endif

## Include directories:
INCDIR	= -I"$(TCL)\include" \
	  -I"$(TCL)\include$(TCL_VERSION)"

## Library directories:
LIBDIR = -libpath:"$(TCL)\lib"

## Declarations common to all compiler options:
cflags	= -nologo -c -W3 -MT -EHsc -YX -FD -O2 -Op -Gs -LD \
	  -D "WIN32" -D "NDEBUG" -D "_WINDOWS" -D "_MBCS" \
	  -D "_USRDLL" -D "USE_TCL_STUBS" -D "USE_TK_STUBS" \
	  -D _CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES=1 \
	  -D _CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES_COUNT=1 \
	  -D _CRT_SECURE_NO_WARNINGS

## Declarations common to all linker options
lflags	= -nologo -machine:$(MACHINE) -subsystem:windows -release \
	  -opt:ref -opt:icf,3 -dll \
	  -incremental:no -nodefaultlib:"MSVCRT.LIB"

LIBS	= kernel32.lib user32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib

cc32	= $(CC)   # built-in default.
link32	= link
lib32	= lib
MKDIR	= mkdir
MV	= move
CP	= copy
RM	= del
RMDIR	= rmdir /S /Q

all:
	$(cc32) $(cflags) $(INCDIR) TkDND_OleDND.cpp \
	  -D PACKAGE_NAME="\"tkdnd\"" -D PACKAGE_VERSION="\"$(TKDND_VERSION)\"" 
	$(link32) $(lflags) $(LIBDIR) tclstub$(TCL_VERSION_NO_DOTS).lib \
          tkstub$(TCL_VERSION_NO_DOTS).lib $(LIBS)\
	  TkDND_OleDND.obj -out:"..\libtkdnd$(TKDND_VERSION_NO_DOTS).dll"
	$(RM) ..\*.exp *.idb *.pch *.obj

install:
	-$(MKDIR) /S "$(TCL)\lib\tkdnd$(TKDND_VERSION)"
	$(CP) /Y ..\library\*.* "$(TCL)\lib\tkdnd$(TKDND_VERSION)"
	$(CP) /Y ..\libtkdnd$(TKDND_VERSION_NO_DOTS).dll "$(TCL)\lib\tkdnd$(TKDND_VERSION)"
	$(CP) /Y ..\libtkdnd$(TKDND_VERSION_NO_DOTS).lib "$(TCL)\lib\tkdnd$(TKDND_VERSION)\tkdnd$(TKDND_VERSION_NO_DOTS).lib"
	
	echo package ifneeded tkdnd $(TKDND_VERSION) \
	  "source \{$$dir/tkdnd.tcl\}; \
	  tkdnd::initialise \{$$dir\} libtkdnd$(TKDND_VERSION_NO_DOTS)[info sharedlibextension] tkdnd" >pkgIndex.tcl
	$(MV) /Y pkgIndex.tcl "$(TCL)\lib\tkdnd$(TKDND_VERSION)" 
