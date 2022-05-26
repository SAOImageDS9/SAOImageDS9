	       The Scrolling Utilities Package Scrollutil

                                   by

                             Csaba Nemethi

                       csaba.nemethi@t-online.de 


What Is Scrollutil?
-------------------

Scrollutil is a library package for Tcl/Tk versions 8.0 or higher,
written in pure Tcl/Tk code.  It contains:

  - the implementation of the "scrollarea", "scrollsync", and
    "scrollableframe" mega-widgets, including a general utility module
    for mega-widgets;
  - the command "scrollutil::addMouseWheelSupport", which creates mouse
    wheel event bindings for a given binding tag.  This command requires
    Tcl/Tk 8.4 or later;
  - commands for user-friendly mouse wheel event handling in scrollable
    widget containers like scrollutil::scrollableframe, BWidget
    ScrollableFrame, and iwidgets::scrolledframe.  These commands
    require Tcl/Tk versions 8.4 or higher on X11 and Mac OS X and Tk
    8.6b2 or later on Windows;
  - demo scripts illustrating the use of the Scrollutil package in
    connection with various scrollable widgets and the above-mentioned
    scrollable widget containers;
  - a tutorial in HTML format;
  - reference pages in HTML format.

The reason for requiring at least Tk version 8.6b2 on Windows for the
above-mentioned commands for mouse wheel event handling is that in
earlier Tk versions on this platform the mouse wheel events were sent to
the widget having the focus rather than to the one under the pointer.

How to Get It?
--------------

Scrollutil is available for free download from the Web page

    https://www.nemethi.de

The distribution file is "scrollutil1.5.tar.gz" for UNIX and
"scrollutil1_5.zip" for Windows.  These files contain the same
information, except for the additional carriage return character
preceding the linefeed at the end of each line in the text files for
Windows.

Scrollutil is also included in tklib, which has the address

    https://core.tcl.tk/tklib

How to Install It?
------------------

Install the package as a subdirectory of one of the directories given
by the "auto_path" variable.  For example, you can install it as a
directory at the same level as the Tcl and Tk script libraries.  The
locations of these library directories are given by the "tcl_library"
and "tk_library" variables, respectively.

To install Scrollutil on UNIX, "cd" to the desired directory and unpack
the distribution file "scrollutil1.5.tar.gz":

    gunzip -c scrollutil1.5.tar.gz | tar -xf -

On most UNIX systems this can be replaced with

    tar -zxf scrollutil1.5.tar.gz

Both commands will create a directory named "scrollutil1.5", with the
subdirectories "demos", "doc", and "scripts".

On Windows, use WinZip or some other program capable of unpacking the
distribution file "scrollutil1_5.zip" into the directory
"scrollutil1.5", with the subdirectories "demos", "doc", and "scripts".

How to Use It?
--------------

The Scrollutil distribution provides two packages, called Scrollutil and
Scrollutil_tile.  The main difference between the two is that
Scrollutil_tile enables the tile-based, theme-specific appearance of
scrollarea, scrollsync, and scrollableframe widgets; this package
requires Tcl/Tk 8.4 or higher and tile 0.6 or higher.  It is not
possible to use both packages in one and the same application, because
both are implemented in the same "scrollutil" namespace and provide
identical commands.

To be able to use the commands and variables implemented in the package
Scrollutil, your scripts must contain one of the lines

    package require scrollutil ?version?
    package require Scrollutil ?version?

Likewise, to be able to use the commands and variables implemented in
the package Scrollutil_tile, your scripts must contain one of the lines

    package require scrollutil_tile ?version?
    package require Scrollutil_tile ?version?

Since the packages Scrollutil and Scrollutil_tile are implemented in the
"scrollutil" namespace, you must either import the procedures you need,
or use qualified names like "scrollutil::scrollarea".

For a detailed description of the commands and variables provided by
Scrollutil and of the examples contained in the "demos" directory, see
the tutorial "scrollutil.html" and the reference pages, all located in
the "doc" directory.
