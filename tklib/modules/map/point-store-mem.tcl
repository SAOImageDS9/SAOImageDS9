## -*- tcl -*-
# # ## ### ##### ######## ############# ######################
## (c) 2022-2023 Andreas Kupries

# @@ Meta Begin
# Package map::point::store::memory 0.1
# Meta author      {Andreas Kupries}
# Meta location    https://core.tcl.tk/tklib
# Meta platform    tcl
# Meta summary	   In-memory store for geo/point definitions
# Meta description In-memory store for geo/point definitions, with
# Meta description memoized calculation of extended attributes.
# Meta description Base data is taken from a backing store.
# Meta description Anything API-compatible to map::point::store::fs
# Meta subject	   {center, geo/point}
# Meta subject	   {diameter, geo/point}
# Meta subject	   {geo/point pixels, zoom}
# Meta subject	   {geo/point, center}
# Meta subject	   {geo/point, diameter}
# Meta subject	   {geo/point, memory store}
# Meta subject	   {geo/point, perimeter length}
# Meta subject	   {length, geo/point, perimeter}
# Meta subject	   {memory store, geo/point}
# Meta subject	   {perimeter length, geo/point}
# Meta subject	   {pixels, zoom, geo/point}
# Meta subject	   {store, geo/point, memory}
# Meta subject	   {zoom, geo/point pixels}
# Meta require     {Tcl 8.6-}
# Meta require     debug
# Meta require     debug::caller
# Meta require     {map::slippy 0.8}
# Meta require     snit
# @@ Meta End

package provide map::point::store::memory 0.1

# # ## ### ##### ######## ############# ######################
## API
#
##  <class> OBJ backend-store
#
##  <obj> ids			-> list (id...)
##  <obj> get ID		-> dict (name, geo, kind)
##  <obj> visible GEOBOX ZOOM	-> list (id...)
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

namespace eval map               { namespace export point  ; namespace ensemble create }
namespace eval map::point        { namespace export store  ; namespace ensemble create }
namespace eval map::point::store { namespace export memory ; namespace ensemble create }

debug level  tklib/map/point/store/memory
debug prefix tklib/map/point/store/memory {<[pid]> [debug caller] | }

# # ## ### ##### ######## ############# ######################

