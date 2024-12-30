#  Copyright (C) 1999-2021
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc CreateHeader {} {
    global ds9

    # Panel Frame
    set ds9(header) [ttk::frame $ds9(main).header]
    set ds9(header,sep) [ttk::separator $ds9(main).sheader -orient horizontal]
}

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
	aqua  {set canvas(gap,bottom) 14}
	win32 {set canvas(gap,bottom) 0}
    }
}

proc BlinkDef {} {
    global blink
    global iblink
    global pblink

    set iblink(id) {}
    set iblink(index) -1

    set blink(interval) 1000

    array set pblink [array get blink]}

proc FadeDef {} {
    global fade
    global ifade
    global pfade

    set ifade(id) {}
    set ifade(index) -1
    set ifade(alpha) 0

    set fade(blend) screen
    set fade(interval) 2000
    set fade(step) 25

    array set pfade [array get fade]
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
    set view(icons) 1
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

	# since graphs are created, but maybe not realized
	# must update manually
	set varname ${ff}gr
	global $varname
	ThemeConfigGraph [subst $${varname}(horz)]
	ThemeConfigGraph [subst $${varname}(vert)]
    }
}

proc InitCanvas {} {
    global ds9

    # must wait until now
    bind $ds9(canvas) <Configure> [list LayoutView]
    BindEventsCanvas
}

proc BindEventsCanvas {} {
    global ds9

    # Bindings
    bind $ds9(canvas) <Tab> [list NextFrame]
    bind $ds9(canvas) <Shift-Tab> [list PrevFrame]
    switch $ds9(wm) {
	x11 {bind $ds9(canvas) <ISO_Left_Tab> [list PrevFrame]} 
	aqua -
	win32 {}
    }

    # iis
    bind $ds9(canvas) <Key> {}
    # freeze
    bind $ds9(canvas) <f> {ToggleFreeze}

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
}

proc UnBindEventsCanvas {} {
    global ds9

    # Bindings
    bind $ds9(canvas) <Tab> {}
    bind $ds9(canvas) <Shift-Tab> {}
    switch $ds9(wm) {
	x11 {bind $ds9(canvas) <ISO_Left_Tab> {}}
	aqua -
	win32 {}
    }

    # iis
    bind $ds9(canvas) <Key> {}
    # freeze
    bind $ds9(canvas) <f> {}

    # keyboard focus
    switch $ds9(wm) {
	x11 -
	aqua {
	    bind $ds9(canvas) <Enter> {}
	    bind $ds9(canvas) <Leave> {}
	}
	win32 {}
    }
    switch $ds9(wm) {
	x11 {}
	aqua -
	win32 {bind $ds9(canvas) <MouseWheel> {}}
    }

    # backward compatible bindings
    switch $ds9(wm) {
	x11 -
	win32 {
	    bind $ds9(canvas) <Button-3> {}
	    bind $ds9(canvas) <B3-Motion> {}
	    bind $ds9(canvas) <ButtonRelease-3> {}
	} 
	aqua {
	    # swap button-2 and button-3 on the mighty mouse
	    bind $ds9(canvas) <Button-2> {}
	    bind $ds9(canvas) <B2-Motion> {}
	    bind $ds9(canvas) <ButtonRelease-2> {}

	    # x11 command key emulation
	    bind $ds9(canvas) <Command-Button-1> {}
	    bind $ds9(canvas) <Command-B1-Motion> {}
	    bind $ds9(canvas) <Command-ButtonRelease-1> {}
	}
    }
}

proc Button3Canvas {x y} {
    global ds9
    global current

    global debug
    if {$debug(tcl,events)} {
	puts stderr "Button3Canvas"
    }

    set ds9(b3) 1
    if {$current(frame) != {}} {
	ColorbarButton3 $current(frame) $x $y
    }
}

proc Motion3Canvas {x y} {
    global ds9
    global current

    global debug
    if {$debug(tcl,events)} {
	puts stderr "Motion3Canvas"
    }

    if {$current(frame) != {}} {
	ColorbarMotion3 $current(frame) $x $y
    }
}

proc Release3Canvas {x y} {
    global ds9
    global current

    global debug
    if {$debug(tcl,events)} {
	puts stderr "Release3Canvas"
    }

    set ds9(b3) 0
    if {$current(frame) != {}} {
	ColorbarRelease3 $current(frame) $x $y
    }
}

