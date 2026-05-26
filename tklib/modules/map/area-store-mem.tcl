## -*- tcl -*-
# # ## ### ##### ######## ############# ######################
## (c) 2022 Andreas Kupries

# @@ Meta Begin
# Package map::area::store::memory 0.1
# Meta author      {Andreas Kupries}
# Meta location    https://core.tcl.tk/tklib
# Meta platform    tcl
# Meta summary	   In-memory store for geo/area definitions
# Meta description In-memory store for geo/area definitions, with
# Meta description memoized calculation of extended attributes.
# Meta description Base data is taken from a backing store.
# Meta description Anything API-compatible to map::area::store::fs
# Meta subject	   {center, geo/area}
# Meta subject	   {diameter, geo/area}
# Meta subject	   {geo/area pixels, zoom}
# Meta subject	   {geo/area, center}
# Meta subject	   {geo/area, diameter}
# Meta subject	   {geo/area, memory store}
# Meta subject	   {geo/area, perimeter length}
# Meta subject	   {length, geo/area, perimeter}
# Meta subject	   {memory store, geo/area}
# Meta subject	   {perimeter length, geo/area}
# Meta subject	   {pixels, zoom, geo/area}
# Meta subject	   {store, geo/area, memory}
# Meta subject	   {zoom, geo/area pixels}
# Meta require     {Tcl 8.6-}
# Meta require     debug
# Meta require     debug::caller
# Meta require     {map::slippy 0.8}
# Meta require     snit
# @@ Meta End

package provide map::area::store::memory 0.1

# # ## ### ##### ######## ############# ######################
## API
#
##  <class> OBJ backend-store
#
##  <obj> ids			-> list (id...)
##  <obj> get ID		-> dict (name, geo, diameter, length, parts, center)
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

namespace eval map              { namespace export area  ; namespace ensemble create }
namespace eval map::area        { namespace export store  ; namespace ensemble create }
namespace eval map::area::store { namespace export memory ; namespace ensemble create }

debug level  tklib/map/area/store/memory
debug prefix tklib/map/area/store/memory {<[pid]> [debug caller] | }

# # ## ### ##### ######## ############# ######################

snit::type ::map::area::store::memory {
    # ..................................................................
    ## System configuration

    typevariable ourmagic 4.5	;# This 1.5*3, where 3 is the default circle radius used in
    #		                 # canvas::edit::points for the display of point markers.
    # TODO: synch with area-display configuration, i.e. radius changes.
    # YET:  Doing at indexing time will require a fixed threshold.

    # . . .. ... ..... ........ ............. .....................
    ## State
    #
    # - Backing store, command prefix
    # - Pixel store     :: dict (id -> zoom -> list(point...))
    # - Attribute store :: dict (id -> attr)
    #              attr :: dict ("names"     -> list (string...)
    #                            "geo"       -> list (geo...)
    #                            "diameter"  -> double
    #                            "perimeter" -> double
    #                            "center"    -> geo
    #                            "bbox"      -> geobox
    #                            "parts"     -> int)

    variable mystore  {}
    variable myattr   {}
    variable mypixels {}

    # . . .. ... ..... ........ ............. .....................
    ## Lifecycle

    constructor {store} {
	debug.tklib/map/area/store/memory {}

	set mystore  $store
	return
    }

    destructor {
	debug.tklib/map/area/store/memory {}
	return
    }

    # . . .. ... ..... ........ ............. .....................
    ## API

    delegate method * to mystore except get	;# ids, visible

    method get {id} {
	debug.tklib/map/area/store/memory {}

	if {![dict exists $myattr $id]} {
	    dict set myattr $id [$self Attributes $id]
	}
	return [dict get $myattr $id]
    }

    method pixels {id zoom} {
	debug.tklib/map/area/store/memory {}

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

	set bbox      [map slippy geo bbox-list       $geos]
	set center    [map slippy geo center-list     $geos]
	set diameter  [map slippy geo diameter-list   $geos]
	set perimeter [map slippy geo distance-list 1 $geos]

	set parts [llength $geos]
	if {$parts < 3} { incr parts -1 }

	dict set attr bbox      $bbox
	dict set attr center    $center
	dict set attr diameter  $diameter
	dict set attr perimeter $perimeter
	dict set attr parts     $parts

	#puts |$id|$attr|

	return $attr
    }

    method Pixels {zoom id} {
	debug.tklib/map/area/store/memory {}

	set attr   [DO get $id]
	set geos   [dict get $attr geo]
	set points [map slippy geo 2point-list $zoom $geos]
	set points [map slippy point simplify radial $ourmagic 1 $points]
	set points [map slippy point simplify rdp                $points]

	return $points
    }

    proc DO {args} {
	debug.tklib/map/area/store/memory {}

	upvar 1 mystore mystore
	return [uplevel #0 [list {*}$mystore {*}$args]]
    }

    # . . .. ... ..... ........ ............. .....................
}

# # ## ### ##### ######## ############# ######################
return