snit::type ::map::point::store::memory {
    # ..................................................................
    ## System configuration

    # . . .. ... ..... ........ ............. .....................
    ## State
    #
    # - Backing store, command prefix
    # - Pixel store     :: dict (id -> zoom -> point)
    # - Attribute store :: dict (id -> attr)
    #              attr :: dict ("names"    -> list (string...)
    #                            "geo"      -> geo
    #                            "kind"     -> string)

    variable mystore  {}
    variable mypixels {}
    variable myattr   {}

    # Visibility data based on zoom level (in the lower levels clusters begin to replace points).
    # Note that cluster geo information is stored in myattr also.

    variable myids {} ;# :: dict (zoom -> list (id...))

    # . . .. ... ..... ........ ............. .....................
    ## Lifecycle

    constructor {store maxzoom} {
	debug.tklib/map/point/store/memory {}

	set mystore $store

	# This package computes the clustering on construction time, from the geo locations found in
	# the backing store. A better system would be able to get the clustering directly from the
	# store, without any investment of runtime. IOW the clustering would be pre-computed
	# somewhere else, ahead of time. Further, the algorithm's core complexity likely is
	# O(n**2). More complex data structures (rtree or similar) are needed for a better O.

	# This package however is mainly for demonstration purposes, for use on/with data sets where
	# the scaling issues of this approach do not appear yet.

	$self LoadAndCluster $maxzoom
	return
    }

    destructor {
	debug.tklib/map/point/store/memory {}
	return
    }

    # . . .. ... ..... ........ ............. .....................
    ## API

    delegate method * to mystore except get	;# ids, visible

    method get {id} {
	debug.tklib/map/point/store/memory {}
	return [dict get $myattr $id]
    }

    method pixels {id zoom} {
	debug.tklib/map/point/store/memory {}
	return [dict get $mypixels $id $zoom]
    }

    method visible {geobox zoom} {
	debug.tklib/map/point/store/memory {}

	# visible, taking zoom into account - i.e. deliver clusters as necessary.

	set ids {}
	foreach id [dict get $myids $zoom] {
	    set geo [dict get $myattr $id geo]
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

    method LoadAndCluster {maxzoom} {
	debug.tklib/map/point/store/memory {}

	# pins  :: dict (zoom -> list (pin...))
	# pin   :: list (point id)
	# point :: list (x y)

	foreach id [DO ids] {
	    set attr [DO get $id]
	    set geo  [dict get $attr geo]
	    set bbox [map slippy geo bbox $geo]

	    dict set attr bbox $bbox
	    dict set myattr $id $attr

	    # Compute points per zoom level, collect for clustering, and fill base layer of the
	    # pixel cache.
	    for {set z 0} {$z <= $maxzoom} {incr z} {
		set point [map slippy geo 2point $z $geo]
		dict lappend pins $z [list $point $id]
		dict set mypixels $id $z $point
	    }
	}

	# Pins gives us the pixel data (including id), per zoom level.  (Origin was per
	# location). This is now clustered and then converted to the final pixel and visibility
	# data.

	dict for {z pins} $pins {
	    dict set myids $z [Cluster $z $pins]
	}

	return
    }

    proc Cluster {z pins} {
	# pins  :: list (pin...)
	# pin   :: list (point id)
	# point :: list (x y)
	upvar 1 counter counter mypixels mypixels myattr myattr

	# At levels with suitable detail we forego any kind of clustering.
	# We simply use the points as they are.
	if {$z >= 18} {
	    return [lsort -unique [lmap pin $pins {
		# pin :: list (point id)
		lindex $pin end
	    }]]
	}

	set clusters {}	;# :: dict (point -> list(point...))
	set map      {} ;# :: dict (point -> id)

	foreach pin [lsort -dict $pins] {
	    lassign $pin point id
	    dict set map $point $id

	    if {[FindCluster $clusters $point center]} {
		# Extend found cluster
		# - ATTENTION - This may move the cluster center.
		set points [dict get $clusters $center]
		dict unset clusters $center
		lappend points $point
		set center [map slippy point center-list $points]
		dict set clusters $center $points

	    } else {
		# Start a new cluster
		dict set clusters $point [list $point]
	    }
	}

	# Convert the clusters into fake geo locations, pixel data, and the list of ids to consider
	# at the level.

	dict for {center points} $clusters {
	    if {[llength $points] < 2} {
		# Cluster is actually single point, center is the point.
		# Reuse the point itself.
		set id [lindex [dict get $map $center] 0]
	    } else {
		# Multiple points are an actual cluster.
		set id c/[incr counter]

		# Create the necessary attribute data for this fake.
		dict set myattr $id names {}
		dict set myattr $id geo   [map slippy point 2geo $z $center]
		dict set myattr $id kind  cluster
		dict set myattr $id count [llength $points] ;# Data for default cluster style

		# And extend the pixel cache for it
		dict set mypixels $id $z $center
	    }

	    lappend ids $id
	}

	return $ids
    }

    proc FindCluster {clusters point cv} {
	upvar $cv center

	set best Inf
	dict for {centroid points} $clusters {
	    set d [map slippy point distance $centroid $point]
	    if {$d >= $best} continue
	    set best $d
	    set center $centroid
	}

	# Check if we can place the pointo into the nearest cluster, and return the result of that
	# check. The chosen threshold is 1.5x the circle radius for default cluster style in
	# `map::point::map-display`. This reduces the probability of neighbouring clusters visually
	# overlapping (too much).
	return [expr {$best <= 30}]
    }

    proc DO {args} {
	debug.tklib/map/point/store/memory {}

	upvar 1 mystore mystore
	return [uplevel #0 [list {*}$mystore {*}$args]]
    }

    # . . .. ... ..... ........ ............. .....................
}

# # ## ### ##### ######## ############# ######################
return