proc UnBindEventsCanvasItems {} {
    global ds9

    foreach ff $ds9(active) {
	UnBindEventsFrame $ff
	UnBindEventsColorbar ${ff}cb
	UnBindEventsGraph $ff
    }
}

proc BindEventsCanvasItems {} {
    global ds9

    foreach ff $ds9(active) {
	BindEventsFrame $ff
	BindEventsColorbar ${ff}cb
	BindEventsGraph $ff
    }
}

proc LayoutRaise {id} {
    global ds9

    set ll [$ds9(canvas) find withtag {graphic}]
    if {$ll != {}} {
	$ds9(canvas) lower $id [lindex $ll 0]
    } else {
	$ds9(canvas) raise $id
    }
}

proc LayoutView {} {
    global view

    global debug
    if {$debug(tcl,layout)} {
	puts stderr "LayoutView"
    }

    LayoutViewInit
    switch $view(layout) {
	horizontal {LayoutViewHorz}
	vertical {LayoutViewVert}
	basic {LayoutViewBasic}
	advanced {LayoutViewAdvanced}
    }

    LayoutInfoPanel
    LayoutButtons
    LayoutFrames

    UpdateViewMenu
}

proc LayoutViewInit {} {
    global ds9

    # reset weights
    grid rowconfigure $ds9(main) 0 -weight 0
    grid columnconfigure $ds9(main) 0 -weight 0
    grid rowconfigure $ds9(main) 2 -weight 0
    grid columnconfigure $ds9(main) 2 -weight 0
    grid rowconfigure $ds9(main) 4 -weight 0
    grid columnconfigure $ds9(main) 4 -weight 0

    grid forget $ds9(image)
    grid forget $ds9(header)
    grid forget $ds9(header,sep)
    grid forget $ds9(buttons,frame)
    grid forget $ds9(buttons,sep)
    grid forget $ds9(icons,top)
    grid forget $ds9(icons,top,sep)
    grid forget $ds9(icons,left)
    grid forget $ds9(icons,left,sep)
    grid forget $ds9(icons,bottom)
    grid forget $ds9(icons,bottom,sep)

    pack forget $ds9(panner)
    pack forget $ds9(panner,align)
    pack forget $ds9(panner,center)
    pack forget $ds9(magnifier)
    pack forget $ds9(magnifier,plus)
    pack forget $ds9(magnifier,minus)
    pack forget $ds9(info)
}

proc LayoutViewHorz {} {
    global ds9
    global view

    # ds9(main) weight
    grid rowconfigure $ds9(main) 4 -weight 1
    grid columnconfigure $ds9(main) 0 -weight 1

    # info panel
    if {$view(info) || $view(magnifier) || $view(panner)} {
	grid $ds9(header) -row 0 -column 0 -sticky ew
	$ds9(header,sep) configure -orient horizontal
	grid $ds9(header,sep) -row 1 -column 0 -sticky ew
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
	grid $ds9(buttons,frame) -row 2 -sticky ew -columnspan 3
	$ds9(buttons,sep) configure -orient horizontal
	grid $ds9(buttons,sep) -row 3 -column 0 -sticky ew -columnspan 3
    }

    # image
    grid $ds9(image) -row 4 -column 0 -sticky news
}

proc LayoutViewVert {} {
    global ds9
    global view

    # ds9(main) weight
    grid rowconfigure $ds9(main) 0 -weight 1
    grid columnconfigure $ds9(main) 4 -weight 1

    # info panel
    if {$view(info) || $view(magnifier) || $view(panner)} {
	grid $ds9(header) -row 0 -column 0 -sticky ns
	$ds9(header,sep) configure -orient vertical
	grid $ds9(header,sep) -row 0 -column 1 -sticky ns
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
	grid $ds9(buttons,frame) -row 0 -column 2 -sticky ns
	$ds9(buttons,sep) configure -orient vertical
	grid $ds9(buttons,sep) -row 0 -column 3 -sticky ns
    }

    # image
    grid $ds9(image) -row 0 -column 4 -sticky news
}

proc LayoutViewBasic {} {
    global ds9
    global view

    # ds9(main) weight
    grid rowconfigure $ds9(main) 0 -weight 1
    grid columnconfigure $ds9(main) 0 -weight 1

    # image
    grid $ds9(image) -row 0 -column 0 -sticky news
}

