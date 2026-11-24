/*
 * Conceptually based on Tk3 table widget by Roland King (rols@lehman.com)
 *
 * see ChangeLog file for details
 *
 * current maintainer: jeff at hobbs org
 *
 * Copyright 1997-2002, Jeffrey Hobbs (jeff@hobbs.org)
 */

		**************************************
		  The Tk Table Widget - Version 2.12
		**************************************

INTRODUCTION
============

TkTable is a table/matrix widget extension to tk/tcl. The basic features of the
widget are:

 * multi-line cells
 * support for embedded windows (one per cell)
 * row & column spanning
 * variable width columns / height rows (interactively resizable)
 * row and column titles
 * multiple data sources ((Tcl array || Tcl command) &| internal caching)
 * supports standard Tk reliefs, fonts, colors, etc.
 * x/y scrollbar support
 * 'tag' styles per row, column or cell to change visual appearance
 * in-cell editing - returns value back to data source
 * support for disabled (read-only) tables or cells (via tags)
 * multiple selection modes, with "active" cell
 * multiple drawing modes to get optimal performance for larger tables
 * optional 'flashes' when things update
 * cell validation support
 * Works everywhere Tk does (including Windows and Mac!)
 * Unicode support (Tk8.1+)


INSTALLATION
============

This package uses the TCL Extension Architecture (TEA). Please see the web page
http://www.tcl.tk/doc/tea/ for more information about TEA. It supports all of
the standard TCL configure script options.

Uncompress and unpack the distribution

   ON UNIX and OS X:
	gzip -cd Tktable<version>.tar.gz | tar xf -

   ON WINDOWS:
	use something like WinZip to unpack the archive.
    
   This will create a subdirectory tkTable<version> with all the files in it.


PYTHON BUILD
============
This package only contains the files needed to build TkTable for TCL/Tk. For
Python, see the https://github.com/nbro/tktable repo for the wrapper source,
https://github.com/nbro/pytktable-binaries for the binaries, or PyTkTable
in PyPI https://pypi.org/project/pytktable/.


UNIX BUILD
==========

Building under most UNIX systems is easy, just run the configure script and
then run make. Use ./configure --help to get the supported options. 

The following examples use the tclConfig.sh script. This script comes with the
installation of Tcl and contains useful data about the installation.

UNIX/Linux
----------

To install Tcl, use e.g. 'apt-get|yum install tcl-devel.<platform> tcllib'.
The tclConfig.sh script is located in the /usr/lib64/ directory.

	cd Tktable*
	./configure --enable-64bit --prefix=/usr --libdir=/usr/lib64/tcl -with-tcl=/usr/lib64 -with-tk=/usr/lib64
	make
	make test	(optional)
	make demo	(optional)
	make install

MacOSX
------

To install Tcl, use e.g. ActiveState Tcl distribution. The tclConfig.sh script
is located in the /Library/Frameworks/Tcl.framework/ folder.

	cd Tktable*
	./configure --with-tcl=/Library/Frameworks/Tcl.framework/ --with-tk=/Library/Frameworks/Tk.framework/
	make
	make test	(optional)
	make install


WINDOWS BUILD
=============

Visual Studio
-------------

To build and install TkTable, from the Command Prompt:

	cd Tktable*\win
	set INSTALLDIR=C:\TCL
	set TCL_SRC_DIR=C:\Source\Build\tcl
	set TK_SRC_DIR=C:\Source\Build\tk
	set VC_DIR=C:\Program Files (x86)\Microsoft Visual Studio 14.0\VC
	call "%VC_DIR%\vcvarsall.bat" amd64
	set PATH=%VC_DIR%\bin\amd64;%INSTALLDIR%\bin;%PATH%
	nmake -f makefile.vc INSTALLDIR=%INSTALLDIR% TCLDIR=%TCL_SRC_DIR% TKDIR=%TK_SRC_DIR% OPTS=msvcrt,threads,stubs
	nmake -f makefile.vc test INSTALLDIR=%INSTALLDIR%	(optional)
	nmake -f makefile.vc install INSTALLDIR=%INSTALLDIR%

Cygwin
------

Version 2.8 added support for building in the cygwin environment. Use the same
steps as UNIX/Linux.


DOCUMENTATION BUILD
===================

Use the following commands to create the documentation (based on udp.man file).
This uses the doctools package from tcllib, so tcllib must be installed first.

Linux and MacOS
---------------

	cd Tktable*
	make doc
	nroff -man ./doc/udp.n

Windows
-------

	cd Tktable*\win
	nmake -f win/makefile.vc docs INSTALLDIR=%INSTALLDIR%


USAGE
=====

	package require Tktable
	grid [table .tb]
	

PYTHON
======

There is a library/tktable.py wrapper for use with Python/Tkinter.


THINGS TO WATCH OUT FOR
=======================

Packing
  The table tries not to allocate huge chunks of screen real estate if
  you ask it for a lot of rows and columns.  You can always stretch out
  the frame or explicitly tell it how big it can be.  If you want to
  stretch the table, remember to pack it with fill both and expand on,
  or with grid, give it -sticky news and configure the grid row and column
  for some weighting.

Array   
  The array elements for the table are of the form array(2,3) etc.  Make
  sure there are no spaces around the ','.  Negative indices are allowed.

Editing
  If you can't edit, remember that the focus model in tk is explicit, so
  you need to click on the table or give it the focus command.  Just
  having a selected cell is not the same thing as being able to edit.
  You also need the editing cursor.  If you can't get the cursor, make
  sure that you actually have a variable assigned to the table, and that
  the "state" of the cell is not disabled.

COMMENTS, BUGS, etc.

* Please can you send comments and bug reports to the current maintainer
  and their best will be done to address them.  A mailing list for
  tktable discussion is tktable-users@lists.sourceforge.net.

* If you find a bug, a short piece of Tcl that exercises it would be very
  useful, or even better, compile with debugging and specify where it
  crashed in that short piece of Tcl.  Use the SourceForge site to check
  for known bugs or submit new ones.


BLT CONFLICTS
=============

If tkTable is used at the same time as BLT then there are two name
conflicts to be aware of.

BLT also has a table.n man page.  TkTable's man page will still be
available as tkTable.n.

BLT also has a "table" command.  The table command of the last
extension loaded will be in effect.  If you need to use both table
commands then eval "rename table blttable" after loading blt and
before loading tkTable, or perhaps "rename table tkTable" if you
load the tkTable extension first.

In general this shouldn't be a problem as long as you load tkTable
last.  The BLT "table" command facilities have been subsumed by the
Tk "grid" command (available in Tk4.1+), so the BLT table should
only be used in legacy code.

Alternatively, if you want both or have another "table" command,
then change the TBL_COMMAND macro in the makefile before compiling,
and it tkTable will define your named command for the table widget.
