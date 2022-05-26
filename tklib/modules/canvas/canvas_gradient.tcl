# *- tcl -*-
# ### ### ### ######### ######### #########

# Copyright (c) 2013 Jarek Lewandowski (MaxJarek)
# Origin http://wiki.tcl.tk/6100
# Origin http://wiki.tcl.tk/37242
# Origin http://wiki.tcl.tk/9079
# OLL licensed (http://wiki.tcl.tk/10892)

# ### ### ### ######### ######### #########
## Requisites

package require Tcl 8.5
package require Tk  8.5

namespace eval ::canvas {}

# ### ### ### ######### ######### #########
## Implementation.

proc ::canvas::gradient {canvas args} {
    gradient::DrawGradient $canvas {*}$args
    bind $canvas <Configure> [list ::canvas::gradient::DrawGradient %W {*}$args]
    return
}

# ### ### ### ######### ######### #########
## Helper commands. Internal.

namespace eval ::canvas::gradient {}

# ### ### ### ######### ######### #########
## Helper commands.
## Recreate the entire gradient from scratch, as a series of (nested)
## items each filled with a piece of it. This command is called on
## *every* change to the canvas's geometry.

## TODO: Force redraw only on changes to width and height, not
## position.

proc ::canvas::gradient::DrawGradient {canvas args} {

    # Fill any holes in the user's specification with the defaults.
    set args [dict merge {
	-direction x
	-color1    red
	-color2    green
	-type      linear
    } $args]
    
    set color1 [dict get $args -color1]
    set color2 [dict get $args -color2]
    set direction [dict get $args -direction]
    
    ## Clear gradient. Destroys all canvas items the old gradient
    ## consisted of.
    $canvas delete canvas::gradient

    ## Get current canvas width and height.
    set canWidthPx  [winfo width  $canvas]
    set canHeightPx [winfo height $canvas]
    
    ## No gradient if the canvas' area is too small
    if {($canWidthPx < 10) ||
	($canHeightPx < 10)} return
    
    ## Get the distance 'distPx' (in pixels) over which
    ## the 2 colors are to be gradiated.

    switch -exact -- $direction {
	x {
	    set distPx $canWidthPx
	}
	y {
	    set distPx $canHeightPx
	}
	r {
	    set halfWidthPx  [expr {int($canWidthPx  / 2)}]
	    set halfHeightPx [expr {int($canHeightPx / 2)}]
	    set distPx       [expr {max($halfHeightPx,$halfWidthPx)}]

	    # Even with the radial gradient stopping at the farthest
	    # canvas border (see dist calculation above, max), we may
	    # have undefined pixels in the corners. The rectangle
	    # added below ensures that these have a defined color as
	    # well (the end color).
	    $canvas create rectangle 0 0 $canWidthPx $canHeightPx \
		-tags canvas::gradient -fill $color2
	}
	d1 -
	d2 {
	    # Hm. I wonder if that should be the length of the
	    # diagonal instead (hypot).
	    set distPx [expr {$canWidthPx + $canHeightPx}]
	}
	default {
	    return -code error "Invalid direction $direction"
	}
    }

    ## Translate whatever color specification came in into RGB triples
    ## we can then interpolate between.
    if {[catch {
	lassign [winfo rgb $canvas $color1] r1 g1 b1
	lassign [winfo rgb $canvas $color2] r2 g2 b2
    } err]} {
	return -code error $err
    }

    ## Calculate the data needed for the interpolation, i.e. color
    ## range and slope of the line (The ratio of RGB-color-ranges to
    ## distance 'across' the canvas).
    
    set rRange [expr {$r2 - $r1 + 0.0}]
    set gRange [expr {$g2 - $g1 + 0.0}]
    set bRange [expr {$b2 - $b1 + 0.0}]

    set rRatio [expr {$rRange / $distPx}]
    set gRatio [expr {$gRange / $distPx}]
    set bRatio [expr {$bRange / $distPx}]

    ## Increment 'across' the canvas, drawing colored lines, or ovals
    ## with canvas-'create line', 'create oval'. Computed jump to the
    ## actual drawing command.

    Draw_$direction

    ## Lower the newly created gradient items into the background
    $canvas lower canvas::gradient
    return
}

# ### ### ### ######### ######### #########
## Draw helpers, one per direction.

