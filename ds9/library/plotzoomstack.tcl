#  Copyright (C) 1999-2019
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc PlotZoomStack {g} {
    # a bit of a hack to determine varname
    set varname [lindex [split $g {.}] 1]
    upvar #0 $varname var
    global $varname

    set cmd {}
    switch $var(canvas,layout) {
	grid -
	column -
	row {}
	strip {
	    set min [$g axis cget x -min] 
	    set max [$g axis cget x -max]
	    set logscale [$g axis cget x -logscale]

	    foreach cc $var(graphs) {
		if {$var($cc,graph) != $g} {
		    $var($cc,graph) axis configure x -min $min -max $max -logscale $logscale
		}
	    }
	}
    }
}

proc PlotZoomStackReset {g} {
    # a bit of a hack to determine varname
    set varname [lindex [split $g {.}] 1]
    upvar #0 $varname var
    global $varname

    set cmd {}
    switch $var(canvas,layout) {
	grid -
	column -
	row {}
	strip {
	    set min [$g axis cget x -min] 
	    set max [$g axis cget x -max]
	    set logscale [$g axis cget x -logscale]

	    foreach cc $var(graphs) {
		if {$var($cc,graph) != $g} {
		    append cmd "[list $var($cc,graph) axis configure x -min $min -max $max -logscale $logscale]\n"
		}
	    }
	}
    }
    return $cmd
}

# These are redefinitions to provide a callback for stip graphs
# tkblt/library/graph.tcl
namespace eval blt::ZoomStack {}
proc blt::ZoomStack::Push { g } {
    variable _private

    catch {eval $g marker delete [$g marker names "zoom*"]}
    if { [info exists _private($g,afterId)] } {
	after cancel $_private($g,afterId)
    }
    set x1 $_private($g,A,x)
    set y1 $_private($g,A,y)
    set x2 $_private($g,B,x)
    set y2 $_private($g,B,y)

    if { ($x1 == $x2) || ($y1 == $y2) } { 
	# No delta, revert to start
	return
    }
    set cmd {}
    foreach axis [$g axis names] {
	if { [$g axis cget $axis -hide] } {
	    continue
	}
	set min [$g axis cget $axis -min] 
	set max [$g axis cget $axis -max]
	set logscale  [$g axis cget $axis -logscale]
	# Save the current scale (log or linear) so that we can restore it.
	# This is for the case where the user changes to logscale while
	# zooming.  A previously pushed axis limit could be negative.  It
	# seems better for popping the zoom stack to restore a previous view
	# (not convert the ranges).
	set c [list $g axis configure $axis]
	lappend c -min $min -max $max -logscale $logscale
	append cmd "$c\n"
    }

    append cmd [PlotZoomStackReset $g]

    # This effectively pushes the command to reset the graph to the current
    # zoom level onto the stack.  This is useful if the new axis ranges are
    # bad and we need to reset the zoom stack.
    set _private($g,stack) [linsert $_private($g,stack) 0 $cmd]
    foreach axis [$g axis names] {
	if { [$g axis cget $axis -hide] } {
	    continue;			# Don't set zoom on axes not displayed.
	}
	set type [$g axis type $axis]
	if { $type  == "x" } {
	    set min [$g axis invtransform $axis $x1]
	    set max [$g axis invtransform $axis $x2]
	} elseif { $type == "y" } {
	    set min [$g axis invtransform $axis $y1]
	    set max [$g axis invtransform $axis $y2]
	} else {
	    continue;			# Axis is not bound to any margin.
	}
	if { ![SetAxisRanges $g $axis $min $max] } {
	    Pop $g
	    bell
	    return
	}
    }
    update;				# This "update" redraws the graph
}

proc blt::ZoomStack::SetAxisRanges { g axis min max } {
    if { $min > $max } { 
	set tmp $max; set max $min; set min $tmp
    }
    if { [catch { $g axis configure $axis -min $min -max $max }] != 0 } {
	return 0
    }

    PlotZoomStack $g

    return 1
}

