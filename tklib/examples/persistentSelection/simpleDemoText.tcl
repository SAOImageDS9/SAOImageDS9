#!/bin/sh
# the next line restarts using tclsh \
exec tclsh "$0" "$@"

# Copyright (c) 2017-2018 Keith Nash.
#
# See the file "license.terms" for information on usage and redistribution
# of this file, and for a DISCLAIMER OF ALL WARRANTIES.

# ------------------------------------------------------------------------------
# Demo of the persistent selection module persistentSelection.
# ------------------------------------------------------------------------------
# This demo is for plain text widgets only.
# It requires no packages except Tk and persistentSelection itself.
# ------------------------------------------------------------------------------


# ------------------------------------------------------------------------------
# Load package(s) and create bindings.
# ------------------------------------------------------------------------------

package require Tk
package require persistentSelection

# To use with text widgets:
persistentSelection::fixText
bind Text      <<Selection>>   {persistentSelection::report text %W}


# ------------------------------------------------------------------------------
# Create, initialize, and map text widget.
# ------------------------------------------------------------------------------

text .top -bg white -height 10 -wrap word -undo 1 -maxundo 0
pack .top

.top insert end {Widget .top, bindtag Text.

Try using the persistent PRIMARY selection with this widget.

When the selection is cleared in the widget that owns the PRIMARY selection, usually Tk also clears the PRIMARY selection.  The persistentSelection package ensures that, instead, the PRIMARY selection retains the last non-empty selected string.
}
.top edit reset


# ------------------------------------------------------------------------------
# Code for monitoring tools can be copied here from allWidgetsDebugDemo.tcl.
# These tools are not necessary for the demo to work, but they show what is
# happening.
# ------------------------------------------------------------------------------
