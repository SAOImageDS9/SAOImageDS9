	Windows DLL Build instructions using nmake build system
	2020-10-15 Harald.Oehlmann@elmicron.de
	2023-04-23 Brian O'Hagan

Properties:
- 64 bit DLL
- VisualStudio 2015
Note: Visual C++ 6 does not build OpenSSL (long long syntax error)
- Git MinGW or MS WSL shell to convert tls.tcl into .h file
- OpenSSL statically linked to TCLTLS DLL.
Note: Dynamic linking also works but results in a DLL dependency on OPENSSL DLL's

-----------------------------

1) Build OpenSSL static libraries:

set SSLBUILD=\path\to\build\dir
set SSLINSTALL=\path\to\install\dir
set SSLCOMMON=\path\to\common\dir

(1a) Get OpenSSL

  https://github.com/openssl/openssl/releases/download/OpenSSL_1_1_1t/openssl-1.1.1t.tar.gz

  Unpack OpenSSL source distribution to %SSLBUILD%

(1b) Install Perl from https://strawberryperl.com/

  https://strawberryperl.com/download/5.32.1.1/strawberry-perl-5.32.1.1-64bit.msi
  Install to C:\Strawberry\perl

(1c) Install NASM Assembler from https://www.nasm.us/

  https://www.nasm.us/pub/nasm/releasebuilds/2.16.01/win64/nasm-2.16.01-installer-x64.exe
  Install to: C:\Program Files\NASM

(1d) Configure Open SSL 1.1.1

  At Visual Studio x64 native prompt:

  cd %SSLBUILD%
  set Path=%PATH%;C:\Program Files\NASM;C:\Strawberry\perl\bin
  perl ..\Configure VC-WIN64A no-shared no-filenames threads no-ssl2 no-ssl3 --api=1.1.0 --prefix="%SSLINSTALL%" --openssldir="%SSLCOMMON%" -DOPENSSL_NO_DEPRECATED
  # Not used options: no-asm no-zlib no-comp no-ui-console no-autoload-config

(1e) Configure Open SSL 3.0+

  At Visual Studio x64 native prompt:

  cd %SSLBUILD%
  set Path=%PATH%;C:\Program Files\NASM;C:\Strawberry\perl\bin
  perl ..\Configure VC-WIN64A no-shared no-filenames threads no-ssl2 no-ssl3 --prefix="%SSLINSTALL%" --openssldir="%SSLCOMMON%"
  # Not used options: no-asm no-zlib no-comp no-ui-console no-autoload-config

(1f) Build OpenSSL

  nmake
  nmake test
  nmake install

-----------------------------

2) Build TclTLS

  set BUILDDIR=\path\to\build\tcltls
  set TCLINSTALL=\path\to\tcl
  set INSTALLDIR=%TCLINSTALL%\lib
  set SSLINSTALL=\path\to\openssl\dir

2a) Unzip distribution to %BUILDDIR%

2b) Start Visual Studio shell

  At Visual Studio x64 native prompt:

  cd %BUILDDIR%\win

  nmake -f makefile.vc TCLDIR=%TCLINSTALL% SSL_INSTALL_FOLDER=%SSLINSTALL%
  nmake -f makefile.vc install TCLDIR=%TCLINSTALL% INSTALLDIR=%INSTALLDIR% SSL_INSTALL_FOLDER=%SSLINSTALL%

-----------------------------

3) Test

Start tclsh or wish

package require tls
package require http
http::register https 443 [list ::tls::socket -autoservername true]
set tok [http::data [http::geturl https://www.tcl-lang.org]]
::http::cleanup $tok
