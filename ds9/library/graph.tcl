#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc GraphDef {} {
    global igraph
    global pgraph
    global graph

    set igraph(top) .grph
    set igraph(mb) .grphmb

    set igraph(horz,id) 0
    set igraph(vert,id) 0

    set igraph(size) 150
    set igraph(gap,x) 50
    set igraph(gap,y) 25

    set igraph(x,min) 0
    set igraph(x,max) 10
    set igraph(y,min) 1
    set igraph(y,max) 100

    global graphHorzX graphHorzY
    global graphVertX graphVertY
    global histX histY

    blt::vector create graphHorzX graphHorzY
    blt::vector create graphVertX graphVertY
    blt::vector create histX histY

    set graph(horz,grid) 1
    set graph(horz,log) false
    set graph(horz,thick) 1
    set graph(horz,method) average
    set graph(vert,grid) 1
    set graph(vert,log) false
    set graph(vert,thick) 1
    set graph(vert,method) average

    array set pgraph [array get graph]
}

proc CreateGraphs {} {
    global igraph
    
    global ds9
    global canvas

    # Horizontal Graph
    set ds9(graph,horz) [blt::graph $ds9(main).horz \
			     -width $canvas(width) -height $igraph(size) \
			     -takefocus 0 \
			     -highlightthickness 0 \
			     -font [font actual TkDefaultFont] \
			     -plotpadx 0 -plotpady 0 \
 			     -borderwidth 0 \
			     -foreground [ThemeTreeForeground] \
			     -background [ThemeTreeBackground] \
			     -plotbackground [ThemeTreeBackground] \
			    ]

    $ds9(graph,horz) legend configure -hide yes
    $ds9(graph,horz) crosshairs configure -color green

    $ds9(graph,horz) xaxis configure -hide no -showticks no -linewidth 0 \
	-bg [ThemeTreeBackground] -color [ThemeTreeForeground]
    $ds9(graph,horz) x2axis configure -hide yes \
	-bg [ThemeTreeBackground] -color [ThemeTreeForeground]
    $ds9(graph,horz) yaxis configure -hide yes \
	-bg [ThemeTreeBackground] -color [ThemeTreeForeground]
    $ds9(graph,horz) y2axis configure -hide no -bg [ThemeTreeBackground] \
	-tickfont [font actual TkDefaultFont] \
	-bg [ThemeTreeBackground] -color [ThemeTreeForeground]

    $ds9(graph,horz) element create line1 \
	-xdata graphHorzX -ydata graphHorzY -symbol none \
	-color [ThemeTreeForeground]

    bind $ds9(graph,horz) <Enter> [list EnterGraph $ds9(graph,horz) 1]
    bind $ds9(graph,horz) <Leave> [list LeaveGraph $ds9(graph,horz)]
    bind $ds9(graph,horz) <Button-1> \
	[list MotionGraph $ds9(graph,horz) %x %y 1]
    bind $ds9(graph,horz) <B1-Motion> \
	[list MotionGraph $ds9(graph,horz) %x %y 1]
    bind $ds9(graph,horz) <Up> [list ArrowKeyGraph $ds9(graph,horz) 0 -1 1]
    bind $ds9(graph,horz) <Down> [list ArrowKeyGraph $ds9(graph,horz) 0 1 1]
    bind $ds9(graph,horz) <Left> [list ArrowKeyGraph $ds9(graph,horz) -1 0 1]
    bind $ds9(graph,horz) <Right> [list ArrowKeyGraph $ds9(graph,horz) 1 0 1]

    switch $ds9(wm) {
	x11 -
	win32 {bind $ds9(graph,horz) <<ThemeChanged>> {ThemeConfigGraph %W}}
	aqua {}
    }

    # Vertical Graph
    set ds9(graph,vert) [blt::graph $ds9(main).vert \
			     -invertxy yes \
			     -width $igraph(size) -height $canvas(height) \
			     -takefocus 0 \
			     -highlightthickness 0 \
			     -borderwidth 0 \
			     -font [font actual TkDefaultFont] \
			     -foreground [ThemeTreeForeground] \
			     -background [ThemeTreeBackground] \
			     -plotbackground [ThemeTreeBackground] \
			    ]

    $ds9(graph,vert) legend configure -hide yes
    $ds9(graph,vert) crosshairs configure -color green

    $ds9(graph,vert) xaxis configure -hide yes -descending yes \
	-bg [ThemeTreeBackground] -color [ThemeTreeForeground]
    $ds9(graph,vert) x2axis configure -hide no -descending yes 	\
	-showticks no -linewidth 0 \
	-bg [ThemeTreeBackground] -color [ThemeTreeForeground] \

    $ds9(graph,vert) yaxis configure -hide no -descending yes \
	-tickfont [font actual TkDefaultFont] \
	-bg [ThemeTreeBackground] -color [ThemeTreeForeground]
    $ds9(graph,vert) y2axis configure -hide yes -descending yes \
	-bg [ThemeTreeBackground] -color [ThemeTreeForeground]

    $ds9(graph,vert) element create line1 \
	-xdata graphVertX -ydata graphVertY -symbol none \
	-color [ThemeTreeForeground]

    bind $ds9(graph,vert) <Enter> [list EnterGraph $ds9(graph,vert) 0]
    bind $ds9(graph,vert) <Leave> [list LeaveGraph $ds9(graph,vert)]
    bind $ds9(graph,vert) <Button-1> \
	[list MotionGraph $ds9(graph,vert) %x %y 0]
    bind $ds9(graph,vert) <B1-Motion> \
	[list MotionGraph $ds9(graph,vert) %x %y 0]
    bind $ds9(graph,vert) <Up> [list ArrowKeyGraph $ds9(graph,vert) 0 -1 0]
    bind $ds9(graph,vert) <Down> [list ArrowKeyGraph $ds9(graph,vert) 0 1 0]
    bind $ds9(graph,vert) <Left> [list ArrowKeyGraph $ds9(graph,vert) -1 0 0]
    bind $ds9(graph,vert) <Right> [list ArrowKeyGraph $ds9(graph,vert) 1 0 0]

    UpdateGraphGrid
}

