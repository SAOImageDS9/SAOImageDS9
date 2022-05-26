                 The Multi-Entry Widget Package Mentry

                                   by

                             Csaba Nemethi

                       csaba.nemethi@t-online.de 


What Is Mentry?
---------------

Mentry is a library package for Tcl/Tk versions 8.0 or higher, written
in pure Tcl/Tk code.  It contains:

  - the implementation of the multi-entry mega-widget "mentry",
    including a general utility module for mega-widgets;
  - procedures that facilitate the use of multi-entry widgets for
    displaying and editing date and time in a great variety of formats,
    real numbers in fixed-point format, as well as IP(v4) addresses and
    IPv6 addresses;
  - two richly commented demo scripts containing the typical steps
    needed to create and handle a mentry widget for a particular
    purpose;
  - two demo scripts that show how to use the date- and time-related
    procedures;
  - tile-based counterparts of the above-mentioned demo scripts;
  - a tutorial in HTML format;
  - reference pages in HTML format.

A multi-entry widget consists of any number of entry widgets separated
by labels, all embedded in a frame.  Appropriately chosen configuration
options make this conglomerate look like one single entry containing
preinserted text pieces having invariant positions within the widget.
The initial width of an entry child also determines the maximal number
of characters that can be inserted into it; when reaching this limit
in an entry having the input focus, the latter is set automatically to
the next enabled entry child.  The same action is triggered by typing a
character contained in the label following the current entry, if the
latter is non-empty.

Within a mentry widget, the Left, Right, Home, End, and BackSpace keys
work across entry boundaries, while Control-Left and Control-Right play
the same role as Tab and Shift-Tab in the case of ordinary entries.

Some of the above features are implemented with the aid of the widget
callback package Wcb, written in pure Tcl/Tk code as well.  The Mentry
package requires version 3.1 or higher of Wcb, whose download location
is

    http://www.nemethi.de

How to Get It?
--------------

Mentry is available for free download from the same URL as Wcb.  The
distribution file is "mentry3.10.tar.gz" for UNIX and "mentry3_10.zip"
for Windows.  These files contain the same information, except for the
additional carriage return character preceding the linefeed at the end
of each line in the text files for Windows.

Mentry is also included in tklib, which has the address

    http://core.tcl.tk/tklib

How to Install It?
------------------

Install the package as a subdirectory of one of the directories given
by the "auto_path" variable.  For example, you can install it as a
directory at the same level as the Tcl and Tk script libraries.  The
locations of these library directories are given by the "tcl_library"
and "tk_library" variables, respectively.

To install Mentry on UNIX, "cd" to the desired directory and unpack the
distribution file "mentry3.10.tar.gz":

    gunzip -c mentry3.10.tar.gz | tar -xf -

On most UNIX systems this can be replaced with

    tar -zxf mentry3.10.tar.gz

Both commands will create a directory named "mentry3.10", with the
subdirectories "demos", "doc", and "scripts".

On Windows, use WinZip or some other program capable of unpacking the
distribution file "mentry3_10.zip" into the directory "mentry3.10", with
the subdirectories "demos", "doc", and "scripts".

The file "mentryThemes.tcl" in the "scripts" directory is only needed
for applications using the package Mentry_tile (see next section).

How to Use It?
--------------

The Mentry distribution provides two packages, called Mentry and
Mentry_tile.  The main difference between the two is that Mentry_tile
enables the tile-based, theme-specific appearance of mentry widgets;
this package requires Tcl/Tk 8.4 or higher and tile 0.6 or higher.  It
is not possible to use both packages in one and the same application,
because both are implemented in the same "mentry" namespace and provide
identical commands.

To be able to use the commands and variables implemented in the package
Mentry, your scripts must contain one of the lines

    package require mentry ?version?
    package require Mentry ?version?

Likewise, to be able to use the commands and variables implemented in
the package Mentry_tile, your scripts must contain one of the lines

    package require mentry_tile ?version?
    package require Mentry_tile ?version?

Since the packages Mentry and Mentry_tile are implemented in the
"mentry" namespace, you must either import the procedures you need, or
use qualified names like "mentry::mentry".

For a detailed description of the commands and variables provided by
Mentry and of the examples contained in the "demos" directory, see the
tutorial "mentry.html" and the reference pages, all located in the
"doc" directory.
