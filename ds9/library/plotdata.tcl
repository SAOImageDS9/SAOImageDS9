#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc PlotDataSet {varname dim data} {
    upvar #0 $varname var
    global $varname

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

    set cc $var(graph,current)

    # look for no data
    if {[string length $data] == 0} {
	return
    }

    # total length
    set ll [llength $data]

    # incr count
    incr ${varname}($cc,data,total) 
    set nn $var($cc,data,total)
    set var($cc,data,current) $nn

    # init new state
    global pap
    set var(graph,ds,show) $pap(graph,ds,show)
    set var(graph,ds,smooth) $pap(graph,ds,smooth)
    set var(graph,ds,color) $pap(graph,ds,color)
    set var(graph,ds,fill) $pap(graph,ds,fill)
    set var(graph,ds,fill,color) $pap(graph,ds,fill,color)
    set var(graph,ds,width) $pap(graph,ds,width)
    set var(graph,ds,dash) $pap(graph,ds,dash)

    set var(graph,ds,shape,symbol) $pap(graph,ds,shape,symbol)
    set var(graph,ds,shape,fill) $pap(graph,ds,shape,fill)
    set var(graph,ds,shape,color) $pap(graph,ds,shape,color)

    set var(graph,ds,error) $pap(graph,ds,error)
    set var(graph,ds,error,cap) $pap(graph,ds,error,cap)
    set var(graph,ds,error,color) $pap(graph,ds,error,color)
    set var(graph,ds,error,width) $pap(graph,ds,error,width)

    set var(graph,ds,bar,relief) $pap(graph,ds,bar,relief)
    
    # new vector names
    set xdata ap${varname}graph${cc}xx${nn}
    set ydata ap${varname}graph${cc}yy${nn}
    set xedata ap${varname}graph${cc}xe${nn}
    set yedata ap${varname}graph${cc}ye${nn}

    # basics
    set var($cc,manage) 1
    set var(graph,ds,name) "Dataset $nn"

    # vectors
    set var($cc,xdata) $xdata
    set var($cc,ydata) $ydata
    set var($cc,xedata) {}
    set var($cc,yedata) {}

    global $var($cc,xdata) $var($cc,ydata)
    blt::vector create $var($cc,xdata) $var($cc,ydata)

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
	    set var($cc,dim) xy

	    for {set ii 0} {$ii<$ll} {incr ii 2} {
		lappend x [lindex $data $ii]
		lappend y [lindex $data [expr $ii+1]]
	    }
	    $var($cc,xdata) set $x
	    $var($cc,ydata) set $y
	}

	xyex {
	    set var($cc,dim) xyex
	    set var($cc,xedata) $xedata

	    global $var($cc,xedata)
	    blt::vector create $var($cc,xedata)

	    for {set ii 0} {$ii<$ll} {incr ii 3} {
		lappend x [lindex $data $ii]
		lappend y [lindex $data [expr $ii+1]]
		lappend xe [lindex $data [expr $ii+2]]
	    }
	    $var($cc,xdata) set $x
	    $var($cc,ydata) set $y
	    $var($cc,xedata) set $xe
	}

	3 -
	xyey {
	    set var($cc,dim) xyey
	    set var($cc,yedata) $yedata

	    global $var($cc,yedata)
	    blt::vector create $var($cc,yedata)

	    for {set ii 0} {$ii<$ll} {incr ii 3} {
		lappend x [lindex $data $ii]
		lappend y [lindex $data [expr $ii+1]]
		lappend ye [lindex $data [expr $ii+2]]
	    }
	    $var($cc,xdata) set $x
	    $var($cc,ydata) set $y
	    $var($cc,yedata) set $ye
	}

	xyexey {
	    set var($cc,dim) xyexey
	    set var($cc,xedata) $xedata
	    set var($cc,yedata) $yedata

	    global $var($cc,xedata) $var($cc,yedata)
	    blt::vector create $var($cc,xedata) $var($cc,yedata)

	    for {set ii 0} {$ii<$ll} {incr ii 4} {
		lappend x [lindex $data $ii]
		lappend y [lindex $data [expr $ii+1]]
		lappend xe [lindex $data [expr $ii+2]]
		lappend ye [lindex $data [expr $ii+3]]
	    }
	    $var($cc,xdata) set $x
	    $var($cc,ydata) set $y
	    $var($cc,xedata) set $xe
	    $var($cc,yedata) set $ye
	}

	4.1 {
	    set var($cc,dim) xyey
	    set var($cc,yedata) $yedata

	    global $var($cc,yedata)
	    blt::vector create $var($cc,yedata)

	    for {set ii 0} {$ii<$ll} {incr ii 4} {
		lappend x [lindex $data $ii]
		lappend y [lindex $data [expr $ii+1]]
		lappend ye [lindex $data [expr $ii+2]]
	    }
	    $var($cc,xdata) set $x
	    $var($cc,ydata) set $y
	    $var($cc,yedata) set $ye
	}

	4.2 {
	    set var($cc,dim) xy

	    for {set ii 0} {$ii<$ll} {incr ii 4} {
		lappend x [lindex $data $ii]
		lappend y [lindex $data [expr $ii+3]]
	    }
	    $var($cc,xdata) set $x
	    $var($cc,ydata) set $y
	}

	5.1 {
	    set var($cc,dim) xyey
	    set var($cc,yedata) $yedata

	    global $var($cc,yedata)
	    blt::vector create $var($cc,yedata)

	    for {set ii 0} {$ii<$ll} {incr ii 5} {
		lappend x [lindex $data $ii]
		lappend y [lindex $data [expr $ii+1]]
		lappend ye [lindex $data [expr $ii+2]]
	    }
	    $var($cc,xdata) set $x
	    $var($cc,ydata) set $y
	    $var($cc,yedata) set $ye
	}

	5.2 {
	    set var($cc,dim) xyey
	    set var($cc,yedata) $yedata

	    global $var($cc,yedata)
	    blt::vector create $var($cc,yedata)

	    for {set ii 0} {$ii<$ll} {incr ii 5} {
		lappend x [lindex $data $ii]
		lappend y [lindex $data [expr $ii+3]]
		lappend ye [lindex $data [expr $ii+4]]
	    }
	    $var($cc,xdata) set $x
	    $var($cc,ydata) set $y
	    $var($cc,yedata) set $ye
	}
    }

    set var($cc,$nn,manage) 1
    set var($cc,$nn,dim) $var($cc,dim)

    PlotSaveState $varname

    # update data set menu
    $var(mb).graph.select add radiobutton -label "$var(graph,ds,name)" \
	-variable ${varname}($cc,data,current) -value $nn \
	-command [list PlotCurrentData $varname]

    PlotAddData $varname
    $var(proc,updateelement) $varname
}