proc ThemeConfigGraph {w} {
    # invoked from ThemeConfigCanvas

    $w configure -fg [ThemeTreeForeground] -bg [ThemeTreeBackground] \
	-plotbackground [ThemeTreeBackground]

    $w xaxis configure -bg [ThemeTreeBackground] -color [ThemeTreeForeground]
    $w x2axis configure -bg [ThemeTreeBackground] -color [ThemeTreeForeground]

    $w yaxis configure -bg [ThemeTreeBackground] -color [ThemeTreeForeground]
    $w y2axis configure -bg [ThemeTreeBackground] -color [ThemeTreeForeground]

    $w element configure line1 -color [ThemeTreeForeground]
}

proc UpdateGraphFont {} {
    global ds9

    $ds9(graph,horz) y2axis configure -tickfont [font actual TkDefaultFont]
    $ds9(graph,vert) yaxis configure -tickfont [font actual TkDefaultFont]
}

proc UpdateGraphGrid {} {
    global graph
    global ds9

    $ds9(graph,horz) xaxis configure -grid $graph(horz,grid) -tickdefault 4
    $ds9(graph,horz) y2axis configure -grid $graph(horz,grid)

    $ds9(graph,vert) x2axis configure -grid $graph(vert,grid)
    $ds9(graph,vert) yaxis configure -grid $graph(vert,grid) -tickdefault 4
}

proc UpdateGraphAxis {which} {
    global ds9
    global view
    global graph

    global debug
    if {$debug(tcl,update)} {
	puts stderr "UpdateGraphAxis"
    }

    if {$view(graph,horz)} {
	UpdateGraphXAxisHV $which $ds9(graph,horz) graphHorzX
	UpdateGraphYAxisHV $which $ds9(graph,horz) graphHorzY \
	    $graph(horz,log) $graph(horz,thick) $graph(horz,method)
    }
    
    if {$view(graph,vert)} {
	UpdateGraphXAxisHV $which $ds9(graph,vert) graphVertX
	UpdateGraphYAxisHV $which $ds9(graph,vert) graphVertY \
	    $graph(vert,log) $graph(vert,thick) $graph(vert,method)
    }
}

