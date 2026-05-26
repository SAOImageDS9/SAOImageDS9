## -*- tcl -*-
# # ## ### ##### ######## ############# ######################
## (c) 2022 Andreas Kupries

# @@ Meta Begin
# Package map::area::display 0.1
# Meta author      {Andreas Kupries}
# Meta location    https://core.tcl.tk/tklib
# Meta platform    tcl
# Meta summary	   Widget to display a single area definition
# Meta description Widget to display the information of a single area definition
# Meta subject     {area display, tabular}
# Meta subject     {tabular, area display}
# Meta require     {Tcl 8.6-}
# Meta require     {Tk  8.6-}
# Meta require     debug
# Meta require     debug::caller
# Meta require     {map::slippy 0.8}
# Meta require     scrollutil
# Meta require     snit
# Meta require     tablelist
# @@ Meta End

## TODO / focus - active vertex / row map ...

package provide map::area::display 0.1

# # ## ### ##### ######## ############# ######################
## API
#
##  <class> OBJ
#
##  <obj> set AREA	-> VOID		Show this area, or nothing, if empty
#
##  -on-selection	Report changes to the vertext selection
#
# # ## ### ##### ######## ############# ######################
## Requirements

package require Tcl 8.6-
package require Tk  8.6-
#                                       ;# Tcllib
package require debug                   ;# - Narrative Tracing
package require debug::caller           ;#
package require map::slippy 0.8         ;# - Map utilities
package require snit                    ;# - OO system
#                                       ;# Tklib
package require scrollutil              ;# - Scroll framework
package require tablelist               ;# - Tabular display

# # ## ### ##### ######## ############# ######################
## Ensemble setup.

namespace eval map       { namespace export area    ; namespace ensemble create }
namespace eval map::area { namespace export display ; namespace ensemble create }

debug level  tklib/map/area/display
debug prefix tklib/map/area/display {<[pid]> [debug caller] | }

# # ## ### ##### ######## ############# ######################

snit::widget ::map::area::display {
    # . . .. ... ..... ........ ............. .....................
    # User configuration

    option -on-selection -default {}

    # . . .. ... ..... ........ ............. .....................
    ## State

    variable myspec {}	 ;# Table data derived from the area specification
    variable myparts     ;# Area statistics: Number of parts
    variable myperimeter ;# Area statistics: Perimeter
    variable mydiameter  ;# Area statistics: Diameter
    variable myclat      ;# Area statistics: Center Latitude
    variable myclon      ;# Area statistics: Center Longitude

    # . . .. ... ..... ........ ............. .....................
    ## Lifecycle

    constructor {args} {
	debug.tklib/map/area/display {}

	$self configurelist $args

	label $win.lcenter   -text Center
	label $win.clat      -textvariable  [myvar myclat]
	label $win.clon      -textvariable  [myvar myclon]
	label $win.lparts    -text Parts
	label $win.parts     -textvariable  [myvar myparts]
	label $win.llength   -text Perimeter
	label $win.length    -textvariable  [myvar myperimeter]
	label $win.ldiameter -text Diameter
	label $win.diameter  -textvariable  [myvar mydiameter]

	scrollutil::scrollarea $win.sa
	tablelist::tablelist   $win.sa.table -width 60 \
	    -columntitles {\# Latitude Longitude Distance Total}
	$win.sa setwidget      $win.sa.table

	pack $win.sa        -in $win -side bottom -fill both -expand 1

	pack $win.lcenter   -in $win -side left
	pack $win.clat      -in $win -side left
	pack $win.clon      -in $win -side left
	pack $win.lparts    -in $win -side left
	pack $win.parts     -in $win -side left
	pack $win.llength   -in $win -side left
	pack $win.length    -in $win -side left
	pack $win.ldiameter -in $win -side left
	pack $win.diameter  -in $win -side left

	$win.sa.table configure -listvariable [myvar myspec]

	bind $win.sa.table <<TablelistSelect>> [mymethod SelectionChanged]
	return
    }

    destructor {
	debug.tklib/map/area/display {}
	return
    }

    # . . .. ... ..... ........ ............. .....................
    ## API

    method focus {index} {
	debug.tklib/map/area/display {}

	$win.sa.table selection clear 0 end
	$win.sa.table selection set $index
	$win.sa.table see           $index
	return
    }

    method set {geos} {
	debug.tklib/map/area/display {}

	if {![llength $geos]} {
	    set myspec     {}
	    set mydiameter n/a
	    set myperimeter   n/a
	    set myparts    n/a
	    set myclat     n/a
	    set myclon     n/a
	    return
	}

	set parts    [llength $geos] ; if {$parts < 3} { incr parts -1 }
	set diameter [map slippy geo diameter-list $geos]
	set center   [map slippy geo center-list   $geos]
	lassign [map slippy geo limit $center] clat clon

	# Assemble table data

	set last {}
	set total 0
	set rows [lmap g $geos {
	    set dd {}
	    set dt {}
	    if {$last ne {}} {
		set d     [map slippy geo distance $last $g]
		set total [expr {$total + $d}]
		# Format for display
		set dd    [map slipp pretty-distance $d]
		set dt    [map slipp pretty-distance $total]
	    }

	    lassign [map slippy geo limit $g] lat lon
	    set last $g

	    set data {}
	    lappend data [incr rowid]
	    lappend data $lat
	    lappend data $lon
	    lappend data $dd
	    lappend data $dt
	    set data
	}]

	# A last line to close the perimeter
	set d [map slippy geo distance $last [lindex $geos 0]]
	set total [expr {$total + $d}]
	# Format for display
	set dd    [map slipp pretty-distance $d]
	set dt    [map slipp pretty-distance $total]

	lappend rows [list 1 {} {} $dd $dt]

	# ... and commit
	set myparts     $parts
	set myperimeter $dt
	set mydiameter  [map slippy pretty-distance $diameter]
	set myspec      $rows
	set myclat      $clat
	set myclon      $clon
	return
    }

    # . . .. ... ..... ........ ............. .....................
    # Internal

    method SelectionChanged {} {
	debug.tklib/map/area/display {}

	after idle [mymethod ReportSelectionChange]
	return
    }

    method ReportSelectionChange {} {
	debug.tklib/map/area/display {}

	if {![llength $options(-on-selection)]} return

	set row [$win.sa.table curselection]
	if {$row eq {}} return

	set row [lindex $myspec $row 0]
	incr row -1

	uplevel #0 [list {*}$options(-on-selection) $row]
	return
    }

    # . . .. ... ..... ........ ............. .....................
}

# # ## ### ##### ######## ############# ######################
return