proc LayoutViewAdvanced {} {
    global ds9
    global view

    # ds9(main) weight
    grid rowconfigure $ds9(main) 2 -weight 1
    grid columnconfigure $ds9(main) 2 -weight 1

    # info panel
    if {$view(info) || $view(magnifier) || $view(panner)} {
	$ds9(header,sep) configure -orient vertical
	grid $ds9(header,sep) -row 2 -column 3 -sticky ns
	grid $ds9(header) -row 2 -column 4 -sticky ns
    }

    if {$view(panner)} {
	pack $ds9(panner) -side top -padx 2 -pady 2
	if {$view(icons)} {
	    pack $ds9(panner,align) -side left
	    pack $ds9(panner,center) -side left
	}
    }

    if {$view(magnifier)} {
	pack $ds9(magnifier) -side top -padx 2 -pady 2
	if {$view(icons)} {
	    pack $ds9(magnifier,minus) -side left
	    pack $ds9(magnifier,plus) -side left
	}
    }

    if {$view(info)} {
	pack $ds9(info) -side bottom -padx 2 -pady 2 -fill y -expand true
	if {$view(magnifier)} {
	    pack $ds9(info) -after $ds9(magnifier)
	}
    }

    # buttons
    if {$view(buttons)} {
	$ds9(buttons,sep) configure -orient vertical
	grid $ds9(buttons,sep) -row 2 -column 5 -sticky ns
	grid $ds9(buttons,frame) -row 2 -column 6 -sticky ns
    }

    # icons
    if {$view(icons)} {
	grid $ds9(icons,top) -row 0 -column 0 -sticky ew -columnspan 7
	grid $ds9(icons,top,sep) -row 1 -column 0 -sticky ew -columnspan 7
	grid $ds9(icons,left) -row 2 -column 0 -sticky ns
	grid $ds9(icons,left,sep) -row 2 -column 1 -sticky ns
	grid $ds9(icons,bottom,sep) -row 3 -column 0 -sticky ew -columnspan 7
	grid $ds9(icons,bottom) -row 4 -column 0 -sticky ew -columnspan 7
    }
    
    # image
    grid $ds9(image) -row 2 -column 2 -sticky news
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

	# colorbar
	${ff}cb hide

	# graphs
	GraphHide $ff horz
	GraphHide $ff vert
    }

    # be sure colorbar/graph sizes are correct
    LayoutColorbarAdjust
    LayoutGraphsAdjust

    if {[llength $ds9(active)] > 0} {
	LayoutFramesOneOrMore
    } else {
	LayoutFramesNone
    }

    # after all layed out, update data cut for graphs if needed
    #  one problem- if single mode, non-current graphs are incorrectly updated
    switch -- $current(mode) {
	crosshair {
	    if {$view(graph,horz) || $view(graph,vert)} {
		update idletasks
		foreach ff $ds9(active) {
		    set vv [$ff get crosshair canvas]
		    UpdateGraphsData $ff [lindex $vv 0] [lindex $vv 1] canvas
		}
	    }
	}
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
    if {$view(colorbar)} {
	if {[LayoutColorbar colorbar 0 0 [winfo width $ds9(canvas)] [winfo height $ds9(canvas)]]} {
	    colorbar show
	    LayoutRaise colorbar
#	    $ds9(canvas) raise colorbar
	}
    }
    
    # graphs
    if {$view(graph,horz)} {
	LayoutGraphHorz graph 0 0 \
	    [winfo width $ds9(canvas)] [winfo height $ds9(canvas)]
	GraphShow graph horz
    }
    if {$view(graph,vert)} {
	LayoutGraphVert graph 0 0 \
	    [winfo width $ds9(canvas)] [winfo height $ds9(canvas)]
	GraphShow graph vert
    }

    # update menus/dialogs
    UpdateDS9
}

proc LayoutFramesOneOrMore {} {
    global ds9
    global view

    switch -- $ds9(display) {
	fade -
	blink -
	single {LayoutFrameOne}
	tile {
	    if {[llength $ds9(active)] > 1} {
		if {$view(multi)} {
		    LayoutFrame
		} else {
		    LayoutFrameNone
		}
	    } else {
		LayoutFrameOne
	    }
	}
    }
}

