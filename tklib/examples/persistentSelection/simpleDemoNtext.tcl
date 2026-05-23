#! /usr/bin/env tclsh

# Copyright (c) 2017-2018 Keith Nash.
#
# See the file "license.terms" for information on usage and redistribution
# of this file, and for a DISCLAIMER OF ALL WARRANTIES.

# ------------------------------------------------------------------------------
# Demo of the persistent selection module persistentSelection.
# ------------------------------------------------------------------------------
# This demo is for ntext text widgets only.
# ------------------------------------------------------------------------------


# ------------------------------------------------------------------------------
# Load package(s) and create bindings.
# ------------------------------------------------------------------------------

package require Tk
package require persistentSelection
package require ntext

# To use with ntext widgets:
bind Ntext      <<Selection>>   {persistentSelection::report text %W}


# ------------------------------------------------------------------------------
# Create, initialize, and map ntext widget.
# ------------------------------------------------------------------------------

text .mid -bg white -height 10 -wrap word -undo 1 -maxundo 0
bindtags .mid {.mid Ntext . all}
pack .mid

.mid insert end {Widget .mid, bindtag Ntext.

Try using the persistent PRIMARY selection with this widget.

When the selection is cleared in the widget that owns the PRIMARY selection, usually Tk also clears the PRIMARY selection.  The persistentSelection package ensures that, instead, the PRIMARY selection retains the last non-empty selected string.
}
.mid edit reset


# ------------------------------------------------------------------------------
# Code for monitoring tools can be copied here from allWidgetsDebugDemo.tcl.
# These tools are not necessary for the demo to work, but they show what is
# happening.
# ------------------------------------------------------------------------------
