## -*- tcl -*-
# # ## ### ##### ######## ############# ######################
## (c) 2022 Andreas Kupries
##
## Originally developed within the AKIS project (c) Andreas Kupries

# @@ Meta Begin
# Package map::point::store::fs 0.1
# Meta author      {Andreas Kupries}
# Meta location    https://core.tcl.tk/tklib
# Meta platform    tcl
# Meta summary	   Filesystem-based store of geo/point definitions
# Meta description Store loading geo/point definitions from a
# Meta description directory in the filesystem.
# Meta subject	   map
# Meta subject	   {filesystem store, geo/point}
# Meta subject	   {geo/point, filesystem store}
# Meta subject	   {store, geo/point, filesystem}
# Meta require     {Tcl 8.6-}
# Meta require     debug
# Meta require     debug::caller
# Meta require     {map::slippy 0.8}
# Meta require     snit
# @@ Meta End

package provide map::point::store::fs 0.1

# # ## ### ##### ######## ############# ######################
## API
#
##  <class> OBJ pointdirectory
#
##  <obj> ids			-> list (id...)
##  <obj> get ID		-> dict (name -> STRING, geo -> list(geo))
##  <obj> visible GEOBOX	-> list (id...)
#
##  -pattern	File pattern for matching geo/point files
#
# # ## ### ##### ######## ############# ######################
## Requirements

package require Tcl 8.6-
#                               ;# Tcllib
package require debug		;# - Narrative Tracing
package require debug::caller   ;#
package require map::slippy 0.8	;# - Map utilities	(inside, visibility)
package require snit            ;# - OO system
#
package require map::point::file

# # ## ### ##### ######## ############# ######################
## Ensemble setup.

namespace eval map               { namespace export point ; namespace ensemble create }
namespace eval map::point        { namespace export store ; namespace ensemble create }
namespace eval map::point::store { namespace export fs    ; namespace ensemble create }

debug level  tklib/map/point/store/fs
debug prefix tklib/map/point/store/fs {<[pid]> [debug caller] | }

# # ## ### ##### ######## ############# ######################

snit::type ::map::point::store::fs {
    # . . .. ... ..... ........ ............. .....................
    ## User configuration

    option -pattern -default {*.points} -readonly 1

    # . . .. ... ..... ........ ............. .....................
    ## State, In-memory cache
    #
    # - Visibility map  :: dict (geo -> id)
    # - Attribute store :: dict (id -> attr)
    #              attr :: dict ("names" -> list (string...)
    #                            "geo"   -> geo
    #                            "kind"  -> string)

    variable mypoints {}
    variable myattr   {}

    # . . .. ... ..... ........ ............. .....................
    ## Lifecycle

    constructor {directory} {
	debug.tklib/map/point/store/fs {}

	$self Load $directory
	return
    }

    destructor {
	debug.tklib/map/point/store/fs {}
	return
    }

    # . . .. ... ..... ........ ............. .....................
    ## API

    method ids {} {
	debug.tklib/map/point/store/fs {}

	return [lsort -dict [dict keys $myattr]]
    }

    method get {id} {
	debug.tklib/map/point/store/fs {}

	return [dict get $myattr $id]
    }

    method visible {geobox zoom} {
	# zoom - ignored
	debug.tklib/map/point/store/fs {}

	set ids {}
	dict for {geo id} $mypoints {
	    #puts $id//$geo
	    if {![map slippy geo box inside $geobox $geo]} continue
	    lappend ids $id
	}
	set ids [lsort -unique $ids]
	#puts (($ids))
	return $ids
    }

    # . . .. ... ..... ........ ............. .....................
    ## Helpers

    method Load {directory} {
	debug.tklib/map/point/store/fs {}

	foreach path [glob -nocomplain -directory $directory $options(-pattern)] {
	    if {![file exists   $path]} continue
	    if {![file isfile   $path]} continue
	    if {![file readable $path]} continue

	    set points [map point file read $path]
	    # list (dict (names, kind, geo)...)
	    if {![llength $points]} continue

	    #puts ++//[llength $points]

	    # Note: file path and sequence number are used as point ID

	    set seq 0
	    foreach point $points {
		# point :: dict (names, geo, kind)

		set key $path/[incr seq]

		# Update visibility map and attribute information
		dict set mypoints [dict get $point geo] $key
		dict set myattr $key $point
	    }
	}

	#array set __ $myattr ; parray __ ; unset __
	return
    }

    # . . .. ... ..... ........ ............. .....................
}

# # ## ### ##### ######## ############# ######################
return
