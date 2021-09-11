#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc CanvasDef {} {
    global canvas
    global ds9

    switch $ds9(wm) {
	x11 {set canvas(width) 738}
	aqua {set canvas(width) 777}
	win32 {set canvas(width) 740}
    }
    set canvas(height) 528
    set canvas(gap) 4

    switch $ds9(wm) {
	x11 {
	    # this is not fool proof. it does not take into account redirecting
	    # the DISPLAY. There must be a better way.
	    global tcl_platform
	    switch -- $tcl_platform(os) {
		Darwin {set canvas(gap,bottom) 14}
		default {set canvas(gap,bottom) 0}
	    }
	}
	aqua  {set canvas(gap,bottom) 0}
	win32 {set canvas(gap,bottom) 0}
    }
}

proc BlinkDef {} {
    global blink
    global iblink
    global pblink

    set iblink(id) 0
    set iblink(index) -1

    set blink(interval) 500

    array set pblink [array get blink]
}

proc TileDef {} {
    global tile
    global itile
    global ptile

    set itile(top) .tile
    set itile(mb) .tilemb

    set tile(mode) grid
    set tile(grid,row) 10
    set tile(grid,col) 10
    set tile(grid,mode) automatic
    set tile(grid,dir) x
    set tile(grid,gap) 4

    array set ptile [array get tile]
}

proc ViewDef {} {
    global view
    global pview

    set view(layout) horizontal
    set view(multi) 1
    set view(info) 1
    set view(panner) 1
    set view(magnifier) 1
    set view(buttons) 1
    set view(colorbar) 1
    set view(graph,horz) 0
    set view(graph,vert) 0

    set view(info,filename) 1
    set view(info,object) 1
    set view(info,keyvalue) {}
    set view(info,keyword) 0
    set view(info,minmax) 0
    set view(info,lowhigh) 0
    set view(info,bunit) 0
    set view(info,wcs) 1
    foreach l {a b c d e f g h i j k l m n o p q r s t u v w x y z} {
	set "view(info,wcs$l)" 0
    }
    set view(info,detector) 0
    set view(info,amplifier) 0
    set view(info,physical) 1
    set view(info,image) 1
    set view(info,frame) 1

    array set pview [array get view]
}

# canvas

proc CreateCanvas {} {
    global ds9
    global canvas

    set ds9(image) [ttk::frame $ds9(main).f]
    set ds9(canvas) [canvas $ds9(image).c \
			 -width $canvas(width) \
			 -height $canvas(height) \
			 -highlightthickness 0 \
			 -insertofftime 0 \
			 -bg [ThemeTreeBackground] \
			]
    grid rowconfigure $ds9(image) 0 -weight 1
    grid columnconfigure $ds9(image) 0 -weight 1
    grid $ds9(canvas) -row 0 -column 0 -sticky news

    # extra space for window tab
    set ds9(canvas,bottom) {}
    if {$canvas(gap,bottom)>0} {
	# set background style to TreeView, not TFrame
	set ds9(canvas,bottom) [ttk::frame $ds9(image).b \
				    -width 1 \
				    -height $canvas(gap,bottom) \
				    -style Tree.TFrame \
				   ]
	grid $ds9(canvas,bottom) -row 1 -column 0 -sticky ew
    }
	
    # needed to realize window so Layout routines will work
    grid $ds9(image)

    switch $ds9(wm) {
	x11 -
	win32 {bind $ds9(canvas) <<ThemeChanged>> {ThemeConfigCanvas %W}}
	aqua {}
    }
}

proc ThemeConfigCanvas {w} {
    global ds9
    
    $w configure -bg [ThemeTreeBackground]

    $w itemconfigure colorbar -fg [ThemeTreeForeground]
    $w itemconfigure colorbar -bg [ThemeTreeBackground]

    foreach ff $ds9(frames) {
	$w itemconfigure $ff -fg [ThemeTreeForeground]
	$w itemconfigure $ff -bg [ThemeTreeBackground]

	$w itemconfigure ${ff}cb -fg [ThemeTreeForeground]
	$w itemconfigure ${ff}cb -bg [ThemeTreeBackground]
    }

    # since graphs are created, but maybe not realized
    # must update manually
#    ThemeConfigGraph $ds9(graph,horz)
#    ThemeConfigGraph $ds9(graph,vert)
}

