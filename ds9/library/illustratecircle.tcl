#  Copyright (C) 1999-2022
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc IllustrateCircleCreate {xx yy rr color fill width dash} {
    global ds9
    global illustrate

    if {$fill} {
	set fillcolor $color
    } else {
	set fillcolor {}
    }
    if {$dash} {
	set dashlist $illustrate(dashlist)
    } else {
	set dashlist {}
    }

    set id [$ds9(canvas) create oval \
		[expr $xx-$rr] [expr $yy-$rr] \
		[expr $xx+$rr] [expr $yy+$rr] \
		-outline $color \
		-fill $fillcolor \
		-width $width \
		-dash $dashlist \
		-tags {circle graphic}]

    IllustrateBaseCreateHandles $id [$ds9(canvas) itemcget $id -outline]
    return $id
}

proc IllustrateCircleDefault {id} {
    global ds9
    global pillustrate

    set coords [$ds9(canvas) coords $id]
    set xx [lindex $coords 0]
    set yy [lindex $coords 1]
    
    set rr $pillustrate(circle,radius)
    
    $ds9(canvas) coords $id \
	[expr $xx-$rr] [expr $yy-$rr] \
	[expr $xx+$rr] [expr $yy+$rr]
}

proc IllustrateCircleList {id} {
    global ds9

    set coords [$ds9(canvas) coords $id]
    set x1 [lindex $coords 0]
    set y1 [lindex $coords 1]
    set x2 [lindex $coords 2]
    set y2 [lindex $coords 3]

    set xc [expr ($x2-$x1)/2+$x1]
    set yc [expr ($y2-$y1)/2+$y1]
    set ra [expr ($x2-$x1)/2]
    
    return "circle $xc $yc $ra [IllustrateBaseListProps $id]"
}

proc IllustrateCircleEdit {gr xx yy} {
    global ds9
    global iillustrate

    foreach {id color fillcolor dashlist} $gr {
	set coords [$ds9(canvas) coords $id]
	set x1 [lindex $coords 0]
	set y1 [lindex $coords 1]
	set x2 [lindex $coords 2]
	set y2 [lindex $coords 3]
	switch $iillustrate(handle) {
	    1 {
		set dx [expr ($x1-$xx)]
		set dy [expr ($y1-$yy)]
	    }
	    2 {
		set dx [expr ($xx-$x2)]
		set dy [expr ($y1-$yy)]
	    }
	    3 {
		set dx [expr ($xx-$x2)]
		set dy [expr ($yy-$y2)]
	    }
	    4 {
		set dx [expr ($x1-$xx)]
		set dy [expr ($yy-$y2)]
	    }
	}
	set dd [expr ($dx+$dy)/2]
	$ds9(canvas) coords $id \
	    [expr $x1-$dd] [expr $y1-$dd] \
	    [expr $x2+$dd] [expr $y2+$dd]
    }
}

# Dialog

proc IllustrateCircleDialog {id} {
    global iillustrate

    set varname ${iillustrate(prefix,dialog)}${id}
    global $varname
    upvar #0 $varname var

    global ds9

    set var(id) $id
    set var(top) ".${varname}"
    set var(mb) ".${varname}mb"

    # see if we already have a header window visible
    if {[winfo exists $var(top)]} {
	raise $var(top)
	return
    }

    # variables
    set var(xc) 0
    set var(yc) 0
    set var(rr) 0

    # proc
    set var(proc,close) IllustrateBaseClose
    set var(proc,apply) IllustrateCircleApply
    set var(proc,color) IllustrateBaseColor
    set var(proc,width) IllustrateBaseWidth
    
    IllustrateBaseDialog $varname
    
    # Radius
    set f $var(top).param
    ttk::label $f.tradius -text [msgcat::mc {Radius}]
    ttk::entry $f.radius -textvariable ${varname}(rr) -width 13 
    grid $f.tradius $f.radius -padx 2 -pady 2 -sticky w

    # init
    IllustrateCircleEditCB $var(id)
    IllustrateCirclePropsCB $var(id)
}

proc IllustrateCircleDialogClose {id} {
    global iillustrate

    set varname ${iillustrate(prefix,dialog)}${id}
    global $varname
    upvar #0 $varname var

    IllustrateCircleClose $varname
}

proc IllustrateCircleApply {varname} {
    upvar #0 $varname var
    global $varname

    global ds9
    
    if {$var(xc) != {} && $var(yc) != {} && $var(rr) != {}} {
	set xc $var(xc)
	set yc $var(yc)
	set rr $var(rr)

	$ds9(canvas) coords $var(id) \
	    [expr $xc-$rr] [expr $yc-$rr] \
	    [expr $xc+$rr] [expr $yc+$rr]

	IllustrateBaseUpdateHandle $var(id)
    }
}

# callbacks

proc IllustrateCircleDeleteCB {id} {
    global iillustrate

    set varname ${iillustrate(prefix,dialog)}${id}
    global $varname
    upvar #0 $varname var

    if {![info exists $varname]} {
	return
    }

    IllustrateCircleClose $varname
}

proc IllustrateCircleEditCB {id} {
    global iillustrate

    set varname ${iillustrate(prefix,dialog)}${id}
    global $varname
    upvar #0 $varname var

    if {![info exists $varname]} {
	return
    }

    global ds9

    set coords [$ds9(canvas) coords $var(id)]
    set x1 [lindex $coords 0]
    set y1 [lindex $coords 1]
    set x2 [lindex $coords 2]
    set y2 [lindex $coords 3]

    set var(xc) [expr ($x2-$x1)/2+$x1]
    set var(yc) [expr ($y2-$y1)/2+$y1]
    set var(rr) [expr ($x2-$x1)/2]
}

proc IllustrateCirclePropsCB {id} {
    global iillustrate

    set varname ${iillustrate(prefix,dialog)}${id}
    global $varname
    upvar #0 $varname var

    if {![info exists $varname]} {
	return
    }

    global ds9

    set var(color) [$ds9(canvas) itemcget $var(id) -outline]
    if {[$ds9(canvas) itemcget $var(id) -fill] != {}} {
	set var(fill) 1
    } else {
	set var(fill) 0
    }

    set var(width) [expr int([$ds9(canvas) itemcget $var(id) -width])]
    if {[$ds9(canvas) itemcget $var(id) -dash] != {}} {
	set var(dash) 1
    } else {
	set var(dash) 0
    }
}
