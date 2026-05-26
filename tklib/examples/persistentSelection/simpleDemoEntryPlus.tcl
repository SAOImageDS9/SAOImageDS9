#! /usr/bin/env tclsh

# Copyright (c) 2017-2018 Keith Nash.
#
# See the file "license.terms" for information on usage and redistribution
# of this file, and for a DISCLAIMER OF ALL WARRANTIES.

# ------------------------------------------------------------------------------
# Demo of the persistent selection module persistentSelection.
# ------------------------------------------------------------------------------
# This demo is for entryPlus widgets only.
# ------------------------------------------------------------------------------


# ------------------------------------------------------------------------------
# Load package(s) and create bindings.
# ------------------------------------------------------------------------------

package require Tk
package require persistentSelection
package require snit
package require widgetPlus
namespace import widgetPlus::*

# To use with widgetPlus::entryPlus widgets:
bind EntryPlus  <<Selection>>   {persistentSelection::report entry %W}


# ------------------------------------------------------------------------------
# Create, initialize, and map entryPlus widget.
# ------------------------------------------------------------------------------

entryPlus .e -undo 1 -maxundo 0 -bg white

.e delete 0 end
.e insert end {Initial Text}
.e edit reset
pack .e -padx 40 -pady 20 -fill x


# ------------------------------------------------------------------------------
# Create and map a label widget with instructions.
# ------------------------------------------------------------------------------

label .lab1 -justify left -anchor center
pack .lab1 -padx 20 -pady {0 20}

.lab1 configure -text {Try using the persistent PRIMARY selection on the\
        entryPlus widget.

When the selection is cleared in the widget that owns the PRIMARY
selection, usually Tk also clears the PRIMARY selection.  The
persistentSelection package ensures that, instead, the PRIMARY
selection retains the last non-empty selected string.}


# ------------------------------------------------------------------------------
# To replace entryPlus with a different widgetPlus widget:
# ------------------------------------------------------------------------------

if 0 {
# This block of code is not executed!

# To try a different type of widgetPlus widget, look for these two lines in
# the code above:

# entry
bind EntryPlus  <<Selection>>   {persistentSelection::report entry %W}
entryPlus .e -undo 1 -maxundo 0 -bg white

# and replace them with one of the pairs of lines below.  Alternatively use
# the demo #### which has a radiobutton widget selector.

# spinbox
bind SpinboxPlus  <<Selection>>   {persistentSelection::report entry %W}
spinboxPlus .e -undo 1 -maxundo 0 -values {1 2 3 4 5} -bg white

# ttk::entry
bind TEntryPlus  <<Selection>>   {persistentSelection::report entry %W}
ttkEntryPlus .e -undo 1 -maxundo 0

# ttk::spinbox
bind TSpinboxPlus  <<Selection>>   {persistentSelection::report entry %W}
ttkSpinboxPlus .e -undo 1 -maxundo 0 -values {1 2 3 4 5}

# ttk::combobox
ttk::combobox ttkComboboxPlus .e -undo 1 -maxundo 0 -values {1 2 3 4 5}
bind TComboboxPlus  <<Selection>>   {persistentSelection::report entry %W}

}


# ------------------------------------------------------------------------------
# Code for monitoring tools can be copied here from allWidgetsDebugDemo.tcl.
# These tools are not necessary for the demo to work, but they show what is
# happening.
# ------------------------------------------------------------------------------