proc InitCanvas {} {
    global ds9

    # Bindings
    bind $ds9(canvas) <Tab> [list NextFrame]
    bind $ds9(canvas) <Shift-Tab> [list PrevFrame]
    switch $ds9(wm) {
	x11 {bind $ds9(canvas) <ISO_Left_Tab> [list PrevFrame]} 
	aqua -
	win32 {}
    }

    bind $ds9(canvas) <Configure> [list LayoutView]

    # keyboard focus
    switch $ds9(wm) {
	x11 -
	aqua {
	    bind $ds9(canvas) <Enter> [list focus $ds9(canvas)]
	    bind $ds9(canvas) <Leave> [list focus {}]
	}
	win32 {}
    }
    switch $ds9(wm) {
	x11 {}
	aqua -
	win32 {bind $ds9(canvas) <MouseWheel> [list MouseWheelFrame %x %y %D]}
    }

    # backward compatible bindings
    switch $ds9(wm) {
	x11 -
	win32 {
	    bind $ds9(canvas) <Button-3> {Button3Canvas %x %y}
	    bind $ds9(canvas) <B3-Motion> {Motion3Canvas %x %y}
	    bind $ds9(canvas) <ButtonRelease-3> {Release3Canvas %x %y}
	} 
	aqua {
	    # swap button-2 and button-3 on the mighty mouse
	    bind $ds9(canvas) <Button-2> {Button3Canvas %x %y}
	    bind $ds9(canvas) <B2-Motion> {Motion3Canvas %x %y}
	    bind $ds9(canvas) <ButtonRelease-2> {Release3Canvas %x %y}

	    # x11 command key emulation
	    bind $ds9(canvas) <Command-Button-1> {Button3Canvas %x %y}
	    bind $ds9(canvas) <Command-B1-Motion> {Motion3Canvas %x %y}
	    bind $ds9(canvas) <Command-ButtonRelease-1> {Release3Canvas %x %y}
	}
    }

    # freeze
    bind $ds9(canvas) <f> {ToggleBindEvents}
}

proc Button3Canvas {x y} {
    global ds9
    global debug
    if {$debug(tcl,events)} {
	puts stderr "Button3Canvas"
    }

    set ds9(b3) 1
    ColorbarButton3 $x $y
}

proc Motion3Canvas {x y} {
    global ds9
    global debug
    if {$debug(tcl,events)} {
	puts stderr "Motion3Canvas"
    }

    ColorbarMotion3 $x $y
}

proc Release3Canvas {x y} {
    global ds9
    global debug
    if {$debug(tcl,events)} {
	puts stderr "Release3Canvas"
    }

    set ds9(b3) 0
    ColorbarRelease3 $x $y
}

proc UnBindEventsCanvas {} {
    global ds9

    foreach ff $ds9(active) {
	UnBindEventsFrame $ff
	UnBindEventsColorbar ${ff}cb
    }
}

proc BindEventsCanvas {} {
    global ds9
    global current

    switch -- $ds9(display) {
	single -
	blink {
	    BindEventsFrame $current(frame)
	    BindEventsColorbar $current(colorbar)
	}
	tile {
	    foreach ff $ds9(active) {
		BindEventsFrame $ff
		BindEventsColorbar ${ff}cb
	    }
	}
    }
}

proc LayoutView {} {
    global view

    global debug
    if {$debug(tcl,layout)} {
	puts stderr "LayoutView"
    }

    switch $view(layout) {
	horizontal {LayoutViewHorz}
	vertical {LayoutViewVert}
    }

    LayoutInfoPanel
    LayoutButtons
    LayoutFrames
}

