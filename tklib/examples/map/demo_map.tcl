#! /usr/bin/env tclsh
# -*- tcl -*-
# # ## ### ##### ######## ############# #####################
# demo_map.tcl --
#
# This demonstration script shows a basic map.
# Tiles from OpenStreetMap, Mapnik.

# # ## ### ##### ######## ############# #####################
## Requirements

package require Tcl 8.6-

# Extend the package search path so that this demonstration works with
# the non-installed tklib packages well. A regular application should
# not require this.

apply {{selfdir} {
    #puts ($selfdir)
    lappend ::auto_path $selfdir
    lappend ::auto_path [file normalize $selfdir/../../modules]
}} [file dirname [file normalize [info script]]]

package require Tk 8.6-
package require map::display
package require map::provider::osm

# # ## ### ##### ######## ############# #####################

proc main {} {
    cmdline
    do $::env(HOME)/.cache/demo
    vwait __forever__
}

proc cmdline {} {
    global argv
    if {[llength $argv]} usage
}

proc usage {} {
    global argv0
    puts stderr "Usage: $argv0"
    exit 1
}

proc do {cachedir} {
    file mkdir            $cachedir
    map provider osm TILE $cachedir

    wm withdraw .
    toplevel    .m
    wm title    .m "Map Display"
    wm iconname .m "MAP"

    map display .m.map \
	-provider     TILE \
	-initial-geo  [home] \
	-initial-zoom [expr {[TILE levels]-1}]

    button .m.exit   -command ::exit -text Exit
    button .m.rehome -command rehome -text Home

    grid rowconfigure    .m 0 -weight 1
    grid rowconfigure    .m 1 -weight 0

    grid columnconfigure .m 0 -weight 0
    grid columnconfigure .m 1 -weight 1
    grid columnconfigure .m 2 -weight 0
    grid columnconfigure .m 3 -weight 0

    grid .m.map    -row 0 -column 0 -columnspan 4 -sticky swen
    grid .m.exit   -row 1 -column 0               -sticky swen
    grid .m.rehome -row 1 -column 1               -sticky swn

    return
}

proc rehome {} { .m.map center [home] }
proc home   {} { return {51.667205 6.451442} } ;# Xanten Ampitheater/Coliseum

main
exit 0
