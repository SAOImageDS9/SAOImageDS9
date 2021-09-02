#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc CanvasDef {} {
    global canvas
    global icanvas
    global ds9

    # also adjust info.tcl LayoutInfoPanelHorz
    switch $ds9(wm) {
	x11 {set icanvas(horz,width) 738}
	aqua {set icanvas(horz,width) 777}
	win32 {set icanvas(horz,width) 740}
    }

    set icanvas(horz,height) 480
    set icanvas(vert,width) 640
    set icanvas(vert,height) 640
    set canvas(width) $icanvas(horz,width)
    set canvas(height) $icanvas(horz,height)
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
	aqua -
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

    LayoutViewAdjust diff
    set ww [expr $canvas(width) +$diff(x)]
    set hh [expr $canvas(height)+$diff(y)]

    global debug
    if {$debug(tcl,layout)} {
	puts stderr "CreateCanvas $canvas(width) $canvas(height) ${ww}x${hh}"
    }

    set ds9(image) [ttk::frame $ds9(main).f]
    set ds9(canvas) [canvas $ds9(image).c -width $ww -height $hh \
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
    ThemeConfigGraph $ds9(graph,horz)
    ThemeConfigGraph $ds9(graph,vert)
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

    bind $ds9(canvas) <Configure> [list ConfigureView]

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

# view

proc ConfigureView {} {
    global ds9
    global canvas

    global debug
    if {$debug(tcl,layout)} {
	puts stderr "ConfigureView old $canvas(width) $canvas(height)"
    }

    # calculate ds9(canvas) size
    LayoutViewAdjust diff
    set canvas(width)  [expr [winfo width  $ds9(canvas)]-$diff(x)]
    set canvas(height) [expr [winfo height $ds9(canvas)]-$diff(y)]

    if {$debug(tcl,layout)} {
	puts stderr "ConfigureView new $canvas(width) $canvas(height)"
    }

    LayoutView
}

proc UpdateView {} {
    global ds9
    global canvas

    # note: assume canvas(width) and canvas(height) have been set to desired
    # values.

    global debug
    if {$debug(tcl,layout)} {
	puts stderr "UpdateView to $canvas(width) x $canvas(height)"
    }

    # save current size
    set wo [winfo width $ds9(top)]
    set ho [winfo height $ds9(top)]

    # calculate ds9(canvas) size
    LayoutViewAdjust diff
    set ww [expr $canvas(width) +$diff(x)]
    set hh [expr $canvas(height)+$diff(y)]

    # determine how much to change
    set wc [winfo width $ds9(canvas)]
    set hc [winfo height $ds9(canvas)]

    set wt [winfo width $ds9(top)]
    set ht [winfo height $ds9(top)]
    
    if {$debug(tcl,layout)} {
	puts stderr "UpdateView before ds9(top) $wt x $ht"
    }

    set w [expr $ww - $wc + $wt]
    set h [expr $hh - $hc + $ht]

    if {$debug(tcl,layout)} {
	puts stderr "UpdateView after ds9(top) $w x $h"
    }

    # change window size
    wm geometry $ds9(top) ${w}x${h}

    LayoutView
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

    UpdateGraphLayout {}
}

proc LayoutViewAdjust {varname} {
    upvar $varname var

    global debug
    if {$debug(tcl,layout)} {
	puts stderr "LayoutViewAdjust"
    }

    global view
    global colorbar
    global icolorbar
    global igraph
    global canvas
    global ds9

    set var(x) 0
    set var(y) 0

    set cbh [expr $view(colorbar) && !$colorbar(orientation)]
    set cbv [expr $view(colorbar) &&  $colorbar(orientation)]

    set grh $view(graph,horz)
    set grv $view(graph,vert)

    if {$colorbar(numerics)} {
	# ww horizontal: tickgap
	set ww 12
	# hh vertical: approx number of numerals to display
	set hh 7

	set icolorbar(horizontal,height) \
	    [expr int($colorbar(size) + $colorbar(font,size)*$ds9(scaling)+$ww)]

	set icolorbar(vertical,width) \
	    [expr $colorbar(size) + $colorbar(font,size)*$hh]
    } else {
 	set icolorbar(horizontal,height) [expr $colorbar(size) +2]
 	set icolorbar(vertical,width) [expr $colorbar(size) +2]
    }

    # basics
    if {$cbh} {
	incr var(y) $icolorbar(horizontal,height)
    }

    if {$cbv} {
	incr var(x) $icolorbar(vertical,width)
    }

    if {$grh} {
	incr var(y) $igraph(size)
    }

    if {$grv} {
	incr var(x) $igraph(size)
    }

    # canvas gap
    if {$cbh || $grh} {
	incr var(y) $canvas(gap)
    }

    if {$cbv || $grv} {
	incr var(x) $canvas(gap)
    }

    # graph gap
    if {$grv && !$cbh} {
	incr var(y) $igraph(gap,y)
    }

    if {$grh && !$cbv} {
	incr var(x) $igraph(gap,x)
    }

    global debug
    if {$debug(tcl,layout)} {
	puts stderr "LayoutViewAdjust $var(x) $var(y)"
    }
}

proc LayoutOrient {} {
    global ds9
    global canvas

    global debug
    if {$debug(tcl,layout)} {
	puts stderr "LayoutOrient"
    }

    # save original canvas size
    set ww $canvas(width)
    set hh $canvas(height)

    # horizontal
    grid rowconfigure $ds9(main) 4 -weight 0
    grid columnconfigure $ds9(main) 0 -weight 0

    # vertical
    grid rowconfigure $ds9(main) 0 -weight 0
    grid columnconfigure $ds9(main) 4 -weight 0

    grid forget $ds9(panel)
    grid forget $ds9(panel,sep)
    grid forget $ds9(buttons)
    grid forget $ds9(buttons,sep)
    grid forget $ds9(image)
    pack forget $ds9(info)
    pack forget $ds9(panner)
    pack forget $ds9(magnifier)

    UpdateView
    global debug
    if {$debug(tcl,idletasks)} {
	puts stderr "LayoutOrient update"
    }
    update

    # restore original canvas size
    set canvas(width) $ww
    set canvas(height) $hh
    UpdateView
}

proc LayoutViewHorz {} {
    global ds9
    global current
    global view

    # canvas
    grid rowconfigure $ds9(main) 4 -weight 1
    grid columnconfigure $ds9(main) 0 -weight 1
    grid $ds9(image) -row 4 -column 0 -sticky news

    # info panel
    if {$view(info) || $view(magnifier) || $view(panner)} {
	grid $ds9(panel) -row 0 -column 0 -sticky ew -columnspan 3
	$ds9(panel,sep) configure -orient horizontal
	grid $ds9(panel,sep) -row 1 -column 0 -sticky ew -columnspan 3
    } else {
	grid forget $ds9(panel)
	grid forget $ds9(panel,sep)
    }

    if {$view(info)} {
	pack $ds9(info) -side left -anchor nw -padx 2 -pady 2 \
	    -fill x -expand true
    } else {
	pack forget $ds9(info)
    }

    if {$view(panner)} {
	pack $ds9(panner) -side right -padx 2 -pady 2
    } else {
	pack forget $ds9(panner)
    }

    if {$view(magnifier)} {
	pack $ds9(magnifier) -side right -padx 2 -pady 2
	if {$view(panner)} {
	    pack $ds9(magnifier) -before $ds9(panner)
	}
    } else {
	pack forget $ds9(magnifier)
    }

    # buttons
    if {$view(buttons)} {
	grid $ds9(buttons) -row 2 -sticky ew -columnspan 3
	$ds9(buttons,sep) configure -orient horizontal
	grid $ds9(buttons,sep) -row 3 -column 0 -sticky ew -columnspan 3
    } else {
	grid forget $ds9(buttons)
	grid forget $ds9(buttons,sep)
    }
}

proc LayoutViewVert {} {
    global ds9
    global current
    global view

    # canvas
    grid rowconfigure $ds9(main) 0 -weight 1
    grid columnconfigure $ds9(main) 4 -weight 1
    grid $ds9(image) -row 0 -column 4 -sticky news

    # info panel
    if {$view(info) || $view(magnifier) || $view(panner)} {
	grid $ds9(panel) -row 0 -column 0 -sticky ns
	$ds9(panel,sep) configure -orient vertical
	grid $ds9(panel,sep) -row 0 -column 1 -sticky ns
    } else {
	grid forget $ds9(panel)
	grid forget $ds9(panel,sep)
    }

    if {$view(magnifier)} {
	pack $ds9(magnifier) -side top -padx 2 -pady 2
    } else {
	pack forget $ds9(magnifier)
    }

    if {$view(info)} {
	pack $ds9(info) -side top -padx 2 -pady 2 -fill y -expand true
	if {$view(magnifier)} {
	    pack $ds9(info) -after $ds9(magnifier)
	}
    } else {
	pack forget $ds9(info)
    }

    if {$view(panner)} {
	pack $ds9(panner) -side bottom -padx 2 -pady 2
    } else {
	pack forget $ds9(panner)
    }

    # buttons
    if {$view(buttons)} {
	grid $ds9(buttons) -row 0 -column 2 -sticky ns
	$ds9(buttons,sep) configure -orient vertical
	grid $ds9(buttons,sep) -row 0 -column 3 -sticky ns
    } else {
	grid forget $ds9(buttons)
	grid forget $ds9(buttons,sep)
    }
}

proc LayoutFrames {} {
    global ds9
    global current
    global tile
    global view
    global colorbar
    
    # turn off default colorbars
    colorbar hide

    # turn everything off
    foreach ff $ds9(frames) {
	$ff hide
	$ff highlite off
	$ff panner off
	$ff magnifier off
	UnBindEventsFrame $ff
	UnBindEventsColorbar ${ff}cb

	${ff}cb hide
    }

    if {$ds9(active,num) > 0} {
	switch -- $ds9(display) {
	    single {TileOne}
	    tile {
		switch -- $tile(mode) {
		    row {TileRect 1 $ds9(active,num) $tile(grid,gap)}
		    column {TileRect $ds9(active,num) 1 $tile(grid,gap)}
		    grid {
			switch -- $tile(grid,mode) {
			    automatic {
				TileRect [expr int(sqrt($ds9(active,num)-1))+1] \
				    [expr int(sqrt($ds9(active,num))+.5)] \
				    $tile(grid,gap)
			    }
			    manual {
				TileRect \
				    $tile(grid,col) \
				    $tile(grid,row) \
				    $tile(grid,gap)
			    }
			}
		    }
		}
	    }
	    blink {TileOne}
	}
    } else {
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
	if {$view(colorbar)} {
	    LayoutColorbarOne colorbar
	    colorbar show
	    $ds9(canvas) raise colorbar
	}
	
	# update menus/dialogs
	UpdateDS9
    }
}


# This procedure is called when we have only 1 frames to display

proc TileOne {} {
    global ds9
    global canvas

    foreach ff $ds9(active) {
	$ff configure \
	    -x 0 \
	    -y 0 \
	    -width $canvas(width) \
	    -height $canvas(height) \
	    -anchor nw
	LayoutColorbarOne ${ff}cb
    }

    # only show the current frame
    FrameToFront
}

proc TileRect {numx numy gap} {
    global view
    global canvas
    global tile
    global colorbar
    global icolorbar

    if {$view(multi)} {
	if {!$colorbar(orientation)} {
	    # horizontal
	    set wdiff 0
	    set hdiff $icolorbar(horizontal,height)
	} else {
	    # vertical
	    set wdiff $icolorbar(vertical,width)
	    set hdiff 0
	}
    } else {
	set wdiff 0
	set hdiff 0
    }
    
    set ww [expr int(($canvas(width)-$gap*($numx-1))/$numx-$wdiff)]
    set hh [expr int(($canvas(height)-$gap*($numy-1))/$numy-$hdiff)]

    switch $tile(grid,dir) {
	x {
	    for {set jj 0} {$jj<$numy} {incr jj} {
		for {set ii 0} {$ii<$numx} {incr ii} {
		    set nn [expr $jj*$numx + $ii]
		    set xx($nn) [expr ($ww+$wdiff+$gap)*$ii]
		    set yy($nn) [expr ($hh+$hdiff+$gap)*$jj]
		}
	    }
	}
	y {
	    for {set ii 0} {$ii<$numx} {incr ii} {
		for {set jj 0} {$jj<$numy} {incr jj} {
		    set nn [expr $ii*$numy + $jj]
		    set xx($nn) [expr ($ww+$wdiff+$gap)*$ii]
		    set yy($nn) [expr ($hh+$hdiff+$gap)*$jj]
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
	    ${ff}cb show

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

proc DisplayDefaultDialog {} {
    global canvas
    global ed

    set w {.defdpy}

    set ed(ok) 0
    set ed(x) $canvas(width)
    set ed(y) $canvas(height)

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
	set canvas(width) $ed(x)
	set canvas(height) $ed(y)
	UpdateView
    }

    set rr $ed(ok)
    unset ed
    return $rr
}

proc ViewHorzCmd {} {
    global canvas
    global icanvas

    set canvas(width) $icanvas(horz,width)
    set canvas(height) $icanvas(horz,height)
    LayoutOrient
}

proc ViewVertCmd {} {
    global canvas
    global icanvas

    set canvas(width) $icanvas(vert,width)
    set canvas(height) $icanvas(vert,height)
    LayoutOrient
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
    global canvas
    $proc $id "$canvas(height)\n"
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
    global canvas
    $proc $id "$canvas(width)\n"
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

