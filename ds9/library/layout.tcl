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
	aqua {set canvas(gap,bottom) 14}
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
    set view(info,minmax,xy) 0
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
    set ww [expr $canvas(width)+$diff(x)]
    set hh [expr $canvas(height)+$diff(y)]

    global debug
    if {$debug(tcl,layout)} {
	puts stderr "CreateCanvas $canvas(width) $canvas(height) ${ww}x${hh}"
    }

    set ds9(image) [ttk::frame $ds9(main).f]
    set ds9(canvas) [canvas $ds9(image).c -width $ww -height $hh \
			 -highlightthickness 0 -insertofftime 0 -bg $ds9(bg)]
    grid rowconfigure $ds9(image) 0 -weight 1
    grid columnconfigure $ds9(image) 0 -weight 1
    grid $ds9(canvas) -row 0 -column 0 -sticky news

    # extra space for window tab
    if {$canvas(gap,bottom)>0} {
	set f [frame $ds9(image).b -width 1 -height $canvas(gap,bottom) \
		   -bg $ds9(bg)]
	grid $f -row 1 -column 0 -sticky ew
    }
	
    # needed to realize window so Layout routines will work
    grid $ds9(image)
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

    foreach f $ds9(active) {
	UnBindEventsFrame $f
    }
}

proc BindEventsCanvas {} {
    global ds9
    global current

    switch -- $ds9(display) {
	single -
	blink {BindEventsFrame $current(frame)}
	tile {
	    foreach f $ds9(active) {
		BindEventsFrame $f
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

    # adjust window size
    set canvas(width) [expr [winfo width $ds9(canvas)]-$diff(x)]
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

    # adjust window size
    set ww [expr $canvas(width)+$diff(x)]
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
    LayoutColorbar

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

    set cbh [expr $view(colorbar) && \
	     [string equal $colorbar(orientation) {horizontal}]]
    set cbv [expr $view(colorbar) && \
	     [string equal $colorbar(orientation) {vertical}]]
    set grh $view(graph,horz)
    set grv $view(graph,vert)

    if {$colorbar(numerics)} {
	# ww horizontal: tickgap
	set ww 12
	# hh vertical: approx number of numerals to display
	set hh 7

	# can't trust 'tk scaling'
	switch $ds9(wm) {
	    x11 -
	    win32 {
		set scaling [tk scaling]
		if {$scaling == Inf} {
		    set scaling 1.334
		}
	    }
	    aqua {set scaling 1.4}
	}

	set icolorbar(horizontal,height) \
	    [expr int($colorbar(size) + $colorbar(font,size)*$scaling+$ww)]

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
	incr var(y)  $igraph(size)
    }

    if {$grv} {
	incr var(x)  $igraph(size)
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
    
    # turn everything off
    foreach f $ds9(frames) {
	$f hide
	$f highlite off
	$f panner off
	$f magnifier off
	UnBindEventsFrame $f
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
	set ds9(next) {}

	# panner
	if {$view(panner)} {
	    panner clear
	}

	# magnifier
	if {$view(magnifier)} {
	    magnifier clear
	}

	# process proper colorbar
	colorbar show
	colorbarrgb hide
	$ds9(canvas) raise colorbar colorbarrgb

	set current(colorbar) colorbar
	set colorbar(map) [colorbar get name]
	set colorbar(invert) [colorbar get invert]

	# update menus/dialogs
	UpdateDS9
    }
}


# This procedure is called when we have only 1 frames to display

proc TileOne {} {
    global ds9
    global view
    global current
    global canvas
    global colorbar

    set ww $canvas(width)
    set hh $canvas(height)

    set xx 0
    set yy 0

    foreach f $ds9(active) {
	$f configure -x $xx -y $yy -width $ww -height $hh -anchor nw
    }

    # only show the current frame
    $current(frame) show
    FrameToFront
}

proc TileRect {numx numy gap} {
    global view
    global canvas
    global tile

    set ww $canvas(width)
    set hh $canvas(height)

    set w [expr int(($ww-$gap*($numx-1))/$numx)]
    set h [expr int(($hh-$gap*($numy-1))/$numy)]
    
    switch $tile(grid,dir) {
	x {
	    for {set jj 0} {$jj<$numy} {incr jj} {
		for {set ii 0} {$ii<$numx} {incr ii} {
		    set nn [expr $jj*$numx + $ii]
		    set x($nn) [expr ($w+$gap)*$ii]
		    set y($nn) [expr ($h+$gap)*$jj]
		}
	    }
	}
	y {
	    for {set ii 0} {$ii<$numx} {incr ii} {
		for {set jj 0} {$jj<$numy} {incr jj} {
		    set nn [expr $ii*$numy + $jj]
		    set x($nn) [expr ($w+$gap)*$ii]
		    set y($nn) [expr ($h+$gap)*$jj]
		}
	    }
	}
    }

    TileIt $w $h x y [expr $numx*$numy]
}

proc TileIt {ww hh xvar yvar nn} {
    upvar $xvar x
    upvar $yvar y
    global ds9
    global current

    set ii 0
    foreach ff $ds9(active) {
	if {$ii<$nn} {
	    $ff configure -x $x($ii) -y $y($ii) \
		-width $ww -height $hh -anchor nw
	    $ff show
	    $ds9(canvas) raise $ff
	    if {!$ds9(freeze)} {
		BindEventsFrame $ff
	    }
	}
	incr ii
    }

    # if manual grid, current frame could be not included
    if {$current(frame) != {}} {
	$current(frame) colorbar tag "\{[$current(colorbar) get tag]\}"
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

    DialogCenter $w 
    $w.param.x select range 0 end
    DialogWait $w ed(ok) $w.param.x
    DialogDismiss $w

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

    global canvas
    set canvas(height) [lindex $var $i]
    UpdateView
}

proc ProcessSendHeightCmd {proc id param} {
    global canvas
    $proc $id "$canvas(height)\n"
}

proc ProcessWidthCmd {varname iname} {
    upvar $varname var
    upvar $iname i

    # we need to be realized
    # can't use ProcessRealize
    RealizeDS9

    global canvas
    set canvas(width) [lindex $var $i]
    UpdateView
}

proc ProcessSendWidthCmd {proc id param} {
    global canvas
    $proc $id "$canvas(width)\n"
}

proc ProcessViewCmd {varname iname} {
    upvar $varname var
    upvar $iname i

    global view
    global rgb
    global canvas
    global icanvas

    set item [string tolower [lindex $var $i]]

    switch  -- $item {
	layout {
	    incr i
	    set item [string tolower [lindex $var $i]]
	    switch  -- $item {
		horz -
		horizontal {
		    set view(layout) horizontal
		    ViewHorzCmd
		}
		vert -
		vertical {
		    set view(layout) verical
		    ViewVertCmd
		}
	    }
	}
	keyvalue {
	    incr i
	    set view(info,keyvalue) [lindex $var $i]
	}
	horz -
	horizontal {
	    # backward compatibility
	    set view(layout) horizontal
	    ViewHorzCmd
	}
	vert -
	vertical {
	    # backward compatibility
	    set view(layout) vertical
	    ViewVertCmd
	}

	default {
	    set yesno [lindex $var [expr $i+1]]
	    switch -- $yesno {
		1 -
		0 -
		yes -
		no -
		on -
		off -
		true -
		false {incr i}
		default {
		    set yesno 1
		}
	    }

	    switch -- $item {
		info -
		panner - 
		magnifier - 
		buttons -
		colorbar {set view($item) [FromYesNo $yesno]}

		colorbarnumerics {
		    # backward compatibility
		    set colorbar(numerics) [FromYesNo $yesno]
		}
		graph {
		    incr i
		    set item [string tolower [lindex $var $i]]
		    switch -- $item {
			horz -
			horizontal {
			    set yesno [lindex $var [expr $i+1]]
			    switch -- $yesno {
				1 -
				0 -
				yes -
				no -
				on -
				off -
				true -
				false {incr i}
				default {
				    set yesno 1
				}
			    }
			    set view(graph,horz) [FromYesNo $yesno]
			}
			vert -
			vertical {
			    set yesno [lindex $var [expr $i+1]]
			    switch -- $yesno {
				1 -
				0 -
				yes -
				no -
				on -
				off -
				true -
				false {incr i}
				default {
				    set yesno 1
				}
			    }
			    set view(graph,vert) [FromYesNo $yesno]
			}
		    }
		}
		horzgraph {
		    # backward compatibility
		    set view(graph,horz) [FromYesNo $yesno]
		}
		vertgraph {
		    # backward compatibility
		    set view(graph,vert) [FromYesNo $yesno]
		}

		filename -
		object -
		keyword -
		minmax -
		lowhigh -
		units -

		detector -
		amplifier -
		physical -
		image -
		wcs -
		wcsa -
		wcsb -
		wcsc -
		wcsd -
		wcse -
		wcsf -
		wcsg -
		wcsh -
		wcsi -
		wcsj -
		wcsk -
		wcsl -
		wcsm -
		wcsn -
		wcso -
		wcsp -
		wcsq -
		wcsr -
		wcss -
		wcst -
		wcsu -
		wcsv -
		wcsw -
		wcsx -
		wcsy -
		wcsz -

		frame {set view(info,$item) [FromYesNo $yesno]}

		red -
		green -
		blue {set rgb($item) [FromYesNo $yesno]; RGBView}
	    }
	    UpdateView
	}
    }
}

proc ProcessSendViewCmd {proc id param} {
    global view

    switch -- [string tolower [lindex $param 0]] {
	layout {$proc $id "$view(layout)\n"}
	keyvalue {$proc $id "$view(info,keyvalue)\n"}
	info {$proc $id [ToYesNo $view(info)]}
	panner {$proc $id [ToYesNo $view(panner)]}
	magnifier {$proc $id [ToYesNo $view(magnifier)]}
	buttons {$proc $id [ToYesNo $view(buttons)]}
	colorbar {$proc $id [ToYesNo $view(colorbar)]}
	colorbarnumerics {
	    # backward compatibility
	    $proc $id [ToYesNo $colorbar(numerics)]
	}
	graph {
	    switch -- [string tolower [lindex $param 1]] {
		horizontal {$proc $id [ToYesNo $view(graph,horz)]}
		vertical {$proc $id [ToYesNo $view(graph,vert)]}
	    }
	}
	horzgraph {
	    # backward compatibility
	    $proc $id [ToYesNo $view(graph,horz)]
	}
	vertgraph {
	    # backward compatibility
	    $proc $id [ToYesNo $view(graph,vert)]
	}

	filename {$proc $id [ToYesNo $view(info,filename)]}
	object {$proc $id [ToYesNo $view(info,object)]}
	keyword {$proc $id [ToYesNo $view(info,keyword)]}
	minmax {$proc $id [ToYesNo $view(info,minmax)]}
	minmaxxy {$proc $id [ToYesNo $view(info,minmax,xy)]}
	lowhigh {$proc $id [ToYesNo $view(info,lowhigh)]}
	units {$proc $id [ToYesNo $view(info,bunit)]}

	detector {$proc $id [ToYesNo $view(info,detector)]}
	amplifier {$proc $id [ToYesNo $view(info,amplifier)]}
	physical {$proc $id [ToYesNo $view(info,physical)]}
	image {$proc $id [ToYesNo $view(info,image)]}
	wcs {$proc $id [ToYesNo $view(info,wcs)]}
	wcsa {$proc $id [ToYesNo $view(info,wcsa)]}
	wcsb {$proc $id [ToYesNo $view(info,wcsb)]}
	wcsc {$proc $id [ToYesNo $view(info,wcsc)]}
	wcsd {$proc $id [ToYesNo $view(info,wcsd)]}
	wcse {$proc $id [ToYesNo $view(info,wcse)]}
	wcsf {$proc $id [ToYesNo $view(info,wcsf)]}
	wcsg {$proc $id [ToYesNo $view(info,wcsg)]}
	wcsh {$proc $id [ToYesNo $view(info,wcsh)]}
	wcsi {$proc $id [ToYesNo $view(info,wcsi)]}
	wcsj {$proc $id [ToYesNo $view(info,wcsj)]}
	wcsk {$proc $id [ToYesNo $view(info,wcsk)]}
	wcsl {$proc $id [ToYesNo $view(info,wcsl)]}
	wcsm {$proc $id [ToYesNo $view(info,wcsm)]}
	wcsn {$proc $id [ToYesNo $view(info,wcsn)]}
	wcso {$proc $id [ToYesNo $view(info,wcso)]}
	wcsp {$proc $id [ToYesNo $view(info,wcsp)]}
	wcsq {$proc $id [ToYesNo $view(info,wcsq)]}
	wcsr {$proc $id [ToYesNo $view(info,wcsr)]}
	wcss {$proc $id [ToYesNo $view(info,wcss)]}
	wcst {$proc $id [ToYesNo $view(info,wcst)]}
	wcsu {$proc $id [ToYesNo $view(info,wcsu)]}
	wcsv {$proc $id [ToYesNo $view(info,wcsv)]}
	wcsw {$proc $id [ToYesNo $view(info,wcsw)]}
	wcsx {$proc $id [ToYesNo $view(info,wcsx)]}
	wcsy {$proc $id [ToYesNo $view(info,wcsy)]}
	wcsz {$proc $id [ToYesNo $view(info,wcsz)]}

	frame {$proc $id [ToYesNo $view(info,frame)]}
	default {
	    # backward compatibility
	    $proc $id "$view(layout)\n"
	}
    }
}
