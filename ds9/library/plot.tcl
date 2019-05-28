#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc PlotDef {} {
    global pap
    global iap

    set iap(tt) {ap}
    set iap(windows) {}
    set iap(unique) 0

    set iap(jpeg,quality) 75
    set iap(tiff,compress) none
    set iap(error) [msgcat::mc {An error has occurred while creating the image. Please be sure that the plot window is in the upper left corner of the default screen and the entire window is visible.}]

    # per Canvas
    set pap(graph,bg) white
    set pap(graph,title,family) helvetica
    set pap(graph,title,size) 12
    set pap(graph,title,weight) normal
    set pap(graph,title,slant) roman

    set pap(legend,title,family) helvetica
    set pap(legend,title,size) 10
    set pap(legend,title,weight) normal
    set pap(legend,title,slant) roman
    set pap(legend,font,family) helvetica
    set pap(legend,font,size) 9
    set pap(legend,font,weight) normal
    set pap(legend,font,slant) roman

    set pap(axis,title,family) helvetica
    set pap(axis,title,size) 9
    set pap(axis,title,weight) normal
    set pap(axis,title,slant) roman

    set pap(axis,font,family) helvetica
    set pap(axis,font,size) 9
    set pap(axis,font,weight) normal
    set pap(axis,font,slant) roman

    # per Graph
    set pap(graph,title) {}

    set pap(legend) 0
    set pap(legend,title) Legend
    set pap(legend,position) right

    set pap(axis,x,title) {}
    set pap(axis,x,grid) 1
    set pap(axis,x,log) 0
    set pap(axis,x,flip) 0
    set pap(axis,x,auto) 1
    set pap(axis,x,min) {}
    set pap(axis,x,max) {}
    set pap(axis,x,format) {}

    set pap(axis,y,title) {}
    set pap(axis,y,grid) 1
    set pap(axis,y,log) 0
    set pap(axis,y,flip) 0
    set pap(axis,y,auto) 1
    set pap(axis,y,min) {}
    set pap(axis,y,max) {}
    set pap(axis,y,format) {}

    set pap(bar,mode) normal

    # per DataSet
    set pap(show) 1
    set pap(smooth) linear
    set pap(color) black
    set pap(fill) 0
    set pap(fill,color) black
    set pap(width) 1
    set pap(dash) 0

    set pap(shape,symbol) none
    set pap(shape,fill) 1
    set pap(shape,color) red

    set pap(error) 1
    set pap(error,cap) 0
    set pap(error,color) red
    set pap(error,width) 1

    set pap(bar,relief) raised
}

# Canvas
proc PlotLayoutCanvas {varname} {
    upvar #0 $varname var
    global $varname

    set tt $var(graph,total)
    set cc $var(graph,current)

    for {set ii 1} {$ii<=$tt} {incr ii} {
	pack forget $var(graph$ii)
    }

    for {set ii 1} {$ii<=$tt} {incr ii} {
	pack $var(graph$ii) -side top -expand yes -fill both
    }
}

# Graph
proc PlotAddGraph {varname} {
    upvar #0 $varname var
    global $varname

    global ds9
    global pap

    incr ${varname}(graph,total)
    incr ${varname}(graph,current)

    set tt $var(graph,total)
    set cc $var(graph,current)

    set var(graph$cc,data,total) 0
    set var(graph$cc,data,current) 0

    set var(graph$cc,name) {}
    set var(graph$cc,xdata) {}
    set var(graph$cc,ydata) {}
    set var(graph$cc,xedata) {}
    set var(graph$cc,yedata) {}

    array set $varname [array get pap]

    # per Canvas
    # per Graph
    set var(graph$cc,bar,mode) $pap(bar,mode)

    # per DataSet
    set var(graph$cc,show) $pap(show)
    set var(graph$cc,shape,symbol) $pap(shape,symbol)
    set var(graph$cc,shape,fill) $pap(shape,fill)
    set var(graph$cc,shape,color) $pap(shape,color)
    set var(graph$cc,smooth) $pap(smooth)
    set var(graph$cc,color) $pap(color)
    set var(graph$cc,fill) $pap(fill)
    set var(graph$cc,fill,color) $pap(fill,color)
    set var(graph$cc,width) $pap(width)
    set var(graph$cc,dash) $pap(dash)

    set var(graph$cc,error) $pap(error)
    set var(graph$cc,error,cap) $pap(error,cap)
    set var(graph$cc,error,color) $pap(error,color)
    set var(graph$cc,error,width) $pap(error,width)

    set var(graph$cc,bar,relief) $pap(bar,relief)

    $var(proc,addgraph) $varname

    # set up zoom stack, assuming mode is zoom
    global ds9
    switch $ds9(wm) {
	x11 -
	win32 {Blt_ZoomStack $var(graph$cc) -mode release}
	aqua {Blt_ZoomStack $var(graph$cc) -mode release \
		  -button "ButtonPress-2"}
    }

    PlotLayoutCanvas $varname
}

