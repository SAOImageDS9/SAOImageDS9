## -*- tcl -*-
# # ## ### ##### ######## ############# ######################
## (c) 2022 Andreas Kupries
##
## Originally developed within the AKIS project (c) Andreas Kupries

# @@ Meta Begin
# Package map::track::entry 0.1
# Meta author      {Andreas Kupries}
# Meta location    https://core.tcl.tk/tklib
# Meta platform    tcl
# Meta summary	   Map Action Engine - Track Entry
# Meta description Attachment to map display widgets providing custom behaviour.
# Meta description This attachment enabless user to enter an open series of
# Meta description points, i.e. a track.
# Meta subject     {addon, track entry, map display}
# Meta subject     {track entry, map display, addon}
# Meta subject     {map display, addon, track entry}
# Meta subject
# Meta require     {Tcl 8.6-}
# Meta require     canvas::edit::polyline
# Meta require     debug
# Meta require     debug::caller
# Meta require     snit
# Meta require     {map::slippy 0.8}
# @@ Meta End

package provide map::track::entry 0.1

# # ## ### ##### ######## ############# ######################
## API
#
##  <class> OBJ map-widget
#
##  <obj> active	-> VOID		Is editing on ?
##  <obj> track		-> VOID		Query current track spec
##  <obj> clear		-> VOID		Clear track spec
##  <obj> disable	-> VOID		Stop editing
##  <obj> enable	-> VOID		Start editing
##  <obj> fit		-> VOID		Center and fit current track
##  <obj> set GEOS	-> VOID		Set track spec into editor
##  <obj> focus INDEX	-> VOID		Move map to indicated vertex of the track
#
##  -on-track-change	Report changes to the track definition
##  -on-active		Report changes to the active point/vertex of the track
##  -closed		Flag indicating of the edited track is closed or not
#
# # ## ### ##### ######## ############# ######################
## Requirements

package require Tcl 8.6-
#                                       ;# Tcllib
package require debug                   ;# - Narrative Tracing
package require debug::caller           ;#
package require map::slippy 0.8         ;# - Map utilities
package require snit                    ;# - OO system
#                                       ;# Tklib.
package require canvas::edit::polyline  ;# - Pixel level editor

# # ## ### ##### ######## ############# ######################
## Ensemble setup.

namespace eval map        { namespace export track ; namespace ensemble create }
namespace eval map::track { namespace export entry ; namespace ensemble create }

debug level  tklib/map/track/entry
debug prefix tklib/map/track/entry {<[pid]> [debug caller] | }

# # ## ### ##### ######## ############# ######################

