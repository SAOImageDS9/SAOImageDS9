#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc PlotAddDataSet {varname dim data} {
    upvar #0 $varname var
    global $varname

    switch -- $dim {
	4 {
	    # first data set
	    PlotDataSetOne $varname "4.1" $data

	    # second data set
	    PlotDataSetOne $varname "4.2" $data
	}
	5 {
	    # first data set
	    PlotDataSetOne $varname "5.1" $data

	    # second data set
	    PlotDataSetOne $varname "5.2" $data
	}
	default {
	    PlotDataSetOne $varname $dim $data
	}
    }
}

proc PlotDataSetOne {varname dim data} {
    upvar #0 $varname var
    global $varname

    set cc $var(graph,current)

    # look for no data
    if {[string length $data] == 0} {
	return
    }

    # incr count
    incr ${varname}(graph,seq)
    set nn $var(graph,seq)
    lappend ${varname}(graph,dss) $nn
    set var(graph,ds,current) $nn

    set var(graph,ds,manage) 1
    set var(graph,ds,name) "Dataset $nn"

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

    # vectors
    set var(graph,ds,xdata) $xdata
    set var(graph,ds,ydata) $ydata
    set var(graph,ds,xedata) {}
    set var(graph,ds,yedata) {}

    global $var(graph,ds,xdata) $var(graph,ds,ydata)
    blt::vector create $var(graph,ds,xdata) $var(graph,ds,ydata)

    # substitute all separtors
    regsub -all {[\n\r\t, ]+} $data { } data
    # remove all non-numeric data
    regsub -all {[^0-9.e\- ]+} $data {} data

    set x {}
    set y {}
    set xe {}
    set ye {}
    set ll [llength $data]

    switch -- $dim {
	2 -
	xy {
	    set var(graph,ds,dim) xy

	    for {set ii 0} {$ii<$ll} {incr ii 2} {
		lappend x [lindex $data $ii]
		lappend y [lindex $data [expr $ii+1]]
	    }
	    $var(graph,ds,xdata) set $x
	    $var(graph,ds,ydata) set $y
	}

	xyex {
	    set var(graph,ds,dim) xyex
	    set var(graph,ds,xedata) $xedata

	    global $var(graph,ds,xedata)
	    blt::vector create $var(graph,ds,xedata)

	    for {set ii 0} {$ii<$ll} {incr ii 3} {
		lappend x [lindex $data $ii]
		lappend y [lindex $data [expr $ii+1]]
		lappend xe [lindex $data [expr $ii+2]]
	    }
	    $var(graph,ds,xdata) set $x
	    $var(graph,ds,ydata) set $y
	    $var(graph,ds,xedata) set $xe
	}

	3 -
	xyey {
	    set var(graph,ds,dim) xyey
	    set var(graph,ds,yedata) $yedata

	    global $var(graph,ds,yedata)
	    blt::vector create $var(graph,ds,yedata)

	    for {set ii 0} {$ii<$ll} {incr ii 3} {
		lappend x [lindex $data $ii]
		lappend y [lindex $data [expr $ii+1]]
		lappend ye [lindex $data [expr $ii+2]]
	    }
	    $var(graph,ds,xdata) set $x
	    $var(graph,ds,ydata) set $y
	    $var(graph,ds,yedata) set $ye
	}

	xyexey {
	    set var(graph,ds,dim) xyexey
	    set var(graph,ds,xedata) $xedata
	    set var(graph,ds,yedata) $yedata

	    global $var(graph,ds,xedata) $var(graph,ds,yedata)
	    blt::vector create $var(graph,ds,xedata) $var(graph,ds,yedata)

	    for {set ii 0} {$ii<$ll} {incr ii 4} {
		lappend x [lindex $data $ii]
		lappend y [lindex $data [expr $ii+1]]
		lappend xe [lindex $data [expr $ii+2]]
		lappend ye [lindex $data [expr $ii+3]]
	    }
	    $var(graph,ds,xdata) set $x
	    $var(graph,ds,ydata) set $y
	    $var(graph,ds,xedata) set $xe
	    $var(graph,ds,yedata) set $ye
	}

	4.1 {
	    set var(graph,ds,dim) xyey
	    set var(graph,ds,yedata) $yedata

	    global $var(graph,ds,yedata)
	    blt::vector create $var(graph,ds,yedata)

	    for {set ii 0} {$ii<$ll} {incr ii 4} {
		lappend x [lindex $data $ii]
		lappend y [lindex $data [expr $ii+1]]
		lappend ye [lindex $data [expr $ii+2]]
	    }
	    $var(graph,ds,xdata) set $x
	    $var(graph,ds,ydata) set $y
	    $var(graph,ds,yedata) set $ye
	}

	4.2 {
	    set var(graph,ds,dim) xy

	    for {set ii 0} {$ii<$ll} {incr ii 4} {
		lappend x [lindex $data $ii]
		lappend y [lindex $data [expr $ii+3]]
	    }
	    $var(graph,ds,xdata) set $x
	    $var(graph,ds,ydata) set $y
	}

	5.1 {
	    set var(graph,ds,dim) xyey
	    set var(graph,ds,yedata) $yedata

	    global $var(graph,ds,yedata)
	    blt::vector create $var(graph,ds,yedata)

	    for {set ii 0} {$ii<$ll} {incr ii 5} {
		lappend x [lindex $data $ii]
		lappend y [lindex $data [expr $ii+1]]
		lappend ye [lindex $data [expr $ii+2]]
	    }
	    $var(graph,ds,xdata) set $x
	    $var(graph,ds,ydata) set $y
	    $var(graph,ds,yedata) set $ye
	}

	5.2 {
	    set var(graph,ds,dim) xyey
	    set var(graph,ds,yedata) $yedata

	    global $var(graph,ds,yedata)
	    blt::vector create $var(graph,ds,yedata)

	    for {set ii 0} {$ii<$ll} {incr ii 5} {
		lappend x [lindex $data $ii]
		lappend y [lindex $data [expr $ii+3]]
		lappend ye [lindex $data [expr $ii+4]]
	    }
	    $var(graph,ds,xdata) set $x
	    $var(graph,ds,ydata) set $y
	    $var(graph,ds,yedata) set $ye
	}
    }

    PlotAddElement $varname
}