proc UpdateGraphXAxisHV {which what vectorX} {
    global igraph
    global graphHorzX graphVertX

    if {$which != {}} {
	set xMin [expr "$$vectorX\(min\)"]
	set xMax [expr "$$vectorX\(max\)"]

	$what xaxis configure -min $xMin -max $xMax
	$what x2axis configure -min $xMin -max $xMax
    } else {
	$what xaxis configure -min $igraph(x,min) -max $igraph(x,max)
	$what x2axis configure -min $igraph(x,min) -max $igraph(x,max)
    }
}

proc UpdateGraphYAxisHV {which what vectorY log thick method} {
    global igraph
    global graphHorzY graphVertY

    if {$which != {}} {
	set minmax [$which get clip]
	set yMin [lindex $minmax 0]
	set yMax [lindex $minmax 1]

	# must use .eq. since "nan" is a legal double value
	if {$yMin eq "nan" || $yMax eq "nan"} {
	    set yMin 0
	    set yMax 1
	}

	if {$yMin >= $yMax} {
	    set yMax [expr $yMin + 1]
	}

	switch $method {
	    sum {
		set yMax [expr $yMax*$thick]
	    }
	    average {}
	}

	$what yaxis configure -min $yMin -max $yMax \
	    -logscale $log -tickdefault 4
	$what y2axis configure -min $yMin -max $yMax \
	    -logscale $log -tickdefault 4
    } else {
	$what yaxis configure -min $igraph(y,min) -max $igraph(y,max) \
	    -logscale $log -tickdefault 4
	$what y2axis configure -min $igraph(y,min) -max $igraph(y,max) \
	    -logscale $log -tickdefault 4
    }
}

proc ClearGraphData {} {
    global ds9
    global view

    if {$view(graph,horz)} {
	$ds9(graph,horz) element configure line1 -hide yes
    }    

    if {$view(graph,vert)} {
	$ds9(graph,vert) element configure line1 -hide yes
    }
}

proc UpdateGraphData {which x y sys} {
    global ds9
    global view
    global graph
    global dgraph

    global debug
    if {$debug(tcl,update)} {
	puts stderr "UpdateGraphData"
    }

    # save for later
    set dgraph(frame) $which
    set dgraph(x) $x
    set dgraph(y) $y

    if {![$which has fits]} {
	return
    }

    if {$view(graph,horz)} {
	$which get horizontal cut graphHorzX graphHorzY $x $y $sys \
	    $graph(horz,thick) $graph(horz,method)
	$ds9(graph,horz) element configure line1 -hide no
    }

    if {$view(graph,vert)} {
	$which get vertical cut graphVertX graphVertY $x $y $sys \
	    $graph(vert,thick) $graph(vert,method)
	$ds9(graph,vert) element configure line1 -hide no
    }
}

proc EnterGraph {which horz} {
    global current

    focus $which
    $which crosshairs on

    if {$current(frame) != {}} {
	switch $current(mode) {
	    crosshair -
	    analysis {

		set x [$which crosshairs cget -x]
		set y [$which crosshairs cget -y]

		set coord [$current(frame) get crosshair canvas]
		set X [lindex $coord 0]
		set Y [lindex $coord 1]

		if {$horz} {
		    EnterInfoBox $current(frame)
		    UpdateInfoBox $current(frame) $x $Y canvas
		    UpdatePixelTableDialog $current(frame) $x $Y canvas
		} else {
		    EnterInfoBox $current(frame)
		    UpdateInfoBox $current(frame) $X $y canvas
		    UpdatePixelTableDialog $current(frame) $X $y canvas
		}
	    }
	}
    }
}

proc LeaveGraph {which} {
    focus {}
    $which crosshairs off

    LeaveInfoBox
    PixelTableClearDialog
}

proc MotionGraph {which x y horz} {
    global current

    $which crosshairs configure -x $x -y $y

    if {$current(frame) != {}} {
	switch $current(mode) {
	    crosshair -
	    analysis {
		set coord [$current(frame) get crosshair canvas]
		set X [lindex $coord 0]
		set Y [lindex $coord 1]
		if {$horz} {
		    UpdateInfoBox $current(frame) $x $Y canvas
		    UpdatePixelTableDialog $current(frame) $x $Y canvas
		} else {
		    UpdateInfoBox $current(frame) $X $y canvas
		    UpdatePixelTableDialog $current(frame) $X $y canvas
		}
	    }    
	}
    }
}

