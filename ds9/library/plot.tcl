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

    set pap(graph,title) {}
    set pap(graph,title,family) helvetica
    set pap(graph,title,size) 12
    set pap(graph,title,weight) normal
    set pap(graph,title,slant) roman

    set pap(legend) 0
    set pap(legend,title) Legend
    set pap(legend,position) right
    set pap(legend,title,family) helvetica
    set pap(legend,title,size) 10
    set pap(legend,title,weight) normal
    set pap(legend,title,slant) roman
    set pap(legend,font,family) helvetica
    set pap(legend,font,size) 9
    set pap(legend,font,weight) normal
    set pap(legend,font,slant) roman

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

    set pap(axis,title,family) helvetica
    set pap(axis,title,size) 9
    set pap(axis,title,weight) normal
    set pap(axis,title,slant) roman

    set pap(axis,font,family) helvetica
    set pap(axis,font,size) 9
    set pap(axis,font,weight) normal
    set pap(axis,font,slant) roman

    set pap(show) 1
    set pap(shape,symbol) none
    set pap(shape,fill) 1
    set pap(shape,color) red
    set pap(smooth) linear
    set pap(color) black
    set pap(fill) 0
    set pap(fill,color) black
    set pap(width) 1
    set pap(dash) 0

    set pap(error) 1
    set pap(error,cap) 0
    set pap(error,color) red
    set pap(error,width) 1

    set pap(bar,relief) raised
    set pap(bar,mode) normal
}

proc PlotAxisFormat {varname axis w nn} {
    upvar #0 $varname var
    global $varname

    return [format $var(axis,$axis,format) $nn]
}