proc PlotDupData {varname mm} {
    upvar #0 $varname var
    global $varname

    set cc $var(graph,current)

    if {$var($cc,data,total) == 0} {
	return
    }

    # incr count
    incr ${varname}($cc,data,total) 
    set nn $var($cc,data,total)
    set pp [expr $nn-1]

    # new vector names
    set xdata ap${varname}graph${cc}xx${nn}
    set ydata ap${varname}graph${cc}yy${nn}
    set xedata ap${varname}graph${cc}xe${nn}
    set yedata ap${varname}graph${cc}ye${nn}

    # basics
    set var($cc,$nn,manage) 1
    set var($cc,$nn,name) "Dataset $nn"

    set var($cc,$nn,xdata) $xdata
    set var($cc,$nn,ydata) $ydata
    set var($cc,$nn,xedata) $xedata
    set var($cc,$nn,yedata) $yedata
    
    global $var($cc,$mm,xdata) $var($cc,$mm,ydata) \
	$var($cc,$mm,xedata) $var($cc,$mm,yedata)
    global $var($cc,$nn,xdata) $var($cc,$nn,ydata) \
	$var($cc,$nn,xedata) $var($cc,$nn,yedata)
    
    $var($cc,$mm,xdata) dup $var($cc,$nn,xdata)
    $var($cc,$mm,ydata) dup $var($cc,$nn,ydata)
    if {$var($cc,$mm,xedata) != {}} {
	$var($cc,$mm,xedata) dup $var($cc,$nn,xedata)
    } else {
	set var($cc,$nn,xedata) {}
    }
    if {$var($cc,$mm,yedata) != {}} {
	$var($cc,$mm,yedata) dup $var($cc,$nn,yedata)
    } else {
	set var($cc,$nn,yedata) {}
    }

    set var($cc,$nn,dim) $var($cc,$mm,dim)

    set var($cc,$nn,show) $var($cc,$mm,show)
    set var($cc,$nn,smooth) $var($cc,$mm,smooth)
    set var($cc,$nn,color) $var($cc,$mm,color)
    set var($cc,$nn,fill) $var($cc,$mm,fill)
    set var($cc,$nn,fill,color) $var($cc,$mm,fill,color)
    set var($cc,$nn,width) $var($cc,$mm,width)
    set var($cc,$nn,dash) $var($cc,$mm,dash)

    set var($cc,$nn,shape,symbol) $var($cc,$mm,shape,symbol)
    set var($cc,$nn,shape,fill) $var($cc,$mm,shape,fill)
    set var($cc,$nn,shape,color) $var($cc,$mm,shape,color)

    set var($cc,$nn,error) $var($cc,$mm,error)
    set var($cc,$nn,error,cap) $var($cc,$mm,error,cap)
    set var($cc,$nn,error,color) $var($cc,$mm,error,color)
    set var($cc,$nn,error,width) $var($cc,$mm,error,width)

    set var($cc,$nn,bar,relief) $var($cc,$mm,bar,relief)

    # update data set menu
    $var(mb).graph.select add radiobutton -label "$var($cc,$nn,name)" \
	-variable ${varname}($cc,data,current) -value $nn \
	-command [list PlotCurrentData $varname]

    # make current
    set var($cc,data,current) $nn

    set var($cc,manage) $var($cc,$nn,manage)
    set var($cc,dim) $var($cc,$nn,dim)

    PlotRestoreState $varname $nn

    PlotAddData $varname
    $var(proc,updateelement) $varname
    $var(proc,updategraph) $varname
    PlotStats $varname
    PlotList $varname
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

proc PlotSaveData {varname} {
    upvar #0 $varname var
    global $varname

    set cc $var(graph,current)

    if {$var($cc,xdata) == {}} {
	return
    }

    PlotSaveDataFile $varname [SaveFileDialog apdatafbox]
}

proc PlotSaveDataFile {varname filename} {
    upvar #0 $varname var
    global $varname

    set cc $var(graph,current)

    if {$var($cc,xdata) == {}} {
	return
    }

    if {$filename == {}} {
	return
    }

    global $var($cc,xdata) $var($cc,ydata) \
	$var($cc,xedata) $var($cc,yedata)
    set ll [$var($cc,xdata) length]
    set xx [$var($cc,xdata) range]
    set yy [$var($cc,ydata) range]

    set ch [open $filename w]
    switch $var($cc,dim) {
	xy {
	    for {set ii 0} {$ii<$ll} {incr ii} {
		puts $ch "[lindex $xx $ii] [lindex $yy $ii]"
	    }
	}
	xyex {
	    set xe [$var($cc,xedata) range]
	    for {set ii 0} {$ii<$ll} {incr ii} {
		puts $ch "[lindex $xx $ii] [lindex $yy $ii] [lindex $xe $ii]"
	    }
	}
	xyey {
	    set ye [$var($cc,yedata) range]
	    for {set ii 0} {$ii<$ll} {incr ii} {
		puts $ch "[lindex $xx $ii] [lindex $yy $ii] [lindex $ye $ii]"
	    }
	}
	xyexey {
	    set xe [$var($cc,xedata) range]
	    set ye [$var($cc,yedata) range]
	    for {set ii 0} {$ii<$ll} {incr ii} {
		puts $ch "[lindex $xx $ii] [lindex $yy $ii] [lindex $xe $ii] [lindex $ye $ii]"
	    }
	}
    }
    close $ch

    PlotRaise $varname
}