proc LayoutFrameOne {} {
    global ds9
    global view
    global current
    global colorbar

    set ww [winfo width $ds9(canvas)]
    set hh [winfo height $ds9(canvas)]

    foreach ff $ds9(active) {
	set fw $ww
	set fh $hh

	# frame
	LayoutFrameAdjust fw fh
	$ff configure -x 0 -y 0 -width $fw -height $fh -anchor nw

	# colorbar
	if {$view(colorbar)} {
	    LayoutColorbar ${ff}cb 0 0 $ww $hh
	}

	# graphs
	if {$view(graph,horz)} {
	    LayoutGraphHorz $ff 0 0 $ww $hh
	    UpdateGraphAxis $ff horz
	}
	if {$view(graph,vert)} {
	    LayoutGraphVert $ff 0 0 $ww $hh
	    UpdateGraphAxis $ff vert
    	}
    }

    # frame
    $current(frame) show
    LayoutRaise $current(frame)
#    $ds9(canvas) raise $current(frame)

    # colorbar
    if {$view(colorbar)} {
	$current(colorbar) show
	LayoutRaise $current(colorbar)
#	$ds9(canvas) raise $current(colorbar)
    }

    # graphs
    if {$view(graph,horz)} {
	GraphShow $current(frame) horz
    }
    if {$view(graph,vert)} {
	GraphShow $current(frame) vert
    }

    FrameToFront
}

proc LayoutFrame {} {
    global ds9
    global tile

    set num [llength $ds9(active)]
    switch -- $tile(mode) {
	row {
	    TileRect 1 $num
	}
	column {
	    TileRect $num 1
	}
	grid {
	    switch -- $tile(grid,mode) {
		automatic {
		    TileRect \
			[expr int(sqrt($num-1))+1] [expr int(sqrt($num)+.5)]
		}
		manual {
		    set cnt [expr $tile(grid,col)*$tile(grid,row)]
		    if {[llength $ds9(active)] > $cnt} {
			Error "Too many Frames to display manual, using automatic"
			TileRect \
			    [expr int(sqrt($num-1))+1] [expr int(sqrt($num)+.5)]
		    } else {
			TileRect $tile(grid,col) $tile(grid,row)
		    }
		}
	    }
	}
    }
}

proc LayoutFrameNone {} {
    global ds9
    global tile

    set num [llength $ds9(active)]
    switch -- $tile(mode) {
	row {
	    TileRectNone 1 $num
	}
	column {
	    TileRectNone $num 1
	}
	grid {
	    switch -- $tile(grid,mode) {
		automatic {
		    TileRectNone \
			[expr int(sqrt($num-1))+1] [expr int(sqrt($num)+.5)]
		}
		manual {
		    set cnt [expr $tile(grid,col)*$tile(grid,row)]
		    if {[llength $ds9(active)] > $cnt} {
			Error "Too many Frames to display manual, using automatic"
			TileRectNone \
			    [expr int(sqrt($num-1))+1] [expr int(sqrt($num)+.5)]
		    } else {
			TileRectNone $tile(grid,col) $tile(grid,row)
		    }
		}
	    }
	}
    }
}

proc TileRect {numx numy} {
    global ds9
    global tile
    global current
    global view
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

    set ii 0
    foreach ff $ds9(active) {
	set fw $ww
	set fh $hh

	# frame
	LayoutFrameAdjust fw fh
	$ff configure -x $xx($ii) -y $yy($ii) -width $fw -height $fh -anchor nw
	$ff show
	LayoutRaise $ff
#	$ds9(canvas) raise $ff

	# colorbar
	if {$view(colorbar)} {
	    LayoutColorbar ${ff}cb $xx($ii) $yy($ii) $ww $hh
	    ${ff}cb show
	    LayoutRaise ${ff}cb
#	    $ds9(canvas) raise ${ff}cb
	}

	# graphs
	if {$view(graph,horz)} {
	    LayoutGraphHorz $ff $xx($ii) $yy($ii) $ww $hh
	    UpdateGraphAxis $ff horz
	    GraphShow $ff horz
	}
	if {$view(graph,vert)} {
	    LayoutGraphVert $ff $xx($ii) $yy($ii) $ww $hh
	    UpdateGraphAxis $ff vert
	    GraphShow $ff vert
	}

	incr ii
    }

    FrameToFront
}

