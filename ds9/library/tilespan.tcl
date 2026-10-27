#  Copyright (C) 1999-2021
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

# Tile grid "Manual Layout" (tile(grid,mode) span)
#  a tile(span,col) x tile(span,row) grid. A frame that has been placed or
#  resized by hand is pinned: tile(span,$ff) is its block
#  {col row colspan rowspan}, 1-based, and it keeps that block whatever
#  happens to the other frames. All other active frames flow, in
#  ds9(active) order, into the free 1x1 cells around the pinned blocks, so
#  moving, showing, hiding, adding and deleting frames work as usual.
#  tile(span,blocks) is derived: one block per active frame, recomputed on
#  every layout by TileSpanLayout.

proc TileSpanDef {} {
    global tile

    # called after ptile is set, so these never become preferences
    # 0 means not yet set; seeded on first use
    set tile(span,col) 0
    set tile(span,row) 0
    set tile(span,blocks) {}
}

proc TileSpanActive {} {
    global tile

    return [expr {$tile(mode) == {grid} && $tile(grid,mode) == {span}}]
}

# varname is tile, or the dialog's copy dtile
proc TileSpanSeed {{varname tile}} {
    upvar #0 $varname var
    global ds9

    if {$var(span,col)>0 && $var(span,row)>0} {
	return
    }

    # same grid automatic mode would use
    set num [llength $ds9(active)]
    if {$num<1} {
	set num 1
    }
    set var(span,col) [expr int(sqrt($num-1))+1]
    set var(span,row) [expr int(sqrt($num)+.5)]
}

# is ss a well formed block that fits in a ncol x nrow grid
proc TileSpanFits {ss ncol nrow} {
    if {[llength $ss] != 4} {
	return 0
    }
    foreach vv $ss {
	if {![string is integer -strict $vv] || $vv<1} {
	    return 0
	}
    }
    lassign $ss col row colspan rowspan
    return [expr {$col+$colspan-1 <= $ncol && $row+$rowspan-1 <= $nrow}]
}

# returns the frame already occupying any cell of ss, or {}
proc TileSpanHit {occvar ss} {
    upvar $occvar occ

    lassign $ss col row colspan rowspan
    for {set jj $row} {$jj<$row+$rowspan} {incr jj} {
	for {set ii $col} {$ii<$col+$colspan} {incr ii} {
	    if {[info exists occ($ii,$jj)]} {
		return $occ($ii,$jj)
	    }
	}
    }
    return {}
}

proc TileSpanMark {occvar ss ff} {
    upvar $occvar occ

    lassign $ss col row colspan rowspan
    for {set jj $row} {$jj<$row+$rowspan} {incr jj} {
	for {set ii $col} {$ii<$col+$colspan} {incr ii} {
	    set occ($ii,$jj) $ff
	}
    }
}

# first free cell of a ncol x nrow grid in dir scan order, or {}
proc TileSpanFree {occvar ncol nrow dir} {
    upvar $occvar occ

    switch -- $dir {
	x {
	    for {set jj 1} {$jj<=$nrow} {incr jj} {
		for {set ii 1} {$ii<=$ncol} {incr ii} {
		    if {![info exists occ($ii,$jj)]} {
			return [list $ii $jj]
		    }
		}
	    }
	}
	y {
	    for {set ii 1} {$ii<=$ncol} {incr ii} {
		for {set jj 1} {$jj<=$nrow} {incr jj} {
		    if {![info exists occ($ii,$jj)]} {
			return [list $ii $jj]
		    }
		}
	    }
	}
    }
    return {}
}

proc TileSpanName {ff} {
    return "[msgcat::mc {Frame}] [string range $ff 5 end]"
}

# compute var(span,blocks), one block per active frame: pinned frames keep
#  their block (a pin that no longer fits, or overlaps an earlier pinned
#  frame, is dropped and the frame flows again); the others flow into the
#  first free cell in dir (default tile(grid,dir)) order, growing the grid
#  along dir if needed. varname is tile, or the dialog's copy dtile
proc TileSpanLayout {{varname tile} {dir {}}} {
    upvar #0 $varname var
    global ds9
    global tile

    if {$dir == {}} {
	set dir $tile(grid,dir)
    }

    TileSpanSeed $varname

    foreach ff $ds9(active) {
	if {[info exists var(span,$ff)]} {
	    if {[TileSpanFits $var(span,$ff) $var(span,col) $var(span,row)] &&
		[TileSpanHit occ $var(span,$ff)] == {}} {
		TileSpanMark occ $var(span,$ff) $ff
	    } else {
		unset var(span,$ff)
	    }
	}
    }

    set blocks {}
    foreach ff $ds9(active) {
	if {[info exists var(span,$ff)]} {
	    lappend blocks $var(span,$ff)
	    continue
	}
	while {[set cell [TileSpanFree occ $var(span,col) $var(span,row) $dir]] == {}} {
	    switch -- $dir {
		x {incr var(span,row)}
		y {incr var(span,col)}
	    }
	}
	set ss [list {*}$cell 1 1]
	TileSpanMark occ $ss $ff
	lappend blocks $ss
    }
    set var(span,blocks) $blocks
}

