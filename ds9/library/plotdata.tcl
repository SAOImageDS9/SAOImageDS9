#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

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

proc PlotSaveData {varname} {
    upvar #0 $varname var
    global $varname

    set tt $var(graph,total)
    set cc $var(graph,current)

    if {$var(graph$cc,xdata) == {}} {
	return
    }

    PlotSaveDataFile $varname [SaveFileDialog apdatafbox]
}

proc PlotSaveDataFile {varname filename} {
    upvar #0 $varname var
    global $varname

    set tt $var(graph,total)
    set cc $var(graph,current)

    if {$var(graph$cc,xdata) == {}} {
	return
    }

    if {$filename == {}} {
	return
    }

    global $var(graph$cc,xdata) $var(graph$cc,ydata) \
	$var(graph$cc,xedata) $var(graph$cc,yedata)
    set ll [$var(graph$cc,xdata) length]
    set xx [$var(graph$cc,xdata) range]
    set yy [$var(graph$cc,ydata) range]

    set ch [open $filename w]
    switch $var(graph$cc,dim) {
	xy {
	    for {set ii 0} {$ii<$ll} {incr ii} {
		puts $ch "[lindex $xx $ii] [lindex $yy $ii]"
	    }
	}
	xyex {
	    set xe [$var(graph$cc,xedata) range]
	    for {set ii 0} {$ii<$ll} {incr ii} {
		puts $ch "[lindex $xx $ii] [lindex $yy $ii] [lindex $xe $ii]"
	    }
	}
	xyey {
	    set ye [$var(graph$cc,yedata) range]
	    for {set ii 0} {$ii<$ll} {incr ii} {
		puts $ch "[lindex $xx $ii] [lindex $yy $ii] [lindex $ye $ii]"
	    }
	}
	xyexey {
	    set xe [$var(graph$cc,xedata) range]
	    set ye [$var(graph$cc,yedata) range]
	    for {set ii 0} {$ii<$ll} {incr ii} {
		puts $ch "[lindex $xx $ii] [lindex $yy $ii] [lindex $xe $ii] [lindex $ye $ii]"
	    }
	}
    }
    close $ch

    PlotRaise $varname
}

proc PlotDataSet {varname dim data} {
    upvar #0 $varname var
    global $varname

    set tt $var(graph,total)
    set cc $var(graph,current)

    switch -- $dim {
	4 {
	    # first data set
	    PlotDataSetOne $varname "4.1" $data

	    # second data set
	    PlotDataSetOne $varname "4.2" $data

	    $var(proc,updateelement) $varname
	}
	5 {
	    # first data set
	    PlotDataSetOne $varname "5.1" $data

	    # second data set
	    PlotDataSetOne $varname "5.2" $data

	    $var(proc,updateelement) $varname
	}
	default {PlotDataSetOne $varname $dim $data}
    }
}

