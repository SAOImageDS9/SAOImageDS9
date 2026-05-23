## -*- tcl -*-
# # ## ### ##### ######## ############# ######################
## (c) 2022 Andreas Kupries
##
## Originally developed within the AKIS project (c) Andreas Kupries

# @@ Meta Begin
# Package map::track::store::fs 0.1
# Meta author      {Andreas Kupries}
# Meta location    https://core.tcl.tk/tklib
# Meta platform    tcl
# Meta summary	   Filesystem-based store of geo/track definitions
# Meta description Store loading geo/track definitions from a
# Meta description directory in the filesystem.
# Meta subject	   map
# Meta subject	   {filesystem store, geo/track}
# Meta subject	   {geo/track, filesystem store}
# Meta subject	   {store, geo/track, filesystem}
# Meta require     {Tcl 8.6-}
# Meta require     debug
# Meta require     debug::caller
# Meta require     {map::slippy 0.8}
# Meta require     snit
# @@ Meta End

package provide map::track::store::fs 0.1

# # ## ### ##### ######## ############# ######################
## API
#
##  <class> OBJ trackdirectory
#
##  <obj> ids			-> list (id...)
##  <obj> get ID		-> dict (name -> STRING, geo -> list(geo))
##  <obj> visible GEOBOX	-> list (id...)
#
##  -pattern	File pattern for matching geo/track files
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
package require map::track::file

# # ## ### ##### ######## ############# ######################
## Ensemble setup.

namespace eval map               { namespace export track ; namespace ensemble create }
namespace eval map::track        { namespace export store ; namespace ensemble create }
namespace eval map::track::store { namespace export fs    ; namespace ensemble create }

debug level  tklib/map/track/store/fs
debug prefix tklib/map/track/store/fs {<[pid]> [debug caller] | }

# # ## ### ##### ######## ############# ######################

snit::type ::map::track::store::fs {
    # . . .. ... ..... ........ ............. .....................
    ## User configuration

    option -pattern -default {*.track} -readonly 1

    # . . .. ... ..... ........ ............. .....................
    ## State, In-memory cache
    #
    # - Visibility map  :: dict (geo -> id)
    # - Attribute store :: dict (id -> attr)
    #              attr :: dict ("names" -> list (string...)
    #                            "geo"   -> list (geo...))

    variable mypoints {}
    variable myattr   {}

    # . . .. ... ..... ........ ............. .....................
    ## Lifecycle

    constructor {directory} {
	debug.tklib/map/track/store/fs {}

	$self Load $directory
	return
    }

    destructor {
	debug.tklib/map/track/store/fs {}
	return
    }

    # . . .. ... ..... ........ ............. .....................
    ## API

    method ids {} {
	debug.tklib/map/track/store/fs {}

	return [lsort -dict [dict keys $myattr]]
    }

    method get {id} {
	debug.tklib/map/track/store/fs {}

	return [dict get $myattr $id]
    }

    method visible {geobox} {
	debug.tklib/map/track/store/fs {}

	set ids {}
	dict for {geo id} $mypoints {
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
	debug.tklib/map/track/store/fs {}

	foreach path [glob -nocomplain -directory $directory $options(-pattern)] {
	    if {![file exists   $path]} continue
	    if {![file isfile   $path]} continue
	    if {![file readable $path]} continue

	    set track [map track file read $path]
	    if {![dict size $track]} continue
	    # track :: dict (names, geo)

	    # Note: file path is used as track ID

	    # Update visibility map
	    foreach p [dict get $track geo] {
		dict set mypoints $p $path
	    }

	    # Update base attribute information
	    dict set myattr $path $track
	}

	#array set __ $myattr ; parray __ ; unset __
	return
    }

    # . . .. ... ..... ........ ............. .....................
}

# # ## ### ##### ######## ############# ######################
return
