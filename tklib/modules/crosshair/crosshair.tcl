# crosshair.tcl -
#
# Kevin's mouse-tracking crosshair in Tk's canvas widget.
#
# This package displays a mouse-tracking crosshair in the canvas widget.
#
# Copyright (c) 2003 by Kevin B. Kenny. All rights reserved.
# Redistribution permitted under the terms of the Tcl License.
#
# Copyright (c) 2008 Andreas Kupries. Added ability to provide the tracking
#               information to external users.
#
# Copyright (c) 2013 Frank Gover, Andreas Kupries. Added ability to
#               bound the crosshairs to an area of the canvas. Useful
#               for plots.
#	(Actual code inspired by Frank's, but modified and extended (multiple bboxes)).

# ### ### ### ######### ######### #########
## Requisites

package require Tcl 8.4
package require Tk  8.4

namespace eval ::crosshair {}

# ### ### ### ######### ######### #########
## API 

#----------------------------------------------------------------------
#
# ::crosshair::crosshair --
#
#       Displays a pair of cross-hairs in a canvas widget.  The
#       cross-hairs track the pointing device.
#
# Parameters:
#       w    - The path name of the canvas
#       args - Remaining args are treated as options as for
#              [$w create line].  Of particular interest are
#              -fill and -dash.
#
# Results:
#       None.
#
# Side effects:
#       Adds the 'crosshair' bind tag to the widget so that 
#       crosshairs will be displayed on pointing device motion.
#
#----------------------------------------------------------------------

proc ::crosshair::crosshair { w args } {
    variable config
    set opts(args) $args
    set opts(hidden) 0
    bindtags $w [linsert [bindtags $w] 1 Crosshair]
    set config($w) [array get opts]
    return
}

#----------------------------------------------------------------------
#
# ::crosshair::off -
#
#       Removes the crosshairs from a canvas widget
#
# Parameters:
#       w - The canvas from which the crosshairs should be removed
#
# Results:
#       None.
#
# Side effects:
#       If the widget has crosshairs, they are removed. The 'Crosshair'
#       bind tag is removed so that mouse motion will not restore them.
#
#----------------------------------------------------------------------

proc ::crosshair::off { w } {
    variable config
    if { ![info exists config($w)] } return
    array set opts $config($w)
    if { [winfo exists $w] } {
	Hide $w
	set bindtags [bindtags $w]
	set pos [lsearch -exact $bindtags Crosshair]
	if { $pos >= 0 } {
	    bindtags $w [lreplace $bindtags $pos $pos]
	}
    }
    unset config($w)
    return
}

#----------------------------------------------------------------------
#
# ::crosshair::configure --
#
#       Changes the appearance of crosshairs in the canvas widget.
#
# Parameters:
#       w    - Path name of the widget
#       args - Additional args are flags to [$w create line]. Interesting
#              ones include -fill and -dash
#
# Results:
#       Returns the crosshairs' current configuration settings. 
#
#----------------------------------------------------------------------

proc ::crosshair::configure { w args } {
    variable config
    if { ![info exists config($w)] } {
	return -code error "no crosshairs in $w"
    }
    array set opts $config($w)
    if { [llength $args] > 0 } {
	array set flags $opts(args)
	array set flags $args
	set opts(args) [array get flags]

	# Immediately apply to a visible crosshair
	if { [info exists opts(hhairl)] } {
	    eval [list $w itemconfig $opts(hhairl)] $args
	    eval [list $w itemconfig $opts(hhairr)] $args
	    eval [list $w itemconfig $opts(vhaird)] $args
	    eval [list $w itemconfig $opts(vhairu)] $args
	}
	set config($w) [array get opts]
    }
    return $opts(args)
}

#----------------------------------------------------------------------
#
# ::crosshair::bbox_add --
#
#       Confines the crosshairs to a rectangular area in the canvas widget.
#	Multiple calls add areas, each allowing the crosshairs.
#
#	NOTE: Bounding boxes can overlap to the point of being identical.
#
# Parameters:
#       w - Path name of the widget
#       bbox - Area in the canvas. A list of 4 numbers in the form
#		{bbox_llx bbox_lly bbox_urx bbox_ury}
#            where:
#                 bbox-llx = Lower left  X coordinate of the area
#                 bbox-lly = Lower left  Y coordinate of the area
#                 bbox-urx = Upper right X coordinate of the area
#                 bbox-ury = Upper right Y coordinate of the area
#
# Result:
#	A token identifying the bounding box, for future removal.
#
#----------------------------------------------------------------------

