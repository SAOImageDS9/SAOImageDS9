## -*- tcl -*-
# # ## ### ##### ######## ############# ######################
## (c) 2022 Andreas Kupries

# @@ Meta Begin
# Package map::box::store::memory 0.1
# Meta author      {Andreas Kupries}
# Meta location    https://core.tcl.tk/tklib
# Meta platform    tcl
# Meta summary	   In-memory store for geo/box definitions
# Meta description In-memory store for geo/box definitions, with
# Meta description memoized calculation of extended attributes.
# Meta description Base data is taken from a backing store.
# Meta description Anything API-compatible to map::box::store::fs
# Meta subject	   {center, geo/box}
# Meta subject	   {diameter, geo/box}
# Meta subject	   {geo/box pixels, zoom}
# Meta subject	   {geo/box, center}
# Meta subject	   {geo/box, diameter}
# Meta subject	   {geo/box, memory store}
# Meta subject	   {geo/box, perimeter length}
# Meta subject	   {length, geo/box, perimeter}
# Meta subject	   {memory store, geo/box}
# Meta subject	   {perimeter length, geo/box}
# Meta subject	   {pixels, zoom, geo/box}
# Meta subject	   {store, geo/box, memory}
# Meta subject	   {zoom, geo/box pixels}
# Meta require     {Tcl 8.6-}
# Meta require     debug
# Meta require     debug::caller
# Meta require     {map::slippy 0.8}
# Meta require     snit
# @@ Meta End

package provide map::box::store::memory 0.1

# # ## ### ##### ######## ############# ######################
## API
#
##  <class> OBJ backend-store
#
##  <obj> ids			-> list (id...)
##  <obj> get ID		-> dict (names, geo, diameter, perimeter, center)
##  <obj> visible GEOBOX	-> list (id...)
##  <obj> pixels ID ZOOM	-> pointbox
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

namespace eval map             { namespace export box    ; namespace ensemble create }
namespace eval map::box        { namespace export store  ; namespace ensemble create }
namespace eval map::box::store { namespace export memory ; namespace ensemble create }

debug level  tklib/map/box/store/memory
debug prefix tklib/map/box/store/memory {<[pid]> [debug caller] | }

# # ## ### ##### ######## ############# ######################

snit::type ::map::box::store::memory {

    # . . .. ... ..... ........ ............. .....................
    ## State
    #
    # - Backing store, command prefix
    # - Pixel store     :: dict (id -> zoom -> pointbox)
    # - Attribute store :: dict (id -> attr)
    #              attr :: dict ("names"     -> list (string...)
    #                            "geo"       -> geobox
    #                            "diameter"  -> double
    #                            "perimeter" -> double
    #                            "center"    -> geo)

    variable mystore  {}
    variable myattr   {}
    variable mypixels {}

    # . . .. ... ..... ........ ............. .....................
    ## Lifecycle

    constructor {store} {
	debug.tklib/map/box/store/memory {}

	set mystore $store
	return
    }

    destructor {
	debug.tklib/map/box/store/memory {}
	return
    }

    # . . .. ... ..... ........ ............. .....................
    ## API

    delegate method * to mystore except get	;# ids, visible

    method get {id} {
	debug.tklib/map/box/store/memory {}

	if {![dict exists $myattr $id]} {
	    dict set myattr $id [$self Attributes $id]
	}
	return [dict get $myattr $id]
    }

    method pixels {id zoom} {
	debug.tklib/map/box/store/memory {}

	if {![dict exists $mypixels $id $zoom]} {
	    dict set mypixels $id $zoom [$self Pixels $zoom $id]
	}
	return [dict get $mypixels $id $zoom]
    }

    # . . .. ... ..... ........ ............. .....................
    ## Helpers

    method Attributes {id} {
	set attr [DO get $id]
	set gbox [dict get $attr geo]

	set center    [map slippy geo box center    $gbox]
	set diameter  [map slippy geo box diameter  $gbox]
	set perimeter [map slippy geo box perimeter $gbox]

	dict set attr center    $center
	dict set attr diameter  $diameter
	dict set attr perimeter $perimeter

	#puts |$id|$attr|

	return $attr
    }

    method Pixels {zoom id} {
	debug.tklib/map/box/store/memory {}

	set attr [DO get $id]
	set gbox [dict get $attr geo]
	set pbox [map slippy geo box 2point $zoom $gbox]

	return $pbox
    }

    proc DO {args} {
	debug.tklib/map/box/store/memory {}

	upvar 1 mystore mystore
	return [uplevel #0 [list {*}$mystore {*}$args]]
    }

    # . . .. ... ..... ........ ............. .....................
}

# # ## ### ##### ######## ############# ######################
return