proc PlotDeleteGraph {varname} {
    upvar #0 $varname var
    global $varname

    set cc $var(graph,current)
    if {$cc>1} {
	destroy $var(graph$cc)

	incr ${varname}(graph,total) -1
	incr ${varname}(graph,current) -1
    }
}

# Data
proc PlotAddData {varname} {
    upvar #0 $varname var
    global $varname

    set tt $var(graph,total)
    set cc $var(graph,current)

    # warning: uses current vars
    if {$var(graph$cc,data,total) == 0} {
	return
    }

    # delete current elements
    set nn $var(graph$cc,data,current)
    foreach el [$var(graph$cc) element names] {
	set f [split $el -]
	if {[lindex $f 1] == $nn} {
	    $var(graph$cc) element delete $el
	}
    }

    global $var(graph$cc,xdata) $var(graph$cc,ydata)
    $var(graph$cc) element create "d-${nn}" \
	-xdata $var(graph$cc,xdata) -ydata $var(graph$cc,ydata)
    if {$var(graph$cc,xedata) != {}} {
	if {[$var(graph$cc,xedata) length] != 0} {
	    $var(graph$cc) element configure "d-${nn}" \
		-xerror $var(graph$cc,xedata)
	}
    }
    if {$var(graph$cc,yedata) != {}} {
	if {[$var(graph$cc,yedata) length] != 0} {
	    $var(graph$cc) element configure "d-${nn}" \
		-yerror $var(graph$cc,yedata)
	}
    }
}

proc PlotDeleteData {varname} {
    upvar #0 $varname var
    global $varname

    global ds9

    set tt $var(graph,total)
    set cc $var(graph,current)

    if {$var(graph$cc,data,total) == 0} {
	return
    }

    # first set can be external
    set clear $var(graph$cc,1,manage)

    for {set nn 1} {$nn<=$var(graph$cc,data,total)} {incr nn} {
	if {$var(graph$cc,$nn,manage)} {
	    # delete elements
	    foreach el [$var(graph$cc) element names] {
		set f [split $el -]
		if {[lindex $f 1] == $nn} {
		    $var(graph$cc) element delete $el
		}
	    }

	    # destroy vectors
	    blt::vector destroy \
		$var(graph$cc,$nn,xdata) $var(graph$cc,$nn,ydata)
	    switch $var(graph$cc,$nn,dim) {
		xy {}
		xyex {blt::vector destroy $var(graph$cc,$nn,xedata)}
		xyey {blt::vector destroy $var(graph$cc,$nn,yedata)}
		xyexey {blt::vector destroy \
			    $var(graph$cc,$nn,xedata) $var(graph$cc,$nn,yedata)}
	    }

	    foreach x [array names $varname] {
		set f [split $x ,]
		if {([lindex $f 0] == $nn)} {
		    unset ${varname}($x)
		}
	    }
	}
    }

    if {$clear} {
	set var(graph$cc,data,total) 0
	set var(graph$cc,data,current) 0

	set var(graph$cc,name) {}
	set var(graph$cc,xdata) {}
	set var(graph$cc,ydata) {}
	set var(graph$cc,xedata) {}
	set var(graph$cc,yedata) {}

	# reset other variables
	set var(axis,x,auto) 1
	set var(axis,x,min) {}
	set var(axis,x,max) {}
	set var(axis,x,format) {}

	set var(axis,y,auto) 1
	set var(axis,y,min) {}
	set var(axis,y,max) {}
	set var(axis,y,format) {}
	
	$var(mb).graph.select delete $ds9(menu,start) end

	$var(proc,updategraph) $varname
	PlotStats $varname
	PlotList $varname
    } else {
 	set var(graph$cc,data,total) 1
 	set var(graph$cc,data,current) 1

	$var(mb).graph.select delete [expr $ds9(menu,start)+1] end
 	PlotCurrentData $varname
	$var(proc,updategraph) $varname
    }
}

