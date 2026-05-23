## -*- mode: tcl; fill-column: 90  -*-
# # ## ### ##### ######## ############# ######################
## (c) 2022 Andreas Kupries
##
## Originally developed within the AKIS project (c) Andreas Kupries

# @@ Meta Begin
# Package map::provider::osm 0.1
# Meta author      {Andreas Kupries}
# Meta location    https://core.tcl.tk/tlib
# Meta platform    tcl
# Meta summary	   Tile provider using OpenStreetMap Mapnik as origin
# Meta description Tile provider using OpenStreetMap Mapnik as origin and
# Meta description caching tiles in the local filesystem.
# Meta subject	   map {tile provider} {provider, tiles} openstreetmap mapnik
# Meta require     {Tcl 8.6-}
# Meta require     debug
# Meta require     debug::caller
# Meta require     {map::slippy 0.8}
# Meta require     map::slippy::cache
# Meta require     map::slippy::fetcher
# Meta require     snit
# @@ Meta End

package provide map::provider::osm 0.1

# # ## ### ##### ######## ############# ######################
## API
#
##  <class> OBJ cachedir
#
##  <obj> levels
##  <obj> get TILE DONECMD
##  <obj> tileheight
##  <obj> tilewidth
#
# # ## ### ##### ######## ############# ######################
## Requirements

package require Tcl 8.6-
#                                      ;# Tcllib...
package require debug		       ;# - Narrative Tracing
package require debug::caller          ;#
package require map::slippy 0.8        ;# - Slippy Utilities - Latest API
package require map::slippy::cache     ;#          Tile cache
package require map::slippy::fetcher   ;#          Server access
package require snit                   ;# - OO system

# # ## ### ##### ######## ############# ######################
## Ensemble setup.

namespace eval map           { namespace export provider ; namespace ensemble create }
namespace eval map::provider { namespace export osm      ; namespace ensemble create }

debug level  tklib/map/provider/osm
debug prefix tklib/map/provider/osm {<[pid]> [debug caller] | }

# # ## ### ##### ######## ############# ######################

snit::type ::map::provider::osm {
    # . . .. ... ..... ........ ............. .....................
    ## Configuration
    # - OpenStreetMap. Mapnik Tile Set
    # - Alternative: http://tah.openstreetmap.org/Tiles/tile

    typevariable ourtileset  http://tile.openstreetmap.org
    typevariable ourlevels   20

    # . . .. ... ..... ........ ............. .....................
    ## Lifecycle

    constructor {cachedir} {
	debug.tklib/map/provider/osm {}

	map::slippy::fetcher ${selfns}::TILE  $ourlevels $ourtileset
	map::slippy::cache   ${selfns}::FETCH $cachedir ${selfns}::TILE

	set myfetcher ${selfns}::FETCH
	return
    }

    destructor {
	debug.tklib/map/provider/osm {}
	return
    }

    # . . .. ... ..... ........ ............. .....................
    ## State

    variable myfetcher

    # . . .. ... ..... ........ ............. .....................
    ## API

    delegate method tileheight to myfetcher
    delegate method tilewidth  to myfetcher

    method levels {} {
	debug.tklib/map/provider/osm {}
	return $ourlevels
    }

    method get {tile donecmd} {
	debug.tklib/map/provider/osm {}
	# tile = (zoom row col)

	# The standard fetcher throws errors on invalid tiles.  Here this is modified to
	# report the bad tile as 'not set'

	# Regard of tile validity, result reporting runs through our local receiver to
	# capture and report issues in the user-specified callback

	if {![::map slippy tile valid {*}$tile $ourlevels]} {
	    $self GOT $donecmd unset $tile
	    return
	}

	${selfns}::FETCH get $tile [mymethod GOT $donecmd]
	return
    }

    # . . .. ... ..... ........ ............. .....................
    ## Internal

    method GOT {donecmd action tile args} {
	debug.tklib/map/provider/osm {}

	# Intercalated local tile receiver. Intercepts backend reporting (requested tile
	# is available, is invalid, etc). Passes to the actual receiver and reports issues
	# with it (error stack to stdout).

	if {[catch {
	    uplevel #0 [list {*}$donecmd $action $tile {*}$args]
	}]} { puts $::errorInfo }
	return
    }

    # . . .. ... ..... ........ ............. .....................
}

# # ## ### ##### ######## ############# ######################
return
