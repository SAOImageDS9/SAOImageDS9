#! /usr/bin/env tclsh
# -*- tcl -*-
# # ## ### ##### ######## ############# #####################
# demo_map.tcl --
#
# This demonstration script shows a basic map.
# Tiles from OpenStreetMap, Mapnik.
# Area Editor with Load / Save

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
package require map::area::display
package require map::track::entry
package require map::area::file

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
    file mkdir                $cachedir
    map provider osm     TILE $cachedir

    wm withdraw .
    toplevel    .m
    wm title    .m "Map Display + Area Entry"
    wm iconname .m "MAP"

    map area display .m.area \
	-on-selection action-vertex-selected

    map display     .m.map \
	-provider     TILE \
	-initial-geo  [home] \
	-initial-zoom [expr {[TILE levels]-1}]

    map track entry ENTRY .m.map \
	-closed 1 \
	-on-track-change action-changed \
	-on-active       action-active-changed

    button .m.exit   -command ::exit      -text Exit
    button .m.rehome -command rehome      -text Home
    button .m.fit    -command action-fit   -text Fit
    button .m.clear  -command action-clear -text Clear
    button .m.save   -command action-save  -text Save
    button .m.load   -command action-load  -text Load

    grid rowconfigure    .m 0 -weight 1
    grid rowconfigure    .m 1 -weight 0

    grid columnconfigure .m 0 -weight 0
    grid columnconfigure .m 1 -weight 0
    grid columnconfigure .m 2 -weight 0
    grid columnconfigure .m 3 -weight 0
    grid columnconfigure .m 4 -weight 0
    grid columnconfigure .m 5 -weight 0
    grid columnconfigure .m 6 -weight 1

    grid .m.area   -row 0 -column 0               -sticky swen
    grid .m.map    -row 0 -column 1 -columnspan 6 -sticky swen
    grid .m.exit   -row 1 -column 1               -sticky swen
    grid .m.rehome -row 1 -column 2               -sticky swen
    grid .m.fit    -row 1 -column 3               -sticky swen
    grid .m.clear  -row 1 -column 4               -sticky swen
    grid .m.save   -row 1 -column 5               -sticky swen
    grid .m.load   -row 1 -column 6               -sticky swn

    ENTRY enable
    return
}

proc action-vertex-selected {index} {
    ENTRY focus $index
    return
}

proc action-fit {} {
    ENTRY fit
    return
}

proc action-clear {} {
    ENTRY clear
    return
}

proc action-active-changed {_ kind} {
    if {$kind in {{} line}} return

    .m.area focus $kind
    return
}

proc action-changed {geos} {
    .m.area set $geos
    return
}

proc action-save {} {
    set path [tk_getSaveFile \
		  -filetypes [list [list areas .area] {all *}] \
		  -parent .m \
		  -title "Export Area"]
    if {$path eq {}} return

    set name [file rootname [file tail $path]]

    dict set g names [list $name]
    dict set g geo   [ENTRY track]

    map area file write $path $g
    return
}

proc action-load {} {
    set path [tk_getOpenFile \
		  -filetypes [list [list areas .area] {all *}] \
		  -parent  .m \
		  -title "Import Area"]

    if {$path eq {}} return

    # TODO: error message from reader
    set area [map area file read $path]

    # TODO: error message
    if {![dict size $area]} return

    ENTRY set [dict get $area geo]
    return
}

proc rehome {} { .m.map center [home] }
proc home   {} { return {51.667205 6.451442} } ;# Xanten Ampitheater/Coliseum

main
exit 0