proc PlotCurrentGraph {varname} {
    upvar #0 $varname var
    global $varname

    set tt $var(graph,total)
    set cc $var(graph,current)

    if {$tt > 0} {
	PlotCurrentData $varname
    }
}

proc PlotCurrentData {varname} {
    upvar #0 $varname var
    global $varname

    set tt $var(graph,total)
    set cc $var(graph,current)

    if {$var(graph$cc,data,total) > 0} {
	set nn $var(graph$cc,data,current)

	set var(graph$cc,manage) $var(graph$cc,$nn,manage)
	set var(graph$cc,dim) $var(graph$cc,$nn,dim)

	set var(graph$cc,xdata) $var(graph$cc,$nn,xdata)
	set var(graph$cc,ydata) $var(graph$cc,$nn,ydata)
	set var(graph$cc,xedata) $var(graph$cc,$nn,xedata)
	set var(graph$cc,yedata) $var(graph$cc,$nn,yedata)

	PlotSetVar $varname $nn
    }

    PlotStats $varname
    PlotList $varname
}

proc PlotAxisFormat {varname axis w nn} {
    upvar #0 $varname var
    global $varname

    return [format $var(axis,$axis,format) $nn]
}

proc PlotChangeMode {varname} {
    upvar #0 $varname var
    global $varname

    set tt $var(graph,total)
    set cc $var(graph,current)

    for {set ii 1} {$ii<=$tt} {incr ii} {
	switch $var(mode) {
	    pointer {
		blt::RemoveBindTag $var(graph$ii) zoom-$var(graph$ii)
		bind $var(graph$ii) <1> [list PlotButton $varname %x %y]
	    }
	    zoom {
		bind $var(graph$ii) <1> {}
		blt::AddBindTag $var(graph$ii) zoom-$var(graph$ii)
	    }
	}
    }
}

proc PlotDestroy {varname} {
    upvar #0 $varname var
    global $varname
    
    global iap

    set tt $var(graph,total)
    set cc $var(graph,current)

    # see if it still is around
    if {![PlotPing $varname]} {
 	return
    }
    
    for {set nn 1} {$nn<=$var(graph$cc,data,total)} {incr nn} {
	switch $var(graph$cc,$nn,dim) {
	    xy {
		blt::vector destroy \
		    $var(graph$cc,$nn,xdata) $var(graph$cc,$nn,ydata)
	    }
	    xyex {
		blt::vector destroy \
		    $var(graph$cc,$nn,xdata) $var(graph$cc,$nn,ydata) \
		    $var(graph$cc,$nn,xedata)
	    }
	    xyey {
		blt::vector destroy \
		    $var(graph$cc,$nn,xdata) $var(graph$cc,$nn,ydata) \
		    $var(graph$cc,$nn,yedata)
	    }
	    xyexey {
		blt::vector destroy \
		    $var(graph$cc,$nn,xdata) $var(graph$cc,$nn,ydata) \
		    $var(graph$cc,$nn,xedata) $var(graph$cc,$nn,yedata)
	    }
	}
    }
    
    destroy $var(top)
    destroy $var(mb)

    # stats window?
    if {$var(stats)} {
	SimpleTextDestroy "${varname}stats"
    }

    # list window?
    if {$var(list)} {
	SimpleTextDestroy "${varname}list"
    }

    # delete it from the xpa list
    set ii [lsearch $iap(windows) $varname]
    if {$ii>=0} {
	set iap(windows) [lreplace $iap(windows) $ii $ii]
    }

    unset $varname
}

