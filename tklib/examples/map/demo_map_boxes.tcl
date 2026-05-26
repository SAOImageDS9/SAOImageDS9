#! /usr/bin/env tclsh
# -*- tcl -*-
# # ## ### ##### ######## ############# #####################
# demo_map_boxes.tcl --
#
# This demonstration script shows a basic map.
# Tiles from OpenStreetMap, Mapnik.
# Beyond that it shows the geo/box specs found in the data directory

# # ## ### ##### ######## ############# #####################
## Requirements

package require Tcl 8.6-

# Extend the package search path so that this demonstration works with
# the non-installed tklib packages well. A regular application should
# not require this.

apply {{selfdir} {
    set ::sd $selfdir
    #puts ($selfdir)
    lappend ::auto_path $selfdir
    lappend ::auto_path [file normalize $selfdir/../../modules]
}} [file dirname [file normalize [info script]]]

package require Tk 8.6-
package require map::box::map-display
package require map::box::store::fs
package require map::box::store::memory
package require map::box::table-display
package require map::display
package require map::provider::osm

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
    file mkdir                $cachedir
    map provider osm     TILE $cachedir

    map box store fs     FS  $datadir
    map box store memory MEM FS

    wm withdraw .
    toplevel    .m
    wm title    .m "Map Display + Boxes"
    wm iconname .m "MAP"

    map display .m.map \
	-provider     TILE \
	-initial-geo  [home] \
	-initial-zoom [expr {[TILE levels]-1}]

    map box table-display .m.boxes MEM \
	-on-selection box-selected

    map box map-display BOXES .m.map MEM \
	-color       red \
	-hilit-color SkyBlue2 \
	-rect-config { -stipple gray12 -fill black } \
	-on-active   box-active-changed
    BOXES enable

    button .m.exit   -command ::exit -text Exit
    button .m.rehome -command rehome -text Home

    grid rowconfigure    .m 0 -weight 1
    grid rowconfigure    .m 1 -weight 0

    grid columnconfigure .m 0 -weight 0
    grid columnconfigure .m 1 -weight 0
    grid columnconfigure .m 2 -weight 1
    grid columnconfigure .m 3 -weight 0
    grid columnconfigure .m 4 -weight 0

    grid .m.boxes  -row 0 -column 0               -sticky swen
    grid .m.map    -row 0 -column 1 -columnspan 4 -sticky swen
    grid .m.exit   -row 1 -column 1               -sticky swen
    grid .m.rehome -row 1 -column 2               -sticky swn

    return
}

proc box-active-changed {id} {
    if {$id eq {}} return

    .m.boxes focus $id
    return
}

proc box-selected {id} {
    BOXES focus $id
    return
}

proc rehome {} { .m.map center [home] }
proc home   {} { return {51.667205 6.451442} } ;# Xanten Ampitheater/Coliseum

main
exit 0
