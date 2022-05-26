                    The Widget Callback Package Wcb

                                   by

                             Csaba Nemethi

                       csaba.nemethi@t-online.de 


What Is Wcb?
------------

Wcb is a library package for Tcl/Tk versions 8.0 or higher, written in
pure Tcl/Tk code.  It contains a few commands providing a simple and
GENERAL solution to problems like the following:

  - How to restrict the set of characters that the user can type or
    paste into a Tk or tile entry, BWidget Entry, Tk or tile spinbox,
    tile combobox, text, or ctext widget?
  - How to manipulate the user input characters before they are
    inserted into one of these widgets?  In the case of a text or ctext
    widget:  How to change the font, colors, or other attributes of the
    input characters?
  - How to set a limit for the number of characters that can be typed
    or pasted into a Tk or tile entry, BWidget Entry, Tk or tile
    spinbox, or tile combobox widget?
  - How to protect some parts of the text contained in a Tk or tile
    entry, BWidget Entry, Tk or tile spinbox, tile combobox, text, or
    ctext widget from being changed by the user?
  - How to define notifications to be triggered automatically after
    text is inserted into or deleted from one of these widgets?
  - How to define some actions to be invoked automatically whenever the
    insertion cursor in a Tk or tile entry, BWidget Entry, Tk or tile
    spinbox, tile combobox, text, or ctext widget is moved?
  - How to define a command to be called automatically when selecting a
    listbox element, a tablelist row or cell, a tile treeview item, or
    a range of characters in a text or ctext widget?
  - How to protect any or all items/elements of a listbox, tablelist, or
    tile treeview, or a range of characters in a text or ctext widget
    from being selected?

In most books, FAQs, newsgroup articles, and widget sets, you can find
INDIVIDUAL solutions to some of the above problems by means of widget
bindings.  This approach quite often proves to be incomplete.  The
solutions provided by the Tk core to some of these problems are also of
INDIVIDUAL nature.

The Wcb package goes a completely different way:  Based on redefining
the Tcl command corresponding to a widget, the main Wcb procedure
"wcb::callback" enables you to associate arbitrary commands with some Tk
entry, tile entry, BWidget Entry, Tk spinbox, tile spinbox, tile
combobox, listbox, tablelist, tile treeview, text, and ctext widget
operations.  These commands will be invoked automatically in the global
scope whenever the respective widget operation is executed.  You can
request that these commands be called either before or after executing
the respective widget operation, i.e., you can define both before- and
after-callbacks.  From within a before-callback, you can cancel the
respective widget command by invoking the procedure "wcb::cancel", or
modify its arguments by calling "wcb::extend" or "wcb::replace".

Besides these (and four other) general-purpose commands, the Wcb
package exports four utility procedures for Tk entry, tile entry,
BWidget Entry, Tk spinbox, tile spinbox, and tile combobox widgets, as
well as ready-to-use before-insert callbacks for Tk entry, tile entry,
BWidget Entry, Tk spinbox, tile spinbox, tile combobox, text, and ctext
widgets.

How to Get It?
--------------

Wcb is available for free download from the Web page

    http://www.nemethi.de

The distribution file is "wcb3.6.tar.gz" for UNIX and "wcb3_6.zip" for
Windows.  These files contain the same information, except for the
additional carriage return character preceding the linefeed at the end
of each line in the text files for Windows.

Wcb is also included in tklib, which has the address

    http://core.tcl.tk/tklib

How to Install It?
------------------

Install the package as a subdirectory of one of the directories given
by the "auto_path" variable.  For example, you can install it as a
directory at the same level as the Tcl and Tk script libraries.  The
locations of these library directories are given by the "tcl_library"
and "tk_library" variables, respectively.

To install Wcb on UNIX, "cd" to the desired directory and unpack the
distribution file "wcb3.6.tar.gz":

    gunzip -c wcb3.6.tar.gz | tar -xf -

This command will create a directory named "wcb3.6", with the
subdirectories "demos", "doc", and "scripts".

On Windows, use WinZip or some other program capable of unpacking the
distribution file "wcb3_6.zip" into the directory "wcb3.6", with the
subdirectories "demos", "doc", and "scripts".

How to Use It?
--------------

To be able to use the commands and variables implemented in the package
Wcb, your scripts must contain one of the lines

    package require wcb ?version?
    package require Wcb ?version?

Since the package Wcb is implemented in its own namespace called "wcb",
you must either import the procedures you need, or use qualified names
like "wcb::callback".

For a detailed description of the commands and variables provided by
Wcb and of the examples contained in the "demos" directory, see the
tutorial "wcb.html" and the reference page "wcbRef.html", both located
in the "doc" directory.