proc PlotExternal {varname} {
    upvar #0 $varname var
    global $varname

    set tt $var(graph,total)
    set cc $var(graph,current)

    # incr count
    incr ${varname}(graph$cc,data,total) 
    set nn $var(graph$cc,data,total)
    set var(graph$cc,data,current) $nn

    set var(graph$cc,name) "Dataset $nn"

    set var(graph$cc,$nn,manage) $var(graph$cc,manage)
    set var(graph$cc,$nn,dim) $var(graph$cc,dim)

    set var(graph$cc,$nn,xdata) $var(graph$cc,xdata) 
    set var(graph$cc,$nn,ydata) $var(graph$cc,ydata) 
    set var(graph$cc,$nn,xedata) $var(graph$cc,xedata) 
    set var(graph$cc,$nn,yedata) $var(graph$cc,yedata) 

    PlotGetVar $varname $nn

    # update data set menu
    $var(mb).graph.select add radiobutton \
	-label "[msgcat::mc {Dataset}] $nn" \
	-variable ${varname}(graph$cc,data,current) -value $nn \
	-command "PlotCurrentData $varname"

    PlotAddData $varname
}

proc PlotList {varname} {
    upvar #0 $varname var
    global $varname

    if {!$var(list)} {
	return
    }

    set rr [PlotListGenerate $varname]
    SimpleTextDialog "${varname}list" [msgcat::mc {Data}] \
	40 20 insert top $rr PlotListDestroyCB $varname
}

proc PlotListGenerate {varname} {
    upvar #0 $varname var
    global $varname

    set tt $var(graph,total)
    set cc $var(graph,current)

    set rr {}
    if {$var(graph$cc,xdata) != {}} {
	global $var(graph$cc,xdata) $var(graph$cc,ydata) \
	    $var(graph$cc,xedata) $var(graph$cc,yedata)
	set ll [$var(graph$cc,xdata) length]
	set xx [$var(graph$cc,xdata) range]
	set yy [$var(graph$cc,ydata) range]

	switch $var(graph$cc,dim) {
	    xy {
		for {set ii 0} {$ii<$ll} {incr ii} {
		    append rr "[lindex $xx $ii] [lindex $yy $ii]\n"
		}
	    }
	    xyex {
		set xe [$var(graph$cc,xedata) range]
		for {set ii 0} {$ii<$ll} {incr ii} {
		    append rr "[lindex $xx $ii] [lindex $yy $ii] [lindex $xe $ii]\n"
		}
	    }
	    xyey {
		set ye [$var(graph$cc,yedata) range]
		for {set ii 0} {$ii<$ll} {incr ii} {
		    append rr "[lindex $xx $ii] [lindex $yy $ii] [lindex $ye $ii]\n"
		}
	    }
	    xyexey {
		set xe [$var(graph$cc,xedata) range]
		set ye [$var(graph$cc,yedata) range]
		for {set ii 0} {$ii<$ll} {incr ii} {
		    append rr "[lindex $xx $ii] [lindex $yy $ii] [lindex $xe $ii] [lindex $ye $ii]\n"
		}
	    }
	}
    }

    return $rr
}

proc PlotListDestroyCB {varname} {
    upvar #0 $varname var
    global $varname

    set var(list) 0
}

proc PlotNextColor {which} {
    switch -- $which {
	black {return red}
	red {return green}
	green {return blue}
	blue {return cyan}
	cyan {return magenta}
	magenta {return yellow}
	yellow {return black}
	white {return white}
	default {return red}
    }
}

proc PlotPing {varname} {
    upvar #0 $varname var
    global $varname

    if {[info exists var(top)]} {
	if {[winfo exists $var(top)]} {
	    return 1
	}
    }
    return 0
}

proc PlotRaise {varname} {
    upvar #0 $varname var
    global $varname

    if {[PlotPing $varname]} {
	raise $var(top)
	return 1
    }
    return 0
}

