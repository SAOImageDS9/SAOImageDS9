## -*- tcl -*-
# # ## ### ##### ######## ############# ######################
## (c) 2022-2023 Andreas Kupries
##
## Originally developed within the AKIS project (c) Andreas Kupries

# @@ Meta Begin
# Package map::point::map-display 0.1
# Meta author      {Andreas Kupries}
# Meta location    https://core.tcl.tk/tklib
# Meta platform    tcl
# Meta summary	   Map Action Engine: Layer to display point definitions
# Meta description Attachment to map display widgets providing custom behaviour.
# Meta description Shows a set of point definitions. Tracks geo area to ensure
# Meta description that only visible points use canvas resources (items)
# Meta subject	   {addon, point display, map display}
# Meta subject	   {point display, map display, addon}
# Meta subject	   {map display, addon, point display}
# Meta require     {Tcl 8.6-}
# Meta require     {Tk  8.6-}
# Meta require     canvas::edit::points
# Meta require     debug
# Meta require     debug::caller
# Meta require     {map::slippy 0.8}
# Meta require     snit
# @@ Meta End

package provide map::point::map-display 0.1

# # ## ### ##### ######## ############# ######################
## API
#
##  <class> OBJ map-widget store
#
##  <obj> focus ID		-> VOID		Move map to point with ID
##  <obj> disable		-> VOID		Hide points
##  <obj> enable		-> VOID		Show points
##  <obj> add-style NAME ...	-> VOID		Register a named style
#
##  -on-active		Command to report changes in the active point
#
# TODO :: Can we get stuff like double-click handling to invoke a point action?
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
package require canvas::edit::points ;# - Pixel level editor

# # ## ### ##### ######## ############# ######################
## Ensemble setup.

namespace eval map        { namespace export point       ; namespace ensemble create }
namespace eval map::point { namespace export map-display ; namespace ensemble create }

debug level  tklib/map/point/map-display
debug prefix tklib/map/point/map-display {<[pid]> [debug caller] | }

# # ## ### ##### ######## ############# ######################

