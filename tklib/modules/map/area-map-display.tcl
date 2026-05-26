## -*- tcl -*-
# # ## ### ##### ######## ############# ######################
## (c) 2022 Andreas Kupries
##
## Originally developed within the AKIS project (c) Andreas Kupries

# @@ Meta Begin
# Package map::area::map-display 0.1
# Meta author      {Andreas Kupries}
# Meta location    https://core.tcl.tk/tklib
# Meta platform    tcl
# Meta summary	   Map Action Engine: Layer to display area definitions
# Meta description Attachment to map display widgets providing custom behaviour.
# Meta description Shows a set of area definitions. Areas geo area to ensure
# Meta description that only visible areas use canvas resources (items)
# Meta subject	   {addon, area display, map display}
# Meta subject	   {area display, map display, addon}
# Meta subject	   {map display, addon, area display}
# Meta require     {Tcl 8.6-}
# Meta require     {Tk  8.6-}
# Meta require     canvas::edit::polyline
# Meta require     debug
# Meta require     debug::caller
# Meta require     {map::slippy 0.8}
# Meta require     snit
# @@ Meta End

package provide map::area::map-display 0.1

# # ## ### ##### ######## ############# ######################
## API
#
##  <class> OBJ map-widget store
#
##  <obj> focus ID	-> VOID		Move map to area with ID
##  <obj> disable	-> VOID		Hide areas
##  <obj> enable	-> VOID		Show areas
#
##  -on-active		Command to report changes in the active area
#
##  -color		Visual options inherited from canvas::edit::polyline
##  -hilit-color	for full customization of the polyline appearance
##  -radius		.
##  -kind		.
##  -radius		.
##  -line-config	.
##  -create-cmd 	.
#
# TODO :: Can we get stuff like double-click handling to invoke a area action?
#
# # ## ### ##### ######## ############# ######################
## Requirements

package require Tcl 8.6-
#
package require debug                  ;# - Narrative Tracing
package require debug::caller          ;#
package require map::slippy 0.8        ;# - Map utilities
package require snit                   ;# - OO system
#                                      ;# Tklib.
package require canvas::edit::polyline ;# - Pixel level editor

# # ## ### ##### ######## ############# ######################
## Ensemble setup.

namespace eval map       { namespace export area        ; namespace ensemble create }
namespace eval map::area { namespace export map-display ; namespace ensemble create }

debug level  tklib/map/area/map-display
debug prefix tklib/map/area/map-display {<[pid]> [debug caller] | }

# # ## ### ##### ######## ############# ######################

