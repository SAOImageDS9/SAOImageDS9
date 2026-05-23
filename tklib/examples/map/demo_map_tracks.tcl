#! /usr/bin/env tclsh
# -*- tcl -*-
# # ## ### ##### ######## ############# #####################
# demo_map_tracks.tcl --
#
# This demonstration script shows a basic map.
# Tiles from OpenStreetMap, Mapnik.
# Beyond that it shows the geo/track specs found in the data directory

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
package require map::display
package require map::provider::osm
package require map::track::map-display
package require map::track::store::fs
package require map::track::store::memory
package require map::track::table-display

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

    map track store fs     FS  $datadir
    map track store memory MEM FS

    wm withdraw .
    toplevel    .m
    wm title    .m "Map Display + Tracks"
    wm iconname .m "MAP"

    map display .m.map \
	-provider     TILE \
	-initial-geo  [home] \
	-initial-zoom [expr {[TILE levels]-1}]

    map track table-display .m.tracks MEM \
	-on-selection track-selected

    map track map-display TRACKS .m.map MEM \
	-color       red \
	-hilit-color SkyBlue2 \
	-on-active   track-active-changed
    TRACKS enable

    button .m.exit   -command ::exit -text Exit
    button .m.rehome -command rehome -text Home

    grid rowconfigure    .m 0 -weight 1
    grid rowconfigure    .m 1 -weight 0

    grid columnconfigure .m 0 -weight 0
    grid columnconfigure .m 1 -weight 0
    grid columnconfigure .m 2 -weight 1
    grid columnconfigure .m 3 -weight 0
    grid columnconfigure .m 4 -weight 0

    grid .m.tracks -row 0 -column 0               -sticky swen
    grid .m.map    -row 0 -column 1 -columnspan 4 -sticky swen
    grid .m.exit   -row 1 -column 1               -sticky swen
    grid .m.rehome -row 1 -column 2               -sticky swn

    return
}

proc track-active-changed {id} {
    if {$id eq {}} return

    .m.tracks focus $id
    return
}

proc track-selected {id} {
    TRACKS focus $id
    return
}

proc rehome {} { .m.map center [home] }
proc home   {} { return {51.667205 6.451442} } ;# Xanten Ampitheater/Coliseum

main
exit 0