proc ArrowKeyGraph {which x y horz} {
    set cx [$which crosshairs cget -x]
    set cy [$which crosshairs cget -y]

    set cx [expr $cx+$x]
    set cy [expr $cy+$y]

    MotionGraph $which $cx $cy $horz
}

proc UpdateGraphLayout {which} {
    global igraph

    global ds9
    global canvas
    global view
    global colorbar
    global icolorbar

    global debug
    if {$debug(tcl,layout)} {
	puts stderr "UpdateGraphLayout $which"
    }

    if {$which != {}} {
	set frww [$ds9(canvas) itemcget $which -width]
	set frhh [$ds9(canvas) itemcget $which -height]
	set frxx [$ds9(canvas) itemcget $which -x]
	set fryy [$ds9(canvas) itemcget $which -y]
    } else {
	set frww $canvas(width)
	set frhh $canvas(height)
	set frxx 0
	set fryy 0
    }

    set cbh [expr $view(colorbar) && !$colorbar(orientation)]
    set cbv [expr $view(colorbar) &&  $colorbar(orientation)]

    if {$view(graph,horz)} {
	set xx $frxx
	set yy [expr $canvas(height) + $canvas(gap)]

	if {$cbh} {
	    incr yy $icolorbar(horizontal,height)
	}
	if {$view(graph,vert) && !$cbh} {
	    incr yy $igraph(gap,y)
	}

	if {!$igraph(horz,id)} {
	    set igraph(horz,id) [$ds9(canvas) create window $xx $yy \
				    -window $ds9(graph,horz) -anchor nw]
	} else {
	    $ds9(canvas) coords $igraph(horz,id) $xx $yy
	}

	set ww [expr $frww+$igraph(gap,x)]
	$ds9(graph,horz) configure -width $ww
    } else {
	if {$igraph(horz,id)} {
	    $ds9(canvas) delete $igraph(horz,id)
	    set igraph(horz,id) 0
	}
    }

    if {$view(graph,vert)} {
	set yy $fryy
	set xx [expr $canvas(width) + $canvas(gap)]

	if {$cbv} {
	    incr xx $icolorbar(vertical,width)
	}
	if {$view(graph,horz) && !$cbv} {
	    incr xx $igraph(gap,x)
	}

	if {!$igraph(vert,id)} {
	    set igraph(vert,id) [$ds9(canvas) create window $xx $yy \
				    -window $ds9(graph,vert) -anchor nw]
	} else {
	    $ds9(canvas) coords $igraph(vert,id) $xx $yy
	}

	set hh [expr $frhh+$igraph(gap,y)]
	$ds9(graph,vert) configure -height $hh

    } else {
	if {$igraph(vert,id)} {
	    $ds9(canvas) delete $igraph(vert,id)
	    set igraph(vert,id) 0
	}
    }
}

