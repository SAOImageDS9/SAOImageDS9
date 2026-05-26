## -*- tcl -*-
# # ## ### ##### ######## ############# ######################
## (c) 2022 Andreas Kupries
##
## Originally developed within the AKIS project (c) Andreas Kupries

# @@ Meta Begin
# Package map::box::map-display 0.1
# Meta author      {Andreas Kupries}
# Meta location    https://core.tcl.tk/tklib
# Meta platform    tcl
# Meta summary	   Map Action Engine: Layer to display box definitions
# Meta description Attachment to map display widgets providing custom behaviour.
# Meta description Shows a set of box definitions. Tracks geo area to ensure
# Meta description that only visible boxes use canvas resources (items)
# Meta subject	   {addon, box display, map display}
# Meta subject	   {box display, map display, addon}
# Meta subject	   {map display, addon, box display}
# Meta require     {Tcl 8.6-}
# Meta require     {Tk  8.6-}
# Meta require     canvas::edit::rectangle
# Meta require     debug
# Meta require     debug::caller
# Meta require     {map::slippy 0.8}
# Meta require     snit
# @@ Meta End

package provide map::box::map-display 0.1

# # ## ### ##### ######## ############# ######################
## API
#
##  <class> OBJ map-widget store
#
##  <obj> focus ID	-> VOID		Move map to box with ID
##  <obj> disable	-> VOID		Hide boxes
##  <obj> enable	-> VOID		Show boxes
#
##  -on-active		Command to report changes in the active box
#
##  -color		Visual options inherited from canvas::edit::rectangle
##  -hilit-color	for full customization of the rectangle appearance
##  -radius		.
##  -kind		.
##  -radius		.
##  -rect-config	.
##  -create-cmd 	.
#
# TODO :: Can we get stuff like double-click handling to invoke a box action?
#
# # ## ### ##### ######## ############# ######################
## Requirements

package require Tcl 8.6-
#
package require debug                   ;# - Narrative Tracing
package require debug::caller           ;#
package require map::slippy 0.8         ;# - Map utilities
package require snit                    ;# - OO system
#                                       ;# Tklib.
package require canvas::edit::rectangle ;# - Pixel level editor

# # ## ### ##### ######## ############# ######################
## Ensemble setup.

namespace eval map      { namespace export box         ; namespace ensemble create }
namespace eval map::box { namespace export map-display ; namespace ensemble create }

debug level  tklib/map/box/map-display
debug prefix tklib/map/box/map-display {<[pid]> [debug caller] | }

# # ## ### ##### ######## ############# ######################