snit::type ::map::area::map-display {
    # ..................................................................
    # User configuration

    option -on-active   -default {} -readonly 1

    # Visual options passed to the low-level polyline engines
    option -color       -default {} -readonly 1
    option -hilit-color -default {} -readonly 1
    option -radius      -default {} -readonly 1
    option -kind        -default {} -readonly 1
    option -radius      -default {} -readonly 1
    option -line-config -default {} -readonly 1
    option -create-cmd  -default {} -readonly 1

    # ..................................................................
    ## State - Derived from configuration

    variable myactive    0      ;# Active layer? y/n
    variable myvisual	 {}	;# Visual configuration for the polyline engines
    variable mymap	 {}	;# Map the behaviour is attached to
    variable mycanvas	 {}	;# Canvas inside the map
    variable mystore     {}	;# Area store
    variable myviewchain {}	;# Old view reporting callback

    # ..................................................................
    # Map state (viewport)

    variable myzoom	 {}	;# Map zoom level
    variable mycanvasdim {}	;# Canvas viewport dimensions

    # ..................................................................
    # Display state

    variable myareas    {}	;# Cache of area information (area, box, pixels per level)
    #                           ;# dict (id -> 'level' -> level -> list(point...)
    #                           ;#          -> 'bbox'   -> geobox
    #                           ;#          -> 'center' -> geo
    variable myvisible  {}      ;# Set of the visible areas, map from id to manager
    #                           ;# dict (id -> canvas::edit::polyline instance)
    variable myrevers   {}      ;# dict (canvas::edit::polyline instance -> id)

    # ..................................................................
    # Object pool - Reusable polyline objects

    variable myfree {}	;# Set of reusable polyline instances
    variable myid   0	;# Id counter for new polyline instances

    # ..................................................................
    ## Lifecycle

    constructor {map store args} {
	debug.tklib/map/area/map-display {}

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
	    -line-config
	    -create-cmd
	} {
	    if {$options($o) eq {}} continue
	    lappend myvisual $o $options($o)
	}

	$self Attach
	return
    }

    destructor {
	debug.tklib/map/area/map-display {}

	if {![winfo exists $mycanvas]} return
	$self disable
	$self Detach

	# The low-level area managers are auto-destroyed because they are in this
	# object's namespace and deleted with it.
	return
    }

    # ..................................................................
    ## API

    method enable {} {
	debug.tklib/map/area/map-display {}

	if {$myactive} return
	set myactive yes

	# Force visibility processing
	$self ViewChanged {*}[$mymap view]
	return
    }

    method disable {} {
	debug.tklib/map/area/map-display {}

	if {!$myactive} return
	set myactive no

	# Remove all the visible areas
	dict for {id poly} $myvisible {
	    $self Close $id
	}
	return
    }

    method focus {id} {
	debug.tklib/map/area/map-display {}

	$self Load $id
	$self Fit  $id	;# The viewport change automatically triggers everything
	#                # needed to show the focus area, and whatever else is
	#                # visible.
	return
    }

    # ..................................................................
    ## Internal

    # ..................................................................
    ## Viewport interception

    method ViewChanged {zoom viewarea geobox} {
	debug.tklib/map/area/map-display {}

	# Note that the viewport is reported twice, as both pixel and geo coordinates.
	# We are only interested in the pixel coordinates, coming first.

	debug.tklib/map/area/map-display {}

	# Pass view change reporting to old callback, if any
	if {[llength $myviewchain]} {
	    uplevel 1 [list {*}$myviewchain $zoom $viewarea $geobox]
	}

	# Do nothing when disabled
	if {!$myactive} return

	set zoomchanged [expr {$zoom != $myzoom}]

	# Update map state (zoom, and canvas dimensions for fitting)
	set mycanvasdim [map slippy point box dimensions $viewarea]
	set myzoom      $zoom

	# Query store for visible areas
	set visible [DO visible $geobox]

	set new {}
	foreach v $visible { dict set new $v . }

	# Drop all areas which are not visible any longer
	dict for {id poly} $myvisible {
	    if {[dict exists $new $id]} continue
	    $self Close $id
	}

	# For all visible areas, get new, and move existing. move only for zoom changes.
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
	debug.tklib/map/area/map-display {}
	# Already loaded.

	set center [dict get $myareas $id center]
	set gbox   [dict get $myareas $id bbox]
	set zoom   [map slippy geo box fit $gbox $mycanvasdim [expr {[$mymap levels]-1}]]

	#puts /area-box/$gbox
	#puts /dim/$mycanvasdim
	#puts /zom/$zoom

	# And this triggers display of the focused id, being fully visible
	$mymap center $center $zoom
	return
    }

    method Load {id} {
	debug.tklib/map/area/map-display {}

	if {[dict exists $myareas $id geo]} return

	set spec [DO get $id]
	dict with spec {}
	# names, geo, diameter, length, center, bbox, parts
	# => center, bbox

	dict set myareas $id bbox   $bbox
	dict set myareas $id center $center
	return
    }

    method Show {id} {
	debug.tklib/map/area/map-display {}

	# Note: point/marker radius is chosen for best visual appearance.
	# Single point    => extend size to make it visible
	# Multiple points => shrink to nothing so that line display is dominant

	set poly   [dict get $myvisible $id]
	set points [$self Pixels $id]
	set radius [expr { [llength $points] < 2 ? 3 : 0 }]

	$poly configure -radius $radius
	$poly set-line $points
	return
    }

    method Pixels {id} {
	debug.tklib/map/area/map-display {}

	if {![dict exists $myareas $id level $myzoom]} {
	    dict set myareas $id level $myzoom [DO pixels $id $myzoom]
	}
	return [dict get $myareas $id level $myzoom]
    }

    method Open {id} {
	debug.tklib/map/area/map-display {}

	if {[llength $myfree]} {
	    set poly   [lindex   $myfree end]
	    set myfree [lreplace $myfree end end]
	} else {
	    set obj  AREA_[incr myid]
	    set poly [canvas::edit polyline \
			  ${selfns}::$obj \
			  $mycanvas \
			  {*}$myvisual \
			  -closed yes \
			  -active-cmd [mymethod Active] \
			  -tag $self//$obj]
	    # starts disabled
	}

	dict set myvisible $id $poly
	dict set myrevers  $poly $id
	return
    }

    method Active {poly kind} {
	debug.tklib/map/area/map-display {}

	if {![llength $options(-on-active)]} return
	if {$kind ne "line"} return

	set id [dict get $myrevers $poly]
	uplevel #0 [list {*}$options(-on-active) $id]
	return
    }

    method Close {id} {
	debug.tklib/map/area/map-display {}

	set poly [dict get $myvisible $id]
	$poly clear

	dict unset myvisible $id
	dict unset myrevers  $poly
	lappend myfree $poly
	return
    }

    # ..................................................................
    ## Chain management

    method Attach {} {
	debug.tklib/map/area/map-display {}

	# Hook into viewport reporting
	set myviewchain [$mymap cget -on-view-change]
	$mymap configure -on-view-change [mymethod ViewChanged]
	return
    }

    method Detach {} {
	debug.tklib/map/area/map-display {}

	# Restore old view port reporting
	$mymap configure -on-view-change $myviewchain
	return
    }

    # ..................................................................
    ## Store access

    proc DO {args} {
	debug.tklib/map/area/map-display {}

	upvar 1 mystore mystore
	return [uplevel #0 [list {*}$mystore {*}$args]]
    }

    # ..................................................................
}

# # ## ### ##### ######## ############# ######################
return
