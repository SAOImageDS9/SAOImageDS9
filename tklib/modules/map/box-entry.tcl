## -*- tcl -*-
# # ## ### ##### ######## ############# ######################
## (c) 2022 Andreas Kupries
##
## Originally developed within the AKIS project (c) Andreas Kupries

# @@ Meta Begin
# Package map::box::entry 0.1
# Meta author      {Andreas Kupries}
# Meta location    https://core.tcl.tk/tklib
# Meta platform    tcl
# Meta summary	   Map Action Engine - Box Entry
# Meta description Attachment to map display widgets providing custom behaviour.
# Meta description This attachment enables users to enter a bounding box.
# Meta subject     {addon, box entry, map display}
# Meta subject     {box entry, map display, addon}
# Meta subject     {map display, addon, box entry}
# Meta require     {Tcl 8.6-}
# Meta require     canvas::edit::rectangle
# Meta require     debug
# Meta require     debug::caller
# Meta require     {map::slippy 0.8}
# Meta require     snit
# @@ Meta End

package provide map::box::entry 0.1

# # ## ### ##### ######## ############# ######################
## API
#
##  <class> OBJ map-widget
#
##  <obj> active	-> VOID		Is editing on ?
##  <obj> box		-> VOID		Query current box spec
##  <obj> clear		-> VOID		Clear box spec
##  <obj> disable	-> VOID		Stop editing
##  <obj> enable	-> VOID		Start editing
##  <obj> fit		-> VOID		Center and fit current box
##  <obj> set GEOBOX	-> VOID		Set box spec into editor
#
##  -on-box-change	Report changes to the box definition
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
package require canvas::edit::rectangle ;# - Pixel level editor

# # ## ### ##### ######## ############# ######################
## Ensemble setup.

namespace eval map      { namespace export box   ; namespace ensemble create }
namespace eval map::box { namespace export entry ; namespace ensemble create }

debug level  tklib/map/box/entry
debug prefix tklib/map/box/entry {<[pid]> [debug caller] | }

# # ## ### ##### ######## ############# ######################

snit::type ::map::box::entry {
    # . . .. ... ..... ........ ............. .....................
    ## User configuration

    option -on-box-change -default {}

    # . . .. ... ..... ........ ............. .....................
    ## State

    variable myeditor	 {}	;# Core rectangle editor
    variable mymap	 {}	;# Map display the behaviour is attached to
    variable mycanvas	 {}	;# Canvas internal to the map display
    variable myzoom	 {}	;# Map zoom level
    variable mycanvasdim {}	;# Canvas viewport dimensions
    variable mybox	 {}	;# Box specification
    variable myignore	 no	;# Internal flag to control handling of Points callback
    variable myviewchain {}	;# Old view reporting callback

    # . . .. ... ..... ........ ............. .....................
    ## Lifecycle

    constructor {map args} {
	debug.tklib/map/box/entry {}

	$self configurelist $args

	set mymap    $map
	set mycanvas [$map canvas]
	set mybox    {}
	set myignore no
	set myeditor \
	    [canvas::edit rectangle ${selfns}::RECT $mycanvas \
		 -radius           6 \
		 -add-remove-point 1 \
		 -drag-point       2 \
		 -data-cmd         [mymethod BoxChanged]]

	set myviewchain [$mymap cget -on-view-change]
	$mymap configure -on-view-change [mymethod ViewChanged]
	return
    }

    destructor {
	debug.tklib/map/box/entry {}
	return

	if {![winfo exists $mycanvas]} return
	$self disable

	# Restore old view port reporting
	$mymap configure -on-view-change $myviewchain
	return
    }

    # . . .. ... ..... ........ ............. .....................
    ## API

    delegate method disable to myeditor
    delegate method enable  to myeditor
    delegate method active  to myeditor

    method box {} {
	debug.tklib/map/box/entry {}

	return $mybox
    }

    method clear {} {
	debug.tklib/map/box/entry {}

	set mybox {}
	${selfns}::RECT clear
	return
    }

    method fit {} {
	debug.tklib/map/box/entry {}

	$self Fit
	return
    }

    method set {geobox} {
	debug.tklib/map/box/entry {}

	$self Set $geobox
	$self Fit
	return
    }

    # . . .. ... ..... ........ ............. .....................
    ## Internal

    method Set {geobox} {
	debug.tklib/map/box/entry {}

	set mybox $geobox
	if {![llength $mybox]} return

	# Load base editor with pixel positions of the geobox, from the geo box
	$self Ignore yes

	set pbox [map slippy geo box 2point $myzoom $geobox]
	${selfns}::RECT set {*}$pbox

	$self Ignore no
	return
    }

    method Fit {} {
	debug.tklib/map/box/entry {}

	if {[llength $mybox] < 2} return

	set zoom   [map slippy geo box fit $mybox $mycanvasdim [expr {[$mymap levels]-1}]]
	set center [map slippy geo box center $mybox]

	$mymap center $center $zoom
	return
    }

    method ViewChanged {zoom viewbox geobox} {
	debug.tklib/map/box/entry {}

	# Note that the viewport is reported twice, as both pixel and geo coordinates.
	# We are only interested in the pixel coordinates, coming first.

	debug.tklib/map/box/entry {}

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
	$self Set $mybox
	return
    }

    method BoxChanged {_ pbox} {
	debug.tklib/map/box/entry {}

	# Compute geo locations from pixel positions, if not suppressed (See set)
	if {$myignore} return

	if {![llength $pbox]} {
	    set mybox {}
	} else {
	    set mybox [map slippy geo box limit [map slippy point box 2geo $myzoom $pbox]]
	}

	# Report changes further, if requested
	if {![llength $options(-on-box-change)]} return
	uplevel 1 [list {*}$options(-on-box-change) $mybox]
	return
    }

    method Ignore {x} {
	debug.tklib/map/box/entry {}

	set myignore $x
	return
    }

    # . . .. ... ..... ........ ............. .....................
}

# # ## ### ##### ######## ############# ######################
return