proc PlotDataSetOne {varname dim data} {
    upvar #0 $varname var
    global $varname

    # save current state
    PlotSaveState $varname

    set tt $var(graph,total)
    set cc $var(graph,current)

    # look for no data
    if {[string length $data] == 0} {
	return
    }

    # total length
    set ll [llength $data]

    # incr count
    incr ${varname}(graph$cc,data,total) 
    set nn $var(graph$cc,data,total)
    set var(graph$cc,data,current) $nn

    # init new state
    PlotInitState $varname
    
    # new vector names
    set xdata ap${varname}xx${nn}
    set ydata ap${varname}yy${nn}
    set xedata ap${varname}xe${nn}
    set yedata ap${varname}ye${nn}

    # basics xy
    set var(graph$cc,manage) 1
    set var(graph,ds,name) "Dataset $nn"
    set var(graph$cc,xdata) $xdata
    set var(graph$cc,ydata) $ydata
    global $var(graph$cc,xdata) $var(graph$cc,ydata)
    blt::vector create $var(graph$cc,xdata) $var(graph$cc,ydata)

    # substitute all separtors
    regsub -all {[\n\r\t, ]+} $data { } data
    # remove all non-numeric data
    regsub -all {[^0-9.e\- ]+} $data {} data

    set x {}
    set y {}
    set xe {}
    set ye {}
    switch -- $dim {
	2 -
	xy {
	    set var(graph$cc,dim) xy
	    set var(graph$cc,xedata) {}
	    set var(graph$cc,yedata) {}

	    for {set ii 0} {$ii<$ll} {incr ii 2} {
		lappend x [lindex $data $ii]
		lappend y [lindex $data [expr $ii+1]]
	    }
	    $var(graph$cc,xdata) set $x
	    $var(graph$cc,ydata) set $y
	}

	xyex {
	    set var(graph$cc,dim) xyex
	    set var(graph$cc,xedata) $xedata
	    set var(graph$cc,yedata) {}

	    global $var(graph$cc,xedata)
	    blt::vector create $var(graph$cc,xedata)

	    for {set ii 0} {$ii<$ll} {incr ii 3} {
		lappend x [lindex $data $ii]
		lappend y [lindex $data [expr $ii+1]]
		lappend xe [lindex $data [expr $ii+2]]
	    }
	    $var(graph$cc,xdata) set $x
	    $var(graph$cc,ydata) set $y
	    $var(graph$cc,xedata) set $xe
	}

	3 -
	xyey {
	    set var(graph$cc,dim) xyey
	    set var(graph$cc,xedata) {}
	    set var(graph$cc,yedata) $yedata

	    global $var(graph$cc,yedata)
	    blt::vector create $var(graph$cc,yedata)

	    for {set ii 0} {$ii<$ll} {incr ii 3} {
		lappend x [lindex $data $ii]
		lappend y [lindex $data [expr $ii+1]]
		lappend ye [lindex $data [expr $ii+2]]
	    }
	    $var(graph$cc,xdata) set $x
	    $var(graph$cc,ydata) set $y
	    $var(graph$cc,yedata) set $ye
	}

	xyexey {
	    set var(graph$cc,dim) xyexey
	    set var(graph$cc,xedata) $xedata
	    set var(graph$cc,yedata) $yedata

	    global $var(graph$cc,xedata) $var(graph$cc,yedata)
	    blt::vector create $var(graph$cc,xedata) $var(graph$cc,yedata)

	    for {set ii 0} {$ii<$ll} {incr ii 4} {
		lappend x [lindex $data $ii]
		lappend y [lindex $data [expr $ii+1]]
		lappend xe [lindex $data [expr $ii+2]]
		lappend ye [lindex $data [expr $ii+3]]
	    }
	    $var(graph$cc,xdata) set $x
	    $var(graph$cc,ydata) set $y
	    $var(graph$cc,xedata) set $xe
	    $var(graph$cc,yedata) set $ye
	}

	4.1 {
	    set var(graph$cc,dim) xyey
	    set var(graph$cc,xedata) {}
	    set var(graph$cc,yedata) $yedata

	    global $var(graph$cc,yedata)
	    blt::vector create $var(graph$cc,yedata)

	    for {set ii 0} {$ii<$ll} {incr ii 4} {
		lappend x [lindex $data $ii]
		lappend y [lindex $data [expr $ii+1]]
		lappend ye [lindex $data [expr $ii+2]]
	    }
	    $var(graph$cc,xdata) set $x
	    $var(graph$cc,ydata) set $y
	    $var(graph$cc,yedata) set $ye
	}

	4.2 {
	    set var(graph$cc,dim) xy
	    set var(graph$cc,xedata) {}
	    set var(graph$cc,yedata) {}

	    for {set ii 0} {$ii<$ll} {incr ii 4} {
		lappend x [lindex $data $ii]
		lappend y [lindex $data [expr $ii+3]]
	    }
	    $var(graph$cc,xdata) set $x
	    $var(graph$cc,ydata) set $y
	}

	5.1 {
	    set var(graph$cc,dim) xyey
	    set var(graph$cc,xedata) {}
	    set var(graph$cc,yedata) $yedata

	    global $var(graph$cc,yedata)
	    blt::vector create $var(graph$cc,yedata)

	    for {set ii 0} {$ii<$ll} {incr ii 5} {
		lappend x [lindex $data $ii]
		lappend y [lindex $data [expr $ii+1]]
		lappend ye [lindex $data [expr $ii+2]]
	    }
	    $var(graph$cc,xdata) set $x
	    $var(graph$cc,ydata) set $y
	    $var(graph$cc,yedata) set $ye
	}

	5.2 {
	    set var(graph$cc,dim) xyey
	    set var(graph$cc,xedata) {}
	    set var(graph$cc,yedata) $yedata

	    global $var(graph$cc,yedata)
	    blt::vector create $var(graph$cc,yedata)

	    for {set ii 0} {$ii<$ll} {incr ii 5} {
		lappend x [lindex $data $ii]
		lappend y [lindex $data [expr $ii+3]]
		lappend ye [lindex $data [expr $ii+4]]
	    }
	    $var(graph$cc,xdata) set $x
	    $var(graph$cc,ydata) set $y
	    $var(graph$cc,yedata) set $ye
	}
    }

    set var(graph$cc,$nn,manage) 1
    set var(graph$cc,$nn,dim) $var(graph$cc,dim)

    set var(graph$cc,$nn,xdata) $var(graph$cc,xdata) 
    set var(graph$cc,$nn,ydata) $var(graph$cc,ydata) 
    set var(graph$cc,$nn,xedata) $var(graph$cc,xedata) 
    set var(graph$cc,$nn,yedata) $var(graph$cc,yedata) 

    PlotSaveState $varname

    # update data set menu
    $var(mb).graph.select add radiobutton -label "$var(graph,ds,name)" \
	-variable ${varname}(graph$cc,data,current) -value $nn \
	-command [list PlotCurrentData $varname]

    PlotAddData $varname
    $var(proc,updateelement) $varname
}