proc ::canvas::gradient::Draw_d1 {} {
    upvar 1 canvas canvas r1 r1 g1 g1 b1 b1 rRatio rRatio gRatio gRatio bRatio bRatio
    upvar 1 canHeightPx canHeightPx canWidthPx canWidthPx

    # Drawing for diagonal direction, left+top to bottom+right

    # Two stages:
    # - First along y-axis (canHeightPx), top to bottom,
    # - Then  along x-axis (canWidthPx), left to right.

    # i 0 --> canHeight

    for {set i 0} {$i <= $canHeightPx} {incr i} {
	catch {
	    $canvas create line $i 0 0 $i \
		-tags canvas::gradient -fill [GetNextColor $i]
	}
    }

    # x canHeight --> canWidth + canHeight
    # i 0         --> canWidth

    for {
	set x $canHeightPx
	set i 0
    } {$i <= $canWidthPx} {
	incr i
	incr x
    } {
	catch {
	    $canvas create line $i $canHeightPx $x 0 \
		-tags canvas::gradient -fill [GetNextColor $x]
	}
    }
    return
}

proc ::canvas::gradient::Draw_d2 {} {
    upvar 1 canvas canvas r1 r1 g1 g1 b1 b1 rRatio rRatio gRatio gRatio bRatio bRatio
    upvar 1 canHeightPx canHeightPx canWidthPx canWidthPx
    
    # Drawing for diagonal direction, bottom+left to top+right

    # Two stages:
    # - First along y-axis (canHeightPx), bottom to top.
    # - Then  along x-axis (canWidthPx), left to right.

    # x 0         --> canHeight
    # i canHeight --> 0

    for {
	set x 0
	set i $canHeightPx
    } {$i >= 0} {
	incr i -1
	incr x
    } {
	catch {
	    $canvas create line $x $canHeightPx 0 $i \
		-tags canvas::gradient -fill [GetNextColor $x]
	}
    }

    # x canHeight --> canWidth + canHeight
    # i 0         --> canWidth

    for {
	set x $canHeightPx
	set i 0
    } {$i <= $canWidthPx} {
	incr i
	incr x
    } {
	catch {
	    $canvas create line $i 0 $x $canHeightPx \
		-tags canvas::gradient -fill [GetNextColor $x]
	}
    }
    return
}

proc ::canvas::gradient::Draw_x {} {
    upvar 1 canvas canvas r1 r1 g1 g1 b1 b1 rRatio rRatio gRatio gRatio bRatio bRatio
    upvar 1 canHeightPx canHeightPx distPx distPx

    for {set i $distPx} {$i >= 0} {incr i -1} {
	catch {
	    $canvas create line $i 0 $i $canHeightPx \
		-tags canvas::gradient -fill [GetNextColor $i]
	}
    }
    return
}

proc ::canvas::gradient::Draw_y {} {
    upvar 1 canvas canvas r1 r1 g1 g1 b1 b1 rRatio rRatio gRatio gRatio bRatio bRatio
    upvar 1 canWidthPx canWidthPx distPx distPx

    for {set i $distPx} {$i >= 0} {incr i -1} {
	catch {
	    $canvas create line 0 $i $canWidthPx $i \
		-tags canvas::gradient -fill [GetNextColor $i]
	}
    }
    return
}

proc ::canvas::gradient::Draw_r {} {
    upvar 1 canvas canvas r1 r1 g1 g1 b1 b1 rRatio rRatio gRatio gRatio bRatio bRatio
    upvar 1 halfWidthPx halfWidthPx halfHeightPx halfHeightPx distPx distPx

    for {set i $distPx} {$i >= 0} {incr i -1} {
	set xx1 [expr {$halfWidthPx  + $i}]
	set xx2 [expr {$halfHeightPx + $i}]
	set xx3 [expr {$halfWidthPx  - $i}]
	set xx4 [expr {$halfHeightPx - $i}]
	catch {
	    $canvas create oval $xx1 $xx2 $xx3 $xx4 \
		-outline {} -tags canvas::gradient -fill [GetNextColor $i]
	}
    }
    return
}

# ### ### ### ######### ######### #########
## Helper command. Compute the color for step i of the gradient.
## Linear interpolation from the start color.

proc ::canvas::gradient::GetNextColor {i} {
    upvar 1 r1 r1 g1 g1 b1 b1 rRatio rRatio gRatio gRatio bRatio bRatio

    set nR [expr {int ($r1 + ($rRatio * $i))}]
    set nG [expr {int ($g1 + ($gRatio * $i))}]
    set nB [expr {int ($b1 + ($bRatio * $i))}]

    return [format "#%04X%04X%04X" $nR $nG $nB]
}

# ### ### ### ######### ######### #########
## Ready

package provide canvas::gradient 0.2
return