proc PlotStats {varname} {
    upvar #0 $varname var
    global $varname

    if {!$var(stats)} {
	return
    }

    set rr [PlotStatsGenerate $varname]
    SimpleTextDialog "${varname}stats" [msgcat::mc {Statistics}] \
	40 20 insert top $rr PlotStatsDestroyCB $varname
}

proc PlotStatsGenerate {varname} {
    upvar #0 $varname var
    global $varname

    set tt $var(graph,total)
    set cc $var(graph,current)

    set min {}
    set max {}
    set mean {}
    set median {}
    set varr {}
    set sdev {}

    if {$var(graph$cc,ydata) != {}} {
	if {[$var(graph$cc,ydata) length] > 0} {
	    set min [format "%6.3f" [blt::vector expr min($var(graph$cc,ydata))]]
	    set max [format "%6.3f" [blt::vector expr max($var(graph$cc,ydata))]]
	    set mean [format "%6.3f" [blt::vector expr mean($var(graph$cc,ydata))]]
	    set median [format "%6.3f" [blt::vector expr median($var(graph$cc,ydata))]]
	    set varr [format "%6.3f" [expr [blt::vector expr var($var(graph$cc,ydata))]]]
	    set sdev [format "%6.3f" [expr [blt::vector expr sdev($var(graph$cc,ydata))]]]
	}
    }
    
    set rr {}
    append rr "min $min\n"
    append rr "max $max\n"
    append rr "mean $mean\n"
    append rr "median $median\n"
    append rr "var $varr\n"
    append rr "sdev $sdev\n"
    return $rr
}

proc PlotStatsDestroyCB {varname} {
    upvar #0 $varname var
    global $varname

    set var(stats) 0
}

proc PlotTitle {varname title xaxis yaxis} {
    upvar #0 $varname var
    global $varname

    set tt $var(graph,total)
    set cc $var(graph,current)

    set var(graph,title) "$title"
    set var(axis,x,title) "$xaxis"
    set var(axis,y,title) "$yaxis"
}

