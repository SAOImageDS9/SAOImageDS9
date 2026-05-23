## -*- tcl -*-
# # ## ### ##### ######## ############# ######################
## (c) 2022 Andreas Kupries

# @@ Meta Begin
# Package map::track::store::memory 0.1
# Meta author      {Andreas Kupries}
# Meta location    https://core.tcl.tk/tklib
# Meta platform    tcl
# Meta summary	   In-memory store for geo/track definitions
# Meta description In-memory store for geo/track definitions, with
# Meta description memoized calculation of extended attributes.
# Meta description Base data is taken from a backing store.
# Meta description Anything API-compatible to map::track::store::fs
# Meta subject	   {center, geo/track}
# Meta subject	   {diameter, geo/track}
# Meta subject	   {geo/track pixels, zoom}
# Meta subject	   {geo/track, center}
# Meta subject	   {geo/track, diameter}
# Meta subject	   {geo/track, memory store}
# Meta subject	   {geo/track, perimeter length}
# Meta subject	   {length, geo/track, perimeter}
# Meta subject	   {memory store, geo/track}
# Meta subject	   {perimeter length, geo/track}
# Meta subject	   {pixels, zoom, geo/track}
# Meta subject	   {store, geo/track, memory}
# Meta subject	   {zoom, geo/track pixels}
# Meta require     {Tcl 8.6-}
# Meta require     debug
# Meta require     debug::caller
# Meta require     {map::slippy 0.8}
# Meta require     snit
# @@ Meta End

package provide map::track::store::memory 0.1

# # ## ### ##### ######## ############# ######################
## API
#
##  <class> OBJ backend-store
#
##  <obj> ids			-> list (id...)
##  <obj> get ID		-> dict (name, geo, diameter, length, parts, center, box)
##  <obj> visible GEOBOX	-> list (id...)
##  <obj> pixels ID ZOOM	-> list (point...)
#
# # ## ### ##### ######## ############# ######################
## Requirements

package require Tcl 8.6-
#
#                               ;# Tcllib
package require debug		;# - Narrative Tracing
package require debug::caller   ;#
package require map::slippy 0.8	;# - Map utilities
package require snit            ;# - OO system

# # ## ### ##### ######## ############# ######################
## Ensemble setup.

namespace eval map               { namespace export track  ; namespace ensemble create }
namespace eval map::track        { namespace export store  ; namespace ensemble create }
namespace eval map::track::store { namespace export memory ; namespace ensemble create }

debug level  tklib/map/track/store/memory
debug prefix tklib/map/track/store/memory {<[pid]> [debug caller] | }

# # ## ### ##### ######## ############# ######################

snit::type ::map::track::store::memory {
    # ..................................................................
    ## System configuration

    typevariable ourmagic 4.5	;# This 1.5*3, where 3 is the default circle radius used in
    #		                 # canvas::edit::points for the display of point markers.
    # TODO: synch with track-display configuration, i.e. radius changes.
    # YET:  Doing at indexing time will require a fixed threshold.

    # . . .. ... ..... ........ ............. .....................
    ## State
    #
    # - Backing store, command prefix
    # - Pixel store     :: dict (id -> zoom -> list(point...))
    # - Attribute store :: dict (id -> attr)
    #              attr :: dict ("names"    -> list (string...)
    #                            "geo"      -> list (geo...)
    #                            "diameter" -> double
    #                            "length"   -> double
    #                            "center"   -> geo
    #                            "bbox"     -> geobox
    #                            "parts"    -> int)

    variable mystore  {}
    variable myattr   {}
    variable mypixels {}

    # . . .. ... ..... ........ ............. .....................
    ## Lifecycle

    constructor {store} {
	debug.tklib/map/track/store/memory {}

	set mystore  $store
	return
    }

    destructor {
	debug.tklib/map/track/store/memory {}
	return
    }

    # . . .. ... ..... ........ ............. .....................
    ## API

    delegate method * to mystore except get	;# ids, visible

    method get {id} {
	debug.tklib/map/track/store/memory {}

	if {![dict exists $myattr $id]} {
	    dict set myattr $id [$self Attributes $id]
	}
	return [dict get $myattr $id]
    }

    method pixels {id zoom} {
	debug.tklib/map/track/store/memory {}

	if {![dict exists $mypixels $id $zoom]} {
	    dict set mypixels $id $zoom [$self Pixels $zoom $id]
	}
	return [dict get $mypixels $id $zoom]
    }

    # . . .. ... ..... ........ ............. .....................
    ## Helpers

    method Attributes {id} {
	set attr [DO get $id]
	set geos [dict get $attr geo]

	set bbox     [map slippy geo bbox-list       $geos]
	set center   [map slippy geo center-list     $geos]
	set diameter [map slippy geo diameter-list   $geos]
	set length   [map slippy geo distance-list 0 $geos]
	set parts    [expr { max(0, [llength $geos] - 1) }]

	dict set attr bbox     $bbox
	dict set attr center   $center
	dict set attr diameter $diameter
	dict set attr length   $length
	dict set attr parts    $parts

	#puts |$id|$attr|

	return $attr
    }

    method Pixels {zoom id} {
	debug.tklib/map/track/store/memory {}

	set attr   [DO get $id]
	set geos   [dict get $attr geo]
	set points [map slippy geo 2point-list $zoom $geos]
	set points [map slippy point simplify radial $ourmagic 0 $points]
	set points [map slippy point simplify rdp                $points]

	return $points
    }

    proc DO {args} {
	debug.tklib/map/track/store/memory {}

	upvar 1 mystore mystore
	return [uplevel #0 [list {*}$mystore {*}$args]]
    }

    # . . .. ... ..... ........ ............. .....................
}

# # ## ### ##### ######## ############# ######################
return