proc PlotDupData {varname mm} {
    upvar #0 $varname var
    global $varname

    set tt $var(graph,total)
    set cc $var(graph,current)

    if {$var(graph$cc,data,total) == 0} {
	return
    }

    # incr count
    incr ${varname}(graph$cc,data,total) 
    set nn $var(graph$cc,data,total)
    set pp [expr $nn-1]

    # new vector names
    set var(graph$cc,$nn,name) "Dataset $nn"
    set var(graph$cc,$nn,xdata)  ap${varname}xx${nn}
    set var(graph$cc,$nn,ydata)  ap${varname}yy${nn}
    set var(graph$cc,$nn,xedata) ap${varname}xe${nn}
    set var(graph$cc,$nn,yedata) ap${varname}ye${nn}
    global $var(graph$cc,$mm,xdata) $var(graph$cc,$mm,ydata) \
	$var(graph$cc,$mm,xedata) $var(graph$cc,$mm,yedata)
    global $var(graph$cc,$nn,xdata) $var(graph$cc,$nn,ydata) \
	$var(graph$cc,$nn,xedata) $var(graph$cc,$nn,yedata)
    
    $var(graph$cc,$mm,xdata) dup $var(graph$cc,$nn,xdata)
    $var(graph$cc,$mm,ydata) dup $var(graph$cc,$nn,ydata)
    if {$var(graph$cc,$mm,xedata) != {}} {
	$var(graph$cc,$mm,xedata) dup $var(graph$cc,$nn,xedata)
    } else {
	set var(graph$cc,$nn,xedata) {}
    }
    if {$var(graph$cc,$mm,yedata) != {}} {
	$var(graph$cc,$mm,yedata) dup $var(graph$cc,$nn,yedata)
    } else {
	set var(graph$cc,$nn,yedata) {}
    }

    set var(graph$cc,$nn,manage) 1
    set var(graph$cc,$nn,dim) $var(graph$cc,$mm,dim)

    set var(graph$cc,$nn,show) $var(graph$cc,$mm,show)
    set var(graph$cc,$nn,smooth) $var(graph$cc,$mm,smooth)
    set var(graph$cc,$nn,color) $var(graph$cc,$mm,color)
    set var(graph$cc,$nn,fill) $var(graph$cc,$mm,fill)
    set var(graph$cc,$nn,fill,color) $var(graph$cc,$mm,fill,color)
    set var(graph$cc,$nn,width) $var(graph$cc,$mm,width)
    set var(graph$cc,$nn,dash) $var(graph$cc,$mm,dash)

    set var(graph$cc,$nn,shape,symbol) $var(graph$cc,$mm,shape,symbol)
    set var(graph$cc,$nn,shape,fill) $var(graph$cc,$mm,shape,fill)
    set var(graph$cc,$nn,shape,color) $var(graph$cc,$mm,shape,color)

    set var(graph$cc,$nn,error) $var(graph$cc,$mm,error)
    set var(graph$cc,$nn,error,cap) $var(graph$cc,$mm,error,cap)
    set var(graph$cc,$nn,error,color) $var(graph$cc,$mm,error,color)
    set var(graph$cc,$nn,error,width) $var(graph$cc,$mm,error,width)

    set var(graph$cc,$nn,bar,relief) $var(graph$cc,$mm,bar,relief)

    # update data set menu
    $var(mb).graph.select add radiobutton -label "$var(graph$cc,$nn,name)" \
	-variable ${varname}(graph$cc,data,current) -value $nn \
	-command [list PlotCurrentData $varname]

    # make current
    set var(graph$cc,data,current) $nn

    set var(graph$cc,manage) $var(graph$cc,$nn,manage)
    set var(graph$cc,dim) $var(graph$cc,$nn,dim)

    set var(graph$cc,xdata) $var(graph$cc,$nn,xdata)
    set var(graph$cc,ydata) $var(graph$cc,$nn,ydata)
    set var(graph$cc,xedata) $var(graph$cc,$nn,xedata)
    set var(graph$cc,yedata) $var(graph$cc,$nn,yedata)

    PlotRestoreState $varname $nn

    PlotAddData $varname
    $var(proc,updateelement) $varname
    $var(proc,updategraph) $varname
    PlotStats $varname
    PlotList $varname
}
