#! /usr/bin/env tclsh
# -*- tcl -*-
# # ## ### ##### ######## ############# #####################
# demo_map_areas.tcl --
#
# This demonstration script shows a basic map.
# Tiles from OpenStreetMap, Mapnik.
# Beyond that it shows the geo/area specs found in the data directory

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
package require map::area::map-display
package require map::area::store::fs
package require map::area::store::memory
package require map::area::table-display

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

    map area store fs     FS  $datadir
    map area store memory MEM FS

    wm withdraw .
    toplevel    .m
    wm title    .m "Map Display + Areas"
    wm iconname .m "MAP"

    map display .m.map \
	-provider     TILE \
	-initial-geo  [home] \
	-initial-zoom [expr {[TILE levels]-1}]

    map area table-display .m.areas MEM \
	-on-selection area-selected

    map area map-display AREAS .m.map MEM \
	-color       red \
	-hilit-color SkyBlue2 \
	-line-config { -stipple gray12 -fill black } \
	-on-active   area-active-changed
    AREAS enable

    button .m.exit   -command ::exit -text Exit
    button .m.rehome -command rehome -text Home

    grid rowconfigure    .m 0 -weight 1
    grid rowconfigure    .m 1 -weight 0

    grid columnconfigure .m 0 -weight 0
    grid columnconfigure .m 1 -weight 0
    grid columnconfigure .m 2 -weight 1
    grid columnconfigure .m 3 -weight 0
    grid columnconfigure .m 4 -weight 0

    grid .m.areas  -row 0 -column 0               -sticky swen
    grid .m.map    -row 0 -column 1 -columnspan 4 -sticky swen
    grid .m.exit   -row 1 -column 1               -sticky swen
    grid .m.rehome -row 1 -column 2               -sticky swn

    return
}

proc area-active-changed {id} {
    if {$id eq {}} return

    .m.areas focus $id
    return
}

proc area-selected {id} {
    AREAS focus $id
    return
}

proc rehome {} { .m.map center [home] }
proc home   {} { return {51.667205 6.451442} } ;# Xanten Ampitheater/Coliseum

main
exit 0
