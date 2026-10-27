#  Copyright (C) 1999-2021
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

# Tile grid "Manual Layout" (tile(grid,mode) span)
#  a tile(span,col) x tile(span,row) grid holding an ordered list of
#  blocks, tile(span,blocks), each {col row colspan rowspan}, 1-based.
#  Like every other tile mode, the Nth active frame goes in the Nth block,
#  so moving, showing, hiding, adding and deleting frames all work as
#  usual. Blocks beyond the number of active frames are kept, empty, but
#  only as placeholders: they never get in the way of a frame's block and
#  are dropped wherever a frame's block is moved over them (TileSpanPrune)

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

# varname is tile, or the dialog's working copy dtile
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

# returns the id already occupying any cell of ss, or {}
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

proc TileSpanMark {occvar ss id} {
    upvar $occvar occ

    lassign $ss col row colspan rowspan
    for {set jj $row} {$jj<$row+$rowspan} {incr jj} {
	for {set ii $col} {$ii<$col+$colspan} {incr ii} {
	    set occ($ii,$jj) $id
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

# name of block idx for messages: the frame in it, or an empty block
proc TileSpanName {idx} {
    global ds9

    set ff [lindex $ds9(active) $idx]
    if {$ff != {}} {
	return "[msgcat::mc {Frame}] [string range $ff 5 end]"
    }
    return "[msgcat::mc {empty block}] [expr $idx+1]"
}

# make sure there is a valid block for every active frame: drop blocks
#  that don't fit or overlap an earlier one, then add 1x1 blocks in the
#  first free cell, growing the grid along dir (default tile(grid,dir)).
#  No changes if everything is already valid. varname is tile, or the
#  dialog's working copy dtile
proc TileSpanAssign {{varname tile} {dir {}}} {
    upvar #0 $varname var
    global ds9
    global tile

    if {$dir == {}} {
	set dir $tile(grid,dir)
    }

    TileSpanSeed $varname

    set blocks {}
    foreach ss $var(span,blocks) {
	if {[TileSpanFits $ss $var(span,col) $var(span,row)] &&
	    [TileSpanHit occ $ss] == {}} {
	    TileSpanMark occ $ss [llength $blocks]
	    lappend blocks $ss
	}
    }

    while {[llength $blocks] < [llength $ds9(active)]} {
	while {[set cell [TileSpanFree occ $var(span,col) $var(span,row) $dir]] == {}} {
	    switch -- $dir {
		x {incr var(span,row)}
		y {incr var(span,col)}
	    }
	}
	set ss [list {*}$cell 1 1]
	TileSpanMark occ $ss [llength $blocks]
	lappend blocks $ss
    }

    set var(span,blocks) $blocks
}

# check that the blocks holding a frame fit a ncol x nrow grid and do not
#  overlap each other (empty blocks are not checked, see TileSpanPrune).
#  Returns {} or an error message
proc TileSpanCheck {blocks ncol nrow} {
    global ds9

    if {![string is integer -strict $ncol] || $ncol<1 ||
	![string is integer -strict $nrow] || $nrow<1} {
	return "[msgcat::mc {Invalid grid size}]: $ncol x $nrow"
    }

    set ii 0
    foreach ss [lrange $blocks 0 [llength $ds9(active)]-1] {
	if {![TileSpanFits $ss $ncol $nrow]} {
	    return "[TileSpanName $ii] \{$ss\} [msgcat::mc {does not fit in}] $ncol x $nrow"
	}
	set hit [TileSpanHit occ $ss]
	if {$hit != {}} {
	    return "[TileSpanName $hit] [msgcat::mc {and}] [TileSpanName $ii] [msgcat::mc {overlap}]"
	}
	TileSpanMark occ $ss $ii
	incr ii
    }
    return {}
}

# keep the blocks holding a frame; keep empty blocks only where they still
#  fit and are not covered by a frame's block or an earlier empty block
proc TileSpanPrune {blocks ncol nrow} {
    global ds9

    set num [llength $ds9(active)]
    set rr [lrange $blocks 0 $num-1]
    set ii 0
    foreach ss $rr {
	TileSpanMark occ $ss $ii
	incr ii
    }
    foreach ss [lrange $blocks $num end] {
	if {[TileSpanFits $ss $ncol $nrow] && [TileSpanHit occ $ss] == {}} {
	    TileSpanMark occ $ss [llength $rr]
	    lappend rr $ss
	}
    }
    return $rr
}

# blocks for a new ncol x nrow grid size: blocks holding a frame must still
#  fit, empty ones that don't are dropped. Returns {blocks err}
proc TileSpanResize {blocks ncol nrow} {
    set err [TileSpanCheck $blocks $ncol $nrow]
    if {$err != {}} {
	return [list $blocks $err]
    }
    return [list [TileSpanPrune $blocks $ncol $nrow] {}]
}

# Process Cmds

# block of the current frame
proc ProcessTileSpanCmd {col row colspan rowspan} {
    global current
    global tile
    global ds9

    set idx [lsearch $ds9(active) $current(frame)]
    if {$idx == -1} {
	Error [msgcat::mc {No current frame}]
	return
    }

    TileSpanAssign
    set blocks [lreplace $tile(span,blocks) $idx $idx \
		    [list $col $row $colspan $rowspan]]
    set err [TileSpanCheck $blocks $tile(span,col) $tile(span,row)]
    if {$err != {}} {
	Error $err
	return
    }

    set tile(span,blocks) [TileSpanPrune $blocks $tile(span,col) $tile(span,row)]
    DisplayMode
}

proc ProcessTileSpanSizeCmd {ncol nrow} {
    global tile

    TileSpanAssign
    lassign [TileSpanResize $tile(span,blocks) $ncol $nrow] blocks err
    if {$err != {}} {
	Error $err
	return
    }

    set tile(span,col) $ncol
    set tile(span,row) $nrow
    set tile(span,blocks) $blocks
    DisplayMode
}

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
#  dtile(span,col/row/blocks), plus entry text in dtile(span,ecol/erow)
#  that is only accepted once it validates. Like the rest of the dialog,
#  every accepted drag, size change or reset is applied at once
#  (TileApplyDialog), and the copy is refreshed whenever the layout changes

proc TileSpanDialogInit {} {
    global tile
    global dtile

    set dtile(span,col) $tile(span,col)
    set dtile(span,row) $tile(span,row)
    set dtile(span,blocks) $tile(span,blocks)
    TileSpanAssign dtile $dtile(dir)

    set dtile(span,ecol) $dtile(span,col)
    set dtile(span,erow) $dtile(span,row)
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
    ttk::label $f.help \
	-text [msgcat::mc {Drag a block to move it, drag its corner to resize}]

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

    # blocks, labeled with the frame that fills them
    set idx 0
    foreach ss $dtile(span,blocks) {
	lassign $ss col row colspan rowspan
	set x0 [expr ($col-1)*$cw+2]
	set y0 [expr ($row-1)*$ch+2]
	set x1 [expr ($col+$colspan-1)*$cw-3]
	set y1 [expr ($row+$rowspan-1)*$ch-3]

	# empty blocks are placeholders: outline only, not draggable
	set ff [lindex $ds9(active) $idx]
	if {$ff == {}} {
	    $c create rectangle $x0 $y0 $x1 $y1 \
		-outline [ThemeTreeForeground] -dash {4 2}
	    incr idx
	    continue
	} elseif {$ff == $current(frame)} {
	    set bg [ThemeSelectedBackground]
	    set fg [ThemeSelectedForeground]
	    set txt [string range $ff 5 end]
	} else {
	    set bg [ThemeBackground]
	    set fg [ThemeForeground]
	    set txt [string range $ff 5 end]
	}

	$c create rectangle $x0 $y0 $x1 $y1 \
	    -fill $bg -outline $fg -tags [list block $idx]
	$c create text [expr ($x0+$x1)/2] [expr ($y0+$y1)/2] \
	    -text $txt -fill $fg -tags [list block $idx]
	$c create rectangle [expr $x1-8] [expr $y1-8] $x1 $y1 \
	    -fill $fg -outline $fg -tags [list handle $idx]
	incr idx
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

proc TileSpanDialogPress {x y op} {
    global itile
    global dtile

    set idx [lindex [$itile(span,canvas) gettags current] 1]
    lassign [lindex $dtile(span,blocks) $idx] col row
    lassign [TileSpanDialogCell $x $y] pc pr
    set itile(span,drag) [list $idx $op [expr $pc-$col] [expr $pr-$row]]
}

# snap to the cell under the pointer; reject anything that would overlap
proc TileSpanDialogMotion {x y} {
    global itile
    global dtile
    global ds9

    if {![info exists itile(span,drag)] || $itile(span,drag) == {}} {
	return
    }

    lassign $itile(span,drag) idx op dc dr
    set old [lindex $dtile(span,blocks) $idx]
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
    if {$ss == $old} {
	return
    }

    # only blocks holding a frame are in the way
    set ii 0
    foreach s2 [lrange $dtile(span,blocks) 0 [llength $ds9(active)]-1] {
	if {$ii != $idx} {
	    TileSpanMark occ $s2 $ii
	}
	incr ii
    }
    if {[TileSpanHit occ $ss] != {}} {
	return
    }

    set dtile(span,blocks) [TileSpanPrune \
				[lreplace $dtile(span,blocks) $idx $idx $ss] \
				$dtile(span,col) $dtile(span,row)]
    set itile(span,moved) 1
    TileSpanDialogDraw
}

# apply once per drag, not on every motion event
proc TileSpanDialogRelease {} {
    global itile

    set itile(span,drag) {}
    if {[info exists itile(span,moved)] && $itile(span,moved)} {
	set itile(span,moved) 0
	TileApplyDialog
    }
}

# accept the Columns x Rows entries only if every occupied block still fits
proc TileSpanDialogSize {} {
    global dtile

    if {![info exists dtile(span,ecol)]} {
	return
    }
    if {$dtile(span,ecol) == $dtile(span,col) &&
	$dtile(span,erow) == $dtile(span,row)} {
	return
    }

    lassign [TileSpanResize $dtile(span,blocks) \
		 $dtile(span,ecol) $dtile(span,erow)] blocks err
    if {$err != {}} {
	set dtile(span,ecol) $dtile(span,col)
	set dtile(span,erow) $dtile(span,row)
	Error $err
	return
    }

    set dtile(span,col) $dtile(span,ecol)
    set dtile(span,row) $dtile(span,erow)
    set dtile(span,blocks) $blocks
    TileSpanDialogDraw
    TileApplyDialog
}

# one 1x1 block per active frame, in Direction order
proc TileSpanDialogReset {} {
    global dtile

    set dtile(span,blocks) {}
    TileSpanAssign dtile $dtile(dir)

    set dtile(span,ecol) $dtile(span,col)
    set dtile(span,erow) $dtile(span,row)
    TileSpanDialogDraw
    TileApplyDialog
}

# validate the dialog copy and copy it into tile. Returns 0 on error
proc TileSpanDialogApply {} {
    global tile
    global dtile

    set err [TileSpanCheck $dtile(span,blocks) \
		 $dtile(span,col) $dtile(span,row)]
    if {$err != {}} {
	Error $err
	return 0
    }

    set tile(span,col) $dtile(span,col)
    set tile(span,row) $dtile(span,row)
    set tile(span,blocks) $dtile(span,blocks)
    return 1
}
