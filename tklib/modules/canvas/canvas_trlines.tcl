## -*- tcl -*-
# # ## ### ##### ######## ############# #####################
##
# Canvas Behavior Module. Managing semi-crosshair rubber bands when
# dragging. Tracers are lines from fixed points to current location
# Purely visual. Driven from the outside. No bindings of its own.
##

## TODO : Callback to customize the rubberband lines.

# # ## ### ##### ######## ############# #####################
## Requisites

package require Tcl 8.5
package require Tk
package require snit

namespace eval ::canvas::track {
    namespace export lines
    namespace ensemble create
}

# # ## ### ##### ######## ############# #####################
## API

snit::type ::canvas::track::lines {
    # # ## ### ##### ######## ############# #####################
    ## Lifecycle management

    constructor {c} {
	set mycanvas $c
	return
    }

    destructor {
	$self done
    }

    # # ## ### ##### ######## ############# #####################
    ## API.

    method start {center args} {
	if {![llength $args]} return
	$self done

	# args = list of pairs, each pair contains the x- and
	# y-coordinates of a fixed point.
	# center is current location.

	set mycoords $args
	set myitems  {}

	foreach p $mycoords {
	    lappend myitems [$mycanvas create line \
				 {*}$p {*}$center \
				 -width 0 -fill black -dash .]
	}
	return
    }

    method move {center} {
	if {![llength $myitems]} return
	foreach p $mycoords item $myitems {
	    $mycanvas coords $item {*}$p {*}$center
	}
	return
    }

    method done {} {
	if {![llength $myitems]} return
	$mycanvas delete {*}$myitems
	set myitems {}
	set mycoords {}
	return
    }

    # # ## ### ##### ######## ############# #####################
    ## STATE

    variable mycanvas {} ; # The canvas we are working with/on.
    variable mycoords {} ; # List of fixed points for the rubberbands.
    variable myitems  {} ; # Liust of the canvas items representing the rubberbands.

    ##
    # # ## ### ##### ######## ############# #####################
}

# # ## ### ##### ######## ############# #####################
## Ready

package provide canvas::track::lines 0.1
return

# # ## ### ##### ######## ############# #####################
## Scrap yard.