proc PlotUpdateGraph {varname} {
    upvar #0 $varname var
    global $varname

    set tt $var(graph,total)
    set cc $var(graph,current)

    global ds9

    if {$var(axis,x,auto)} {
	set xmin {}
	set xmax {}
    } else {
	set xmin $var(axis,x,min)
	set xmax $var(axis,x,max)
    }

    if {$var(axis,y,auto)} {
	set ymin {}
	set ymax {}
    } else {
	set ymin $var(axis,y,min)
	set ymax $var(axis,y,max)
    }

    $var(graph$cc) xaxis configure -min $xmin -max $xmax \
	-descending $var(axis,x,flip)
    $var(graph$cc) yaxis configure -min $ymin -max $ymax \
	-descending $var(axis,y,flip)

    if {$var(graph,format)} {
	if {$var(axis,x,format) != {}} {
	    $var(graph$cc) xaxis configure \
		-command [list PlotAxisFormat $varname x]
	} else {
	    $var(graph$cc) xaxis configure -command {}
	}
	if {$var(axis,y,format) != {}} {
	    $var(graph$cc) yaxis configure \
		-command [list PlotAxisFormat $varname y]
	} else {
	    $var(graph$cc) yaxis configure -command {}
	}
    }

    # Menus
    if {$var(graph$cc,xdata) != {}} {
	$var(mb).file entryconfig "[msgcat::mc {Save Data}]..." -state normal
	$var(mb).file entryconfig [msgcat::mc {Clear Data}] -state normal
	$var(mb).file entryconfig [msgcat::mc {Statistics}] -state normal
	$var(mb).file entryconfig [msgcat::mc {List Data}] -state normal

	if {$var(graph$cc,1,manage)} {
	    $var(mb).file entryconfig [msgcat::mc {Duplicate Data}] \
		-state normal
	} else {
	    $var(mb).file entryconfig [msgcat::mc {Duplicate Data}] \
		-state disable
	}
    } else {
	$var(mb).file entryconfig "[msgcat::mc {Save Data}]..." -state disabled
	$var(mb).file entryconfig [msgcat::mc {Clear Data}] -state disabled
	$var(mb).file entryconfig [msgcat::mc {Duplicate Data}] -state disabled
	$var(mb).file entryconfig [msgcat::mc {Statistics}] -state disabled
	$var(mb).file entryconfig [msgcat::mc {List Data}] -state disabled
    }

    # Graph
    $var(graph$cc) configure -plotpadx 0 -plotpady 0 \
	-title $var(graph,title) \
	-font "{$ds9($var(graph,title,family))} $var(graph,title,size) $var(graph,title,weight) $var(graph,title,slant)" \
	-bg $var(graph,bg) -plotbackground $var(graph,bg)

    $var(graph$cc) xaxis configure \
	-bg $var(graph,bg) \
	-grid $var(axis,x,grid) -logscale $var(axis,x,log) \
	-title $var(axis,x,title) \
	-tickfont "{$ds9($var(axis,font,family))} $var(axis,font,size) $var(axis,font,weight) $var(axis,font,slant)" \
	-titlefont "{$ds9($var(axis,title,family))} $var(axis,title,size) $var(axis,title,weight) $var(axis,title,slant)"

    $var(graph$cc) yaxis configure \
	-bg $var(graph,bg) \
	-grid $var(axis,y,grid) -logscale $var(axis,y,log) \
	-title $var(axis,y,title) \
	-tickfont "{$ds9($var(axis,font,family))} $var(axis,font,size) $var(axis,font,weight) $var(axis,font,slant)" \
	-titlefont "{$ds9($var(axis,title,family))} $var(axis,title,size) $var(axis,title,weight) $var(axis,title,slant)"

    $var(graph$cc) legend configure -hide [expr !$var(legend)] \
	-bg $var(graph,bg) \
	-position $var(legend,position) -title $var(legend,title) \
	-font "{$ds9($var(legend,font,family))} $var(legend,font,size) $var(legend,font,weight) $var(legend,font,slant)" \
	-titlefont "{$ds9($var(legend,title,family))} $var(legend,title,size) $var(legend,title,weight) $var(legend,title,slant)"
}

proc PlotColorMenu {w varname color cmd} {
    upvar #0 $varname var
    global $varname

    set tt $var(graph,total)
    set cc $var(graph,current)

    menu $w
    $w add radiobutton -label [msgcat::mc {Black}] \
	-variable ${varname}($color) -value black -command $cmd
    $w add radiobutton -label [msgcat::mc {White}] \
	-variable ${varname}($color) -value white -command $cmd
    $w add radiobutton -label [msgcat::mc {Red}] \
	-variable ${varname}($color) -value red -command $cmd
    $w add radiobutton -label [msgcat::mc {Green}] \
	-variable ${varname}($color) -value green -command $cmd
    $w add radiobutton -label [msgcat::mc {Blue}] \
	-variable ${varname}($color) -value blue -command $cmd
    $w add radiobutton -label [msgcat::mc {Cyan}] \
	-variable ${varname}($color) -value cyan -command $cmd
    $w add radiobutton -label [msgcat::mc {Magenta}] \
	-variable ${varname}($color) -value magenta -command $cmd
    $w add radiobutton -label [msgcat::mc {Yellow}] \
	-variable ${varname}($color) -value yellow -command $cmd
    $w add separator
    $w add command -label "[msgcat::mc {Other Color}]..." \
	-command [list ColorMenuOther $varname $color $cmd]
}