proc LayoutViewHorz {} {
    global ds9
    global current
    global view

    # ds9(main) weight
    grid rowconfigure $ds9(main) 4 -weight 1
    grid columnconfigure $ds9(main) 0 -weight 1
    grid rowconfigure $ds9(main) 0 -weight 0
    grid columnconfigure $ds9(main) 4 -weight 0

    grid forget $ds9(panel)
    grid forget $ds9(panel,sep)
    grid forget $ds9(buttons)
    grid forget $ds9(buttons,sep)
    grid forget $ds9(image)

    pack forget $ds9(info)
    pack forget $ds9(magnifier)
    pack forget $ds9(panner)

    # info panel
    if {$view(info) || $view(magnifier) || $view(panner)} {
	grid $ds9(panel) -row 0 -column 0 -sticky ew -columnspan 3
	$ds9(panel,sep) configure -orient horizontal
	grid $ds9(panel,sep) -row 1 -column 0 -sticky ew -columnspan 3
    }

    if {$view(info)} {
	pack $ds9(info) -side left -anchor nw -padx 2 -pady 2 \
	    -fill x -expand true
    }

    if {$view(panner)} {
	pack $ds9(panner) -side right -padx 2 -pady 2
    }

    if {$view(magnifier)} {
	pack $ds9(magnifier) -side right -padx 2 -pady 2
	if {$view(panner)} {
	    pack $ds9(magnifier) -before $ds9(panner)
	}
    }

    # buttons
    if {$view(buttons)} {
	grid $ds9(buttons) -row 2 -sticky ew -columnspan 3
	$ds9(buttons,sep) configure -orient horizontal
	grid $ds9(buttons,sep) -row 3 -column 0 -sticky ew -columnspan 3
    }

    # image
    grid $ds9(image) -row 4 -column 0 -sticky news
}

proc LayoutViewVert {} {
    global ds9
    global current
    global view

    # ds9(main) weight
    grid rowconfigure $ds9(main) 4 -weight 0
    grid columnconfigure $ds9(main) 0 -weight 0
    grid rowconfigure $ds9(main) 0 -weight 1
    grid columnconfigure $ds9(main) 4 -weight 1

    grid forget $ds9(panel)
    grid forget $ds9(panel,sep)
    grid forget $ds9(buttons)
    grid forget $ds9(buttons,sep)
    grid forget $ds9(image)
    
    pack forget $ds9(magnifier)
    pack forget $ds9(info)
    pack forget $ds9(panner)

    # info panel
    if {$view(info) || $view(magnifier) || $view(panner)} {
	grid $ds9(panel) -row 0 -column 0 -sticky ns
	$ds9(panel,sep) configure -orient vertical
	grid $ds9(panel,sep) -row 0 -column 1 -sticky ns
    }

    if {$view(magnifier)} {
	pack $ds9(magnifier) -side top -padx 2 -pady 2
    }

    if {$view(info)} {
	pack $ds9(info) -side top -padx 2 -pady 2 -fill y -expand true
	if {$view(magnifier)} {
	    pack $ds9(info) -after $ds9(magnifier)
	}
    }

    if {$view(panner)} {
	pack $ds9(panner) -side bottom -padx 2 -pady 2
    }

    # buttons
    if {$view(buttons)} {
	grid $ds9(buttons) -row 0 -column 2 -sticky ns
	$ds9(buttons,sep) configure -orient vertical
	grid $ds9(buttons,sep) -row 0 -column 3 -sticky ns
    }

    # image
    grid $ds9(image) -row 0 -column 4 -sticky news
}

proc LayoutFrames {} {
    global ds9
    global current
    global tile
    global view
    global colorbar
    
    # turn off default colorbar
    colorbar hide

    # turn off default graphs
    GraphHide graph horz
    GraphHide graph vert

    # all frames turn everything off
    foreach ff $ds9(frames) {
	$ff hide
	$ff highlite off
	$ff panner off
	$ff magnifier off
	UnBindEventsFrame $ff
	UnBindEventsColorbar ${ff}cb

	# colorbar
	${ff}cb hide

	# graphs
	GraphHide $ff horz
	GraphHide $ff vert
    }

    # be sure colorbar sizes are correct
    LayoutColorbarAdjust

    if {$ds9(active,num) > 0} {
	LayoutFramesOneOrMore
    } else {
	LayoutFramesNone
    }
}

