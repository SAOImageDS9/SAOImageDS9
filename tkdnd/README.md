# TkDND
TkDND is an extension that adds native drag & drop capabilities to the [Tk](https://www.tcl-lang.org/) toolkit.

It can be used with any Tk version equal or greater to **8.4** and currently only the UNIX (X-Windows), Microsoft Windows (XP, Vista, 7, 8, 8.1, 10, 11) and macOS (10.5+) operating systems are supported (under macOS Tk version **8.5** is required).

## Current Travis/AppVeyor CI build status for TkDND:

| OS | Master Branch |
---|---
| Linux, x86, x86-64, Tcl/Tk 8.6 <br> Windows, x86, x86-64, Tcl/Tk 8.6 <br> macOS Sonoma, x86-64, Tcl/Tk 9.0 (Homebrew) | [![Build status](https://ci.appveyor.com/api/projects/status/vfnx40w79dqsox1y/branch/master?svg=true)](https://ci.appveyor.com/project/petasis/tkdnd/branch/master) |
<!---

[//]: # (| Linux: Ubuntu Xenial 16.04, x86-64, Tcl/Tk 8.6 | [![Build Status](https://app.travis-ci.com/petasis/tkdnd.svg?branch=master)](https://app.travis-ci.com/github/petasis/tkdnd) |)
[//]: # (| macOS: macOS 10.13, x86-64, Tcl/Tk 8.5 | [![Build Status](https://app.travis-ci.com/petasis/tkdnd.svg?branch=master)](https://app.travis-ci.com/github/petasis/tkdnd) |)
[//]: # (| macOS: macOS 12.6, x86-64, Tcl/Tk 8.6 (Homebrew) | [![Build Status](https://app.travis-ci.com/petasis/tkdnd.svg?branch=master)](https://app.travis-ci.com/github/petasis/tkdnd) |)
-->

## Installation
### Requirements
  * An installation of Tcl/Tk, with version >= 8.4 (>= 8.5 for macOS). The Tcl/Tk installation must contain the files tclConfig.sh, tkConfig.sh and the development libraries, under Unix/Linux/OSX/Windows, if you want to use configure/make. The files tclConfig.sh, and tkConfig.sh are not required if you want to use [CMake](https://cmake.org/).
  * [CMake](https://cmake.org/), version >= 3.5.
  * A working C/C++ compiler.
  * tclsh/wish must be in the PATH environmental variable. Typing `tclsh` in a command prompt/terminal, must run the executable from the Tcl/Tk installation TkDND will be built against.

### Build with CMake (the suggested way)
CMake is a cross-platform family of tools designed to build, test and package software. In order to build TkDND with CMake, perform the following steps:

#### Windows
##### Visual Studio
Execute the tools command prompt, according to the desired architecture (32/64 bits - it must match the architecture of the Tcl/Tk installation). For 32-bits build, execute the "x86 Native Tools Command Prompt for VS 2017", and for 64-bits execute the "x86 Native Tools Command Prompt for VS 2017". You can download the Visual Studio Community edition for free, from Microsoft: [https://visualstudio.microsoft.com/vs/community/](https://visualstudio.microsoft.com/vs/community/).

After the command prompt has opened, execute the following:

    cd <tkdnd-src-directory>/cmake
    build.bat (for 32-bit) or build64.bat (for 64-bits)

If system detection has completed without errors, two new directories will be created, `debug-nmake-x86_32` and `release-nmake-x86_32`, for building debug/release builds for 32-bits, or `debug-nmake-x86_64` and `release-nmake-x86_64` for building debug/release builds for 64-bits.

For building a(ny) release:

    cd release-nmake-x86_64
    nmake install

The resulting binaries will be placed in `<tkdnd-src-directory>/cmake/runtime` directory.

The whole process should like like the following output:

    D:\Users\petasis\tkdnd\cmake>build64
    -- The C compiler identification is MSVC 19.14.26431.0
    -- The CXX compiler identification is MSVC 19.14.26431.0
    -- Check for working C compiler: C:/Program Files (x86)/Microsoft Visual Studio/2017/Community/VC/Tools/MSVC/14.14.26428/bin/Hostx64/x64/cl.exe
    -- Check for working C compiler: C:/Program Files (x86)/Microsoft Visual Studio/2017/Community/VC/Tools/MSVC/14.14.26428/bin/Hostx64/x64/cl.exe -- works
    -- Detecting C compiler ABI info
    -- Detecting C compiler ABI info - done
    -- Detecting C compile features
    -- Detecting C compile features - done
    -- Check for working CXX compiler: C:/Program Files (x86)/Microsoft Visual Studio/2017/Community/VC/Tools/MSVC/14.14.26428/bin/Hostx64/x64/cl.exe
    -- Check for working CXX compiler: C:/Program Files (x86)/Microsoft Visual Studio/2017/Community/VC/Tools/MSVC/14.14.26428/bin/Hostx64/x64/cl.exe -- works
    -- Detecting CXX compiler ABI info
    -- Detecting CXX compiler ABI info - done
    -- Detecting CXX compile features
    -- Detecting CXX compile features - done
    -- Looking for include file Strsafe.h
    -- Looking for include file Strsafe.h - found
    -- ===========================================================
    --  Welcome to the tkdnd 2.9 build system!
    --   * Selected generator:  NMake Makefiles
    --   * Operating System ID: Windows-10.0.17134-AMD64
    --   * Installation Directory: D:/Users/petasis/tkdnd/cmake/runtime
    -- ===========================================================
    -- Searching for Tcl/Tk...
    -- Found Tclsh: C:/dev/ActiveTcl64/bin/tclsh.exe (found version "8.6")
    -- Found TCL: C:/dev/ActiveTcl64/lib/tcl86t.lib
    -- Found TCLTK: C:/dev/ActiveTcl64/lib/tcl86t.lib
    -- Found TK: C:/dev/ActiveTcl64/lib/tk86t.lib
    --   TCL_TCLSH:               C:/dev/ActiveTcl64/bin/tclsh.exe
    --   TCL_INCLUDE_PATH:        C:/dev/ActiveTcl64/include
    --   TCL_STUB_LIBRARY:        C:/dev/ActiveTcl64/lib/tclstub86.lib
    --   TCL_LIBRARY:             C:/dev/ActiveTcl64/lib/tcl86t.lib
    --   TK_WISH:                 C:/dev/ActiveTcl64/bin/wish.exe
    --   TK_INCLUDE_PATH:         C:/dev/ActiveTcl64/include
    --   TK_STUB_LIBRARY:         C:/dev/ActiveTcl64/lib/tkstub86.lib
    --   TK_LIBRARY:              C:/dev/ActiveTcl64/lib/tk86t.lib
    --       + Shared Library: tkdnd
    -- Configuring done
    -- Generating done
    -- Build files have been written to: D:/Users/petasis/tkdnd/cmake/debug-nmake-x86_64
    -- The C compiler identification is MSVC 19.14.26431.0
    -- The CXX compiler identification is MSVC 19.14.26431.0
    -- Check for working C compiler: C:/Program Files (x86)/Microsoft Visual Studio/2017/Community/VC/Tools/MSVC/14.14.26428/bin/Hostx64/x64/cl.exe
    -- Check for working C compiler: C:/Program Files (x86)/Microsoft Visual Studio/2017/Community/VC/Tools/MSVC/14.14.26428/bin/Hostx64/x64/cl.exe -- works
    -- Detecting C compiler ABI info
    -- Detecting C compiler ABI info - done
    -- Detecting C compile features
    -- Detecting C compile features - done
    -- Check for working CXX compiler: C:/Program Files (x86)/Microsoft Visual Studio/2017/Community/VC/Tools/MSVC/14.14.26428/bin/Hostx64/x64/cl.exe
    -- Check for working CXX compiler: C:/Program Files (x86)/Microsoft Visual Studio/2017/Community/VC/Tools/MSVC/14.14.26428/bin/Hostx64/x64/cl.exe -- works
    -- Detecting CXX compiler ABI info
    -- Detecting CXX compiler ABI info - done
    -- Detecting CXX compile features
    -- Detecting CXX compile features - done
    -- Looking for include file Strsafe.h
    -- Looking for include file Strsafe.h - found
    -- ===========================================================
    --  Welcome to the tkdnd 2.9 build system!
    --   * Selected generator:  NMake Makefiles
    --   * Operating System ID: Windows-10.0.17134-AMD64
    --   * Installation Directory: D:/Users/petasis/tkdnd/cmake/runtime
    -- ===========================================================
    -- Searching for Tcl/Tk...
    -- Found Tclsh: C:/dev/ActiveTcl64/bin/tclsh.exe (found version "8.6")
    -- Found TCL: C:/dev/ActiveTcl64/lib/tcl86t.lib
    -- Found TCLTK: C:/dev/ActiveTcl64/lib/tcl86t.lib
    -- Found TK: C:/dev/ActiveTcl64/lib/tk86t.lib
    --   TCL_TCLSH:               C:/dev/ActiveTcl64/bin/tclsh.exe
    --   TCL_INCLUDE_PATH:        C:/dev/ActiveTcl64/include
    --   TCL_STUB_LIBRARY:        C:/dev/ActiveTcl64/lib/tclstub86.lib
    --   TCL_LIBRARY:             C:/dev/ActiveTcl64/lib/tcl86t.lib
    --   TK_WISH:                 C:/dev/ActiveTcl64/bin/wish.exe
    --   TK_INCLUDE_PATH:         C:/dev/ActiveTcl64/include
    --   TK_STUB_LIBRARY:         C:/dev/ActiveTcl64/lib/tkstub86.lib
    --   TK_LIBRARY:              C:/dev/ActiveTcl64/lib/tk86t.lib
    --       + Shared Library: tkdnd
    -- Configuring done
    -- Generating done
    -- Build files have been written to: D:/Users/petasis/tkdnd/cmake/release-nmake-x86_64
    
    D:\Users\petasis\tkdnd\cmake>cd release-nmake-x86_64
    
    D:\Users\petasis\tkdnd\cmake\release-nmake-x86_64>nmake install
    
    Microsoft (R) Program Maintenance Utility Version 14.14.26431.0
    Copyright (C) Microsoft Corporation.  All rights reserved.
    
    Scanning dependencies of target tkdnd2.9
    [ 50%] Building CXX object CMakeFiles/tkdnd2.9.dir/win/TkDND_OleDND.cpp.obj
    TkDND_OleDND.cpp
    [100%] Linking CXX shared library libtkdnd2.9.dll
    tclstub86.lib(tclStubLib.obj) : MSIL .netmodule or module compiled with /GL found; restarting link with /LTCG; add /LTCG to the link command line to improve linker performance
       Creating library tkdnd2.9.lib and object tkdnd2.9.exp
    Generating code
    Finished generating code
    [100%] Built target tkdnd2.9
    Install the project...
    -- Install configuration: "Release"
    -- Installing: D:/Users/petasis/tkdnd/cmake/runtime/tkdnd2.9/tkdnd2.9.lib
    -- Installing: D:/Users/petasis/tkdnd/cmake/runtime/tkdnd2.9/libtkdnd2.9.dll
    -- Installing: D:/Users/petasis/tkdnd/cmake/runtime/tkdnd2.9/pkgIndex.tcl
    -- Up-to-date: D:/Users/petasis/tkdnd/cmake/runtime/tkdnd2.9/tkdnd.tcl
    -- Up-to-date: D:/Users/petasis/tkdnd/cmake/runtime/tkdnd2.9/tkdnd_generic.tcl
    -- Up-to-date: D:/Users/petasis/tkdnd/cmake/runtime/tkdnd2.9/tkdnd_compat.tcl
    -- Up-to-date: D:/Users/petasis/tkdnd/cmake/runtime/tkdnd2.9/tkdnd_macosx.tcl
    -- Up-to-date: D:/Users/petasis/tkdnd/cmake/runtime/tkdnd2.9/tkdnd_unix.tcl
    -- Up-to-date: D:/Users/petasis/tkdnd/cmake/runtime/tkdnd2.9/tkdnd_windows.tcl
    
### Unix, Linux
Open a terminal and execute the following:

    cd <tkdnd-src-directory>/cmake
    bash build.sh (for 32-bit) or bash build64.sh (for 64-bits)

If system detection has completed without errors, two new directories will be created, `debug-nmake-x86_32` and `release-nmake-x86_32`, for building debug/release builds for 32-bits, or `debug-nmake-x86_64` and `release-nmake-x86_64` for building debug/release builds for 64-bits.

For building a(ny) release:

    cd release-nmake-x86_64
    make install

The resulting binaries will be placed in `<tkdnd-src-directory>/cmake/runtime` directory.

The whole process should like like the following output:

    $ bash build64.sh
    -- The C compiler identification is GNU 8.1.1
    -- The CXX compiler identification is GNU 8.1.1
    -- Check for working C compiler: /usr/bin/gcc
    -- Check for working C compiler: /usr/bin/gcc -- works
    -- Detecting C compiler ABI info
    -- Detecting C compiler ABI info - done
    -- Detecting C compile features
    -- Detecting C compile features - done
    -- Check for working CXX compiler: /usr/bin/g++
    -- Check for working CXX compiler: /usr/bin/g++ -- works
    -- Detecting CXX compiler ABI info
    -- Detecting CXX compiler ABI info - done
    -- Detecting CXX compile features
    -- Detecting CXX compile features - done
    -- Searching for X11...
    -- Looking for XOpenDisplay in /usr/lib64/libX11.so;/usr/lib64/libXext.so
    -- Looking for XOpenDisplay in /usr/lib64/libX11.so;/usr/lib64/libXext.so - found
    -- Looking for gethostbyname
    -- Looking for gethostbyname - found
    -- Looking for connect
    -- Looking for connect - found
    -- Looking for remove
    -- Looking for remove - found
    -- Looking for shmat
    -- Looking for shmat - found
    -- Found X11: /usr/lib64/libX11.so
    --   X11_INCLUDE_DIR:         /usr/include
    --   X11_LIBRARIES:           /usr/lib64/libX11.so/usr/lib64/libXext.so
    -- ===========================================================
    --  Welcome to the tkdnd 2.9 build system!
    --   * Selected generator:  Unix Makefiles
    --   * Operating System ID: Linux-4.16.16-300.fc28.x86_64-x86_64
    --   * Installation Directory: /home/petasis/tkdnd/cmake/runtime
    -- ===========================================================
    -- Searching for Tcl/Tk...
    -- Found Tclsh: /bin/tclsh (found version "8.6")
    -- Found TCL: /usr/lib64/libtcl.so
    -- Found TCLTK: /usr/lib64/libtcl.so
    -- Found TK: /usr/lib64/libtk.so
    --   TCL_TCLSH:               /bin/tclsh
    --   TCL_INCLUDE_PATH:        /usr/include
    --   TCL_STUB_LIBRARY:        /usr/lib64/libtclstub8.6.a
    --   TCL_LIBRARY:             /usr/lib64/libtcl.so
    --   TK_WISH:                 /bin/wish
    --   TK_INCLUDE_PATH:         /usr/include
    --   TK_STUB_LIBRARY:         /usr/lib64/libtkstub8.6.a
    --   TK_LIBRARY:              /usr/lib64/libtk.so
    --       + Shared Library: tkdnd
    -- Configuring done
    -- Generating done
    -- Build files have been written to: /home/petasis/tkdnd/cmake/debug-nmake-x86_64
    -- The C compiler identification is GNU 8.1.1
    -- The CXX compiler identification is GNU 8.1.1
    -- Check for working C compiler: /usr/bin/gcc
    -- Check for working C compiler: /usr/bin/gcc -- works
    -- Detecting C compiler ABI info
    -- Detecting C compiler ABI info - done
    -- Detecting C compile features
    -- Detecting C compile features - done
    -- Check for working CXX compiler: /usr/bin/g++
    -- Check for working CXX compiler: /usr/bin/g++ -- works
    -- Detecting CXX compiler ABI info
    -- Detecting CXX compiler ABI info - done
    -- Detecting CXX compile features
    -- Detecting CXX compile features - done
    -- Searching for X11...
    -- Looking for XOpenDisplay in /usr/lib64/libX11.so;/usr/lib64/libXext.so
    -- Looking for XOpenDisplay in /usr/lib64/libX11.so;/usr/lib64/libXext.so - found
    -- Looking for gethostbyname
    -- Looking for gethostbyname - found
    -- Looking for connect
    -- Looking for connect - found
    -- Looking for remove
    -- Looking for remove - found
    -- Looking for shmat
    -- Looking for shmat - found
    -- Found X11: /usr/lib64/libX11.so
    --   X11_INCLUDE_DIR:         /usr/include
    --   X11_LIBRARIES:           /usr/lib64/libX11.so/usr/lib64/libXext.so
    -- ===========================================================
    --  Welcome to the tkdnd 2.9 build system!
    --   * Selected generator:  Unix Makefiles
    --   * Operating System ID: Linux-4.16.16-300.fc28.x86_64-x86_64
    --   * Installation Directory: /home/petasis/tkdnd/cmake/runtime
    -- ===========================================================
    -- Searching for Tcl/Tk...
    -- Found Tclsh: /bin/tclsh (found version "8.6")
    -- Found TCL: /usr/lib64/libtcl.so
    -- Found TCLTK: /usr/lib64/libtcl.so
    -- Found TK: /usr/lib64/libtk.so
    --   TCL_TCLSH:               /bin/tclsh
    --   TCL_INCLUDE_PATH:        /usr/include
    --   TCL_STUB_LIBRARY:        /usr/lib64/libtclstub8.6.a
    --   TCL_LIBRARY:             /usr/lib64/libtcl.so
    --   TK_WISH:                 /bin/wish
    --   TK_INCLUDE_PATH:         /usr/include
    --   TK_STUB_LIBRARY:         /usr/lib64/libtkstub8.6.a
    --   TK_LIBRARY:              /usr/lib64/libtk.so
    --       + Shared Library: tkdnd
    -- Configuring done
    -- Generating done
    -- Build files have been written to: /home/petasis/tkdnd/cmake/release-nmake-x86_64
    
    $ cd release-nmake-x86_64
    $ make install
    Scanning dependencies of target tkdnd2.9
    [ 25%] Building C object CMakeFiles/tkdnd2.9.dir/unix/TkDND_XDND.c.o
    [ 50%] Building C object CMakeFiles/tkdnd2.9.dir/unix/tkUnixSelect.c.o
    [ 75%] Building C object CMakeFiles/tkdnd2.9.dir/unix/Cursors.c.o
    [100%] Linking C shared library libtkdnd2.9.so
    [100%] Built target tkdnd2.9
    Install the project...
    -- Install configuration: "Release"
    -- Installing: /home/petasis/tkdnd/cmake/runtime/tkdnd2.9/libtkdnd2.9.so
    -- Installing: /home/petasis/tkdnd/cmake/runtime/tkdnd2.9/pkgIndex.tcl
    -- Installing: /home/petasis/tkdnd/cmake/runtime/tkdnd2.9/tkdnd.tcl
    -- Installing: /home/petasis/tkdnd/cmake/runtime/tkdnd2.9/tkdnd_generic.tcl
    -- Installing: /home/petasis/tkdnd/cmake/runtime/tkdnd2.9/tkdnd_compat.tcl
    -- Installing: /home/petasis/tkdnd/cmake/runtime/tkdnd2.9/tkdnd_macosx.tcl
    -- Installing: /home/petasis/tkdnd/cmake/runtime/tkdnd2.9/tkdnd_unix.tcl
    -- Installing: /home/petasis/tkdnd/cmake/runtime/tkdnd2.9/tkdnd_windows.tcl

### Build with configure/make
#### Windows
##### G++ and MSYS2
If you don't want to use CMake, you can install MSYS2 and the G++ compiler (TkDND requires a C++ compiler for Windows). You can follow these instructions to install MSYS2:

[https://github.com/orlp/dev-on-windows/wiki/Installing-GCC--&-MSYS2](https://github.com/orlp/dev-on-windows/wiki/Installing-GCC--&-MSYS2)

After installing MSYS2, and making sure that your Tcl/Tk installation can be used from inside MSYS2 terminal, you can use the standard configure/make install procedure to build TkDND. You can automate the configuration process, by running in an MSYS2 terminal:

    cd <tkdnd-src-directory>
    tclsh tcl-conf
    make install

The resulting binaries will be placed in `<tkdnd-src-directory>/cmake/runtime` directory.

#### Unix, Linux
If you don't want to use CMake, you can use configure/make to build TkDND. Just open a terminal and execute the following:

    cd <tkdnd-src-directory>
    tclsh tcl-conf
    make install

The resulting binaries will be placed in `<tkdnd-src-directory>/cmake/runtime` directory.
