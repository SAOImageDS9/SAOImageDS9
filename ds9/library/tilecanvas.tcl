#  Copyright (C) 1999-2021
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

# Edit > Layout mode (current(mode) layout)
#  edit the tile Manual Layout directly on the main canvas. While the mode
#  is on, frames, colorbars and graphs lose their own mouse bindings (as in
#  Illustrate mode) and an outline overlay, canvas items tagged tilecanvas,
#  shows every frame's block: placed (pinned) frames solid, flowing frames
#  dashed, each with its frame number and a resize handle. This is editor
#  "canvas" (see TileSpanEdit* in tilespan.tcl) working on a copy of tile
#  in ctile, so a drag only moves outlines; the frames move on release.
#  Keys: Right / Left add or remove a column, Down / Up add or remove a
#  row, Page Up / Page Down widen or narrow the gap between frames,
#  Escape leaves the mode. Each ends with break: the main window also
#  binds keys (Escape leaves full screen), so they must not go further.
#  Items are found by geometry (itile(cells)), not by tags, so the overlay
#  can stay outline-only and never hides image pixels.

# Mode

proc TileCanvasBegin {} {
    global ds9
    global current
    global tile
    global itile

    UnBindEventsCanvas
    UnBindEventsCanvasItems
    TileCanvasBindEvents

    set itile(canvas,handle) 12
    TileSpanEditRegister canvas ctile TileCanvasCell TileCanvasLayout \
	TileCanvasDraw TileCanvasApply

    # the mode edits a Manual Layout tile display, switch to one if needed
    if {$current(display) != {tile} || $tile(mode) != {grid} ||
	$tile(grid,mode) != {span}} {
	set current(display) tile
	set tile(mode) grid
	set tile(grid,mode) span
	DisplayMode
    } else {
	TileCanvasUpdate
    }
}

proc TileCanvasEnd {} {
    global ds9

    $ds9(canvas) delete tilecanvas
    TileCanvasUnBindEvents
    BindEventsCanvas
    BindEventsCanvasItems
}

# Escape: back to the preferred edit mode
proc TileCanvasExit {} {
    global current
    global pcurrent

    set current(mode) $pcurrent(mode)
    if {$current(mode) == {layout}} {
	set current(mode) none
    }
    ChangeMode
}

proc TileCanvasBindEvents {} {
    global ds9

    set c $ds9(canvas)
    bind $c <Enter> [list focus $c]
    bind $c <Leave> [list focus {}]
    bind $c <Motion> [list TileCanvasMotion %x %y]
    bind $c <Button-1> [list TileCanvasPress %x %y]
    bind $c <B1-Motion> [list TileSpanEditMotion canvas %x %y]
    bind $c <ButtonRelease-1> [list TileSpanEditRelease canvas]
    bind $c <Double-Button-1> [list TileCanvasUnpin %x %y]
    bind $c <Escape> {TileCanvasExit; break}
    foreach {ev cmd} [TileCanvasKeys] {
	bind $c $ev "$cmd; break"
    }
}

proc TileCanvasUnBindEvents {} {
    global ds9

    set c $ds9(canvas)
    foreach ev {<Enter> <Leave> <Motion> <Button-1> <B1-Motion>
	<ButtonRelease-1> <Double-Button-1> <Escape>} {
	bind $c $ev {}
    }
    foreach {ev cmd} [TileCanvasKeys] {
	bind $c $ev {}
    }
}

# grid keys: event, command
proc TileCanvasKeys {} {
    return {
	<Right> {TileCanvasResize 1 0} <Left> {TileCanvasResize -1 0}
	<Down> {TileCanvasResize 0 1} <Up> {TileCanvasResize 0 -1}
	<Prior> {TileCanvasGap 1} <Next> {TileCanvasGap -1}
    }
}

# after every layout (and UpdateDS9): refresh the copy and the overlay
proc TileCanvasUpdate {} {
    global current
    global tile
    global itile

    if {$current(mode) != {layout}} {
	return
    }

    # the display left Manual Layout (Single, Blink, another grid mode...):
    #  nothing left to edit, so leave the mode rather than keep the frames
    #  unbound with no overlay
    if {$current(display) != {tile} || $tile(mode) != {grid} ||
	$tile(grid,mode) != {span}} {
	TileCanvasExit
	return
    }

    # frames created while in the mode come with their own bindings
    UnBindEventsCanvasItems

    # mid-drag the copy is ahead of tile, just keep the overlay on top
    if {[info exists itile(edit,canvas,drag)] &&
	$itile(edit,canvas,drag) != {}} {
	TileCanvasRaise
	return
    }

    TileSpanCopyFromTile ctile
    TileCanvasDraw
}

proc TileCanvasRaise {} {
    global ds9

    $ds9(canvas) raise tilecanvas
}

# saving and printing the canvas must not include the overlay
proc TileCanvasSuspend {} {
    global ds9

    if {[$ds9(canvas) find withtag tilecanvas] != {}} {
	$ds9(canvas) itemconfigure tilecanvas -state hidden
	update idletasks
    }
}

proc TileCanvasResume {} {
    global ds9

    $ds9(canvas) itemconfigure tilecanvas -state normal
}

# Editor callbacks

# is the last layout a Manual Layout tile we can edit
proc TileCanvasOn {} {
    global itile

    return [expr {$itile(cells) != {} && [lindex $itile(cells) 7]}]
}

proc TileCanvasCell {x y} {
    global ctile

    return [TileSpanCanvasCell $x $y $ctile(span,col) $ctile(span,row)]
}