proc PlotSetVar {varname nn} {
    upvar #0 $varname var
    global $varname

    set tt $var(graph,total)
    set cc $var(graph,current)

    # per DataSet
    set var(graph$cc,name) $var(graph$cc,$nn,name)
    set var(graph$cc,show) $var(graph$cc,$nn,show) 
    set var(graph$cc,smooth) $var(graph$cc,$nn,smooth) 
    set var(graph$cc,color) $var(graph$cc,$nn,color) 
    set var(graph$cc,fill) $var(graph$cc,$nn,fill) 
    set var(graph$cc,fill,color) $var(graph$cc,$nn,fill,color) 
    set var(graph$cc,width) $var(graph$cc,$nn,width) 
    set var(graph$cc,dash) $var(graph$cc,$nn,dash) 

    set var(graph$cc,shape,symbol) $var(graph$cc,$nn,shape,symbol) 
    set var(graph$cc,shape,fill) $var(graph$cc,$nn,shape,fill) 
    set var(graph$cc,shape,color) $var(graph$cc,$nn,shape,color)

    set var(graph$cc,error) $var(graph$cc,$nn,error) 
    set var(graph$cc,error,cap) $var(graph$cc,$nn,error,cap) 
    set var(graph$cc,error,color) $var(graph$cc,$nn,error,color) 
    set var(graph$cc,error,width) $var(graph$cc,$nn,error,width) 

    set var(graph$cc,bar,relief) $var(graph$cc,$nn,bar,relief) 
}

proc PlotGetVar {varname nn} {
    upvar #0 $varname var
    global $varname

    set tt $var(graph,total)
    set cc $var(graph,current)

    # per DataSet
    set var(graph$cc,$nn,name) $var(graph$cc,name)
    set var(graph$cc,$nn,show) $var(graph$cc,show)
    set var(graph$cc,$nn,smooth) $var(graph$cc,smooth)
    set var(graph$cc,$nn,color) $var(graph$cc,color)
    set var(graph$cc,$nn,fill) $var(graph$cc,fill)
    set var(graph$cc,$nn,fill,color) $var(graph$cc,fill,color)
    set var(graph$cc,$nn,width) $var(graph$cc,width)
    set var(graph$cc,$nn,dash) $var(graph$cc,dash)

    set var(graph$cc,$nn,shape,symbol) $var(graph$cc,shape,symbol)
    set var(graph$cc,$nn,shape,fill) $var(graph$cc,shape,fill)
    set var(graph$cc,$nn,shape,color) $var(graph$cc,shape,color)

    set var(graph$cc,$nn,error) $var(graph$cc,error)
    set var(graph$cc,$nn,error,cap) $var(graph$cc,error,cap)
    set var(graph$cc,$nn,error,color) $var(graph$cc,error,color)
    set var(graph$cc,$nn,error,width) $var(graph$cc,error,width)

    set var(graph$cc,$nn,bar,relief) $var(graph$cc,bar,relief)
}

proc PlotBackup {ch dir} {
    global iap

    set rdir "./[lindex [file split $dir] end]"

    # only save ap plots
    foreach ww $iap(windows) {
	if {[string range $ww 0 1] == {ap}} {
	    set fdir [file join $dir $ww]
	    
	    set varname $ww
	    upvar #0 $varname var
	    global $varname

	    set tt $var(graph,total)
	    set cc $var(graph,current)

	    # create dir if needed
	    if {![file isdirectory $fdir]} {
		if {[catch {file mkdir $fdir}]} {
		    Error [msgcat::mc {An error has occurred during backup}]
		    return
		}
	    }

	    switch $var(graph$cc,type) {
		line {puts $ch "PlotLineTool"}
		bar {puts $ch "PlotBarTool"}
		scatter {puts $ch "PlotScatterTool"}
		strip {puts $ch "PlotStripTool"}
	    }

	    set save $var(graph$cc,data,current)
	    for {set ii 1} {$ii<=$var(graph$cc,data,total)} {incr ii} {
		set ${varname}(graph$cc,data,current) $ii
		PlotCurrentData $varname

		PlotSaveDataFile $varname "$fdir/plot$ii.dat"
		PlotSaveConfigFile $varname "$fdir/plot$ii.plt"

		puts $ch "PlotLoadDataFile $varname $fdir/plot$ii.dat $var(graph$cc,dim)"
		puts $ch "PlotLoadConfigFile $varname $fdir/plot$ii.plt"
	    }
	    set ${varname}(graph$cc,data,current) $save
	    PlotCurrentData $varname
	}
    }
}