proc TileRectNone {numx numy} {
    global ds9
    global tile
    global current
    global view
    global colorbar
    
    set fw [winfo width $ds9(canvas)]
    set fh [winfo height $ds9(canvas)]
    LayoutFrameAdjust fw fh
    
    set ww [expr int(($fw-($tile(grid,gap)*($numx-1)))/$numx)]
    set hh [expr int(($fh-($tile(grid,gap)*($numy-1)))/$numy)]

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

    # frames
    set ii 0
    set cnt [expr $numx*$numy]
    foreach ff $ds9(active) {
	# sanity check
	if {$xx($ii)>=0 && $yy($ii)>=0 && $ww>=0 && $hh>=0} {
	    $ff configure -x $xx($ii) -y $yy($ii) \
		-width $ww -height $hh -anchor nw
	    $ff show
	    LayoutRaise $ff
#	    $ds9(canvas) raise $ff
	}

	if {$view(colorbar)} {
	    LayoutColorbar ${ff}cb 0 0 \
		[winfo width $ds9(canvas)] [winfo height $ds9(canvas)]
	}
	
	if {$view(graph,horz)} {
	    LayoutGraphHorz $ff 0 0 \
		[winfo width $ds9(canvas)] [winfo height $ds9(canvas)]
	    UpdateGraphAxis $ff horz
	}
	
	if {$view(graph,vert)} {
	    LayoutGraphVert $ff 0 0 \
		[winfo width $ds9(canvas)] [winfo height $ds9(canvas)]
	    UpdateGraphAxis $ff vert
	}

	incr ii
	if {$ii>=$cnt} {
	    break
	}
    }

    # set colorbar/graph for current frame
    set ff $current(frame)

    # colorbar
    if {$view(colorbar)} {
	${ff}cb show
	LayoutRaise ${ff}cb
#	$ds9(canvas) raise ${ff}cb
    }

    # graphs
    if {$view(graph,horz)} {
	GraphShow $ff horz
    }
    if {$view(graph,vert)} {
	GraphShow $ff vert
    }

    FrameToFront
}

proc LayoutFrameAdjust {wvar hvar} {
    global canvas
    global view
    global colorbar
    global igraph
    global dgraph
    global graph

    upvar $wvar ww
    upvar $hvar hh

    set cbh [expr $view(colorbar) && !$colorbar(orientation)]
    set cbv [expr $view(colorbar) &&  $colorbar(orientation)]
    set grh $view(graph,horz)
    set grv $view(graph,vert)

    # cbh
    if {$cbh && !$cbv && !$grh && !$grv} {
	incr hh -$colorbar(horizontal,height)
	incr hh -$canvas(gap)
    }
    # cbv
    if {!$cbh && $cbv && !$grh && !$grv} {
	incr ww -$colorbar(vertical,width)
	incr ww -$canvas(gap)
    }

    # cbhgrh
    if {$cbh && !$cbv && $grh && !$grv} {
	incr hh -$colorbar(horizontal,height)
	incr hh -$canvas(gap)
	incr hh -$graph(size)
	incr ww -$dgraph(horz,offset)
    }
    # cbhgrv
    if {$cbh && !$cbv && !$grh && $grv} {
	incr hh -$colorbar(horizontal,height)
	incr hh -$canvas(gap)
	incr ww -$graph(size)
    }
    # cbhgrhgrv
    if {$cbh && !$cbv && $grh && $grv} {
	incr hh -$colorbar(horizontal,height)
	incr hh -$canvas(gap)
	incr hh -$graph(size)
	incr ww -$graph(size)
    }

    # cbvgrh
    if {!$cbh && $cbv && $grh && !$grv} {
	incr ww -$colorbar(vertical,width)
	incr ww -$canvas(gap)
	incr hh -$graph(size)
    }
    # cbvgrv
    if {!$cbh && $cbv && !$grh && $grv} {
	incr ww -$colorbar(vertical,width)
	incr ww -$canvas(gap)
	incr ww -$graph(size)
	incr hh -$dgraph(vert,offset)
    }
    # cbvgrhgrv
    if {!$cbh && $cbv && $grh && $grv} {
	incr ww -$colorbar(vertical,width)
	incr ww -$canvas(gap)
	incr ww -$graph(size)
	incr hh -$graph(size)
    }

    # grh
    if {!$cbh && !$cbv && $grh && !$grv} {
	incr hh -$graph(size)
	incr hh -$canvas(gap)
	incr ww -$dgraph(horz,offset)
    }
    # grv
    if {!$cbh && !$cbv && !$grh && $grv} {
	incr ww -$graph(size)
	incr ww -$canvas(gap)
	incr hh -$dgraph(vert,offset)
    }
    # grhgrv
    if {!$cbh && !$cbv && $grh && $grv} {
	incr ww -$graph(size)
	incr ww -$canvas(gap)
	incr hh -$graph(size)
	incr hh -$canvas(gap)
    }

    # sanity check
    if {$ww<0} {
	set ww 1
    }
    if {$hh<0} {
	set hh 1
    }
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