proc PlotExternal {varname dim} {
    upvar #0 $varname var
    global $varname

    global ds9
    
    # incr count
    incr ${varname}(graph,seq) 
    set nn $var(graph,seq)
    lappend ${varname}(graph,dss) $nn
    set var(graph,ds,current) $nn

    set var(graph,ds,manage) 0
    set var(graph,ds,name) "Dataset $nn"

    set var(graph,ds,dim) $dim

    set var(graph,ds,color) $ds9(plot,fg)
    set var(graph,ds,fill,color) $ds9(plot,fg)

    PlotAddElement $varname
}

proc PlotDupDataSet {varname} {
    upvar #0 $varname var
    global $varname

    set cc $var(graph,current)
    if {[llength $var($cc,dss)] == 0} {
	return
    }
    set mm $var(graph,ds,current)

    # incr count
    incr ${varname}(graph,seq) 
    set nn $var(graph,seq)
    lappend var(graph,dss) $nn
    set var(graph,ds,current) $nn

    set var(graph,ds,manage) 1
    set var(graph,ds,name) "Dataset $nn"

    # init new state
    set var(graph,ds,show) $var($cc,$mm,show)
    set var(graph,ds,smooth) $var($cc,$mm,smooth)
    set var(graph,ds,color) $var($cc,$mm,color)
    set var(graph,ds,fill) $var($cc,$mm,fill)
    set var(graph,ds,fill,color) $var($cc,$mm,fill,color)
    set var(graph,ds,width) $var($cc,$mm,width)
    set var(graph,ds,dash) $var($cc,$mm,dash)

    set var(graph,ds,shape,symbol) $var($cc,$mm,shape,symbol)
    set var(graph,ds,shape,fill) $var($cc,$mm,shape,fill)
    set var(graph,ds,shape,color) $var($cc,$mm,shape,color)

    set var(graph,ds,error) $var($cc,$mm,error)
    set var(graph,ds,error,cap) $var($cc,$mm,error,cap)
    set var(graph,ds,error,color) $var($cc,$mm,error,color)
    set var(graph,ds,error,width) $var($cc,$mm,error,width)

    set var(graph,ds,bar,relief) $var($cc,$mm,bar,relief)

    # new vector names
    set xdata ap${varname}graph${cc}xx${nn}
    set ydata ap${varname}graph${cc}yy${nn}
    set xedata ap${varname}graph${cc}xe${nn}
    set yedata ap${varname}graph${cc}ye${nn}

    # vectors
    set var(graph,ds,xdata) $xdata
    set var(graph,ds,ydata) $ydata
    set var(graph,ds,xedata) $xedata
    set var(graph,ds,yedata) $yedata
    
    global $var($cc,$mm,xdata) $var($cc,$mm,ydata) \
	$var($cc,$mm,xedata) $var($cc,$mm,yedata)
    global $var(graph,ds,xdata) $var(graph,ds,ydata) \
	$var(graph,ds,xedata) $var(graph,ds,yedata)
    
    $var($cc,$mm,xdata) dup $var(graph,ds,xdata)
    $var($cc,$mm,ydata) dup $var(graph,ds,ydata)
    if {$var($cc,$mm,xedata) != {}} {
	$var($cc,$mm,xedata) dup $var(graph,ds,xedata)
    } else {
	set var(graph,ds,xedata) {}
    }
    if {$var($cc,$mm,yedata) != {}} {
	$var($cc,$mm,yedata) dup $var(graph,ds,yedata)
    } else {
	set var(graph,ds,yedata) {}
    }

    set var(graph,ds,dim) $var($cc,$mm,dim)

    PlotAddElement $varname
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
    PlotAddDataSet $varname $dim $data
    PlotStats $varname
    PlotList $varname
}

