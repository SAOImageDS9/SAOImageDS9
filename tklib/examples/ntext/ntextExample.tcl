#! /usr/bin/env tclsh

package require Tk 8.5-

# Copyright (c) 2005-2023 Keith Nash.
#
# See the file "license.terms" for information on usage and redistribution
# of this file, and for a DISCLAIMER OF ALL WARRANTIES.

### This is a short, simple example.  It shows the difference
### between a default text widget and one that uses ntext.
### The steps for adding ntext are numbered (1) to (3).

### To explore the ntext options, try ntextDemoBindings.tcl
### To explore ntext indentation, try ntextDemoIndent.tcl
### To explore vertical scrolling on the Mac, try ntextDemoMacScrolling.tcl
### For corner cases in scrolling, try ntextDemoScroll.tcl

# ------------------------------------------------------------------------------
# (1) Load the ntext package.
# ------------------------------------------------------------------------------

package require ntext 1.0

# ------------------------------------------------------------------------------
# (2) (optional) Adjust the ntext configuration.
# ------------------------------------------------------------------------------
# If you do not like the ntext default bindings, you can override some
# of them by setting these variables (ntextDemoBindings.tcl has a live demo).
# ------------------------------------------------------------------------------

#  Whether Shift-Button-1 ignores changes made by the kbd to the insert mark:
set ::ntext::classicMouseSelect 0

#  Whether Shift-Button-1 has a variable or fixed anchor:
set ::ntext::classicAnchor      0

# Whether to activate certain traditional "extra" bindings
variable classicExtras          1

#  Whether to use new or classic word boundary detection:
set ::ntext::classicWordBreak   0

# Set to 0 to follow Mac Aqua conventions on placement of the insert mark
# when a selection is cancelled by keyboard navigation:
set ::ntext::classicSelection   1

# ------------------------------------------------------------------------------
# Now begin constructing the GUI.
# ------------------------------------------------------------------------------

. configure -bg #d0cfce

# This string defines the text that will be displayed in each widget:
set message {The source code for this example shows how simple it is to deploy ntext.  It is necessary to "package require" the ntext package, and then call the "bindtags" command for any text widget in which you wish to use the Ntext bindings...}


# Create two identical text widgets:
pack [text .left ] -side left -padx 2 -pady 2
pack [text .right] -side left -padx 2 -pady 2
.left  configure -width 28 -height 14 -wrap word -undo 1 -font TkFixedFont
.right configure -width 28 -height 14 -wrap word -undo 1 -font TkFixedFont

# Give them different background colors:
.left  configure -bg #FFFFCC
.right configure -bg white

# Write slightly different text to each one:
.left  insert end "  I use the (default) Text bindings from Tk.\n\n$message"
.right insert end "  I use the Ntext bindings from package ntext.\n\n$message"

# Highlight the first line, using different colors for each widget:
set fam [font actual TkFixedFont -family]
set siz [font configure TkFixedFont -size]
set TitleFont [list $fam $siz bold]

.left  tag add red  1.0 2.0
.right tag add blue 1.0 2.0
.left  tag configure red  -foreground #A00000 -font $TitleFont
.right tag configure blue -foreground #0000A0 -font $TitleFont

# ------------------------------------------------------------------------------
# (3) Finally, enable Ntext for the right-hand widget.
# ------------------------------------------------------------------------------

bindtags .right {.right Ntext . all}