# pins (array ff -> block) of the active frames, except frame skip
proc TileSpanPins {varname pinsvar {skip {}}} {
    upvar #0 $varname var
    upvar $pinsvar pins
    global ds9

    foreach ff $ds9(active) {
	if {$ff != $skip && [info exists var(span,$ff)]} {
	    set pins($ff) $var(span,$ff)
	}
    }
}

# check that pins (array ff -> block) fit a ncol x nrow grid and do not
#  overlap. Returns {} or an error message
proc TileSpanCheck {pinsvar ncol nrow} {
    upvar $pinsvar pins
    global ds9

    if {![string is integer -strict $ncol] || $ncol<1 ||
	![string is integer -strict $nrow] || $nrow<1} {
	return "[msgcat::mc {Invalid grid size}]: $ncol x $nrow"
    }

    foreach ff $ds9(active) {
	if {![info exists pins($ff)]} {
	    continue
	}
	set ss $pins($ff)
	if {![TileSpanFits $ss $ncol $nrow]} {
	    return "[TileSpanName $ff] \{$ss\} [msgcat::mc {does not fit in}] $ncol x $nrow"
	}
	set hit [TileSpanHit occ $ss]
	if {$hit != {}} {
	    return "[TileSpanName $hit] [msgcat::mc {and}] [TileSpanName $ff] [msgcat::mc {overlap}]"
	}
	TileSpanMark occ $ss $ff
    }
    return {}
}

# Process Cmds

# pin the current frame to a block
proc ProcessTileSpanCmd {col row colspan rowspan} {
    global current
    global tile
    global ds9

    if {[lsearch $ds9(active) $current(frame)] == -1} {
	Error [msgcat::mc {No current frame}]
	return
    }

    TileSpanSeed
    TileSpanPins tile pins $current(frame)
    set pins($current(frame)) [list $col $row $colspan $rowspan]
    set err [TileSpanCheck pins $tile(span,col) $tile(span,row)]
    if {$err != {}} {
	Error $err
	return
    }

    set tile(span,$current(frame)) $pins($current(frame))
    DisplayMode
}

# unpin the current frame, it flows again
proc ProcessTileSpanNoneCmd {} {
    global current
    global tile

    unset -nocomplain tile(span,$current(frame))
    DisplayMode
}

proc ProcessTileSpanSizeCmd {ncol nrow} {
    global tile

    TileSpanPins tile pins
    set err [TileSpanCheck pins $ncol $nrow]
    if {$err != {}} {
	Error $err
	return
    }

    set tile(span,col) $ncol
    set tile(span,row) $nrow
    DisplayMode
}

# the block the current frame occupies
proc ProcessSendTileSpanCmd {} {
    global parse
    global current
    global tile
    global ds9

    set rr {}
    set idx [lsearch $ds9(active) $current(frame)]
    if {$idx != -1} {
	set rr [lindex $tile(span,blocks) $idx]
    }
    $parse(proc) $parse(id) "$rr\n"
}

proc ProcessSendTileSpanSizeCmd {} {
    global parse
    global tile

    TileSpanSeed
    $parse(proc) $parse(id) "$tile(span,col) $tile(span,row)\n"
}

# Dialog
#  the Tile Parameters dialog shows a copy of tile in dtile:
#  dtile(span,col/row), the pins dtile(span,$ff), the derived
#  dtile(span,blocks), plus entry text in dtile(span,ecol/erow) that is only
#  accepted once it validates. Every accepted drag, unpin, size change or
#  reset is applied at once (TileApplyDialog), and the copy is refreshed
#  whenever the layout changes

proc TileSpanDialogInit {} {
    global tile
    global dtile

    foreach nn [array names dtile span,Frame*] {
	unset dtile($nn)
    }
    foreach nn [array names tile span,Frame*] {
	set dtile($nn) $tile($nn)
    }
    set dtile(span,col) $tile(span,col)
    set dtile(span,row) $tile(span,row)
    TileSpanDialogLayout
}

