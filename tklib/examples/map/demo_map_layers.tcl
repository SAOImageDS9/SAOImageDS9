#! /usr/bin/env tclsh
# -*- tcl -*-
# # ## ### ##### ######## ############# #####################
## (c) 2022-2023 Andreas Kupries
#
# demo_map.tcl --
#
# This demonstration script shows a basic map.
# Tiles from OpenStreetMap, Mapnik.
# Plus layers - Togglable display of tracks, areas, boxes

# # ## ### ##### ######## ############# #####################
## Requirements

package require Tcl 8.6-

# Extend the package search path so that this demonstration works with
# the non-installed tklib packages well. A regular application should
# not require this.

apply {{selfdir} {
    #puts ($selfdir)
    set ::sd $selfdir
    lappend ::auto_path $selfdir
    lappend ::auto_path [file normalize $selfdir/../../modules]
}} [file dirname [file normalize [info script]]]

package require Tk 8.6-
package require map::display
package require map::provider::osm
#
package require map::track::map-display
package require map::track::store::fs
package require map::track::store::memory
#
package require map::area::map-display
package require map::area::store::fs
package require map::area::store::memory
#
package require map::box::map-display
package require map::box::store::fs
package require map::box::store::memory
#
package require map::point::map-display
package require map::point::store::fs
package require map::point::store::memory

## TODO :: notebook, panels for area/track/box tables
## TODO :: panel widget for notebook -> shift sizes of map vs tables
## TODO :: look into stacking - outer areas/boxes can block inner such

# # ## ### ##### ######## ############# #####################

proc main {} {
    do $::env(HOME)/.cache/demo [cmdline]
    vwait __forever__
}

proc cmdline {} {
    global argv sd
    switch -exact -- [llength $argv] {
	0 { global sd ; return $sd/data }
	1 { return [lindex $argv 0] }
	default usage
    }
}

proc usage {} {
    global argv0
    puts stderr "Usage: $argv0 ?datadir?"
    exit 1
}

proc do {cachedir datadir} {
    global LA LT LB LP

    file mkdir            $cachedir
    map provider osm TILE $cachedir

    set max [TILE levels] ; incr max -1

    wm withdraw .
    toplevel    .m
    wm title    .m "Map Display"
    wm iconname .m "MAP"

    # Layers ... Data sources

    map track store fs     TFS  $datadir
    map track store memory TMEM TFS

    map area store fs      AFS  $datadir
    map area store memory  AMEM AFS

    map box store fs       BFS  $datadir
    map box store memory   BMEM BFS

    map point store fs     PFS  $datadir
    map point store memory PMEM PFS $max

    # UI elements

    button .m.exit   -command ::exit -text Exit
    button .m.rehome -command rehome -text Home

    checkbutton .m.track -text Tracks -variable LT -command layer-tracks
    checkbutton .m.area  -text Areas  -variable LA -command layer-areas
    checkbutton .m.box   -text Boxes  -variable LB -command layer-boxes
    checkbutton .m.point -text Points -variable LP -command layer-points

    map display .m.map \
	-provider     TILE \
	-initial-geo  [home] \
	-initial-zoom $max

    # Layers ... Display engines attaching to the map

    map track map-display TRACKS .m.map TMEM \
	-color       red \
	-hilit-color SkyBlue2 \
	;#-on-active   track-active-changed

    map area map-display AREAS .m.map AMEM \
	-color       red \
	-hilit-color SkyBlue2 \
	-line-config { -stipple gray12 -fill black } \
	;#-on-active   area-active-changed

    map box map-display BOXES .m.map BMEM \
	-color       red \
	-hilit-color SkyBlue2 \
	-rect-config { -stipple gray12 -fill black } \
	;#-on-active   box-active-changed

    map point map-display POINTS .m.map PMEM \
	;# -on-active   point-active-changed

    # Show all ...
    AREAS  enable ; set LA 1
    TRACKS enable ; set LT 1
    BOXES  enable ; set LB 1
    POINTS enable ; set LP 1

    # Layout

    grid rowconfigure    .m 0 -weight 0
    grid rowconfigure    .m 1 -weight 1
    grid rowconfigure    .m 2 -weight 0

    grid columnconfigure .m 0 -weight 0
    grid columnconfigure .m 1 -weight 0
    grid columnconfigure .m 2 -weight 0
    grid columnconfigure .m 3 -weight 1
    grid columnconfigure .m 4 -weight 0
    grid columnconfigure .m 5 -weight 0

    grid .m.track  -row 0 -column 0               -sticky swen
    grid .m.area   -row 0 -column 1               -sticky swen
    grid .m.box    -row 0 -column 2               -sticky swen
    grid .m.point  -row 0 -column 3               -sticky swn

    grid .m.map    -row 1 -column 0 -columnspan 6 -sticky swen

    grid .m.exit   -row 2 -column 0               -sticky swen
    grid .m.rehome -row 2 -column 1               -sticky swen

    return
}

proc rehome {} { .m.map center [home] }
proc home   {} { return {51.667205 6.451442} } ;# Xanten Ampitheater/Coliseum

proc layer-tracks {} { global LT ; if {$LT} { TRACKS enable } else { TRACKS disable } }
proc layer-areas  {} { global LA ; if {$LA} { AREAS  enable } else { AREAS  disable } }
proc layer-boxes  {} { global LB ; if {$LB} { BOXES  enable } else { BOXES  disable } }
proc layer-points {} { global LP ; if {$LP} { POINTS enable } else { POINTS disable } }

main
exit 0