proc TileCanvasRect {ss} {
    global ctile

    return [TileSpanCanvasRect $ss $ctile(span,col) $ctile(span,row)]
}

proc TileCanvasLayout {} {
    TileSpanLayout ctile
}

# add (or with a negative count remove) columns dc and rows dr. Removing
#  is refused if a placed frame would no longer fit, and has no effect if
#  the flowing frames need the room back (the grid grows to fit them)
proc TileCanvasResize {dc dr} {
    global ctile
    global itile

    if {![TileCanvasOn] || $itile(edit,canvas,drag) != {}} {
	return
    }

    set ncol [expr $ctile(span,col)+$dc]
    set nrow [expr $ctile(span,row)+$dr]
    if {$ncol<1 || $nrow<1} {
	bell
	return
    }

    TileSpanPins ctile pins
    set err [TileSpanCheck pins $ncol $nrow]
    if {$err != {}} {
	Error $err
	return
    }

    set old [list $ctile(span,col) $ctile(span,row)]
    set ctile(span,col) $ncol
    set ctile(span,row) $nrow
    TileSpanLayout ctile
    if {[list $ctile(span,col) $ctile(span,row)] == $old} {
	bell
	return
    }

    TileCanvasApply
}

# widen (or with a negative count narrow) the gap between frames by dg
#  pixels. It stops at 0, and stops growing once the cells are tiny
proc TileCanvasGap {dg} {
    global tile
    global itile

    if {![TileCanvasOn] || $itile(edit,canvas,drag) != {}} {
	return
    }

    lassign $itile(cells) x0 y0 cw ch
    set gap [expr $tile(grid,gap)+$dg]
    if {$gap<0 || ($dg>0 && ($cw<=16 || $ch<=16))} {
	bell
	return
    }

    set tile(grid,gap) $gap
    DisplayMode
}

proc TileCanvasApply {} {
    if {[TileSpanCopyToTile ctile]} {
	DisplayMode
    }
}

proc TileCanvasDraw {} {
    global ds9
    global ctile
    global current
    global itile

    set c $ds9(canvas)
    $c delete tilecanvas
    if {![TileCanvasOn]} {
	return
    }

    # cells
    for {set jj 1} {$jj<=$ctile(span,row)} {incr jj} {
	for {set ii 1} {$ii<=$ctile(span,col)} {incr ii} {
	    $c create rectangle [TileCanvasRect [list $ii $jj 1 1]] \
		-outline gray60 -dash {2 4} -tags tilecanvas
	}
    }

    # frames: drawn twice, black under color, to show on any image
    set hs $itile(canvas,handle)
    foreach ff $ds9(active) ss $ctile(span,blocks) {
	lassign [TileCanvasRect $ss] x1 y1 x2 y2
	set x1 [expr $x1+2]
	set y1 [expr $y1+2]
	set x2 [expr $x2-2]
	set y2 [expr $y2-2]

	if {$ff == $current(frame)} {
	    set color cyan
	} elseif {[info exists ctile(span,$ff)]} {
	    set color yellow
	} else {
	    set color white
	}
	if {[info exists ctile(span,$ff)]} {
	    set dash {}
	} else {
	    set dash {6 4}
	}

	$c create rectangle $x1 $y1 $x2 $y2 \
	    -outline black -width 4 -tags tilecanvas
	$c create rectangle $x1 $y1 $x2 $y2 \
	    -outline $color -width 2 -dash $dash -tags tilecanvas

	# frame number badge
	set txt [string range $ff 5 end]
	set id [$c create text [expr $x1+4] [expr $y1+2] -anchor nw \
		    -text $txt -fill black -tags tilecanvas]
	lassign [$c bbox $id] bx1 by1 bx2 by2
	$c lower [$c create rectangle $x1 $y1 [expr $bx2+4] [expr $by2+2] \
		      -fill $color -outline black -tags tilecanvas] $id

	# resize handle
	$c create rectangle [expr $x2-$hs] [expr $y2-$hs] $x2 $y2 \
	    -fill $color -outline black -tags tilecanvas
    }

    TileCanvasRaise
}

# Events

# frame and op (move or resize) under canvas coords x,y, or {}
proc TileCanvasHit {x y} {
    global ds9
    global ctile
    global itile

    if {![TileCanvasOn]} {
	return {}
    }

    set hs $itile(canvas,handle)
    foreach ff $ds9(active) ss $ctile(span,blocks) {
	lassign [TileCanvasRect $ss] x1 y1 x2 y2
	if {$x>=$x1 && $x<=$x2 && $y>=$y1 && $y<=$y2} {
	    if {$x>=$x2-$hs-2 && $y>=$y2-$hs-2} {
		return [list $ff resize]
	    }
	    return [list $ff move]
	}
    }
    return {}
}

proc TileCanvasMotion {x y} {
    lassign [TileCanvasHit $x $y] ff op
    switch -- $op {
	move {SetCursor fleur}
	resize {SetCursor sizing}
	default {SetCursor {}}
    }
}

proc TileCanvasPress {x y} {
    global ds9

    lassign [TileCanvasHit $x $y] ff op
    if {$ff != {}} {
	TileSpanEditPress canvas $ds9(canvas) $x $y $op $ff
    }
}

proc TileCanvasUnpin {x y} {
    global ds9

    lassign [TileCanvasHit $x $y] ff op
    if {$ff != {}} {
	TileSpanEditUnpin canvas $ds9(canvas) $ff
    }
}