proc LayoutFramesNone {} {
    global ds9
    global current
    global colorbar
    global view
    
    set current(frame) {}
    set current(colorbar) colorbar

    set colorbar(map) [colorbar get name]
    set colorbar(invert) [colorbar get invert]

    # panner
    if {$view(panner)} {
	panner clear
    }

    # magnifier
    if {$view(magnifier)} {
	magnifier clear
    }

    # colorbar
    LayoutColorbarOne colorbar
    if {$view(colorbar)} {
	colorbar show
	$ds9(canvas) raise colorbar
    }
    
    # graphs
    if {$view(graph,horz)} {
	LayoutGraphOne graph horz
    }

    if {$view(graph,vert)} {
	LayoutGraphOne graph vert
    }

    # update menus/dialogs
    UpdateDS9
}

proc LayoutFramesOneOrMore {} {
    global ds9

    switch -- $ds9(display) {
	single {
	    TileOne
	}
	tile {
	    if {$ds9(active,num) > 1} {
		LayoutFramesMore
	    } else {
		TileOne
	    }
	}
	blink {
	    TileOne
	}
    }
}

proc LayoutFramesMore {} {
    global ds9
    global tile

    switch -- $tile(mode) {
	row {
	    TileRect 1 $ds9(active,num)
	}
	column {
	    TileRect $ds9(active,num) 1
	}
	grid {
	    switch -- $tile(grid,mode) {
		automatic {
		    TileRect \
			[expr int(sqrt($ds9(active,num)-1))+1] \
			[expr int(sqrt($ds9(active,num))+.5)]
		}
		manual {
		    TileRect $tile(grid,col) $tile(grid,row)
		}
	    }
	}
    }
}

# This procedure is called when we have only 1 frames to display

proc TileOne {} {
    global ds9
    global canvas
    global view
    global colorbar
    global igraph

    set cbh [expr $view(colorbar) && !$colorbar(orientation)]
    set cbv [expr $view(colorbar) &&  $colorbar(orientation)]
    set grh $view(graph,horz)
    set grv $view(graph,vert)

    set xx 0
    set yy 0
    set ww [winfo width  $ds9(canvas)]
    set hh [winfo height $ds9(canvas)]

    # cbh
    if {$cbh && !$cbv && !$grh && !$grv} {
	incr hh -$colorbar(horizontal,height)
	incr hh -$canvas(gap)
    }
    # cbhgrh
    if {$cbh && !$cbv && $grh && !$grv} {
	incr hh -$colorbar(horizontal,height)
	incr hh -$canvas(gap)
	incr hh -$igraph(size)
	incr ww -$igraph(gap,x)
    }
    # cbhgrv
    if {$cbh && !$cbv && !$grh && $grv} {
	incr hh -$colorbar(horizontal,height)
	incr hh -$canvas(gap)
	incr ww -$igraph(size)
    }
    # cbhgrhgrv
    if {$cbh && !$cbv && $grh && $grv} {
	incr hh -$colorbar(horizontal,height)
	incr hh -$canvas(gap)
	incr hh -$igraph(size)
	incr ww -$igraph(size)
	incr ww -$igraph(gap,x)
    }

    # cbv
    if {!$cbh && $cbv && !$grh && !$grv} {
	# ok
	incr ww -$colorbar(vertical,width)
	incr ww -$canvas(gap)
    }
    # cbvgrv
    if {!$cbh && $cbv && !$grh && $grv} {
	incr ww -$colorbar(vertical,width)
	incr ww -$canvas(gap)
	incr ww -$igraph(size)
	incr hh -$igraph(gap,y)
    }
    # cbvgrh
    if {!$cbh && $cbv && $grh && !$grv} {
	incr ww -$colorbar(vertical,width)
	incr ww -$canvas(gap)
	incr hh -$igraph(size)
    }
    # cbvgrhgrv
    if {!$cbh && $cbv && $grh && $grv} {
	incr ww -$colorbar(vertical,width)
	incr ww -$canvas(gap)
	incr ww -$igraph(size)
	incr hh -$igraph(size)
	incr hh -$igraph(gap,y)
    }

    # grh
    if {!$cbh && !$cbv && $grh && !$grv} {
	incr hh -$igraph(size)
	incr hh -$canvas(gap)
	incr ww -$igraph(gap,x)
    }
    # grv
    if {!$cbh && !$cbv && !$grh && $grv} {
	incr ww -$igraph(size)
	incr ww -$canvas(gap)
	incr hh -$igraph(gap,y)
    }
    # grhgrv
    if {!$cbh && !$cbv && $grh && $grv} {
	incr ww -$igraph(size)
	incr ww -$canvas(gap)
	incr ww -$igraph(gap,x)
	incr hh -$igraph(size)
	incr hh -$canvas(gap)
	incr hh -$igraph(gap,y)
    }
    
    foreach ff $ds9(active) {
	$ff configure -x $xx -y $yy -width $ww -height $hh -anchor nw

	LayoutColorbarOne ${ff}cb
	LayoutGraphOne $ff horz
	LayoutGraphOne $ff vert
    }

    # only show the current frame
    FrameToFront
}