proc GraphDialog {} {
    global igraph
    global graph
    global current
    global ds9

    # see if we already have a window visible
    if {[winfo exists $igraph(top)]} {
	raise $igraph(top)
	return
    }

    # create the window
    set w $igraph(top)
    set mb $igraph(mb)

    Toplevel $w $mb 6 [msgcat::mc {Graph Parameters}] GraphDestroyDialog
    $mb add cascade -label [msgcat::mc {File}] -menu $mb.file
    $mb add cascade -label [msgcat::mc {Edit}] -menu $mb.edit

    ThemeMenu $mb.file
    $mb.file add command -label [msgcat::mc {Apply}] \
	-command GraphApplyDialog
    $mb.file add separator
    $mb.file add command -label [msgcat::mc {Close}] \
	-command GraphDestroyDialog -accelerator "${ds9(ctrl)}W"

    EditMenu $mb igraph

    # Horizontal
    set f [ttk::labelframe $w.horz -text [msgcat::mc {Horizontal}] -padding 2]

    ttk::checkbutton $f.hgrid -text [msgcat::mc {Show Grid}] \
	-variable graph(horz,grid) \
	-command UpdateGraphGrid
    ttk::label $f.htaxis -text [msgcat::mc {Axis}]
    ttk::radiobutton $f.hlaxis -text [msgcat::mc {Linear}] \
	-variable graph(horz,log) -value false \
	-command [list UpdateGraphAxis $current(frame)]
    ttk::radiobutton $f.hgaxis -text [msgcat::mc {Log}] \
	-variable graph(horz,log) -value true \
	-command [list UpdateGraphAxis $current(frame)]
    ttk::label $f.htthick -text [msgcat::mc {Thickness}]
    ttk::entry $f.hthick -textvariable graph(horz,thick) -width 7
    ttk::label $f.htmethod -text [msgcat::mc {Method}]
    ttk::radiobutton $f.hamethod -text [msgcat::mc {Average}] \
	-variable graph(horz,method) -value average \
	-command [list UpdateGraphAxis $current(frame)]
    ttk::radiobutton $f.hsmethod -text [msgcat::mc {Sum}] \
	-variable graph(horz,method) -value sum \
	-command [list UpdateGraphAxis $current(frame)]

    grid $f.hgrid -padx 2 -pady 2 -sticky w
    grid $f.htaxis $f.hlaxis $f.hgaxis -padx 2 -pady 2 -sticky w
    grid $f.htthick $f.hthick -padx 2 -pady 2 -sticky w
    grid $f.htmethod $f.hamethod $f.hsmethod -padx 2 -pady 2 -sticky w

    # Vertical
    set f [ttk::labelframe $w.vert -text [msgcat::mc {Vertical}] -padding 2]

    ttk::checkbutton $f.vgrid -text [msgcat::mc {Show Grid}] \
	-variable graph(vert,grid) \
	-command UpdateGraphGrid
    ttk::label $f.vtaxis -text [msgcat::mc {Axis}]
    ttk::radiobutton $f.vlaxis -text [msgcat::mc {Linear}] \
	-variable graph(vert,log) -value false \
	-command [list UpdateGraphAxis $current(frame)]
    ttk::radiobutton $f.vgaxis -text [msgcat::mc {Log}] \
	-variable graph(vert,log) -value true \
	-command [list UpdateGraphAxis $current(frame)]
    ttk::label $f.vtthick -text [msgcat::mc {Thickness}]
    ttk::entry $f.vthick -textvariable graph(vert,thick) -width 7
    ttk::label $f.vtmethod -text [msgcat::mc {Method}]
    ttk::radiobutton $f.vamethod -text [msgcat::mc {Average}] \
	-variable graph(vert,method) -value average \
	-command [list UpdateGraphAxis $current(frame)]
    ttk::radiobutton $f.vsmethod -text [msgcat::mc {Sum}] \
	-variable graph(vert,method) -value sum \
	-command [list UpdateGraphAxis $current(frame)]

    grid $f.vgrid -padx 2 -pady 2 -sticky w
    grid $f.vtaxis $f.vlaxis $f.vgaxis -padx 2 -pady 2 -sticky w
    grid $f.vtthick $f.vthick -padx 2 -pady 2 -sticky w
    grid $f.vtmethod $f.vamethod $f.vsmethod -padx 2 -pady 2 -sticky w

    # Buttons
    set f [ttk::frame $w.buttons]
    ttk::button $f.apply -text [msgcat::mc {Apply}] -command GraphApplyDialog
    ttk::button $f.close -text [msgcat::mc {Close}] -command GraphDestroyDialog
    pack $f.apply $f.close -side left -expand true -padx 2 -pady 4

    # Fini
    grid $w.horz -sticky news
    grid $w.vert -sticky news
    grid $w.buttons - -sticky ew
    grid rowconfigure $w 0 -weight 1
    grid columnconfigure $w 1 -weight 1

    bind $w <<Close>> GraphDestroyDialog
}

proc GraphApplyDialog {} {
    global ds9
    global igraph
    global graph
    global dgraph
    
    if {[info exists dgraph]} {
	if {$dgraph(frame) != {}} {
	    set ii [lsearch $ds9(active) $dgraph(frame)]
	    if {$ii>=0} {
		UpdateGraphData $dgraph(frame) $dgraph(x) $dgraph(y) canvas
	    } else {
		set dgraph(frame) {}
	    }
	}
    }
}

proc GraphDestroyDialog {} {
    global igraph
    global dgraph

    if {[winfo exists $igraph(top)]} {
	destroy $igraph(top)
	destroy $igraph(mb)
	unset dgraph
    }
}