proc ::crosshair::bbox_add { w bbox } {
    variable config
    if { ![info exists config($w)] } {
	return -code error "no crosshairs in $w"
    }
    array set opts $config($w)

    if {[info exists opts(bbox)]} {
	set len [llength $opts(bbox)]
    } else {
	set len 0
    }
    set token bbox$w/$len

    lappend opts(bbox) $token
    set config($w) [array get opts]
 
    foreach {nllx nlly nurx nury} $bbox break
    # Tcl 8.4 foreach-as-lassign hack
    set rect [$w create rect \
		  $nllx $nlly $nurx $nury \
		  -tags $token -state hidden]

    return $token
}

#----------------------------------------------------------------------
#
# ::crosshair::bbox_remove --
#
#       Remove a bounding box for the crosshairs, identified by token.
#	The crosshairs are confined to the remaining boxes, or not at
#	all if no boxes remain.
#
#	NOTE: Bounding boxes can overlap to the point of being identical.
#
# Parameters:
#       token - The bbox token, identifying both canvas and bbox in it.
#
# Result:
#	Nothing.
#
#----------------------------------------------------------------------

proc ::crosshair::bbox_remove { token } {
    variable config
    if {![regexp {^bbox([^/]+)/(\d+)$} -> w index]} {
	return -code error "Expected a bbox token, got \"$token\""
    }
    if { ![info exists config($w)] } {
	return -code error "no crosshairs in $w"
    }
    array set opts $config($w)

    # Replace chosen box with nothing.
    incr index -1
    set newboxes [lreplace $opts(bbox) $index $index {}]

    # Remove empty boxes from the end of the list.
    while {[llength $newboxes] && ![llength [lindex $newboxes end]]} {
	set newboxes [lreplace $newboxes end end]
    }

    if {![llength $newboxes]} {
	# Nothing left, disable entirely
	unset opts(bbox)
    } else {
	# Keep remainder.
	set opts(bbox) $newboxes
    }

    set config($w) [array get opts]
    
    #--- Delete Bbox
    $w delete $token 
    
    return
}

#----------------------------------------------------------------------
#
# ::crosshair::track --
#
#       (De)activates reporting of the cross-hair coordinates through
#       a user-specified callback.
#
# Parameters:
#       which - What to do (legal values: 'on', 'off').
#       w     - The path name of the canvas
#       cmd   - Only for which == 'on', the command prefix to
#               use for execute.
#
#	The cmd is called with 7 arguments: The widget, and the x- and
#	y-coordinates of 3 points: Crosshair position, and the topleft
#	and bottomright corners of the canvas viewport. All position
#	data in pixels.
#
# Results:
#       None.
#
# Side effects:
#      See description.
#
#----------------------------------------------------------------------

proc ::crosshair::track { which w args } {
    variable config

    if { ![info exists config($w)] } {
	return -code error "no crosshairs in $w"
    }

    if { ![info exists config($w)] } return
    array set opts $config($w)

    switch -exact -- $which {
	on {
	    if {[llength $args] != 1} {
		return -code error "wrong\#args: Expected 'on w cmdprefix'"
	    }
	    set opts(track) [lindex $args 0]
	}
	off {
	    if {[llength $args] != 0} {
		return -code error "wrong\#args: Expected 'off w'"
	    }
	    catch { unset opts(track) }
	}
    }

    set config($w) [array get opts]
    return
}

# ### ### ### ######### ######### #########
## Internal commands.

#----------------------------------------------------------------------
#
# ::crosshair::Hide --
#
#       Hides the crosshair temporarily
#
# Parameters:
#       w - Canvas widget containing crosshairs
#
# Results:
#       None.
#
# Side effects:
#       If the canvas contains crosshairs, they are hidden.
#
# This procedure is invoked in response to the <Leave> event to
# hide the crosshair when the pointer is not in the window.
#
#----------------------------------------------------------------------