proc TileRect {numx numy} {
    global view

    if {$view(colorbar)} {
	if {$view(multi)} {
	    TileRectMulti $numx $numy
	} else {
	    TileRectOne $numx $numy
	}
    } else {
	TileRectNone $numx $numy
    }
}

proc TileRectNone {numx numy} {
    global ds9
    global canvas
    global tile
    global colorbar
    
    set ww [expr int(([winfo width  $ds9(canvas)]-($tile(grid,gap)*($numx-1)))/$numx)]
    set hh [expr int(([winfo height $ds9(canvas)]-($tile(grid,gap)*($numy-1)))/$numy)]

    switch $tile(grid,dir) {
	x {
	    for {set jj 0} {$jj<$numy} {incr jj} {
		for {set ii 0} {$ii<$numx} {incr ii} {
		    set nn [expr $jj*$numx + $ii]
		    set xx($nn) [expr ($ww+$tile(grid,gap))*$ii]
		    set yy($nn) [expr ($hh+$tile(grid,gap))*$jj]
		}
	    }
	}
	y {
	    for {set ii 0} {$ii<$numx} {incr ii} {
		for {set jj 0} {$jj<$numy} {incr jj} {
		    set nn [expr $ii*$numy + $jj]
		    set xx($nn) [expr ($ww+$tile(grid,gap))*$ii]
		    set yy($nn) [expr ($hh+$tile(grid,gap))*$jj]
		}
	    }
	}
    }

    TileIt $ww $hh xx yy [expr $numx*$numy]
}

proc TileRectMulti {numx numy} {
    global ds9
    global canvas
    global tile
    global colorbar
    
    if {!$colorbar(orientation)} {
	# horizontal
	set wcb 0
	set hcb [expr $colorbar(horizontal,height) + $canvas(gap)]
    } else {
	# vertical
	set wcb [expr $colorbar(vertical,width) + $canvas(gap)]
	set hcb 0
    }
    
    set w1 [winfo width $ds9(canvas)]
    set w2 [expr $w1-$tile(grid,gap)*($numx-1)-$wcb*$numx]
    set ww [expr int($w2/$numx)]

    set h1 [winfo height $ds9(canvas)]
    set h2 [expr $h1-$tile(grid,gap)*($numy-1)-$hcb*$numy]
    set hh [expr int($h2/$numy)]

    switch $tile(grid,dir) {
	x {
	    for {set jj 0} {$jj<$numy} {incr jj} {
		for {set ii 0} {$ii<$numx} {incr ii} {
		    set nn [expr $jj*$numx + $ii]
		    set xx($nn) [expr ($ww+$wcb+$tile(grid,gap))*$ii]
		    set yy($nn) [expr ($hh+$hcb+$tile(grid,gap))*$jj]
		}
	    }
	}
	y {
	    for {set ii 0} {$ii<$numx} {incr ii} {
		for {set jj 0} {$jj<$numy} {incr jj} {
		    set nn [expr $ii*$numy + $jj]
		    set xx($nn) [expr ($ww+$wcb+$tile(grid,gap))*$ii]
		    set yy($nn) [expr ($hh+$hcb+$tile(grid,gap))*$jj]
		}
	    }
	}
    }

    TileIt $ww $hh xx yy [expr $numx*$numy]
}

