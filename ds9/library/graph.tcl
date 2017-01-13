#  Copyright (C) 1999-2016
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc GraphDef {} {
    global igraph
    global pgraph

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

    # prefs only
    set pgraph(horz,grid) 1
    set pgraph(horz,log) false
    set pgraph(vert,grid) 1
    set pgraph(vert,log) false
}

proc CreateGraphs {} {
    global igraph
    
    global ds9
    global canvas

    # Horizontal Graph
    set ds9(graph,horz) [blt::graph $ds9(main).horz \
			     -width $canvas(width) -height $igraph(size) \
			     -takefocus 0 \
     			     -background $ds9(bg) \
			     -highlightthickness 0 \
			     -plotborderwidth 2 \
			     -plotrelief groove \
			     -plotbackground $ds9(bg) \
			     -font [font actual TkDefaultFont] \
			    ]
    # we need to manually set the element foreground color, i.e. use graph fg
    set fgcolor [$ds9(graph,horz) cget -foreground]

    $ds9(graph,horz) legend configure -hide yes
    $ds9(graph,horz) crosshairs configure -color green

    $ds9(graph,horz) xaxis configure -hide no -showticks no -bg $ds9(bg)
    $ds9(graph,horz) x2axis configure -hide yes
    $ds9(graph,horz) yaxis configure -hide yes
    $ds9(graph,horz) y2axis configure -hide no -bg $ds9(bg) \
	-tickfont [font actual TkDefaultFont]

    $ds9(graph,horz) element create line1 -xdata graphHorzX -ydata graphHorzY \
	-color $fgcolor -symbol none

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

    # Vertical Graph
    set ds9(graph,vert) [blt::graph $ds9(main).vert \
			     -width $igraph(size) -height $canvas(height) \
			     -invertxy yes \
			     -takefocus 0 \
     			     -background $ds9(bg) \
			     -highlightthickness 0 \
			     -plotrelief groove \
			     -plotborderwidth 2 \
			     -plotbackground $ds9(bg)
			    ]
    $ds9(graph,vert) legend configure -hide yes
    $ds9(graph,vert) crosshairs configure -color green

    $ds9(graph,vert) xaxis configure -hide yes -descending yes
    $ds9(graph,vert) x2axis configure -hide no -descending yes \
	-showticks no -bg $ds9(bg)
    $ds9(graph,vert) yaxis configure -hide no -descending yes \
	 -bg $ds9(bg) -tickfont [font actual TkDefaultFont]
    $ds9(graph,vert) y2axis configure -hide yes -descending yes

    $ds9(graph,vert) element create line1 -xdata graphVertX -ydata graphVertY \
	-color $fgcolor -symbol none

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

proc UpdateGraphFont {} {
    global ds9

    $ds9(graph,horz) y2axis configure -tickfont [font actual TkDefaultFont]
    $ds9(graph,vert) yaxis configure -tickfont [font actual TkDefaultFont]
}

proc UpdateGraphGrid {} {
    global pgraph
    global ds9

    $ds9(graph,horz) xaxis configure -grid $pgraph(horz,grid) -tickdefault 4
    $ds9(graph,horz) y2axis configure -grid $pgraph(horz,grid)

    $ds9(graph,vert) x2axis configure -grid $pgraph(vert,grid)
    $ds9(graph,vert) yaxis configure -grid $pgraph(vert,grid) -tickdefault 4
}

proc UpdateGraphXAxis {which} {
    global ds9
    global view

    global debug
    if {$debug(tcl,update)} {
	puts stderr "UpdateGraphXAxis"
    }

    if {$view(graph,horz)} {
	UpdateGraphXAxisHV $which $ds9(graph,horz) graphHorzX graphHorzY 1
    }
    
    if {$view(graph,vert)} {
	UpdateGraphXAxisHV $which $ds9(graph,vert) graphVertX graphVertY 0
    }
}

proc UpdateGraphXAxisHV {which what vectorX vectorY cut} {
    global igraph

    global graphHorzX graphHorzY
    global graphVertX graphVertY

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

proc UpdateGraphYAxis {which} {
    global pgraph

    global ds9
    global view

    global debug
    if {$debug(tcl,update)} {
	puts stderr "UpdateGraphYAxis"
    }

    if {$view(graph,horz)} {
	UpdateGraphYAxisHV $which $ds9(graph,horz) $pgraph(horz,log)
    }

    if {$view(graph,vert)} {
	UpdateGraphYAxisHV $which $ds9(graph,vert) $pgraph(vert,log)
    }
}

proc UpdateGraphYAxisHV {which what log} {
    global igraph

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

	$what yaxis configure -min $yMin -max $yMax -logscale $log -tickdefault 4
	$what y2axis configure -min $yMin -max $yMax -logscale $log -tickdefault 4
    } else {
	$what yaxis configure -min $igraph(y,min) -max $igraph(y,max) \
	    -logscale $log -tickdefault 4
	$what y2axis configure -min $igraph(y,min) -max $igraph(y,max) \
	    -logscale $log -tickdefault 4
    }
}

proc ShowGraphData {which} {
    global ds9
    global view

    if {$view(graph,horz)} {
	ShowGraphDataHV $which $ds9(graph,horz)
    }
    if {$view(graph,vert)} {
	ShowGraphDataHV $which $ds9(graph,vert)
    }
}

proc ShowGraphDataHV {which what} {
    if {$which != {}} {
	if {[$which has fits]} {
	    $what element configure line1 -hide no
	} else {
	    $what element configure line1 -hide yes
	}
    } else {
	$what element configure line1 -hide yes
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

proc UpdateGraph {which x y sys} {
    global ds9
    global view

    if {[$which has fits]} {
	if {$view(graph,horz)} {
	    if {![catch {$which get horizontal cut graphHorzX graphHorzY $x $y $sys}]} {
		$ds9(graph,horz) element configure line1 -hide no
	    } else {
		$ds9(graph,horz) element configure line1 -hide yes
	    }
	}

	if {$view(graph,vert)} {
	    if {![catch {$which get vertical cut graphVertX graphVertY $x $y $sys}]} {
		$ds9(graph,vert) element configure line1 -hide no
	    } else {
		$ds9(graph,vert) element configure line1 -hide yes
	    }
	}
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

proc LayoutGraphs {} {
    global igraph

    global ds9
    global canvas
    global view
    global colorbar
    global icolorbar

    set cbh [expr $view(colorbar) && \
	     [string equal $colorbar(orientation) {horizontal}]]
    set cbv [expr $view(colorbar) && \
	     [string equal $colorbar(orientation) {vertical}]]
    set grh [expr $view(graph,horz)]
    set grv [expr $view(graph,vert)]

    if {$grh} {
	set xx 0
	set yy [expr $canvas(height) + $canvas(gap)]
	if {$cbh} {
	    incr yy $icolorbar(horizontal,height)
	}
	if {$grv && !$cbh} {
	    incr yy $igraph(gap,y)
	}

	if {$igraph(horz,id) == 0} {
	    set igraph(horz,id) [$ds9(canvas) create window $xx $yy \
				    -window $ds9(graph,horz) -anchor nw]
	} else {
	    $ds9(canvas) coords $igraph(horz,id) $xx $yy
	}

	set ww [expr $canvas(width)+$igraph(gap,x)]
	$ds9(graph,horz) configure -width $ww

    } else {
	if {$igraph(horz,id)>0} {
	    $ds9(canvas) delete $igraph(horz,id)
	    set igraph(horz,id) 0
	}
    }

    if {$grv} {
	set yy 0
	set xx [expr $canvas(width) + $canvas(gap)]
	if {$cbv} {
	    incr xx $icolorbar(vertical,width)
	}
	if {$grh && !$cbv} {
	    incr xx $igraph(gap,x)
	}

	if {$igraph(vert,id) == 0} {
	    set igraph(vert,id) [$ds9(canvas) create window $xx $yy \
				    -window $ds9(graph,vert) -anchor nw]
	} else {
	    $ds9(canvas) coords $igraph(vert,id) $xx $yy
	}

	set hh [expr $canvas(height)+$igraph(gap,y)]
	$ds9(graph,vert) configure -height $hh

    } else {
	if {$igraph(vert,id)>0} {
	    $ds9(canvas) delete $igraph(vert,id)
	    set igraph(vert,id) 0
	}
    }
}
