In order to build TkDND with cmake, the following software is required:

a) cmake, version 3.2 or newer.

Compiling TkDND with cmake:
-------------------------------------------------------

1) Change the working directory to "cmake".

2) Execute the following commands (all commands must be executed from the
   "cmake" directory):

   cmake -E make_directory build
   cmake -E chdir build cmake -DCMAKE_INSTALL_PREFIX=../runtime ../..
   cmake --build build --target all --clean-first
   cmake --build build --target install

3) Compile for 64 bits under Windows (for Visual Studio 2017):

   cmake -E make_directory build_64
   cmake -E chdir build_64 cmake -G "Visual Studio 15 2017 Win64" -DCMAKE_INSTALL_PREFIX=../runtime  ../..
   cmake --build build_64 --config Release --target install

   -G "..." can be set to any of the available 64-bit generators available under
   the platform.

4) Specify Tcl at a non standard location:

   cmake -E make_directory build_64
   cmake -E chdir build_64 cmake -G "Visual Studio 15 2017 Win64" -Dwith-tcl=C:/TclApps/Tcl64/lib -DCMAKE_INSTALL_PREFIX=../runtime ../..
   cmake --build build_64 --config Release --target install