snit::type ::map::point::map-display {
    # ..................................................................
    # User configuration

    option -on-active   -default {} -readonly 1

    # ..................................................................
    ## State - Derived from configuration, and style registry

    variable myactive    0      ;# Active layer? y/n
    variable mymap	 {}	;# Map the behaviour is attached to
    variable mycanvas	 {}	;# Canvas inside the map
    variable mystore     {}	;# Point store
    variable myviewchain {}	;# Old view reporting callback

    variable mystyle     {}     ;# dict (style name -> options)

    # ..................................................................
    # Map state (viewport)

    variable myzoom	 {}	;# Map zoom level
    variable mycanvasdim {}	;# Canvas viewport dimensions

    # ..................................................................
    # Display state

    variable mypoints    {}	;# Cache of point information (style, pixel per level)
    #                           ;# dict (id -> 'level' -> level -> point
    #                           ;#          -> 'geo'   -> geo
    #                           ;#          -> 'bbox'  -> geobox
    #                           ;#          -> 'style' -> string)

    variable myengine    {}     ;# dict (style name -> canvas::edit::points instance)
    variable myhide      {}     ;# dict (style -> hide command prefix)
    variable myunhide    {}     ;# dict (style -> unhide command prefix)
    variable mylocation  {}     ;# dict (tag -> point)

    variable myvisible   {}     ;# Set of the visible points, map from id to manager
    #                           ;# dict (id -> tag)
    variable myrevers    {}     ;# dict (tag -> id)

    # ..................................................................
    # Object pool - Reusable point items

    variable myfree {} ;# dict (style -> list (itemid...))

    # ..................................................................
    ## Lifecycle

    constructor {map store args} {
	debug.tklib/map/point/map-display {}

	$self configurelist $args

	set mystore  $store
	set mymap    $map
	set mycanvas [$map canvas]

	$self Attach

	# Standard styles - Note! No item un/hiding
	$self add-style point   -color red -hilit-color SkyBlue2 -radius 4
	$self add-style feature -color red -hilit-color SkyBlue2 -radius 6
	$self add-style cluster -create-cmd [mymethod DefaultCluster]
	return
    }

    destructor {
	debug.tklib/map/point/map-display {}

	if {![winfo exists $mycanvas]} return
	$self disable
	$self Detach

	# The low-level point managers are auto-destroyed because they are in this
	# object's namespace and deleted with it.
	return
    }

    # ..................................................................
    ## API

    method add-style {style args} {
	debug.tklib/map/point/map-display {}

	# Note! It is possible to override an existing style, provided no point uses them already
	# for rendering.

	if {[dict exists $mystyle $style] &&
	    [dict exists $myengine $style]} {
	    return -code error "Unable to redefine style '$style', already in use"
	}

	dict set mystyle $style $args
	return
    }

    method enable {} {
	debug.tklib/map/point/map-display {}

	if {$myactive} return
	set myactive yes

	# Force visibility processing
	$self ViewChanged {*}[$mymap view]
	return
    }

    method disable {} {
	debug.tklib/map/point/map-display {}

	if {!$myactive} return
	set myactive no

	# Remove all the visible points
	dict for {id _} $myvisible {
	    $self Close $id
	}
	return
    }

    method focus {id} {
	debug.tklib/map/point/map-display {}

	$self Load $id
	$self Fit  $id	;# The viewport change automatically triggers everything
	#                # needed to show the focus point, and whatever else is
	#                # visible.
	return
    }

    # ..................................................................
    ## Internal

    # ..................................................................
    ## Viewport interception

    method ViewChanged {zoom viewpoint geobox} {
	debug.tklib/map/point/map-display {}

	# Note that the viewport is reported twice, as both pixel and geo coordinates.
	# We are only interested in the pixel coordinates, coming first.

	debug.tklib/map/point/map-display {}

	# Pass view change reporting to old callback, if any
	if {[llength $myviewchain]} {
	    uplevel 1 [list {*}$myviewchain $zoom $viewpoint $geobox]
	}

	# Do nothing when disabled
	if {!$myactive} return

	set zoomchanged [expr {$zoom != $myzoom}]

	# Update map state (zoom, and canvas dimensions for fitting)
	set mycanvasdim [map slippy point box dimensions $viewpoint]
	set myzoom      $zoom

	# Query store for visible points
	set visible [DO visible $geobox $myzoom]

	set new {}
	foreach v $visible { dict set new $v . }

	# Drop all points which are not visible any longer
	dict for {id _} $myvisible {
	    if {[dict exists $new $id]} continue
	    $self Close $id
	}

	# For all visible points, get new, and move existing. Move only for zoom changes.
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
	debug.tklib/map/point/map-display {}
	# Already loaded.

	set center [dict get $mypoints $id geo]
	set gbox   [dict get $mypoints $id bbox]
	set zoom   [map slippy geo box fit $gbox $mycanvasdim [expr {[$mymap levels]-1}]]

	#puts /point-box/$gbox
	#puts /dim/$mycanvasdim
	#puts /zom/$zoom

	# And this triggers display of the focused id, being fully visible
	$mymap center $center $zoom
	return
    }

    method Load {id} {
	debug.tklib/map/point/map-display {}

	if {[dict exists $mypoints $id geo]} return

	set spec [DO get $id]
	dict with spec {}
	# names, geo, kind, ...

	dict unset spec names
	dict unset spec geo
	dict unset spec kind
	# spec :: Remaining (kind dependent) point attributes

	set bbox [map slippy geo bbox $geo]

	dict set mypoints $id bbox  $bbox
	dict set mypoints $id style $kind
	dict set mypoints $id geo   $geo
	dict set mypoints $id attr  $spec
	return
    }

    method Show {id} {
	debug.tklib/map/point/map-display {}

	set point  [$self Pixels $id]

	set details [dict get $mypoints $id attr]
	set style   [dict get $mypoints $id style]
	set engine  [dict get $myengine $style]
	set tag     [dict get $myvisible $id]

	lassign $point x y
	lassign [dict get $mylocation $tag] ox oy
	set dx [expr {$x - $ox}]
	set dy [expr {$y - $oy}]

	$engine move-by $tag $dx $dy

	dict set mylocation $tag $point

	if {![dict exists $myunhide $style]} return

	set     cmd [dict get $myunhide $style]
	lappend cmd $engine $tag $details

	uplevel #0 $cmd
	return
    }

    method Pixels {id} {
	debug.tklib/map/point/map-display {}

	if {![dict exists $mypoints $id level $myzoom]} {
	    set point [DO pixels $id $myzoom]

	    dict set mypoints $id level $myzoom $point
	}
	return [dict get $mypoints $id level $myzoom]
    }

    method Open {id} {
	debug.tklib/map/point/map-display {}

	set style  [dict get $mypoints $id style]
	set engine [$self Engine $style]
	set usable [dict get $myfree $style]

	if {[llength $usable]} {
	    set tag    [lindex   $usable end]
	    set usable [lreplace $usable end end]
	    dict set myfree style $usable
	} else {
	    # Pass attributes to tag creator command, if any
	    # Default `cluster` style will look for a `count` attribute.
	    set mydetails [dict get $mypoints $id attr]
	    set tag       [$engine add 0 0]
	    set mydetails {}

	    dict set mylocation $tag {0 0}
	}

	dict set myvisible $id $tag
	dict set myrevers  $tag $id
	return
    }

    method Active {engine tag} {
	debug.tklib/map/point/map-display {}

	if {![llength $options(-on-active)]} return
	if {$tag eq {}} return

	set id [dict get $myrevers $tag]
	uplevel #0 [list {*}$options(-on-active) $id]
	return
    }

    method Close {id} {
	debug.tklib/map/point/map-display {}

	set tag    [dict get $myvisible $id]
	set style  [dict get $mypoints $id style]
	set engine [dict get $myengine $style]

	dict unset myvisible $id
	dict unset myrevers  $tag

	if {[dict exists $myhide $style]} {
	    # Style with un/hide commands. Use it to hide the point item from display and make it
	    # available for reuse by a different point of that style.

	    set details [dict get $mypoints $id attr]

	    set     cmd [dict get $myhide $style]
	    lappend cmd $engine $tag $details

	    uplevel #0 $cmd

	    dict lappend myfree $style $tag
	    return
	}

	# A style without a clear command cannot reuse point items.
	# Remove them entirely, as per their tag

	$engine remove $tag
	return
    }

    method Engine {style} {
	debug.tklib/map/point/map-display {}

	if {![dict exists $myengine $style]} {
	    set visual [dict get $mystyle $style]

	    if {[dict exists $visual -hide-cmd]} {
		dict set myhide $style [dict get $visual -hide-cmd]
		dict unset visual -hide-cmd

		dict set myunhide $style [dict get $visual -unhide-cmd]
		dict unset visual -unhide-cmd
	    }

	    set obj    POINT_$style
	    set engine [canvas::edit points \
			  ${selfns}::$obj \
			  $mycanvas \
			  {*}$visual \
			  -active-cmd [mymethod Active] \
			  -tag $self//$obj]
	    # starts disabled

	    dict set myfree   $style {}
	    dict set myengine $style $engine
	}

	return [dict get $myengine $style]
    }

    # ..................................................................
    ## Default style support: Cluster -

    variable mydetails {}

    method DefaultCluster {c x y} {
	# Default cluster is circle with text (indicating number of aggregated points)
	set color  orange
	set hilit  green
	set radius 20

	# Create a circle marker in the default style
	set r $radius
	set w [expr {$x - $r}]
	set n [expr {$y - $r}]
	set e [expr {$x + $r}]
	set s [expr {$y + $r}]
	lappend items [$c create oval $w $n $e $s \
			   -width      1          \
			   -outline    black      \
			   -activefill $hilit \
			   -fill       $color]

	# If a count attribute is present use it as text in the circle marker.
	if {[dict exists $mydetails count]} {
	    lappend items [$c create text $x $y \
			       -activefill $hilit \
			       -text [dict get $mydetails count]]
	}

	return $items
    }

    # ..................................................................
    ## Chain management

    method Attach {} {
	debug.tklib/map/point/map-display {}

	# Hook into viewport reporting
	set myviewchain [$mymap cget -on-view-change]
	$mymap configure -on-view-change [mymethod ViewChanged]
	return
    }

    method Detach {} {
	debug.tklib/map/point/map-display {}

	# Restore old view port reporting
	$mymap configure -on-view-change $myviewchain
	return
    }

    # ..................................................................
    ## Store access

    proc DO {args} {
	debug.tklib/map/point/map-display {}

	upvar 1 mystore mystore
	return [uplevel #0 [list {*}$mystore {*}$args]]
    }

    # ..................................................................
}

# # ## ### ##### ######## ############# ######################
return