proc PlotClearData {varname} {
    upvar #0 $varname var
    global $varname

    global ds9

    if {$var(data,total) == 0} {
	return
    }

    # first set can be external
    set clear $var(1,manage)

    for {set nn 1} {$nn<=$var(data,total)} {incr nn} {
	if {$var($nn,manage)} {
	    # delete elements
	    foreach el [$var(graph) element names] {
		set f [split $el -]
		if {[lindex $f 1] == $nn} {
		    $var(graph) element delete $el
		}
	    }

	    # destroy vectors
	    blt::vector destroy $var($nn,xdata) $var($nn,ydata)
	    switch $var($nn,dim) {
		xy {}
		xyex {blt::vector destroy $var($nn,xedata)}
		xyey {blt::vector destroy $var($nn,yedata)}
		xyexey {blt::vector destroy $var($nn,xedata) $var($nn,yedata)}
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
	set var(data,total) 0
	set var(data,current) 0

	set var(name) {}
	set var(xdata) {}
	set var(ydata) {}
	set var(xedata) {}
	set var(yedata) {}

	# reset other variables
	set var(axis,x,auto) 1
	set var(axis,x,min) {}
	set var(axis,x,max) {}
	set var(axis,x,format) {}

	set var(axis,y,auto) 1
	set var(axis,y,min) {}
	set var(axis,y,max) {}
	set var(axis,y,format) {}
	
	$var(mb).select delete $ds9(menu,start) end

	$var(proc,updategraph) $varname
	PlotStats $varname
	PlotList $varname
    } else {
 	set var(data,total) 1
 	set var(data,current) 1

	$var(mb).select delete [expr $ds9(menu,start)+1] end
 	PlotCurrentData $varname
	$var(proc,updategraph) $varname
    }
}

proc PlotCurrentData {varname} {
    upvar #0 $varname var
    global $varname

    if {$var(data,total) > 0} {
	set nn $var(data,current)

	set var(manage) $var($nn,manage)
	set var(dim) $var($nn,dim)

	set var(xdata) $var($nn,xdata)
	set var(ydata) $var($nn,ydata)
	set var(xedata) $var($nn,xedata)
	set var(yedata) $var($nn,yedata)

	PlotSetVar $varname $nn
    }

    PlotStats $varname
    PlotList $varname
}

proc PlotDataSet {varname dim data} {
    upvar #0 $varname var
    global $varname

    switch -- $dim {
	4 {
	    # first data set
	    PlotDataSetOne $varname "4.1" $data

	    # set color
	    set cc $var(color)
	    set var(color) [PlotNextColor $var(color)]

	    # second data set
	    PlotDataSetOne $varname "4.2" $data
	    set var(color) $cc
	}
	5 {
	    # first data set
	    PlotDataSetOne $varname "5.1" $data

	    # set color
	    set cc $var(color)
	    set var(color) [PlotNextColor $var(color)]

	    # second data set
	    PlotDataSetOne $varname "5.2" $data
	    set var(color) $cc
	}
	default {PlotDataSetOne $varname $dim $data}
    }
}

proc PlotDataSetOne {varname dim data} {
    upvar #0 $varname var
    global $varname

    # look for no data
    if {[string length $data] == 0} {
	return
    }

    # total length
    set ll [llength $data]
    set ii 0

    while {$ii<$ll} {
	# incr count
	incr ${varname}(data,total) 
	set nn $var(data,total)
	set var(data,current) $nn

	# new vector names
	set xdata ap${varname}xx${nn}
	set ydata ap${varname}yy${nn}
	set xedata ap${varname}xe${nn}
	set yedata ap${varname}ye${nn}

	# basics xy
	set var(manage) 1
	set var(name) "Dataset $nn"
	set var(xdata) $xdata
	set var(ydata) $ydata
	global $var(xdata) $var(ydata)
	blt::vector create $var(xdata) $var(ydata)

	# substitute all separtors
	regsub -all {[\n\r\t, ]+} $data { } data
	# remove all non-numeric data
	regsub -all {[^0-9.e\- ]+} $data {} data

	set ox [lindex $data $ii]
	set x {}
	set y {}
	set xe {}
	set ye {}
	switch -- $dim {
	    2 -
	    xy {
		set var(dim) xy
		set var(xedata) {}
		set var(yedata) {}

		for {} {$ii<$ll} {incr ii 2} {
		    set tx [lindex $data $ii]
		    if {$var(seq)} {
			if {$ox<=$tx} {
			    set ox $tx
			    lappend x $tx
			    lappend y [lindex $data [expr $ii+1]]
			} else {
			    break
			}
		    } else {
			lappend x $tx
			lappend y [lindex $data [expr $ii+1]]
		    }
		}
		$var(xdata) set $x
		$var(ydata) set $y
	    }

	    xyex {
		set var(dim) xyex
		set var(xedata) $xedata
		set var(yedata) {}

		global $var(xedata)
		blt::vector create $var(xedata)

		for {} {$ii<$ll} {incr ii 3} {
		    set tx [lindex $data $ii]
		    if {$var(seq)} {
			if {$ox<=$tx} {
			    set ox $tx
			    lappend x $tx
			    lappend y [lindex $data [expr $ii+1]]
			    lappend xe [lindex $data [expr $ii+2]]
			} else {
			    break
			}
		    } else {
			lappend x $tx
			lappend y [lindex $data [expr $ii+1]]
			lappend xe [lindex $data [expr $ii+2]]
		    }
		}
		$var(xdata) set $x
		$var(ydata) set $y
		$var(xedata) set $xe
	    }

	    3 -
	    xyey {
		set var(dim) xyey
		set var(xedata) {}
		set var(yedata) $yedata

		global $var(yedata)
		blt::vector create $var(yedata)

		for {} {$ii<$ll} {incr ii 3} {
		    set tx [lindex $data $ii]
		    if {$var(seq)} {
			if {$ox<=$tx} {
			    set ox $tx
			    lappend x $tx
			    lappend y [lindex $data [expr $ii+1]]
			    lappend ye [lindex $data [expr $ii+2]]
			} else {
			    break
			}
		    } else {
			lappend x $tx
			lappend y [lindex $data [expr $ii+1]]
			lappend ye [lindex $data [expr $ii+2]]
		    }
		}
		$var(xdata) set $x
		$var(ydata) set $y
		$var(yedata) set $ye
	    }

	    xyexey {
		set var(dim) xyexey
		set var(xedata) $xedata
		set var(yedata) $yedata

		global $var(xedata) $var(yedata)
		blt::vector create $var(xedata) $var(yedata)

		for {} {$ii<$ll} {incr ii 4} {
		    set tx [lindex $data $ii]
		    if {$var(seq)} {
			if {$ox<=$tx} {
			    set ox $tx
			    lappend x $tx
			    lappend y [lindex $data [expr $ii+1]]
			    lappend xe [lindex $data [expr $ii+2]]
			    lappend ye [lindex $data [expr $ii+3]]
			} else {
			    break
			}
		    } else {
			lappend x $tx
			lappend y [lindex $data [expr $ii+1]]
			lappend xe [lindex $data [expr $ii+2]]
			lappend ye [lindex $data [expr $ii+3]]
		    }
		}
		$var(xdata) set $x
		$var(ydata) set $y
		$var(xedata) set $xe
		$var(yedata) set $ye
	    }

	    4.1 {
		set var(dim) xyey
		set var(xedata) {}
		set var(yedata) $yedata

		global $var(yedata)
		blt::vector create $var(yedata)

		for {} {$ii<$ll} {incr ii 4} {
		    set tx [lindex $data $ii]
		    if {$var(seq)} {
			if {$ox<=$tx} {
			    set ox $tx
			    lappend x $tx
			    lappend y [lindex $data [expr $ii+1]]
			    lappend ye [lindex $data [expr $ii+2]]
			} else {
			    break
			}
		    } else {
			lappend x $tx
			lappend y [lindex $data [expr $ii+1]]
			lappend ye [lindex $data [expr $ii+2]]
		    }
		}
		$var(xdata) set $x
		$var(ydata) set $y
		$var(yedata) set $ye
	    }

	    4.2 {
		set var(dim) xy
		set var(xedata) {}
		set var(yedata) {}

		for {} {$ii<$ll} {incr ii 4} {
		    set tx [lindex $data $ii]
		    if {$var(seq)} {
			if {$ox<=$tx} {
			    set ox $tx
			    lappend x $tx
			    lappend y [lindex $data [expr $ii+3]]
			} else {
			    break
			}
		    } else {
			lappend x $tx
			lappend y [lindex $data [expr $ii+3]]
		    }
		}
		$var(xdata) set $x
		$var(ydata) set $y
	    }

	    5.1 {
		set var(dim) xyey
		set var(xedata) {}
		set var(yedata) $yedata

		global $var(yedata)
		blt::vector create $var(yedata)

		for {} {$ii<$ll} {incr ii 5} {
		    set tx [lindex $data $ii]
		    if {$var(seq)} {
			if {$ox<=$tx} {
			    set ox $tx
			    lappend x $tx
			    lappend y [lindex $data [expr $ii+1]]
			    lappend ye [lindex $data [expr $ii+2]]
			} else {
			    break
			}
		    } else {
			lappend x $tx
			lappend y [lindex $data [expr $ii+1]]
			lappend ye [lindex $data [expr $ii+2]]
		    }
		}
		$var(xdata) set $x
		$var(ydata) set $y
		$var(yedata) set $ye
	    }

	    5.2 {
		set var(dim) xyey
		set var(xedata) {}
		set var(yedata) $yedata

		global $var(yedata)
		blt::vector create $var(yedata)

		for {} {$ii<$ll} {incr ii 5} {
		    set tx [lindex $data $ii]
		    if {$var(seq)} {
			if {$ox<=$tx} {
			    set ox $tx
			    lappend x $tx
			    lappend y [lindex $data [expr $ii+3]]
			    lappend ye [lindex $data [expr $ii+4]]
			} else {
			    break
			}
		    } else {
			lappend x $tx
			lappend y [lindex $data [expr $ii+3]]
			lappend ye [lindex $data [expr $ii+4]]
		    }
		}
		$var(xdata) set $x
		$var(ydata) set $y
		$var(yedata) set $ye
	    }
	}

	set var($nn,manage) 1
	set var($nn,dim) $var(dim)

	set var($nn,xdata) $var(xdata) 
	set var($nn,ydata) $var(ydata) 
	set var($nn,xedata) $var(xedata) 
	set var($nn,yedata) $var(yedata) 

	PlotGetVar $varname $nn

	# update data set menu
	$var(mb).select add radiobutton -label "$var(name)" \
	    -variable ${varname}(data,current) -value $nn \
	    -command [list PlotCurrentData $varname]

	PlotCreateElement $varname
	$var(proc,updateelement) $varname
    }
}

proc PlotDupData {varname mm} {
    upvar #0 $varname var
    global $varname

    if {$var(data,total) == 0} {
	return
    }

    # incr count
    incr ${varname}(data,total) 
    set nn $var(data,total)
    set pp [expr $nn-1]

    # new vector names
    set var($nn,name) "Dataset $nn"
    set var($nn,xdata)  ap${varname}xx${nn}
    set var($nn,ydata)  ap${varname}yy${nn}
    set var($nn,xedata) ap${varname}xe${nn}
    set var($nn,yedata) ap${varname}ye${nn}
    global $var($mm,xdata) $var($mm,ydata) $var($mm,xedata) $var($mm,yedata)
    global $var($nn,xdata) $var($nn,ydata) $var($nn,xedata) $var($nn,yedata)
    
    $var($mm,xdata) dup $var($nn,xdata)
    $var($mm,ydata) dup $var($nn,ydata)
    if {$var($mm,xedata) != {}} {
	$var($mm,xedata) dup $var($nn,xedata)
    } else {
	set var($nn,xedata) {}
    }
    if {$var($mm,yedata) != {}} {
	$var($mm,yedata) dup $var($nn,yedata)
    } else {
	set var($nn,yedata) {}
    }

    set var($nn,manage) 1
    set var($nn,dim) $var($mm,dim)

    set var($nn,show) $var($mm,show)
    set var($nn,shape,symbol) $var($mm,shape,symbol)
    set var($nn,shape,fill) $var($mm,shape,fill)
    set var($nn,shape,color) $var($mm,shape,color)
    set var($nn,smooth) $var($mm,smooth)
    set var($nn,color) [PlotNextColor $var($mm,color)]
    set var($nn,fill) $var($mm,fill)
    set var($nn,fill,color) [PlotNextColor $var($mm,fill,color)]
    set var($nn,width) $var($mm,width)
    set var($nn,dash) $var($mm,dash)
    set var($nn,error) $var($mm,error)
    set var($nn,error,cap) $var($mm,error,cap)
    set var($nn,error,color) $var($mm,error,color)
    set var($nn,error,width) $var($mm,error,width)
    set var($nn,bar,relief) $var($mm,bar,relief)

    # update data set menu
    $var(mb).select add radiobutton -label "$var($nn,name)" \
	-variable ${varname}(data,current) -value $nn \
	-command [list PlotCurrentData $varname]

    # make current
    set var(data,current) $nn

    set var(manage) $var($nn,manage)
    set var(dim) $var($nn,dim)

    set var(xdata) $var($nn,xdata)
    set var(ydata) $var($nn,ydata)
    set var(xedata) $var($nn,xedata)
    set var(yedata) $var($nn,yedata)

    PlotSetVar $varname $nn

    PlotCreateElement $varname
    $var(proc,updateelement) $varname
    $var(proc,updategraph) $varname
    PlotStats $varname
    PlotList $varname
}

proc PlotDestroy {varname} {
    upvar #0 $varname var
    global $varname
    
    global iap

    # see if it still is around
    if {![PlotPing $varname]} {
 	return
    }
    
    for {set nn 1} {$nn<=$var(data,total)} {incr nn} {
	switch $var($nn,dim) {
	    xy {
		blt::vector destroy $var($nn,xdata) $var($nn,ydata)
	    }
	    xyex {
		blt::vector destroy $var($nn,xdata) $var($nn,ydata) \
		    $var($nn,xedata)
	    }
	    xyey {
		blt::vector destroy $var($nn,xdata) $var($nn,ydata) \
		    $var($nn,yedata)
	    }
	    xyexey {
		blt::vector destroy $var($nn,xdata) $var($nn,ydata) \
		    $var($nn,xedata) $var($nn,yedata)
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

    # incr count
    incr ${varname}(data,total) 
    set nn $var(data,total)
    set var(data,current) $nn

    set var(name) "Dataset $nn"

    set var($nn,manage) $var(manage)
    set var($nn,dim) $var(dim)

    set var($nn,xdata) $var(xdata) 
    set var($nn,ydata) $var(ydata) 
    set var($nn,xedata) $var(xedata) 
    set var($nn,yedata) $var(yedata) 

    PlotGetVar $varname $nn

    # update data set menu
    $var(mb).select add radiobutton -label "[msgcat::mc {Dataset}] $nn" \
	-variable ${varname}(data,current) -value $nn \
	-command "PlotCurrentData $varname"

    PlotCreateElement $varname
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

    set rr {}
    if {$var(xdata) != {}} {
	global $var(xdata) $var(ydata) $var(xedata) $var(yedata)
	set ll [$var(xdata) length]
	set xx [$var(xdata) range]
	set yy [$var(ydata) range]

	switch $var(dim) {
	    xy {
		for {set ii 0} {$ii<$ll} {incr ii} {
		    append rr "[lindex $xx $ii] [lindex $yy $ii]\n"
		}
	    }
	    xyex {
		set xe [$var(xedata) range]
		for {set ii 0} {$ii<$ll} {incr ii} {
		    append rr "[lindex $xx $ii] [lindex $yy $ii] [lindex $xe $ii]\n"
		}
	    }
	    xyey {
		set ye [$var(yedata) range]
		for {set ii 0} {$ii<$ll} {incr ii} {
		    append rr "[lindex $xx $ii] [lindex $yy $ii] [lindex $ye $ii]\n"
		}
	    }
	    xyexey {
		set xe [$var(xedata) range]
		set ye [$var(yedata) range]
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

proc PlotLoadConfig {varname} {
    upvar #0 $varname var
    global $varname

    PlotLoadConfigFile $varname [OpenFileDialog apconfigfbox]
}

# used by backup
proc PlotLoadConfigFile {varname filename} {
    upvar #0 $varname var
    global $varname

    if {$filename != {}} {
	source $filename
	array set $varname [array get analysisplot]
	unset analysisplot

	# backward compatibility
	FixVar ${varname}(axis,x,grid) ${varname}(graph,x,grid)
	FixVar ${varname}(axis,x,log) ${varname}(graph,x,log)
	FixVar ${varname}(axis,x,flip) ${varname}(graph,x,flip)
	FixVar ${varname}(axis,y,grid) ${varname}(graph,y,grid)
	FixVar ${varname}(axis,y,log) ${varname}(graph,y,log)
	FixVar ${varname}(axis,y,flip) ${varname}(graph,y,flip)

	FixVar ${varname}(graph,title,family) ${varname}(titleFont)
	FixVar ${varname}(graph,title,size) ${varname}(titleSize)
	FixVar ${varname}(graph,title,weight) ${varname}(titleWeight)
	FixVar ${varname}(graph,title,slant) ${varname}(titleSlant)

	FixVar ${varname}(axis,title,family) ${varname}(textlabFont)
	FixVar ${varname}(axis,title,size) ${varname}(textlabSize)
	FixVar ${varname}(axis,title,weight) ${varname}(textlabWeight)
	FixVar ${varname}(axis,title,slant) ${varname}(textlabSlant)

	FixVar ${varname}(axis,font,family) ${varname}(numlabFont)
	FixVar ${varname}(axis,font,size) ${varname}(numlabSize)
	FixVar ${varname}(axis,font,weight) ${varname}(numlabWeight)
	FixVar ${varname}(axis,font,slant) ${varname}(numlabSlant)

	FixVar ${varname}(show) ${varname}(linear)
	FixVar ${varname}(shape,color) ${varname}(discrete,color)
	FixVar ${varname}(shape,fill) ${varname}(discrete,fill)
	FixVar ${varname}(width) ${varname}(linear,width)
	FixVar ${varname}(color) ${varname}(linear,color)
	if {[info exists ${varname}(linear,dash)]} {
	    set var(linear,dash) [FromYesNo $var(linear,dash)]
	}
	FixVar ${varname}(dash) ${varname}(linear,dash)

	if {[info exists ${varname}(discrete)]} {
	    if {$var(discrete)} {
		FixVar ${varname}(shape,symbol) ${varname}(discrete,symbol)
	    } else {
		FixVarRm ${varname}(discrete,symbol)
	    }
	}

	FixVarRm ${varname}(bar)
	FixVarRm ${varname}(bar,color)

	FixVarRm ${varname}(discrete)

	FixVarRm ${varname}(quadratic)
	FixVarRm ${varname}(quadratic,width)
	FixVarRm ${varname}(quadratic,color)
	FixVarRm ${varname}(quadratic,dash)

	FixVarRm ${varname}(step)
	FixVarRm ${varname}(step,color)
	FixVarRm ${varname}(step,dash)
	FixVarRm ${varname}(step,width)

	if {[info exists var(grid)]} {
	    set var(axis,x,grid) $var(grid)
	    set var(axis,y,grid) $var(grid)
	    unset var(grid)
	}
	if {[info exists var(format)]} {
	    set var(graph,format) $var(format)
	    set var(axis,x,format) $var(format,x)
	    set var(axis,y,format) $var(format,y)
	    unset var(format)
	    unset var(format,x)
	    unset var(format,y)
	}

	if {[info exists var(grid,log)]} {
	    switch $var(grid,log) {
		linearlinear {
		    set var(axis,x,log) 0
		    set var(axis,y,log) 0
		}
		linearlog {
		    set var(axis,x,log) 0
		    set var(axis,y,log) 1
		}
		loglinear {
		    set var(axis,x,log) 1
		    set var(axis,y,log) 0
		}
		loglog {
		    set var(axis,x,log) 1
		    set var(axis,y,log) 1
		}
	    }
	    unset var(grid,log)
	}

	$var(proc,updategraph) $varname
	$var(proc,updateelement) $varname
    }
}

proc PlotLoadData {varname} {
    upvar #0 $varname var
    global $varname

    set filename [OpenFileDialog apdatafbox]
    if {$filename != {}} {
	set dim xy
	if {[PlotDataFormatDialog dim]} {
	    PlotLoadDataFile $varname $filename $dim
	}
    }
}

# used by backup
proc PlotLoadDataFile {varname filename dim} {
    upvar #0 $varname var
    global $varname

    set ch [open $filename]
    set data [read $ch]
    close $ch

    PlotRaise $varname

    PlotDataSet $varname $dim $data
    $var(proc,updategraph) $varname
    PlotStats $varname
    PlotList $varname
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

proc PlotSaveConfig {varname} {
    upvar #0 $varname var
    global $varname

    PlotSaveConfigFile $varname [SaveFileDialog apconfigfbox]
}

proc PlotSaveConfigFile {varname filename} {
    upvar #0 $varname var
    global $varname

    if {$filename == {}} {
	return
    }

    set ch [open $filename w]

    set analysisplot(graph,title) $var(graph,title) 
    set analysisplot(graph,title,family) $var(graph,title,family) 
    set analysisplot(graph,title,size) $var(graph,title,size) 
    set analysisplot(graph,title,weight) $var(graph,title,weight) 
    set analysisplot(graph,title,slant) $var(graph,title,slant) 

    set analysisplot(legend) $var(legend)
    set analysisplot(legend,title) $var(legend,title)
    set analysisplot(legend,position) $var(legend,position)
    set analysisplot(legend,title,family) $var(legend,title,family)
    set analysisplot(legend,title,size) $var(legend,title,size)
    set analysisplot(legend,title,weight) $var(legend,title,weight)
    set analysisplot(legend,title,slant) $var(legend,title,slant)
    set analysisplot(legend,font,family) $var(legend,font,family)
    set analysisplot(legend,font,size) $var(legend,font,size)
    set analysisplot(legend,font,weight) $var(legend,font,weight)
    set analysisplot(legend,font,slant) $var(legend,font,slant)

    set analysisplot(axis,x,title) $var(axis,x,title) 
    set analysisplot(axis,x,grid) $var(axis,x,grid)
    set analysisplot(axis,x,log) $var(axis,x,log) 
    set analysisplot(axis,x,flip) $var(axis,x,flip) 
    set analysisplot(axis,x,auto) $var(axis,x,auto)
    set analysisplot(axis,x,min) $var(axis,x,min)
    set analysisplot(axis,x,max) $var(axis,x,max)
    set analysisplot(axis,x,format) $var(axis,x,format)

    set analysisplot(axis,y,title) $var(axis,y,title)
    set analysisplot(axis,y,grid) $var(axis,y,grid)
    set analysisplot(axis,y,log) $var(axis,y,log) 
    set analysisplot(axis,y,flip) $var(axis,y,flip) 
    set analysisplot(axis,y,auto) $var(axis,y,auto)
    set analysisplot(axis,y,min) $var(axis,y,min)
    set analysisplot(axis,y,max) $var(axis,y,max)
    set analysisplot(axis,y,format) $var(axis,y,format)

    set analysisplot(axis,title,family) $var(axis,title,family) 
    set analysisplot(axis,title,size) $var(axis,title,size) 
    set analysisplot(axis,title,weight) $var(axis,title,weight) 
    set analysisplot(axis,title,slant) $var(axis,title,slant) 

    set analysisplot(axis,font,family) $var(axis,font,family) 
    set analysisplot(axis,font,size) $var(axis,font,size) 
    set analysisplot(axis,font,weight) $var(axis,font,weight)
    set analysisplot(axis,font,slant) $var(axis,font,slant)

    set analysisplot(show) $var(show)
    set analysisplot(shape,symbol) $var(shape,symbol)
    set analysisplot(shape,fill) $var(shape,fill)
    set analysisplot(shape,color) $var(shape,color)
    set analysisplot(smooth) $var(smooth)
    set analysisplot(color) $var(color)
    set analysisplot(fill) $var(fill)
    set analysisplot(fill,color) $var(fill,color)
    set analysisplot(width) $var(width)
    set analysisplot(dash) $var(dash)

    set analysisplot(error) $var(error)
    set analysisplot(error,cap) $var(error,cap)
    set analysisplot(error,color) $var(error,color)
    set analysisplot(error,width) $var(error,width)

    set analysisplot(bar,relief) $var(bar,relief)
    set analysisplot(bar,mode) $var(bar,mode)

    puts $ch "array set analysisplot \{ [array get analysisplot] \}"
    close $ch
}

proc PlotSaveData {varname} {
    upvar #0 $varname var
    global $varname

    if {$var(xdata) == {}} {
	return
    }

    PlotSaveDataFile $varname [SaveFileDialog apdatafbox]
}

proc PlotSaveDataFile {varname filename} {
    upvar #0 $varname var
    global $varname

    if {$var(xdata) == {}} {
	return
    }

    if {$filename == {}} {
	return
    }

    global $var(xdata) $var(ydata) $var(xedata) $var(yedata)
    set ll [$var(xdata) length]
    set xx [$var(xdata) range]
    set yy [$var(ydata) range]

    set ch [open $filename w]
    switch $var(dim) {
	xy {
	    for {set ii 0} {$ii<$ll} {incr ii} {
		puts $ch "[lindex $xx $ii] [lindex $yy $ii]"
	    }
	}
	xyex {
	    set xe [$var(xedata) range]
	    for {set ii 0} {$ii<$ll} {incr ii} {
		puts $ch "[lindex $xx $ii] [lindex $yy $ii] [lindex $xe $ii]"
	    }
	}
	xyey {
	    set ye [$var(yedata) range]
	    for {set ii 0} {$ii<$ll} {incr ii} {
		puts $ch "[lindex $xx $ii] [lindex $yy $ii] [lindex $ye $ii]"
	    }
	}
	xyexey {
	    set xe [$var(xedata) range]
	    set ye [$var(yedata) range]
	    for {set ii 0} {$ii<$ll} {incr ii} {
		puts $ch "[lindex $xx $ii] [lindex $yy $ii] [lindex $xe $ii] [lindex $ye $ii]"
	    }
	}
    }
    close $ch

    PlotRaise $varname
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

    set min {}
    set max {}
    set mean {}
    set median {}
    set varr {}
    set sdev {}

    if {$var(ydata) != {}} {
	if {[$var(ydata) length] > 0} {
	    set min [format "%6.3f" [blt::vector expr min($var(ydata))]]
	    set max [format "%6.3f" [blt::vector expr max($var(ydata))]]
	    set mean [format "%6.3f" [blt::vector expr mean($var(ydata))]]
	    set median [format "%6.3f" [blt::vector expr median($var(ydata))]]
	    set varr [format "%6.3f" [expr [blt::vector expr var($var(ydata))]]]
	    set sdev [format "%6.3f" [expr [blt::vector expr sdev($var(ydata))]]]
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

    set var(graph,title) "$title"
    set var(axis,x,title) "$xaxis"
    set var(axis,y,title) "$yaxis"
}

proc PlotUpdateGraph {varname} {
    upvar #0 $varname var
    global $varname

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

    $var(graph) xaxis configure -min $xmin -max $xmax \
	-descending $var(axis,x,flip)
    $var(graph) yaxis configure -min $ymin -max $ymax \
	-descending $var(axis,y,flip)

    if {$var(graph,format)} {
	if {$var(axis,x,format) != {}} {
	    $var(graph) xaxis configure \
		-command [list PlotAxisFormat $varname x]
	} else {
	    $var(graph) xaxis configure -command {}
	}
	if {$var(axis,y,format) != {}} {
	    $var(graph) yaxis configure \
		-command [list PlotAxisFormat $varname y]
	} else {
	    $var(graph) yaxis configure -command {}
	}
    }

    # Menus
    if {$var(xdata) != {}} {
	$var(mb).file entryconfig "[msgcat::mc {Save Data}]..." -state normal
	$var(mb).file entryconfig [msgcat::mc {Clear Data}] -state normal
	$var(mb).file entryconfig [msgcat::mc {Statistics}] -state normal
	$var(mb).file entryconfig [msgcat::mc {List Data}] -state normal

	if {$var(1,manage)} {
	    $var(mb).file entryconfig [msgcat::mc {Duplicate Data}] \
		-state disabled
	} else {
	    $var(mb).file entryconfig [msgcat::mc {Duplicate Data}] \
		-state normal
	}
    } else {
	$var(mb).file entryconfig "[msgcat::mc {Save Data}]..." -state disabled
	$var(mb).file entryconfig [msgcat::mc {Clear Data}] -state disabled
	$var(mb).file entryconfig [msgcat::mc {Duplicate Data}] -state disabled
	$var(mb).file entryconfig [msgcat::mc {Statistics}] -state disabled
	$var(mb).file entryconfig [msgcat::mc {List Data}] -state disabled
    }

    # Graph
    $var(graph) configure -plotpadx 0 -plotpady 0 \
	-title $var(graph,title) \
	-font "{$ds9($var(graph,title,family))} $var(graph,title,size) $var(graph,title,weight) $var(graph,title,slant)"

    $var(graph) xaxis configure \
	-grid $var(axis,x,grid) -logscale $var(axis,x,log) \
	-title $var(axis,x,title) \
	-tickfont "{$ds9($var(axis,font,family))} $var(axis,font,size) $var(axis,font,weight) $var(axis,font,slant)" \
	-titlefont "{$ds9($var(axis,title,family))} $var(axis,title,size) $var(axis,title,weight) $var(axis,title,slant)"
    $var(graph) yaxis configure \
	-grid $var(axis,y,grid) -logscale $var(axis,y,log) \
	-title $var(axis,y,title) \
	-tickfont "{$ds9($var(axis,font,family))} $var(axis,font,size) $var(axis,font,weight) $var(axis,font,slant)" \
	-titlefont "{$ds9($var(axis,title,family))} $var(axis,title,size) $var(axis,title,weight) $var(axis,title,slant)"

    $var(graph) legend configure -hide [expr !$var(legend)] \
	-position $var(legend,position) -title $var(legend,title) \
	-font "{$ds9($var(legend,font,family))} $var(legend,font,size) $var(legend,font,weight) $var(legend,font,slant)" \
	-titlefont "{$ds9($var(legend,title,family))} $var(legend,title,size) $var(legend,title,weight) $var(legend,title,slant)"
}

proc PlotCreateElement {varname} {
    upvar #0 $varname var
    global $varname

    # warning: uses current vars
    if {$var(data,total) == 0} {
	return
    }

    # delete current elements
    set nn $var(data,current)
    foreach el [$var(graph) element names] {
	set f [split $el -]
	if {[lindex $f 1] == $nn} {
	    $var(graph) element delete $el
	}
    }

    global $var(xdata) $var(ydata)
    $var(graph) element create "d-${nn}" -xdata $var(xdata) -ydata $var(ydata)
    if {$var(xedata) != {}} {
	if {[$var(xedata) length] != 0} {
	    $var(graph) element configure "d-${nn}" -xerror $var(xedata)
	}
    }
    if {$var(yedata) != {}} {
	if {[$var(yedata) length] != 0} {
	    $var(graph) element configure "d-${nn}" -yerror $var(yedata)
	}
    }
}

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

proc PlotSetVar {varname nn} {
    upvar #0 $varname var
    global $varname

    set var(name) $var($nn,name)
    set var(show) $var($nn,show) 
    set var(shape,symbol) $var($nn,shape,symbol) 
    set var(shape,fill) $var($nn,shape,fill) 
    set var(shape,color) $var($nn,shape,color) 
    set var(smooth) $var($nn,smooth) 
    set var(color) $var($nn,color) 
    set var(fill) $var($nn,fill) 
    set var(fill,color) $var($nn,fill,color) 
    set var(width) $var($nn,width) 
    set var(dash) $var($nn,dash) 
    set var(error) $var($nn,error) 
    set var(error,cap) $var($nn,error,cap) 
    set var(error,color) $var($nn,error,color) 
    set var(error,width) $var($nn,error,width) 
    set var(bar,relief) $var($nn,bar,relief) 
}

proc PlotGetVar {varname nn} {
    upvar #0 $varname var
    global $varname

    set var($nn,name) $var(name)
    set var($nn,show) $var(show)
    set var($nn,shape,symbol) $var(shape,symbol)
    set var($nn,shape,fill) $var(shape,fill)
    set var($nn,shape,color) $var(shape,color)
    set var($nn,smooth) $var(smooth)
    set var($nn,color) $var(color)
    set var($nn,fill) $var(fill)
    set var($nn,fill,color) $var(fill,color)
    set var($nn,width) $var(width)
    set var($nn,dash) $var(dash)
    set var($nn,error) $var(error)
    set var($nn,error,cap) $var(error,cap)
    set var($nn,error,color) $var(error,color)
    set var($nn,error,width) $var(error,width)
    set var($nn,bar,relief) $var(bar,relief)
}

proc PlotBackup {ch dir} {
    global iap

    set rdir "./[lindex [file split $dir] end]"

    # only save ap plots
    foreach tt $iap(windows) {
	if {[string range $tt 0 1] == {ap}} {
	    set fdir [file join $dir $tt]
	    
	    set varname $tt
	    upvar #0 $varname var
	    global $varname

	    # create dir if needed
	    if {![file isdirectory $fdir]} {
		if {[catch {file mkdir $fdir}]} {
		    Error [msgcat::mc {An error has occurred during backup}]
		    return
		}
	    }

	    switch $var(type) {
		line {puts $ch "PlotLineTool"}
		bar {puts $ch "PlotBarTool"}
		scatter {puts $ch "PlotScatterTool"}
	    }

	    set save $var(data,current)
	    for {set ii 1} {$ii<=$var(data,total)} {incr ii} {
		set ${varname}(data,current) $ii
		PlotCurrentData $varname

		PlotSaveDataFile $varname "$fdir/plot$ii.dat"
		PlotSaveConfigFile $varname "$fdir/plot$ii.plt"

		puts $ch "PlotLoadDataFile $varname $fdir/plot$ii.dat $var(dim)"
		puts $ch "PlotLoadConfigFile $varname $fdir/plot$ii.plt"
	    }
	    set ${varname}(data,current) $save
	    PlotCurrentData $varname
	}
    }
}