proc TileRectOne {numx numy} {
    global ds9
    global view
    global canvas
    global tile
    global colorbar

    if {!$colorbar(orientation)} {
	# horizontal
	set wcb 0
	set hcb [expr $colorbar(horizontal,height) + $canvas(gap)]
    } else {
	# vertical
	set wcb [expr $colorbar(vertical,width) + $canvas(gap)]
	set hcb 0
    }
    
    set w1 [winfo width $ds9(canvas)]
    set w2 [expr $w1-$tile(grid,gap)*($numx-1)-$wcb]
    set ww [expr int($w2/$numx)]

    set h1 [winfo height $ds9(canvas)]
    set h2 [expr $h1-$tile(grid,gap)*($numy-1)-$hcb]
    set hh [expr int($h2/$numy)]

    switch $tile(grid,dir) {
	x {
	    for {set jj 0} {$jj<$numy} {incr jj} {
		for {set ii 0} {$ii<$numx} {incr ii} {
		    set nn [expr $jj*$numx + $ii]
		    set xx($nn) [expr ($ww+$tile(grid,gap))*$ii]
		    set yy($nn) [expr ($hh+$tile(grid,gap))*$jj]
		}
	    }
	}
	y {
	    for {set ii 0} {$ii<$numx} {incr ii} {
		for {set jj 0} {$jj<$numy} {incr jj} {
		    set nn [expr $ii*$numy + $jj]
		    set xx($nn) [expr ($ww+$wcb+$tile(grid,gap))*$ii]
		    set yy($nn) [expr ($hh+$hcb+$tile(grid,gap))*$jj]
		}
	    }
	}
    }

    TileIt $ww $hh xx yy [expr $numx*$numy]
}

proc TileIt {ww hh xvar yvar nn} {
    global ds9
    global current
    global view

    upvar $xvar xx
    upvar $yvar yy

    set ii 0
    foreach ff $ds9(active) {
	if {$ii<$nn} {
	    $ff configure -x $xx($ii) -y $yy($ii) \
		-width $ww -height $hh -anchor nw

	    $ff show
	    if {$view(colorbar)} {
		${ff}cb show
	    }

	    $ds9(canvas) raise $ff
	    $ds9(canvas) raise ${ff}cb

	    if {$view(multi)} {
		LayoutColorbarTile ${ff}cb $xx($ii) $yy($ii) $ww $hh
	    } else {
		LayoutColorbarOne ${ff}cb
	    }

	    if {!$ds9(freeze)} {
		BindEventsFrame $ff
		BindEventsColorbar ${ff}cb
	    }
	}
	incr ii
    }

    if {$ds9(active,num) > $nn} {
	set current(frame) [lindex $ds9(active) 0]
    }

    FrameToFront
}

proc LayoutChangeWidth {ww} {
    global ds9

    set cw [winfo width $ds9(canvas)]
    set tw [winfo width $ds9(top)]
    set th [winfo height $ds9(top)]
    set dw $ww-$cw

    # change window size
    wm geometry $ds9(top) "[expr $tw+$dw]x${th}"
    LayoutView
}

proc LayoutChangeHeight {hh} {
    global ds9
    
    set ch [winfo height $ds9(canvas)]
    set tw [winfo width $ds9(top)]
    set th [winfo height $ds9(top)]
    set dh $hh-$ch

    # change window size
    wm geometry $ds9(top) "${tw}x[expr $th+$dh]"
    LayoutView
}

