## -*- tcl -*-
# # ## ### ##### ######## ############# ######################
## (c) 2022 Andreas Kupries
##
## Originally developed within the AKIS project (c) Andreas Kupries

# @@ Meta Begin
# Package map::mark 0.1
# Meta author      {Andreas Kupries}
# Meta location    https://core.tcl.tk/tklib
# Meta platform    tcl
# Meta summary	   Map Action Engine: Mark A Point
# Meta description Attachment to map display widgets providing custom behaviour.
# Meta description Enables user to mark locations. Marked locations are reported
# Meta description via callback.
# Meta subject	   map {location marking} {mark location}
# Meta require     {Tcl 8.6-}
# Meta require     debug
# Meta require     debug::caller
# Meta require     snit
# @@ Meta End

package provide map::mark 0.1

# # ## ### ##### ######## ############# ######################
## API
#
##  <class> OBJ MAP <options...>
#
##  <obj> disable	-> VOID
##  <obj> enable	-> VOID
##  <obj> active	-> bool
#
##  -command	Callback reporting the marks
##  -on-event	Event spec for triggering a mark, only at construction-time
#
# # ## ### ##### ######## ############# ######################
## Requirements

package require Tcl 8.6-
#                                      ;# Tcllib
package require debug		       ;# - Narrative Tracing
package require debug::caller          ;#
package require snit                   ;# - OO system

# # ## ### ##### ######## ############# ######################
## Ensemble setup.

namespace eval map { namespace export mark ; namespace ensemble create }

debug level  tklib/map/mark
debug prefix tklib/map/mark {<[pid]> [debug caller] | }

# # ## ### ##### ######## ############# ######################

snit::type ::map::mark {
    # . . .. ... ..... ........ ............. .....................
    ## User configuration

    option -command  -default {}
    option -on-event -default Double-Button-1 -readonly 1

    # ..................................................................
    ## State

    variable mymap    {}	;# The map::display (*) the instance is attached to
    variable mycanvas {}	;# The canvas internal to the map display
    variable myactive  0	;# State flag

    ## (*) Or API compatible widget. This class uses the map display methods
    #
    ##     - canvas	(once, retrieve map internal canvas, for binding)
    ##     - at		(at each mark, retrieve crosshair location (geo))

    # . . .. ... ..... ........ ............. .....................
    ## Lifecycle

    constructor {map args} {
	debug.tklib/map/mark {}

	$self configurelist $args

	set mymap    $map
	set mycanvas [$map canvas]
	set myactive no

	$self enable
	return
    }

    destructor {
	debug.tklib/map/mark {}

	if {![winfo exists $mycanvas]} return
	$self disable
	return
    }

    # ..................................................................
    ## API

    method disable {} {
	debug.tklib/map/mark {}

	if {!$myactive} return
	bind $mycanvas <$options(-on-event)> {}
	set myactive no
	return
    }

    method enable {} {
	debug.tklib/map/mark {}

	if {$myactive} return
	bind $mycanvas <$options(-on-event)> [mymethod MarkTriggered]
	set myactive yes
	return
    }

    method active {} {
	debug.tklib/map/mark {}
	return $myactive
    }

    # ..................................................................
    ## Internal

    method MarkTriggered {} {
	debug.tklib/map/mark {}

	if {![llength $options(-command)]} return
	uplevel #0 [list {*}$options(-command) [$mymap at]]
	return
    }

    # ..................................................................
}

# # ## ### ##### ######## ############# ######################
return
