## -*- tcl -*-
# # ## ### ##### ######## ############# ######################
## (c) 2022 Andreas Kupries
##
## Filesystem based storage of geo/point information - Independent of AKIS
## Tklib geo/point file format
##
## - Line based
## - Ignores leading and trailing whitespace in lines
## - Ignores empty lines
## - Ignore lines starting with `//` - C++ line comments
## - Ignore lines starting with `#`  - Shell et al line comments
## - Magic word in first line identifying the file: "tklib/geo/point"

## - Multiple points allowed. Per point
##   - Zero! to more non-numeric lines specifying point kind, and names
##     - The kind is detected by having the prefix `kind:`
##     - In case of multiple kinds the last wins
##   - Exactly 2 numeric lines specifying coordinates
##   - Coordinates are validated as lat/lon
##
##   If no kind is specified it is `point`.
##   If no name is specified it is the name of the file, plus a sequence number.

# @@ Meta Begin
# Package map::point::file 0.1
# Meta author      {Andreas Kupries}
# Meta location    https://core.tcl.tk/tklib
# Meta platform    tcl
# Meta summary	   Reading/writing tklib geo/point files
# Meta description Reading/writing tklib geo/point files
# Meta subject	   map
# Meta subject	   {file, geo/point}
# Meta subject	   {geo/point, file}
# Meta require     {Tcl 8.6-}
# Meta require     debug
# Meta require     debug::caller
# Meta require     {map::slippy 0.8}
# Meta require     snit
# @@ Meta End

package provide map::point::file 0.1

# # ## ### ##### ######## ############# ######################
## API
#
##  read  PATH		-> INFO :: list (dict (names, kind, geo)...)
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

namespace eval map              { namespace export point      ; namespace ensemble create }
namespace eval map::point       { namespace export file       ; namespace ensemble create }
namespace eval map::point::file { namespace export read write ; namespace ensemble create }

debug level  tklib/map/point/file
debug prefix tklib/map/point/file {<[pid]> [debug caller] | }

# # ## ### ##### ######## ############# ######################
## API

proc ::map::point::file::read {path} {
    debug.tklib/map/point/file {}

    if {[catch {
	set c [open $path r]
    }]} return

    set d [::read $c]
    close $c

    set points {}
    set names  {}
    set geo    {}
    set kind   {}

    set seq  0
    set head 1
    foreach line [split $d \n] {
	set line [string trim $line]
	#  ignore empty lines and comments
	if {$line eq {}} continue
	if {[string match //*  $line]} continue
	if {[string match "#*" $line]} continue

	# first line has to be magic
	if {$head} { set magic $line ; set head 0 ; continue }

	# collect names for current point
	if {![string is double -strict $line]} {
	    if {[string match kind:* $line]} {
		regexp {kind:(.*)$} $line -> kind
		set kind [string trim $kind]
		continue
	    }

	    lappend names $line
	    continue
	}

	# collect coordinate for current point
	lappend geo $line

	# save completed point and start next
	if {[llength $geo] == 2} {
	    if {![map slippy geo valid $geo]} {
		puts "$path/bad geo $geo"
		return
	    }

	    # Default name derived from file name, iff no name specified, with sequence number
	    if {![llength $names]} { lappend names [file rootname [file tail $path]]/[incr seq] }

	    if {$kind eq {}} { set kind point }

	    lappend points [dict create names $names geo $geo kind $kind]
	    set names {}
	    set geo   {}
	    set kind  {}
	}

	# collect more
    }

    if {(([llength $geo] == 0) && [llength $names]) || ([llength $geo] == 1)} {
	puts "$path\t/incomplete point at end"
	return
    }

    if {$magic ne "tklib/geo/point"} {
	puts "$path\t/no magic/bad magic"
	return
    }

    return $points
}

proc ::map::point::file::write {path gdata} {
    debug.tklib/map/point/file {}

    # gdata :: list (dict (names, kind, geo)...)

    set c [open $path w]

    puts $c tklib/geo/point

    foreach point [lsort -dict -unique $data] {
	dict with point {}
	# names, kind, geo

	if {$kind ne {}} {
	    puts $c kind:$kind
	}

	foreach name [lsort -dict -unique $names] {
	    puts $c $name
	}

	lassign $geo lat lon
	puts $c $lat
	puts $c $lon

	unset names kind geo
    }

    close $c
    return
}

# # ## ### ##### ######## ############# ######################
return