proc ::crosshair::Hide { w } {
    variable config
    if { ![info exists config($w)] } return
    array set opts $config($w)

    # Already hidden, do nothing
    if { $opts(hidden) } return
    set opts(hidden) 1

    # Destroy the parts of a visible cross-hair
    Kill $w opts

    set config($w) [array get opts]
    return
}

#----------------------------------------------------------------------
#
# ::crosshair::Unhide --
#
#       Places a hidden crosshair back on display
#
# Parameters:
#       w - Canvas widget containing crosshairs
#       x - x co-ordinate relative to the window where the vertical
#           crosshair should appear
#       y - y co-ordinate relative to the window where the horizontal
#           crosshair should appear.
#
# Results:
#       None.
#
# Side effects:
#       Crosshairs are put on display.
#
# This procedure is invoked in response to the <Enter> event to
# restore the crosshair to the display.
#
#----------------------------------------------------------------------

proc ::crosshair::Unhide { w x y } {
    variable config
    if { ![info exists config($w)] } return
    array set opts $config($w)

    # Already unhidden, do nothing
    if { !$opts(hidden) } return
    set opts(hidden) 0

    # Recreate cross-hair. This takes the bounding boxes, if any, into
    # account, i.e. if we are out of bounds nothing will appear.
    Move $w $x $y
    return
}

proc ::crosshair::GetBoundaries { w x y llxv llyv urxv uryv } {
    upvar 1 $llxv llx $llyv lly $urxv urx $uryv ury
    variable config
    array set opts $config($w)

    # Defaults
    set llx [$w canvasx 0]
    set lly [$w canvasy 0]
    set urx [$w canvasx [winfo width  $w]]
    set ury [$w canvasy [winfo height $w]]

    # (x) No boxes confining the crosshair.
    if {![info exists opts(bbox)]} {
	#puts ANY($x,$y)
	return 1
    }

    # Determine active boundaries based on the boxes we are in (or not).

    # NOTE: This is linear in the number of active boundaries on the
    # canvas. If this is a really large number this will become
    # slow. If that happens consider creation and maintenance of some
    # fast data structure (R-tree, or similar) which can take
    # advantage of overlap and nesting to quickly rule out large
    # areas. Note that such a structure has its own price in time,
    # memory, and code complexity.

    set first 1
    foreach token $opts(bbox) {
	# Ignore removed boxes, not yet cleaned up. Note that we have
	# at least one active box here to touch by the loop. If we had
	# none the bbox_remove command ensured that (x) above
	# triggered.
	if {$token eq {}} continue

	# Get the box data, then test for usability. Ignore all boxes
	# we are outside of. They are not used for the boundary
	# calculation.
	set box [$w coords $token]
	if {[Outside $box $x $y]} continue

	# Unfold the box data and check if its boundaries are better
	# (less restrictive) than we currently have, or if this is the
	# first restriction.

	foreach {nllx nlly nurx nury} $box break

	if {$first || ($nllx < $llx)} { set llx $nllx }
	if {$first || ($nlly > $lly)} { set lly $nlly }
	if {$first || ($nurx > $urx)} { set urx $nurx }
	if {$first || ($nury < $ury)} { set ury $nury }

	set first 0
    }

    if {$first} {
	# We have boxes limiting us (See both (x)), and we are outside
	# of all of them. Time to hide the crosshairs.
	#puts OUT($x,$y)
	return 0
    }

    # We are inside of some box and have the proper boundaries of
    # visibility.
    #puts LIMIT($x,$y):$llx,$lly,$urx,$ury
    return 1
}

proc ::crosshair::Outside { box x y } {
    # Unfold box
    foreach {llx lly urx ury} $box break
 
    #puts \tTEST($x,$y):$llx,$lly,$urx,$ury:[expr {($x < $llx) || ($x > $urx) || ($y < $lly) || ($y > $ury)}]

    # Test each edge. Note that the border lines are considered as
    # "outside".

    expr {($x <= $llx) ||
	  ($x >= $urx) ||
	  ($y <= $lly) ||
	  ($y >= $ury)}
}

