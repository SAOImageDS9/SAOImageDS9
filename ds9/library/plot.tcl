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

    PlotDefState
}

# Canvas
proc PlotLayoutCanvas {varname} {
    upvar #0 $varname var
    global $varname

    foreach cc $var(graphs) {
	pack forget $var($cc)
    }

    foreach cc $var(graphs) {
	pack $var($cc) -side top -expand yes -fill both
    }
}

# Graph
proc PlotAddGraph {varname} {
    upvar #0 $varname var
    global $varname

    global ds9
    global pap

    if {$var(graphs) != {}} {
	PlotSaveState $varname
    }

    incr ${varname}(seq)
    set cc "graph$var(seq)"
    lappend var(graphs) $cc
    set var(graph,current) $cc

    set var($cc,data,total) 0
    set var($cc,data,current) 0

    PlotInitGraph $varname
    
    $var(proc,addgraph) $varname

    # set up zoom stack, assuming mode is zoom
    global ds9
    switch $ds9(wm) {
	x11 -
	win32 {Blt_ZoomStack $var($cc) -mode release}
	aqua {Blt_ZoomStack $var($cc) -mode release -button "ButtonPress-2"}
    }

    PlotLayoutCanvas $varname
}

proc PlotDeleteGraph {varname} {
    upvar #0 $varname var
    global $varname

    set cc $var(graph,current)
    if {$cc != {}} {
	destroy $var($cc)
	list replace ${varname}(graphs) $cc {}
    }
}

# Data
proc PlotAddData {varname} {
    upvar #0 $varname var
    global $varname

    set cc $var(graph,current)

    # warning: uses current vars
    if {$var($cc,data,total) == 0} {
	return
    }

    # delete current elements
    set nn $var($cc,data,current)
    foreach el [$var($cc) element names] {
	set f [split $el -]
	if {[lindex $f 1] == $nn} {
	    $var($cc) element delete $el
	}
    }

    global $var(graph,ds,xdata) $var(graph,ds,ydata)
    $var($cc) element create "d-${nn}" \
	-xdata $var(graph,ds,xdata) -ydata $var(graph,ds,ydata)
    if {$var(graph,ds,xedata) != {}} {
	if {[$var(graph,ds,xedata) length] != 0} {
	    $var($cc) element configure "d-${nn}" \
		-xerror $var(graph,ds,xedata)
	}
    }
    if {$var(graph,ds,yedata) != {}} {
	if {[$var(graph,ds,yedata) length] != 0} {
	    $var($cc) element configure "d-${nn}" \
		-yerror $var(graph,ds,yedata)
	}
    }
}

