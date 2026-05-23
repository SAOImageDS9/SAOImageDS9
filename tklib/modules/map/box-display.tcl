## -*- tcl -*-
# # ## ### ##### ######## ############# ######################
## (c) 2022 Andreas Kupries

# @@ Meta Begin
# Package map::box::display 0.1
# Meta author      {Andreas Kupries}
# Meta location    https://core.tcl.tk/tklib
# Meta platform    tcl
# Meta summary	   Widget to display a single box definition
# Meta description Widget to display the information of a single box definition
# Meta subject     {box display, tabular}
# Meta subject     {tabular, box display}
# Meta require     {Tcl 8.6-}
# Meta require     {Tk  8.6-}
# Meta require     debug
# Meta require     debug::caller
# Meta require     {map::slippy 0.8}
# Meta require     scrollutil
# Meta require     snit
# Meta require     tablelist
# @@ Meta End

package provide map::box::display 0.1

# # ## ### ##### ######## ############# ######################
## API
#
##  <class> OBJ
#
##  <obj> set GEOBOX	-> VOID		Show this box, or nothing, if empty
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

namespace eval map      { namespace export box     ; namespace ensemble create }
namespace eval map::box { namespace export display ; namespace ensemble create }

debug level  tklib/map/box/display
debug prefix tklib/map/box/display {<[pid]> [debug caller] | }

# # ## ### ##### ######## ############# ######################

snit::widget ::map::box::display {
    # . . .. ... ..... ........ ............. .....................
    ## State

    variable myspec {}	;# Table data derived from the box specification

    # . . .. ... ..... ........ ............. .....................
    ## Lifecycle

    constructor {} {
	debug.tklib/map/box/display {}

	scrollutil::scrollarea $win.sa
	tablelist::tablelist   $win.sa.table -width 60 -columntitles {What {} {}}
	$win.sa setwidget     $win.sa.table

	pack $win.sa -in $win -fill both -expand 1

	$win.sa.table configure -listvariable [myvar myspec]
	return
    }

    destructor {
	debug.tklib/map/box/display {}
	return
    }

    # . . .. ... ..... ........ ............. .....................
    ## API

    method set {geobox} {
	debug.tklib/map/box/display {}

	if {![llength $geobox]} {
	    set myspec {}
	    return
	}

	# Assemble table data

	lassign [map slippy geo box corners $geobox] tl bl tr br
	set center   [map slippy geo box center    $geobox]
	set diameter [map slippy geo box diameter  $geobox]
	set length   [map slippy geo box perimeter $geobox]

	lappend data [list TopLeft     {*}[map slippy geo limit $tr]]
	lappend data [list BottomLeft  {*}[map slippy geo limit $bl]]
	lappend data [list TopRight    {*}[map slippy geo limit $tr]]
	lappend data [list BottomRight {*}[map slippy geo limit $br]]
	lappend data [list Center      {*}[map slippy geo limit $center]]
	lappend data [list Diameter    [map slippy pretty-distance $diameter] {}]
	lappend data [list Perimeter   [map slippy pretty-distance $length] {}]

	# ... and commit
	set myspec $data
	return
    }

    # . . .. ... ..... ........ ............. .....................
}

# # ## ### ##### ######## ############# ######################
return