#----------------------------------------------------------------------
#
# ::crosshair::Move --
#
#       Moves the crosshairs in a camvas
#
# Parameters:
#       w - Canvas widget containing crosshairs
#       x - x co-ordinate relative to the window where the vertical
#           crosshair should appear
#       y - y co-ordinate relative to the window where the horizontal
#           crosshair should appear.
#
# Results:
#       None.
#
# Side effects:
#       Crosshairs move.
#
# This procedure is called in response to a <Motion> event in a canvas
# with crosshairs.
#
#----------------------------------------------------------------------

proc ::crosshair::Move { w x y } {
    variable config
    array set opts $config($w)

    set x [$w canvasx $x]
    set y [$w canvasy $y]
    set opts(x) $x
    set opts(y) $y

    if {![GetBoundaries $w $x $y opts(x0) opts(y0) opts(x1) opts(y1)]} {
	# We are out of bounds. Kill the crosshair, store changes, and
	# return. This last disables the use of the tracking
	# callback. The crosshairs track only inside the allowed
	# boxes.
	Kill $w opts

	# Store changes back.
	set config($w) [array get opts]
	return
    }

    # Inside the boundaries, create or move.
    Place $w opts

    # Store changes back.
    set config($w) [array get opts]

    # And run the tracking callback, if active.
    if {![info exists opts(track)]} return
    uplevel \#0 [linsert $opts(track) end \
		     $w $opts(x) $opts(y) \
		     $opts(x0) $opts(y0) $opts(x1) $opts(y1)]
    return
}

# ### ### ### ######### ######### #########
## Create, destroy, or modify the parts of a crosshair.

proc ::crosshair::Place {w ov} {
    upvar 1 $ov opts

    # +/-4 is the minimal possible distance which still prevents the
    # canvas from choosing the crosshairs as 'current' object under
    # the cursor.
    set n 4

    set x  $opts(x)
    set y  $opts(y)
    set x0 $opts(x0)
    set y0 $opts(y0)
    set x1 $opts(x1)
    set y1 $opts(y1)
    set ax [expr {$x-$n}]
    set bx [expr {$x+$n}]
    set ay [expr {$y-$n}]
    set by [expr {$y+$n}]

    if { [info exists opts(hhairl)] } {
	# Modify a visible crosshair.

	$w coords $opts(hhairl) $x0 $y $ax $y
	$w coords $opts(hhairr) $bx $y $x1 $y
	$w coords $opts(vhairu) $x $y0 $x $ay
	$w coords $opts(vhaird) $x $by $x $y1

	$w raise $opts(hhairl)
	$w raise $opts(hhairr)
	$w raise $opts(vhaird)
	$w raise $opts(vhairu)
    } else {
	# Create a newly visible crosshair. After unhide and/or
	# entering into one of the active bboxes, if any.

	set opts(hhairl) [eval [list $w create line $x0 $y $ax $y] $opts(args)]
	set opts(hhairr) [eval [list $w create line $bx $y $x1 $y] $opts(args)]
	set opts(vhaird) [eval [list $w create line $x $y0 $x $ay] $opts(args)]
	set opts(vhairu) [eval [list $w create line $x $by $x $y1] $opts(args)]
    }
    return
}

proc ::crosshair::Kill {w ov} {
    upvar 1 $ov opts

    if { ![info exists opts(hhairl)] } return

    $w delete $opts(hhairl)
    $w delete $opts(hhairr)
    $w delete $opts(vhaird)
    $w delete $opts(vhairu)

    unset opts(hhairl)
    unset opts(hhairr)
    unset opts(vhairu)
    unset opts(vhaird)
    return
}

# ### ### ### ######### ######### #########
## State

namespace eval ::crosshair {
    
    # Array holding information describing crosshairs in canvases
    
    variable  config
    array set config {}
    
    # Controller that positions crosshairs according to user actions
    
    bind Crosshair <Destroy> "[namespace code off] %W"
    bind Crosshair <Enter>   "[namespace code Unhide] %W %x %y"
    bind Crosshair <Leave>   "[namespace code Hide] %W"
    bind Crosshair <Motion>  "[namespace code Move] %W %x %y"
}

# ### ### ### ######### ######### #########
## Ready

package provide crosshair 1.2
