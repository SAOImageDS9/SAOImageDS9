#  Copyright (C) 1999-2022
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc IllustrateEllipseCreate {xx yy rr1 rr2 color fill width dash} {
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
		[expr $xx-$rr1] [expr $yy-$rr2] \
		[expr $xx+$rr1] [expr $yy+$rr2] \
		-outline $color \
		-fill $fillcolor \
		-width $width \
		-dash $dashlist \
		-tags {ellipse graphic}]

    IllustrateBaseCreateHandles $id [$ds9(canvas) itemcget $id -outline]
    return $id
}

proc IllustrateEllipseDefault {id} {
    global ds9
    global pillustrate

    foreach {xx yy} [$ds9(canvas) coords $id] {}
    set rr1 $pillustrate(ellipse,radius1)
    set rr2 $pillustrate(ellipse,radius2)
    
    $ds9(canvas) coords $id \
	[expr $xx-$rr1] [expr $yy-$rr2] \
	[expr $xx+$rr1] [expr $yy+$rr2]
}

# BaseDup

proc IllustrateEllipseEdit {id xx yy} {
    global ds9
    global iillustrate

    foreach {x1 y1 x2 y2} [$ds9(canvas) coords $id] {}
    switch $iillustrate(handle) {
	1 {$ds9(canvas) coords $id $xx $yy $x2 $y2}
	2 {$ds9(canvas) coords $id $x1 $yy $xx $y2}
	3 {$ds9(canvas) coords $id $x1 $y1 $xx $yy}
	4 {$ds9(canvas) coords $id $xx $y1 $x2 $yy}
    }
}

proc IllustrateEllipseList {id} {
    global ds9

    foreach {x1 y1 x2 y2} [$ds9(canvas) coords $id] {}
    set xc [expr ($x2-$x1)/2+$x1]
    set yc [expr ($y2-$y1)/2+$y1]
    set r1 [expr ($x2-$x1)/2]
    set r2 [expr ($y2-$y1)/2]
    
    return "ellipse $xc $yc $r1 $r2 [IllustrateBaseListProps $id]"
}

# Dialog

proc IllustrateEllipseDialog {id} {
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
    set var(rr1) 0
    set var(rr2) 0

    # proc
    set var(proc,apply) IllustrateEllipseApply
    
    IllustrateBaseDialog $varname
    
    # Radius
    set f $var(top).param
    ttk::label $f.tradius -text [msgcat::mc {Radius}]
    ttk::entry $f.radius1 -textvariable ${varname}(rr1) -width 13 
    ttk::entry $f.radius2 -textvariable ${varname}(rr2) -width 13 
    grid $f.tradius $f.radius1 $f.radius2 -padx 2 -pady 2 -sticky w

    # init
    IllustrateEllipseEditCB $var(id)
    IllustrateBaseColorCB $var(id)
    IllustrateBaseWidthCB $var(id)
}

proc IllustrateEllipseApply {varname} {
    upvar #0 $varname var
    global $varname

    global ds9
    
    if {$var(xc)  != {} && $var(yc)  != {} && 
	$var(rr1) != {} && $var(rr2) != {}} {
	set xc $var(xc)
	set yc $var(yc)
	set rr1 $var(rr1)
	set rr2 $var(rr2)

	$ds9(canvas) coords $var(id) \
	    [expr $xc-$rr1] [expr $yc-$rr2] \
	    [expr $xc+$rr1] [expr $yc+$rr2]

	IllustrateBaseUpdateHandle $var(id)
    }
}

# callbacks

proc IllustrateEllipseEditCB {id} {
    global iillustrate

    set varname ${iillustrate(prefix,dialog)}${id}
    global $varname
    upvar #0 $varname var

    if {![info exists $varname]} {
	return
    }

    global ds9

    foreach {x1 y1 x2 y2} [$ds9(canvas) coords $id] {}
    set var(xc) [expr ($x2-$x1)/2+$x1]
    set var(yc) [expr ($y2-$y1)/2+$y1]
    set var(rr1) [expr ($x2-$x1)/2]
    set var(rr2) [expr ($y2-$y1)/2]
}

