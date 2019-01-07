#! /bin/sh
#
# Trying to generate a loadable module for Tcl/Tk8.1.1 on
# WindowsNT using Cygwin20 cross-compiler running under
# RedHat6.0.

# Step -1:
# Make a copy of winsock.h into winsock2.h.  "Winsock2.h" is needed by 
# tclWinPort.h.  tclWinPort.h is included by tclStubLib.c in step 3.
#

# Step 0:
# Make sure the cross-compiler tools are on PATH and remove
# old files.
#
PATH=$PATH:/opt/cygwin20/bin
rm -f simple.o stublib.o simple.dll

# Step 1:
# Generate the C source code into "simple.c"
#
cat >simple.c <<\END
#include <tcl.h>

int Simple_Init(Tcl_Interp *interp){
  Tcl_InitStubs(interp,"8.1",0);
  Tk_InitStubs(interp,"8.1",0);
  return TCL_OK;
}
END

# Step 2:
# Compile the C source code yielding simple.o
#
i586-cygwin32-gcc \
  -I/home/drh/tcltk/tcl8.1.1/generic \
  -mno-cygwin \
  -DUSE_TCL_STUBS=1 \
  -c simple.c

# Step 3:
# Compile the Stub libraries yielding tclstub.o and tkstub.o
#
i586-cygwin32-gcc \
  -I/home/drh/tcltk/tcl8.1.1/generic \
  -I/home/drh/tcltk/tcl8.1.1/win \
  -mno-cygwin \
  -o tclstub.o \
  -c /home/drh/tcltk/tcl8.1.1/generic/tclStubLib.c 
i586-cygwin32-gcc \
  -I/home/drh/tcltk/tcl8.1.1/generic \
  -I/home/drh/tcltk/tcl8.1.1/win \
  -I/home/drh/tcltk/tk8.1.1/generic \
  -I/home/drh/tcltk/tk8.1.1/win \
  -I/home/drh/tcltk/tk8.1.1/xlib \
  -mno-cygwin \
  -o tkstub.o \
  -c /home/drh/tcltk/tk8.1.1/generic/tkStubLib.c 

# Step 4:
# Generate the DEF file
#
cat >simple.def <<\END
EXPORTS
Simple_Init
END

# Step 5:
# Use dllwrap to build the DLL.  Note: tclstub81.lib is copied out
# of the binary tk8.1 distribution from Scriptics.
#
i586-cygwin32-dllwrap \
  --def simple.def \
  -v \
  --driver-name i586-cygwin32-gcc \
  --dlltool-name i586-cygwin32-dlltool \
  --as i586-cygwin32-as \
  --dllname simple.dll \
  --target i386-mingw32 -mno-cygwin \
  simple.o tclstub.o tkstub.o
