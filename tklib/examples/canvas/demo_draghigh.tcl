#!/bin/env tclsh8.5
# -*- tcl -*-
# # ## ### ##### ######## ############# #####################
# demo_draghigh.tcl --
#
# This demonstration script creates a canvas widget showing a 2-D
# plot with data points that can be dragged with the mouse.
#
# RCS: @(#) $Id: demo_draghigh.tcl,v 1.2 2012/02/24 01:41:22 andreas_kupries Exp $

# # ## ### ##### ######## ############# #####################
## Bindings
#
# Blue circles   - Drag items with Button-3 - Highlighted by adding a red ring.
# Red rectangles - Drag group with Button-3 - Highlighted by turning yellow.
# Green circle   - Drag alone with Button-3
#                - Drag all circles with Shift-Button-3

# # ## ### ##### ######## ############# #####################
## Notes on the code:
#
# The drag callbacks _POINT1 and _POINTA interact with the
# highlighting of this group of markers, as handled by _RING.
#
# - While a drag is active un-highlighting is disabled. This is
#   because when the mouse is moving fast we can get spurious
#   Leave events until the drag system has caught up and moved
#   the items to the new mouse position, causing a re-Enter.
#
#   The generated un-highlight/re-highlight sequence consume lots
#   of item ids very quickly. And as the new highlight item is
#   fresh, it is not tagged to be in the DRAGGROUP, and as such
#   can be left behind during the drag instead of moving with it.
#
# - In reverse, when highlighting begin the item created is saved, and
#   when a drag starts the highlight item is added to the set of items
#   to move, keeping it properly in sync with the actual maker.
#
# To handle the dynamic nature of the group of items to move during
# the drag we use a special tag DRAGGROUP to identify everything, and
# add this tag to the relevant items when the drag starts, and remove
# it again at the end.
#
# Note the tricks used:
#
# - When dragging the whole cloud we add the new tag not to the
#   individual markers, but the tag of their cloud (POINT).
#
# - Similarly, to remove the group tag we identify the items to modify
#   through that very tag.

# # ## ### ##### ######## ############# #####################
## Requirements

package require Tcl 8.5

# Extend the package search path so that this demonstration works with
# the non-installed tklib packages well. A regular application should
# not require this.

apply {{selfdir} {
    #puts ($selfdir)
    lappend ::auto_path $selfdir
    lappend ::auto_path [file normalize $selfdir/../../modules/canvas]
}} [file dirname [file normalize [info script]]]

package require Tk
package require canvas::drag
package require canvas::highlight
package require canvas::tag

# # ## ### ##### ######## ############# #####################
## GUI

set w .plot
catch {destroy $w}
wm withdraw .

toplevel       $w
wm title       $w "Canvas :: Drag & Highlight"
wm iconname    $w "CDH"
set c          $w.c

button $w.exit -command ::exit -text Exit
canvas $c -relief raised -width 450 -height 300 -bd 2

pack $w.exit -side bottom -anchor w
pack $c -side top -fill x

# # ## ### ##### ######## ############# #####################
## Setup the behavioral triggers and responses ...

canvas::highlight on $c POINT  _RING
canvas::drag group   $c POINT  _POINT1
canvas::drag group   $c HANDLE _POINTA -event Shift-3

canvas::highlight on $c MEGA  _COLOR
canvas::drag group   $c MEGA  _MEGA

# # ## ### ##### ######## ############# #####################
## Callback implementations - Dragging

proc _MEGA  {cmd c item} {
    return MEGA
}

proc _POINTA {cmd c item} {
    global dragactive

    switch -exact -- $cmd {
	start {
	    global cring
	    canvas::tag append $c POINT  DRAGGROUP
	    canvas::tag append $c $cring DRAGGROUP
	    set dragactive 1
	    return DRAGGROUP
	}
	done {
	    canvas::tag remove $c DRAGGROUP DRAGGROUP
	    set dragactive 0
	    return
	}
    }

    return POINT
}

global dragactive
set    dragactive 0

proc _POINT1 {cmd c item} {
    global dragactive

    switch -exact -- $cmd {
	start {
	    global cring
	    canvas::tag append $c $item  DRAGGROUP
	    canvas::tag append $c $cring DRAGGROUP
	    set dragactive 1
	    return DRAGGROUP
	}
	done {
	    canvas::tag remove $c DRAGGROUP DRAGGROUP
	    set dragactive 0
	    return
	}
    }
}

# # ## ### ##### ######## ############# #####################
## Callback implementations - Highlight 1

namespace eval _RING {
    namespace export on off
    namespace ensemble create
}

proc _RING::on {c item} {
    global cring

    # Note how we make the highlight ring larger than the item in
    # question. This prevents an infinite cycle of enter/leave which
    # we would get on overlap --> The new item doing the highlighting
    # cancels the 'insideness of the mouse, thus we get a leave event,
    # remove the highlight, and now enter again, ad infinitum.

    # We remember the highlight item for the drag operation on these
    # items, so that they are not left behind during movement.

    lassign [$c bbox $item] w n e s
    incr w -3 ; incr e 3
    incr n -3 ; incr s 3
    set cring [$c create oval [list $w $n $e $s] -width 3 -outline red]
    return $cring
}

proc _RING::off {c ring} {
    global cring dragactive
    # Veto removal during drag.
    if {$dragactive} { return 0 }
    unset cring
    $c delete $ring
    return 1
}

# # ## ### ##### ######## ############# #####################
## Callback implementations - Highlight 2

namespace eval _COLOR {
    namespace export on off
    namespace ensemble create
}

proc _COLOR::on {c item} {
    set old [lindex [$c itemconfigure $item -fill] end]
    $c itemconfigure $item -fill yellow
    return [list $item $old]
}

proc _COLOR::off {c cd} {
    lassign $cd item oldfill
    $c itemconfigure $item -fill $oldfill
    return 1
}

# # ## ### ##### ######## ############# #####################
## Data points scattered around for us to act on.

foreach point {
    {12 56} {20 94} {33 98} {32 120} {61 180} {75 160} {98 223}
} {
    set x [expr {100 + (3*[lindex $point 0])}]
    set y [expr {250 - (4*[lindex $point 1])/5}]
    set item [$c create oval \
		  [expr {$x-6}] [expr {$y-6}] \
		  [expr {$x+6}] [expr {$y+6}] \
		  -width 1 -outline black -fill SkyBlue2 \
		 -tag POINT]
    $c addtag point withtag $item
}

$c itemconfigure $item -tags [linsert [$c itemcget $item -tags] end HANDLE]
$c itemconfigure $item -fill green

foreach point {
    {16 50} {25 98} {20 70} {37 110}
} {
    set x [expr {100 + (3*[lindex $point 0])}]
    set y [expr {250 - (4*[lindex $point 1])/5}]
    set item [$c create rect \
		  [expr {$x-6}] [expr {$y-6}] \
		  [expr {$x+6}] [expr {$y+6}] \
		  -width 1 -outline black -fill Red \
		 -tag MEGA]
    $c addtag point withtag $item
}

# # ## ### ##### ######## ############# #####################
## Invoke event loop.

vwait __forever__
exit