proc TileSpanDialogCreate {w} {
    global itile

    set itile(span,width) 300
    set itile(span,height) 200

    set f [ttk::labelframe $w.span -text [msgcat::mc {Manual Layout}] \
	       -padding 2]
    ttk::label $f.tcol -text [msgcat::mc {Columns}]
    ttk::label $f.trow -text [msgcat::mc {Rows}]
    ttk::entry $f.col -textvariable dtile(span,ecol) -width 6
    ttk::label $f.tx -text {x}
    ttk::entry $f.row -textvariable dtile(span,erow) -width 6
    ttk::button $f.reset -text [msgcat::mc {Reset}] \
	-command TileSpanDialogReset
    set itile(span,canvas) [canvas $f.c -width $itile(span,width) \
				-height $itile(span,height) \
				-highlightthickness 0]
    ttk::label $f.help -justify left -text [msgcat::mc "Drag a frame to place it, drag its corner to resize it.\nPlaced frames stay put, the rest flow around them.\nDouble-click a placed frame to let it flow again."]

    grid $f.tcol x $f.trow x -padx 2 -pady 2 -sticky w
    grid $f.col $f.tx $f.row $f.reset -padx 2 -pady 2 -sticky w
    grid $f.c - - - -padx 2 -pady 2
    grid $f.help - - - -padx 2 -pady 2 -sticky w

    foreach ee [list $f.col $f.row] {
	bind $ee <Return> TileSpanDialogSize
	bind $ee <FocusOut> TileSpanDialogSize
    }

    $f.c bind block <ButtonPress-1> [list TileSpanDialogPress %x %y move]
    $f.c bind handle <ButtonPress-1> [list TileSpanDialogPress %x %y resize]
    $f.c bind block <Double-ButtonPress-1> TileSpanDialogUnpin
    bind $f.c <B1-Motion> [list TileSpanDialogMotion %x %y]
    bind $f.c <ButtonRelease-1> TileSpanDialogRelease
}

# show the span editor or the manual Layout box, per dtile(mode)
proc TileSpanDialogMode {} {
    global itile
    global dtile

    set w $itile(top)
    if {$dtile(mode) == {span}} {
	grid remove $w.layout
	grid $w.span
	TileSpanDialogDraw
    } else {
	grid remove $w.span
	grid $w.layout
    }
}

proc TileSpanDialogDraw {} {
    global itile
    global dtile
    global ds9
    global current

    if {![info exists itile(span,canvas)] ||
	![winfo exists $itile(span,canvas)]} {
	return
    }

    set c $itile(span,canvas)
    $c delete all
    $c configure -background [ThemeTreeBackground]

    set cw [expr double($itile(span,width))/$dtile(span,col)]
    set ch [expr double($itile(span,height))/$dtile(span,row)]

    # cells
    for {set jj 0} {$jj<$dtile(span,row)} {incr jj} {
	for {set ii 0} {$ii<$dtile(span,col)} {incr ii} {
	    $c create rectangle \
		[expr $ii*$cw] [expr $jj*$ch] \
		[expr ($ii+1)*$cw-1] [expr ($jj+1)*$ch-1] \
		-outline [ThemeTreeForeground] -dash {2 2}
	}
    }

    # frames: placed (pinned) ones solid, flowing ones dashed
    foreach ff $ds9(active) ss $dtile(span,blocks) {
	lassign $ss col row colspan rowspan
	set x0 [expr ($col-1)*$cw+2]
	set y0 [expr ($row-1)*$ch+2]
	set x1 [expr ($col+$colspan-1)*$cw-3]
	set y1 [expr ($row+$rowspan-1)*$ch-3]

	if {$ff == $current(frame)} {
	    set bg [ThemeSelectedBackground]
	    set fg [ThemeSelectedForeground]
	} else {
	    set bg [ThemeBackground]
	    set fg [ThemeForeground]
	}
	if {[info exists dtile(span,$ff)]} {
	    set dash {}
	    set width 2
	} else {
	    set dash {4 2}
	    set width 1
	}

	$c create rectangle $x0 $y0 $x1 $y1 -fill $bg -outline $fg \
	    -dash $dash -width $width -tags [list block $ff]
	$c create text [expr ($x0+$x1)/2] [expr ($y0+$y1)/2] \
	    -text [string range $ff 5 end] -fill $fg -tags [list block $ff]
	$c create rectangle [expr $x1-8] [expr $y1-8] $x1 $y1 \
	    -fill $fg -outline $fg -tags [list handle $ff]
    }
}

# 1-based grid cell under canvas coords x,y
proc TileSpanDialogCell {x y} {
    global itile
    global dtile

    set col [expr int($x*$dtile(span,col)/$itile(span,width))+1]
    set row [expr int($y*$dtile(span,row)/$itile(span,height))+1]
    set col [expr max(1,min($col,$dtile(span,col)))]
    set row [expr max(1,min($row,$dtile(span,row)))]
    return [list $col $row]
}

# the block frame ff currently occupies
proc TileSpanDialogBlock {ff} {
    global dtile
    global ds9

    return [lindex $dtile(span,blocks) [lsearch $ds9(active) $ff]]
}