snit::type ::map::box::map-display {
    # ..................................................................
    # User configuration

    option -on-active   -default {} -readonly 1

    # Visual options passed to the low-level rectangle engines
    option -color       -default {} -readonly 1
    option -hilit-color -default {} -readonly 1
    option -radius      -default {} -readonly 1
    option -kind        -default {} -readonly 1
    option -radius      -default {} -readonly 1
    option -rect-config -default {} -readonly 1
    option -create-cmd  -default {} -readonly 1

    # ..................................................................
    ## State - Derived from configuration

    variable myactive    0      ;# Active layer? y/n
    variable myvisual	 {}	;# Visual configuration for the rectangle engines
    variable mymap	 {}	;# Map the behaviour is attached to
    variable mycanvas	 {}	;# Canvas inside the map
    variable mystore     {}	;# Box store
    variable myviewchain {}	;# Old view reporting callback

    # ..................................................................
    # Map state (viewport)

    variable myzoom	 {}	;# Map zoom level
    variable mycanvasdim {}	;# Canvas viewport dimensions

    # ..................................................................
    # Display state

    variable myboxes    {}	;# Cache of box information (geobox, pixels per level)
    #                           ;# dict (id -> 'level'  -> level -> pointbox
    #                           ;#          -> 'bbox'   -> geobox)
    #                           ;#          -> 'center' -> geo)
    variable myvisible  {}      ;# Set of the visible boxes, map from id to manager
    #                           ;# dict (id -> canvas::edit::rectangle instance)
    variable myrevers   {}      ;# dict (canvas::edit::rectangle instance -> id)

    # ..................................................................
    # Object pool - Reusable polyline objects

    variable myfree {}	;# Set of reusable rectangle instances
    variable myid   0	;# Id counter for new rectangle instances

    # ..................................................................
    ## Lifecycle

    constructor {map store args} {
	debug.tklib/map/box/map-display {}

	$self configurelist $args

	set mystore  $store
	set mymap    $map
	set mycanvas [$map canvas]

	foreach o {
	    -color
	    -hilit-color
	    -radius
	    -kind
	    -radius
	    -rect-config
	    -create-cmd
	} {
	    if {$options($o) eq {}} continue
	    lappend myvisual $o $options($o)
	}

	$self Attach
	return
    }

    destructor {
	debug.tklib/map/box/map-display {}

	if {![winfo exists $mycanvas]} return
	$self disable
	$self Detach

	# The low-level box managers are auto-destroyed because they are in this
	# object's namespace and deleted with it.
	return
    }

    # ..................................................................
    ## API

    method enable {} {
	debug.tklib/map/box/map-display {}

	if {$myactive} return
	set myactive yes

	# Force visibility processing
	$self ViewChanged {*}[$mymap view]
	return
    }

    method disable {} {
	debug.tklib/map/box/map-display {}

	if {!$myactive} return
	set myactive no

	# Remove all the visible boxes
	dict for {id boxy} $myvisible {
	    $self Close $id
	}
	return
    }

    method focus {id} {
	debug.tklib/map/box/map-display {}

	$self Load $id
	$self Fit  $id	;# The viewport change automatically triggers everything
	#                # needed to show the focus box, and whatever else is
	#                # visible.
	return
    }

    # ..................................................................
    ## Internal

    # ..................................................................
    ## Viewport interception

    method ViewChanged {zoom viewbox geobox} {
	debug.tklib/map/box/map-display {}

	# Note that the viewport is reported twice, as both pixel and geo coordinates.
	# We are only interested in the pixel coordinates, coming first.

	debug.tklib/map/box/map-display {}

	# Pass view change reporting to old callback, if any
	if {[llength $myviewchain]} {
	    uplevel 1 [list {*}$myviewchain $zoom $viewbox $geobox]
	}

	# Do nothing when disabled
	if {!$myactive} return

	set zoomchanged [expr {$zoom != $myzoom}]

	# Update map state (zoom, and canvas dimensions for fitting)
	set mycanvasdim [map slippy point box dimensions $viewbox]
	set myzoom      $zoom

	# Query store for visible boxes
	set visible [DO visible $geobox]

	set new {}
	foreach v $visible { dict set new $v . }

	# Drop all boxes which are not visible any longer
	dict for {id boxy} $myvisible {
	    if {[dict exists $new $id]} continue
	    $self Close $id
	}

	# For all visible boxes, get new, and move existing. move only for zoom changes.
	foreach id $visible {
	    if {[dict exists $myvisible $id]} {
		if {$zoomchanged} { $self Show $id }
		continue
	    }
	    $self Load $id
	    $self Open $id
	    $self Show $id
	}
	return
    }

    # ..................................................................

    method Fit {id} {
	debug.tklib/map/box/map-display {}
	# Already loaded.

	set center [dict get $myboxes $id center]
	set gbox   [dict get $myboxes $id bbox]
	set zoom   [map slippy geo box fit $gbox $mycanvasdim [expr {[$mymap levels]-1}]]

	#puts /box/$gbox
	#puts /dim/$mycanvasdim
	#puts /zom/$zoom

	# And this triggers display of the focused id, being fully visible
	$mymap center $center $zoom
	return
    }

    method Load {id} {
	debug.tklib/map/box/map-display {}

	if {[dict exists $myboxes $id geo]} return

	set spec [DO get $id]
	dict with spec {}
	# names, geo, diameter, perimeter, center
	# => geo, center

	dict set myboxes $id bbox   $geo
	dict set myboxes $id center $center
	return
    }

    method Show {id} {
	debug.tklib/map/box/map-display {}

	# Note: point/marker radius is chosen for best visual appearance.
	# Single point    => extend size to make it visible
	# Multiple points => shrink to nothing so that line display is dominant

	set boxy     [dict get $myvisible $id]
	set pointbox [$self Pixels $id]

	$boxy configure -radius 0
	$boxy set {*}$pointbox
	return
    }

    method Pixels {id} {
	debug.tklib/map/box/map-display {}

	if {![dict exists $myboxes $id level $myzoom]} {
	    dict set myboxes $id level $myzoom [DO pixels $id $myzoom]
	}
	return [dict get $myboxes $id level $myzoom]
    }

    method Open {id} {
	debug.tklib/map/box/map-display {}

	if {[llength $myfree]} {
	    set boxy   [lindex   $myfree end]
	    set myfree [lreplace $myfree end end]
	} else {
	    set obj  RECT_[incr myid]
	    set boxy [canvas::edit rectangle \
			  ${selfns}::$obj \
			  $mycanvas \
			  {*}$myvisual \
			  -active-cmd [mymethod Active] \
			  -tag $self//$obj]
	    # starts disabled
	}

	dict set myvisible $id $boxy
	dict set myrevers  $boxy $id
	return
    }

    method Active {boxy kind} {
	debug.tklib/map/box/map-display {}

	if {![llength $options(-on-active)]} return
	if {$kind ne "rect"} return

	set id [dict get $myrevers $boxy]
	uplevel #0 [list {*}$options(-on-active) $id]
	return
    }

    method Close {id} {
	debug.tklib/map/box/map-display {}

	set boxy [dict get $myvisible $id]
	$boxy clear

	dict unset myvisible $id
	dict unset myrevers  $boxy
	lappend myfree $boxy
	return
    }

    # ..................................................................
    ## Chain management

    method Attach {} {
	debug.tklib/map/box/map-display {}

	# Hook into viewport reporting
	set myviewchain [$mymap cget -on-view-change]
	$mymap configure -on-view-change [mymethod ViewChanged]
	return
    }

    method Detach {} {
	debug.tklib/map/box/map-display {}

	# Restore old view port reporting
	$mymap configure -on-view-change $myviewchain
	return
    }

    # ..................................................................
    ## Store access

    proc DO {args} {
	debug.tklib/map/box/map-display {}

	upvar 1 mystore mystore
	return [uplevel #0 [list {*}$mystore {*}$args]]
    }

    # ..................................................................
}

# # ## ### ##### ######## ############# ######################
return
