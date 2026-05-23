## -*- tcl -*-
# # ## ### ##### ######## ############# ######################
## (c) 2022 Andreas Kupries
##
## Filesystem based storage of geo/box information - Independent of AKIS
## Tklib geo/box file format
##
## - Line based
## - Ignores leading and trailing whitespace in lines
## - Ignores empty lines
## - Ignore lines starting with `//` - C++ line comments
## - Ignore lines starting with `#`  - Shell et al line comments
## - Magic word in first line identifying the file: "tklib/geo/box"
## - Zero to more non-numeric lines specifying box names
## - Exactly 4 numeric lines specifying coordinates
## - Coordinates are validated as lat/lon

# @@ Meta Begin
# Package map::box::file 0.1
# Meta author      {Andreas Kupries}
# Meta location    https://core.tcl.tk/tklib
# Meta platform    tcl
# Meta summary	   Reading/writing tklib geo/box files
# Meta description Reading/writing tklib geo/box files
# Meta subject	   map
# Meta subject	   {file, geo/box}
# Meta subject	   {geo/box, file}
# Meta require     {Tcl 8.6-}
# Meta require     debug
# Meta require     debug::caller
# Meta require     {map::slippy 0.8}
# Meta require     snit
# @@ Meta End

package provide map::box::file 0.1

# # ## ### ##### ######## ############# ######################
## API
#
##  read  PATH		-> INFO :: dict (names, geo)
##  write PATH INFO	-> VOID
#
# # ## ### ##### ######## ############# ######################
## Requirements

package require Tcl 8.6-
#                               ;# Tcllib
package require debug		;# - Narrative Tracing
package require debug::caller   ;#
package require map::slippy 0.8	;# - Map utilities
package require snit            ;# - OO system

# # ## ### ##### ######## ############# ######################
## Ensemble setup.

namespace eval map            { namespace export box        ; namespace ensemble create }
namespace eval map::box       { namespace export file       ; namespace ensemble create }
namespace eval map::box::file { namespace export read write ; namespace ensemble create }

debug level  tklib/map/box/file
debug prefix tklib/map/box/file {<[pid]> [debug caller] | }

# # ## ### ##### ######## ############# ######################
## API

proc ::map::box::file::read {path} {
    debug.tklib/map/box/file {}

    if {[catch {
	set c [open $path r]
    }]} return

    set d [::read $c]
    close $c

    set names {}
    set coordinates [lmap line [split $d \n] {
	set line [string trim $line]
	if {$line eq {}} continue
	if {[string match //*  $line]} continue
	if {[string match "#*" $line]} continue
	if {![string is double -strict $line]} {
	    lappend names $line
	    continue
	}
	set line
    }]

    #puts $path\t//$names//$coordinates//
    set names [lassign $names magic]

    if {$magic ne "tklib/geo/box"} {
	#puts "$path\t/no magic"
	return
    }
    if {[llength $coordinates] != 4} {
	#puts "$path\t/bad coordinate count [llength $coordinates]"
	return
    }

    if {![map slippy geo box valid $coordinates]} return

    if {![llength $names]} { lappend names [file rootname [file tail $path]] }

    dict set g names $names
    dict set g geo   $coordinates

    return $g
}

proc ::map::box::file::write {path gdata} {
    debug.tklib/map/box/file {}

    set c [open $path w]

    puts $c tklib/geo/box

    foreach name [lsort -dict -unique [dict get $gdata names]] {
	puts $c $name
    }

    foreach coordinate [dict get $gdata geo] {
	puts $c $coordinate
    }

    close $c
    return
}

# # ## ### ##### ######## ############# ######################
return