proc PlotSaveData {varname} {
    upvar #0 $varname var
    global $varname

    if {$var(graph,ds,xdata) == {}} {
	return
    }

    PlotSaveDataFile $varname [SaveFileDialog apdatafbox]
}

proc PlotSaveDataFile {varname filename} {
    upvar #0 $varname var
    global $varname

    if {$var(graph,ds,xdata) == {}} {
	return
    }

    if {$filename == {}} {
	return
    }

    global $var(graph,ds,xdata) $var(graph,ds,ydata) \
	$var(graph,ds,xedata) $var(graph,ds,yedata)
    set ll [$var(graph,ds,xdata) length]
    set xx [$var(graph,ds,xdata) range]
    set yy [$var(graph,ds,ydata) range]

    set ch [open $filename w]
    switch $var(graph,ds,dim) {
	xy {
	    for {set ii 0} {$ii<$ll} {incr ii} {
		puts $ch "[lindex $xx $ii] [lindex $yy $ii]"
	    }
	}
	xyex {
	    set xe [$var(graph,ds,xedata) range]
	    for {set ii 0} {$ii<$ll} {incr ii} {
		puts $ch "[lindex $xx $ii] [lindex $yy $ii] [lindex $xe $ii]"
	    }
	}
	xyey {
	    set ye [$var(graph,ds,yedata) range]
	    for {set ii 0} {$ii<$ll} {incr ii} {
		puts $ch "[lindex $xx $ii] [lindex $yy $ii] [lindex $ye $ii]"
	    }
	}
	xyexey {
	    set xe [$var(graph,ds,xedata) range]
	    set ye [$var(graph,ds,yedata) range]
	    for {set ii 0} {$ii<$ll} {incr ii} {
		puts $ch "[lindex $xx $ii] [lindex $yy $ii] [lindex $xe $ii] [lindex $ye $ii]"
	    }
	}
    }
    close $ch

    PlotRaise $varname
}



