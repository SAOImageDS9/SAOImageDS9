#  Copyright (C) 1999-2022
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc IllustrateBoxCreate {xx yy rr1 rr2 color fill width dash {angle 0}} {
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

    set id [$ds9(canvas) create polygon \
		[IllustrateBaseRotatedCoords $xx $yy $rr1 $rr2 $angle 4] \
		-outline $color \
		-fill $fillcolor \
		-width $width \
		-dash $dashlist \
		-tags {box graphic}]

    IllustrateBaseCreateHandles $id [$ds9(canvas) itemcget $id -outline]
    return $id
}

proc IllustrateBoxDefault {id} {
    global ds9
    global pillustrate
    
    foreach {xx yy} [$ds9(canvas) coords $id] {}
    set rr1 [expr $pillustrate(box,radius1)/2]
    set rr2 [expr $pillustrate(box,radius2)/2]

    $ds9(canvas) coords $id \
	[IllustrateBaseRotatedCoords $xx $yy $rr1 $rr2 0 4]
}

# BaseDup

proc IllustrateBoxEdit {id xx yy} {
    global ds9

    foreach {xc yc rr1 rr2 angle} [IllustrateBoxGeometry $id] {}
    foreach {rr1 rr2} [IllustrateBaseRotatedRadii $xc $yc $xx $yy $angle] {}
    $ds9(canvas) coords $id \
	[IllustrateBaseRotatedCoords $xc $yc $rr1 $rr2 $angle 4]
}

proc IllustrateBoxList {id} {
    global ds9

    foreach {xc yc r1 r2 angle} [IllustrateBoxGeometry $id] {}
    
    return "box $xc $yc $r1 $r2 [IllustrateBaseAngleProps $id $angle]"
}

# Dialog

proc IllustrateBoxDialog {id} {
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
    set var(angle) 0

    # proc
    set var(proc,apply) IllustrateBoxApply
    
    IllustrateBaseDialog $varname
    
    # Radius
    set f $var(top).param
    ttk::label $f.tradius -text [msgcat::mc {Radius}]
    ttk::entry $f.radius1 -textvariable ${varname}(rr1) -width 13 
    ttk::entry $f.radius2 -textvariable ${varname}(rr2) -width 13 
    grid $f.tradius $f.radius1 $f.radius2 -padx 2 -pady 2 -sticky w

    # Angle
    ttk::label $f.tangle -text [msgcat::mc {Angle}]
    ttk::entry $f.angle -textvariable ${varname}(angle) -width 13
    ttk::label $f.uangle -text [msgcat::mc {Degrees}]
    grid $f.tangle $f.angle $f.uangle -padx 2 -pady 2 -sticky w

    # init
    IllustrateBoxEditCB $var(id)
    IllustrateBaseColorCB $var(id)
    IllustrateBaseWidthCB $var(id)
}

proc IllustrateBoxApply {varname} {
    upvar #0 $varname var
    global $varname

    global ds9
    
    if {$var(xc)  != {} && $var(yc)  != {} && 
	$var(rr1) != {} && $var(rr2) != {}} {
	IllustrateSaveUndo edit $var(id)

	set xc $var(xc)
	set yc $var(yc)
	set rr1 $var(rr1)
	set rr2 $var(rr2)
	set angle $var(angle)

	$ds9(canvas) coords $var(id) \
	    [IllustrateBaseRotatedCoords $xc $yc $rr1 $rr2 $angle 4]

	IllustrateBaseUpdateHandle $var(id)
    }
}

proc IllustrateBoxRotate {id xx yy} {
    global ds9
    global iillustrate

    foreach {xc yc rr1 rr2 angle} [IllustrateBoxGeometry $id] {}
    set dx [expr {$xx-$xc}]
    set dy [expr {$yy-$yc}]
    set aa [expr {atan2($dy,$dx)*180./acos(-1)}]

    switch $iillustrate(handle) {
	1 {set bx -$rr1; set by -$rr2}
	2 {set bx $rr1; set by -$rr2}
	3 {set bx $rr1; set by $rr2}
	4 {set bx -$rr1; set by $rr2}
    }
    set bb [expr {atan2($by,$bx)*180./acos(-1)}]
    set angle [expr {$aa-$bb}]

    $ds9(canvas) coords $id \
	[IllustrateBaseRotatedCoords $xc $yc $rr1 $rr2 $angle 4]
}

proc IllustrateBoxGeometry {id} {
    global ds9

    set coords [$ds9(canvas) coords $id]
    if {[llength $coords] == 4} {
	foreach {x1 y1 x2 y2} $coords {}
	set xc [expr {($x2-$x1)/2+$x1}]
	set yc [expr {($y2-$y1)/2+$y1}]
	set rr1 [expr {abs($x2-$x1)/2}]
	set rr2 [expr {abs($y2-$y1)/2}]
	return [list $xc $yc $rr1 $rr2 0]
    }

    foreach {x1 y1 x2 y2 x3 y3 x4 y4} $coords {}
    set xc [expr {($x1+$x2+$x3+$x4)/4.}]
    set yc [expr {($y1+$y2+$y3+$y4)/4.}]
    set rr1 [expr {sqrt(($x2-$x1)*($x2-$x1)+($y2-$y1)*($y2-$y1))/2.}]
    set rr2 [expr {sqrt(($x4-$x1)*($x4-$x1)+($y4-$y1)*($y4-$y1))/2.}]
    set angle [expr {atan2($y2-$y1,$x2-$x1)*180./acos(-1)}]
    return [list $xc $yc $rr1 $rr2 $angle]
}

# callbacks

proc IllustrateBoxEditCB {id} {
    global iillustrate

    set varname ${iillustrate(prefix,dialog)}${id}
    global $varname
    upvar #0 $varname var

    if {![info exists $varname]} {
	return
    }

    global ds9

    foreach {xc yc rr1 rr2 angle} [IllustrateBoxGeometry $var(id)] {}
    set var(xc) $xc
    set var(yc) $yc
    set var(rr1) $rr1
    set var(rr2) $rr2
    set var(angle) $angle
}