proc TileSpanDialogPress {x y op} {
    global itile

    set ff [lindex [$itile(span,canvas) gettags current] 1]
    lassign [TileSpanDialogBlock $ff] col row
    lassign [TileSpanDialogCell $x $y] pc pr
    set itile(span,drag) [list $ff $op [expr $pc-$col] [expr $pr-$row]]
}

# snap to the cell under the pointer, pinning the frame there. Only
#  placed frames are in the way, flowing frames move around it
proc TileSpanDialogMotion {x y} {
    global itile
    global dtile

    if {![info exists itile(span,drag)] || $itile(span,drag) == {}} {
	return
    }

    lassign $itile(span,drag) ff op dc dr
    set old [TileSpanDialogBlock $ff]
    lassign $old col row colspan rowspan
    lassign [TileSpanDialogCell $x $y] pc pr

    switch -- $op {
	move {
	    set col [expr max(1,min($pc-$dc,$dtile(span,col)-$colspan+1))]
	    set row [expr max(1,min($pr-$dr,$dtile(span,row)-$rowspan+1))]
	}
	resize {
	    set colspan [expr max(1,$pc-$col+1)]
	    set rowspan [expr max(1,$pr-$row+1)]
	}
    }

    set ss [list $col $row $colspan $rowspan]
    if {$ss == $old && [info exists dtile(span,$ff)]} {
	return
    }

    TileSpanPins dtile pins $ff
    set pins($ff) $ss
    if {[TileSpanCheck pins $dtile(span,col) $dtile(span,row)] != {}} {
	return
    }

    set dtile(span,$ff) $ss
    TileSpanDialogLayout
    set itile(span,moved) 1
    TileSpanDialogDraw
}

# apply once per drag, not on every motion event. A click without a drag
#  makes that frame the current frame
proc TileSpanDialogRelease {} {
    global itile

    set ff [lindex $itile(span,drag) 0]
    set itile(span,drag) {}
    if {[info exists itile(span,moved)] && $itile(span,moved)} {
	set itile(span,moved) 0
	TileApplyDialog
    } elseif {$ff != {}} {
	GotoFrame $ff
	TileSpanDialogDraw
    }
}

# double-click: the frame is no longer placed, it flows again
proc TileSpanDialogUnpin {} {
    global itile
    global dtile

    set itile(span,drag) {}
    set ff [lindex [$itile(span,canvas) gettags current] 1]
    if {[info exists dtile(span,$ff)]} {
	unset dtile(span,$ff)
	TileSpanDialogLayout
	TileApplyDialog
    }
}

# accept the Columns x Rows entries only if every placed frame still fits
proc TileSpanDialogSize {} {
    global dtile

    if {![info exists dtile(span,ecol)]} {
	return
    }
    if {$dtile(span,ecol) == $dtile(span,col) &&
	$dtile(span,erow) == $dtile(span,row)} {
	return
    }

    TileSpanPins dtile pins
    set err [TileSpanCheck pins $dtile(span,ecol) $dtile(span,erow)]
    if {$err != {}} {
	set dtile(span,ecol) $dtile(span,col)
	set dtile(span,erow) $dtile(span,row)
	Error $err
	return
    }

    set dtile(span,col) $dtile(span,ecol)
    set dtile(span,row) $dtile(span,erow)
    TileSpanDialogLayout
    TileSpanDialogDraw
    TileApplyDialog
}

# no frame placed: everything flows
proc TileSpanDialogReset {} {
    global dtile

    foreach nn [array names dtile span,Frame*] {
	unset dtile($nn)
    }
    TileSpanDialogLayout
    TileSpanDialogDraw
    TileApplyDialog
}

# re-flow the dialog copy; the grid may grow, so keep the Columns x Rows
#  entries in step (stale entry text would otherwise be taken as a resize
#  on the next focus-out)
proc TileSpanDialogLayout {} {
    global dtile

    TileSpanLayout dtile $dtile(dir)
    set dtile(span,ecol) $dtile(span,col)
    set dtile(span,erow) $dtile(span,row)
}

# validate the dialog copy and copy it into tile. Returns 0 on error
proc TileSpanDialogApply {} {
    global tile
    global dtile

    TileSpanPins dtile pins
    set err [TileSpanCheck pins $dtile(span,col) $dtile(span,row)]
    if {$err != {}} {
	Error $err
	return 0
    }

    foreach nn [array names tile span,Frame*] {
	unset tile($nn)
    }
    foreach nn [array names dtile span,Frame*] {
	set tile($nn) $dtile($nn)
    }
    set tile(span,col) $dtile(span,col)
    set tile(span,row) $dtile(span,row)
    return 1
}
