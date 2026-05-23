## -*- tcl -*-
# # ## ### ##### ######## ############# ######################
## (c) 2022 Andreas Kupries
##
## Filesystem based storage of geo/box information - Independent of AKIS

## Originally developed within the AKIS project (c) Andreas Kupries

# @@ Meta Begin
# Package map::box::store::fs 0.1
# Meta author      {Andreas Kupries}
# Meta location    https://core.tcl.tk/tklib
# Meta platform    tcl
# Meta summary	   Filesystem-based store of geobox definitions
# Meta description Store loading geobox definitions from a
# Meta description directory in the filesystem.
# Meta subject	   map
# Meta subject	   {filesystem store, geobox}
# Meta subject	   {geobox, filesystem store}
# Meta subject	   {store, geobox, filesystem}
# Meta require     {Tcl 8.6-}
# Meta require     debug
# Meta require     debug::caller
# Meta require     {map::slippy 0.8}
# Meta require     snit
# @@ Meta End

package provide map::box::store::fs 0.1

# # ## ### ##### ######## ############# ######################
## API
#
##  <class> OBJ boxdirectory
#
##  <obj> ids			-> list (id...)
##  <obj> get ID		-> dict (name -> STRING, geobox -> GEOBOX)
##  <obj> visible GEOBOX	-> list (id...)
#
##  -pattern	File pattern for matching geobox files
#
## Box file format specification:
## - Line oriented
## - No comments, no empty lines
## - Leading/trailing white allowed, not recommended
## - 4 lines, each a raw geo coordinate value
## - Order as expected for a geobox: lat min, lon min, lat max, lon max
#
## BEWARE - Reader in this package does not validate the coordinates
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
package require map::box::file

# # ## ### ##### ######## ############# ######################
## Ensemble setup.

namespace eval map             { namespace export box   ; namespace ensemble create }
namespace eval map::box        { namespace export store ; namespace ensemble create }
namespace eval map::box::store { namespace export fs    ; namespace ensemble create }

debug level  tklib/map/box/store/fs
debug prefix tklib/map/box/store/fs {<[pid]> [debug caller] | }

# # ## ### ##### ######## ############# ######################

snit::type ::map::box::store::fs {
    # . . .. ... ..... ........ ............. .....................
    ## User configuration

    option -pattern -default {*.box} -readonly 1

    # . . .. ... ..... ........ ............. .....................
    ## State, In-memory cache
    #
    # - Visibility map  :: dict (geo -> id)
    # - Attribute store :: dict (id -> attr)
    #              attr :: dict ("names" -> list (string...)
    #                            "geo"   -> geobox)

    variable mypoints {}
    variable myattr   {}

    # . . .. ... ..... ........ ............. .....................
    ## Lifecycle

    constructor {directory} {
	debug.tklib/map/box/store/fs {}

	$self Load $directory
	return
    }

    destructor {
	debug.tklib/map/box/store/fs {}
	return
    }

    # . . .. ... ..... ........ ............. .....................
    ## API

    method ids {} {
	debug.tklib/map/box/store/fs {}

	return [lsort -dict [dict keys $myattr]]
    }

    method get {id} {
	debug.tklib/map/box/store/fs {}

	return [dict get $myattr $id]
    }

    method visible {geobox} {
	debug.tklib/map/box/store/fs {}

	# Consider visibility through box overlap instead of box corners visisble

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
	debug.tklib/map/box/store/fs {}

	foreach path [glob -nocomplain -directory $directory $options(-pattern)] {
	    if {![file exists   $path]} continue
	    if {![file isfile   $path]} continue
	    if {![file readable $path]} continue

	    set box [map box file read $path]
	    if {![dict size $box]} continue
	    # box :: dict (names, geo)

	    # Note: file path is used as box ID

	    # Update visibility map
	    foreach p [map slippy geo box corners [dict get $box geo]] {
		dict set mypoints $p $path
	    }

	    # Update base attribute information
	    dict set myattr $path $box
	}

	#array set __ $myattr ; parray __ ; unset __
	return
    }

    # . . .. ... ..... ........ ............. .....................
}

# # ## ### ##### ######## ############# ######################
return