snit::type ::map::track::entry {
    # . . .. ... ..... ........ ............. .....................
    ## User configuration

    option -on-active       -default {} -readonly 1
    option -on-track-change -default {} -readonly 1
    option -closed          -default 0  -readonly 1

    # . . .. ... ..... ........ ............. .....................
    ## State

    variable myeditor	 {}	;# Core poly line editor
    variable mymap	 {}	;# Map the behaviour is attached to
    variable mycanvas	 {}	;# Canvas inside the map
    variable myzoom	 {}	;# Map zoom level
    variable mycanvasdim {}	;# Canvas viewport dimensions
    variable mygeos	 {}	;# Track, geo locations
    variable myignore	 no	;# Flag to ignore Points callback
    variable myviewchain {}	;# Old view reporting callback

    # . . .. ... ..... ........ ............. .....................
    ## Lifecycle

    constructor {map args} {
	debug.tklib/map/track/entry {}

	$self configurelist $args

	set addons {}
	if {[llength $options(-on-active)]} { lappend addons -active-cmd $options(-on-active) }

	set mymap    $map
	set mycanvas [$map canvas]
	set mygeos {}
	set myignore no
	set myeditor \
	    [canvas::edit polyline ${selfns}::LINE $mycanvas \
		 -closed           $options(-closed) \
		 -radius           6 \
		 -add-remove-point 1 \
		 -drag-point       2 \
		 {*}$addons          \
		 -data-cmd         [mymethod PointsChanged]]

	set myviewchain [$mymap cget -on-view-change]
	$mymap configure -on-view-change [mymethod ViewChanged]

	# editor started disabled, activate
	$self enable
	return
    }

    destructor {
	debug.tklib/map/track/entry {}
	return

	if {![winfo exists $mycanvas]} return
	$self disable

	# Restore old view port reporting
	$mymap configure -on-view-change $myviewchain
	return
    }

    # . . .. ... ..... ........ ............. .....................
    ## API

    method fit {} {
	debug.tklib/map/track/entry {}

	$self Fit
	return
    }

    method set {points} {
	debug.tklib/map/track/entry {}

	$self Set $points
	$self Fit
	return
    }

    method track {} {
	debug.tklib/map/track/entry {}

	return $mygeos
    }

    delegate method disable to myeditor
    delegate method enable  to myeditor
    delegate method active  to myeditor

    method clear {} {
	debug.tklib/map/track/entry {}

	set mygeos {}
	${selfns}::LINE clear
	return
    }

    method focus {index} {
	debug.tklib/map/track/entry {}

	# Determine focus point and its immediate neighbours in the track order
	# This provides us with the bounding box to center the map on.
	set min $index ; incr min -1
	set max $index ; incr max
	set hood {}
	for {set i $min} {$i <= $max} {incr i} {
	    set g [lindex $mygeos $i]
	    if {![llength $g]} continue
	    lappend hood $g
	}

	set focus [lindex $mygeos $index]
	set bbox  [map slippy geo bbox-list $hood]
	set zoom  [map slippy geo box fit $bbox $mycanvasdim [expr {[$mymap levels]-1}]]

	$mymap center $focus $zoom
	return
    }

    # . . .. ... ..... ........ ............. .....................
    ## Internal

    method Set {geos} {
	debug.tklib/map/track/entry {}

	set mygeos $geos

	# Load base editor with pixel positions of the line, from the geo location track
	$self Ignore yes

	set points [::map slippy geo 2point-list $myzoom $geos]
	${selfns}::LINE set-line $points

	$self Ignore no
	return
    }

    method Fit {} {
	debug.tklib/map/track/entry {}

	if {[llength $mygeos] < 2} return

	set center [map slippy geo center-list $mygeos]
	set bbox   [map slippy geo bbox-list   $mygeos]
	set zoom   [map slippy geo box fit $bbox $mycanvasdim [expr {[$mymap levels]-1}]]

	$mymap center $center $zoom
	return
    }

    method ViewChanged {zoom viewbox geobox} {
	debug.tklib/map/track/entry {}

	# Note that the viewport is reported twice, as both pixel and geo coordinates.
	# We are only interested in the pixel coordinates, coming first.

	# Pass view change reporting to old callback, if any
	if {[llength $myviewchain]} {
	    uplevel 1 [list {*}$myviewchain $zoom $viewbox $geobox]
	}

	# Update the canvas dimensions, needed for fitting.
	set mycanvasdim [map slippy point box dimensions $viewbox]

	# Ignore panning
	if {$zoom == $myzoom} return

	# For zoom changes regenerate the pixel positions from the geo locations.  We are using the
	# core function because here because performing a fitting here is incorrect.
	set myzoom $zoom
	$self Set $mygeos
	return
    }

    method PointsChanged {_ points} {
	debug.tklib/map/track/entry {}

	# Compute geo locations from pixel positions, if not suppressed (See set)
	if {$myignore} return

	set mygeos [map slippy point 2geo-list $myzoom $points]

	# Report changes further, if requested
	if {![llength $options(-on-track-change)]} return
	uplevel 1 [list {*}$options(-on-track-change) $mygeos]
	return
    }

    method Ignore {x} {
	debug.tklib/map/track/entry {}

	set myignore $x
	return
    }

    # . . .. ... ..... ........ ............. .....................
}

# # ## ### ##### ######## ############# ######################
return