proc PlotDeleteData {varname} {
    upvar #0 $varname var
    global $varname

    global ds9

    set cc $var(graph,current)

    if {$var($cc,data,total) == 0} {
	return
    }

    # first set can be external
    set clear $var($cc,1,manage)

    for {set nn 1} {$nn<=$var($cc,data,total)} {incr nn} {
	if {$var($cc,$nn,manage)} {
	    # delete elements
	    foreach el [$var($cc) element names] {
		set f [split $el -]
		if {[lindex $f 1] == $nn} {
		    $var($cc) element delete $el
		}
	    }

	    # destroy vectors
	    blt::vector destroy \
		$var($cc,$nn,xdata) $var($cc,$nn,ydata)
	    switch $var($cc,$nn,dim) {
		xy {}
		xyex {blt::vector destroy $var($cc,$nn,xedata)}
		xyey {blt::vector destroy $var($cc,$nn,yedata)}
		xyexey {blt::vector destroy \
			    $var($cc,$nn,xedata) $var($cc,$nn,yedata)}
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
	set var($cc,data,total) 0
	set var($cc,data,current) 0

	set var(graph,ds,name) {}
	set var(graph,ds,xdata) {}
	set var(graph,ds,ydata) {}
	set var(graph,ds,xedata) {}
	set var(graph,ds,yedata) {}

	# reset other variables
	set var($cc,axis,x,auto) 1
	set var($cc,axis,x,min) {}
	set var($cc,axis,x,max) {}
	set var($cc,axis,x,format) {}

	set var($cc,axis,y,auto) 1
	set var($cc,axis,y,min) {}
	set var($cc,axis,y,max) {}
	set var($cc,axis,y,format) {}
	
	$var(mb).graph.select delete $ds9(menu,start) end

	$var(proc,updategraph) $varname
	PlotStats $varname
	PlotList $varname
    } else {
 	set var($cc,data,total) 1
 	set var($cc,data,current) 1

	$var(mb).graph.select delete [expr $ds9(menu,start)+1] end
 	PlotCurrentData $varname
	$var(proc,updategraph) $varname
    }
}

proc PlotCurrentGraph {varname} {
    upvar #0 $varname var
    global $varname

    set cc $var(graph,current)

    if {$cc != {}} {
	PlotCurrentData $varname
    }
}

proc PlotCurrentData {varname} {
    upvar #0 $varname var
    global $varname

    set cc $var(graph,current)

    if {$var($cc,data,total) > 0} {
	set nn $var($cc,data,current)

	set var($cc,manage) $var($cc,$nn,manage)
	set var($cc,dim) $var($cc,$nn,dim)

	PlotRestoreState $varname $nn
    }

    PlotStats $varname
    PlotList $varname
}

proc PlotAxisFormat {varname axis w nn} {
    upvar #0 $varname var
    global $varname

    return [format $var(graph,axis,$axis,format) $nn]
}

proc PlotChangeMode {varname} {
    upvar #0 $varname var
    global $varname

    foreach cc $var(graphs) {
	switch $var(mode) {
	    pointer {
		blt::RemoveBindTag $var($cc) zoom-$var($cc)
		bind $var($cc) <1> [list PlotButton $varname %x %y]
	    }
	    zoom {
		bind $var($cc) <1> {}
		blt::AddBindTag $var($cc) zoom-$var($cc)
	    }
	}
    }
}

proc PlotDestroy {varname} {
    upvar #0 $varname var
    global $varname
    
    global iap

    set cc $var(graph,current)

    # see if it still is around
    if {![PlotPing $varname]} {
 	return
    }
    
    for {set nn 1} {$nn<=$var($cc,data,total)} {incr nn} {
	blt::vector destroy $var($cc,$nn,xdata) $var($cc,$nn,ydata)
	switch $var($cc,$nn,dim) {
	    xy {}
	    xyex {blt::vector destroy $var($cc,$nn,xedata)}
	    xyey {blt::vector destroy $var($cc,$nn,yedata)}
	    xyexey {
		blt::vector destroy $var($cc,$nn,xedata) $var($cc,$nn,yedata)
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

    set cc $var(graph,current)

    # incr count
    incr ${varname}($cc,data,total) 
    set nn $var($cc,data,total)
    set var($cc,data,current) $nn

    set var(graph,ds,name) "Dataset $nn"

    set var($cc,$nn,manage) $var($cc,manage)
    set var($cc,$nn,dim) $var($cc,dim)

    PlotSaveState $varname

    # update data set menu
    $var(mb).graph.select add radiobutton \
	-label "[msgcat::mc {Dataset}] $nn" \
	-variable ${varname}($cc,data,current) -value $nn \
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

    set cc $var(graph,current)

    set rr {}
    if {$var(graph,ds,xdata) != {}} {
	global $var(graph,ds,xdata) $var(graph,ds,ydata) \
	    $var(graph,ds,xedata) $var(graph,ds,yedata)
	set ll [$var(graph,ds,xdata) length]
	set xx [$var(graph,ds,xdata) range]
	set yy [$var(graph,ds,ydata) range]

	switch $var($cc,dim) {
	    xy {
		for {set ii 0} {$ii<$ll} {incr ii} {
		    append rr "[lindex $xx $ii] [lindex $yy $ii]\n"
		}
	    }
	    xyex {
		set xe [$var(graph,ds,xedata) range]
		for {set ii 0} {$ii<$ll} {incr ii} {
		    append rr "[lindex $xx $ii] [lindex $yy $ii] [lindex $xe $ii]\n"
		}
	    }
	    xyey {
		set ye [$var(graph,ds,yedata) range]
		for {set ii 0} {$ii<$ll} {incr ii} {
		    append rr "[lindex $xx $ii] [lindex $yy $ii] [lindex $ye $ii]\n"
		}
	    }
	    xyexey {
		set xe [$var(graph,ds,xedata) range]
		set ye [$var(graph,ds,yedata) range]
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

    set cc $var(graph,current)

    set min {}
    set max {}
    set mean {}
    set median {}
    set varr {}
    set sdev {}

    if {$var(graph,ds,ydata) != {}} {
	if {[$var(graph,ds,ydata) length] > 0} {
	    set min [format "%6.3f" [blt::vector expr min($var(graph,ds,ydata))]]
	    set max [format "%6.3f" [blt::vector expr max($var(graph,ds,ydata))]]
	    set mean [format "%6.3f" [blt::vector expr mean($var(graph,ds,ydata))]]
	    set median [format "%6.3f" [blt::vector expr median($var(graph,ds,ydata))]]
	    set varr [format "%6.3f" [expr [blt::vector expr var($var(graph,ds,ydata))]]]
	    set sdev [format "%6.3f" [expr [blt::vector expr sdev($var(graph,ds,ydata))]]]
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

# procs
proc PlotUpdateCanvas {varname} {
    upvar #0 $varname var
    global $varname
    global ds9

    foreach cc $var(graphs) {
	$var($cc) configure -plotpadx 0 -plotpady 0 \
	    -font "{$ds9($var(graph,title,family))} $var(graph,title,size) $var(graph,title,weight) $var(graph,title,slant)" \
	    -bg $var(background) -plotbackground $var(background)

	$var($cc) xaxis configure \
	    -bg $var(background) \
	    -tickfont "{$ds9($var(axis,font,family))} $var(axis,font,size) $var(axis,font,weight) $var(axis,font,slant)" \
	    -titlefont "{$ds9($var(axis,title,family))} $var(axis,title,size) $var(axis,title,weight) $var(axis,title,slant)"

	$var($cc) yaxis configure \
	    -bg $var(background) \
	    -tickfont "{$ds9($var(axis,font,family))} $var(axis,font,size) $var(axis,font,weight) $var(axis,font,slant)" \
	    -titlefont "{$ds9($var(axis,title,family))} $var(axis,title,size) $var(axis,title,weight) $var(axis,title,slant)"

	$var($cc) legend configure \
	    -bg $var(background) \
	    -font "{$ds9($var(legend,font,family))} $var(legend,font,size) $var(legend,font,weight) $var(legend,font,slant)" \
	    -titlefont "{$ds9($var(legend,title,family))} $var(legend,title,size) $var(legend,title,weight) $var(legend,title,slant)"
    }
}

proc PlotUpdateGraph {varname} {
    upvar #0 $varname var
    global $varname

    set cc $var(graph,current)

    if {$var(graph,axis,x,auto)} {
	set xmin {}
	set xmax {}
    } else {
	set xmin $var(graph,axis,x,min)
	set xmax $var(graph,axis,x,max)
    }

    if {$var(graph,axis,y,auto)} {
	set ymin {}
	set ymax {}
    } else {
	set ymin $var(graph,axis,y,min)
	set ymax $var(graph,axis,y,max)
    }

    $var($cc) xaxis configure -min $xmin -max $xmax \
	-descending $var(graph,axis,x,flip)
    $var($cc) yaxis configure -min $ymin -max $ymax \
	-descending $var(graph,axis,y,flip)

    if {$var(graph,format)} {
	if {$var(graph,axis,x,format) != {}} {
	    $var($cc) xaxis configure \
		-command [list PlotAxisFormat $varname x]
	} else {
	    $var($cc) xaxis configure -command {}
	}
	if {$var(graph,axis,y,format) != {}} {
	    $var($cc) yaxis configure \
		-command [list PlotAxisFormat $varname y]
	} else {
	    $var($cc) yaxis configure -command {}
	}
    }

    # Menus
    if {$var(graph,ds,xdata) != {}} {
	$var(mb).file entryconfig "[msgcat::mc {Save Data}]..." -state normal
	$var(mb).file entryconfig [msgcat::mc {Clear Data}] -state normal
	$var(mb).file entryconfig [msgcat::mc {Statistics}] -state normal
	$var(mb).file entryconfig [msgcat::mc {List Data}] -state normal

	if {$var($cc,1,manage)} {
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
    $var($cc) configure -plotpadx 0 -plotpady 0 -title $var(graph,title) 

    $var($cc) xaxis configure \
	-grid $var(graph,axis,x,grid) -logscale $var(graph,axis,x,log) \
	-title $var(graph,axis,x,title)

    $var($cc) yaxis configure \
	-grid $var(graph,axis,y,grid) -logscale $var(graph,axis,y,log) \
	-title $var(graph,axis,y,title)

    $var($cc) legend configure -hide [expr !$var(graph,legend)] \
	-position $var(graph,legend,position) -title $var(graph,legend,title)
}

proc PlotButton {varname x y} {
    upvar #0 $varname var
    global $varname
}

proc PlotHighliteElement {varname rowlist} {
    upvar #0 $varname var
    global $varname
}

# menus
proc PlotColorMenu {w varname color cmd} {
    upvar #0 $varname var
    global $varname

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

proc PlotTitle {varname title xaxis yaxis} {
    upvar #0 $varname var
    global $varname

    set var(graph,title) "$title"
    set var(graph,axis,x,title) "$xaxis"
    set var(graph,axis,y,title) "$yaxis"
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

	    set cc $var(graph,current)

	    # create dir if needed
	    if {![file isdirectory $fdir]} {
		if {[catch {file mkdir $fdir}]} {
		    Error [msgcat::mc {An error has occurred during backup}]
		    return
		}
	    }

	    switch $var($cc,type) {
		line {puts $ch "PlotLineTool"}
		bar {puts $ch "PlotBarTool"}
		scatter {puts $ch "PlotScatterTool"}
		strip {puts $ch "PlotStripTool"}
	    }

	    set save $var($cc,data,current)
	    for {set ii 1} {$ii<=$var($cc,data,total)} {incr ii} {
		set ${varname}($cc,data,current) $ii
		PlotCurrentData $varname

		PlotSaveDataFile $varname "$fdir/plot$ii.dat"
		PlotSaveConfigFile $varname "$fdir/plot$ii.plt"

		puts $ch "PlotLoadDataFile $varname $fdir/plot$ii.dat $var($cc,dim)"
		puts $ch "PlotLoadConfigFile $varname $fdir/plot$ii.plt"
	    }
	    set ${varname}($cc,data,current) $save
	    PlotCurrentData $varname
	}
    }
}