proc LayoutChangeSize {ww hh} {
    global ds9
    
    set cw [winfo width $ds9(canvas)]
    set ch [winfo height $ds9(canvas)]
    set tw [winfo width $ds9(top)]
    set th [winfo height $ds9(top)]
    set dw $ww-$cw
    set dh $hh-$ch

    # change window size
    wm geometry $ds9(top) "[expr $tw+$dw]x[expr $th+$dh]"
    LayoutView
}

proc DisplayDefaultDialog {} {
    global ed
    global ds9

    set w {.defdpy}

    set ed(ok) 0
    set ed(x) [winfo width $ds9(canvas)]
    set ed(y) [winfo height $ds9(canvas)]

    DialogCreate $w [msgcat::mc {Display Size}] ed(ok)

    # Param
    set f [ttk::frame $w.param]

    ttk::label $f.xTitle -text {X}
    ttk::label $f.yTitle -text {Y}
    ttk::entry $f.x -textvariable ed(x) -width 10
    ttk::entry $f.y -textvariable ed(y) -width 10
    ttk::label $f.xunit -text [msgcat::mc {Pixels}]
    ttk::label $f.yunit -text [msgcat::mc {Pixels}]
    
    grid $f.xTitle $f.x $f.xunit -padx 2 -pady 2 -sticky w
    grid $f.yTitle $f.y $f.yunit -padx 2 -pady 2 -sticky w

    # Buttons
    set f [ttk::frame $w.buttons]
    ttk::button $f.ok -text [msgcat::mc {OK}] -command {set ed(ok) 1} \
	-default active
    ttk::button $f.cancel -text [msgcat::mc {Cancel}] -command {set ed(ok) 0}
    pack $f.ok $f.cancel -side left -expand true -padx 2 -pady 4

    bind $w <Return> {set ed(ok) 1}

    # Fini
    ttk::separator $w.sep -orient horizontal
    pack $w.buttons $w.sep -side bottom -fill x
    pack $w.param -side top -fill both -expand true

    $w.param.x select range 0 end
    DialogWait $w ed(ok) $w.param.x
    destroy $w

    if {$ed(ok)} {
	LayoutChangeSize $ed(x) $ed(y)
    }

    set rr $ed(ok)
    unset ed
    return $rr
}

# Process Cmds

proc ProcessHeightCmd {varname iname} {
    upvar $varname var
    upvar $iname i

    # we need to be realized
    # can't use ProcessRealize
    RealizeDS9

    height::YY_FLUSH_BUFFER
    height::yy_scan_string [lrange $var $i end]
    height::yyparse
    incr i [expr $height::yycnt-1]
}

proc ProcessSendHeightCmd {proc id param {sock {}} {fn {}}} {
    global ds9
    $proc $id "[winfo height $ds9(canvas)]\n"
}

proc ProcessWidthCmd {varname iname} {
    upvar $varname var
    upvar $iname i

    # we need to be realized
    # can't use ProcessRealize
    RealizeDS9

    width::YY_FLUSH_BUFFER
    width::yy_scan_string [lrange $var $i end]
    width::yyparse
    incr i [expr $width::yycnt-1]
}

proc ProcessSendWidthCmd {proc id param {sock {}} {fn {}}} {
    global ds9
    $proc $id "[winfo width $ds9(canvas)]\n"
}

proc ProcessViewCmd {varname iname} {
    upvar $varname var
    upvar $iname i

    view::YY_FLUSH_BUFFER
    view::yy_scan_string [lrange $var $i end]
    view::yyparse
    incr i [expr $view::yycnt-1]
}

proc ProcessSendViewCmd {proc id param {sock {}} {fn {}}} {
    global parse
    set parse(proc) $proc
    set parse(id) $id

    viewsend::YY_FLUSH_BUFFER
    viewsend::yy_scan_string $param
    viewsend::yyparse
}

