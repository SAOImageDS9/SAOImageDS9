#  Copyright (C) 1999-2021
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc IllustrateBaseSave {id} {
    global ds9

    set color [$ds9(canvas) itemcget $id -outline]
    set fillcolor [$ds9(canvas) itemcget $id -fill]
    set dashlist [$ds9(canvas) itemcget $id -dash]

    return [list $id $color $fillcolor $dashlist]
}

proc IllustrateBaseCopy {id} {
    global ds9
    
    set type [IllustrateGetType $id]
    
    set coords [$ds9(canvas) coords $id]
    set color [$ds9(canvas) itemcget $id -outline]
    set fill [$ds9(canvas) itemcget $id -fill]
    set width [$ds9(canvas) itemcget $id -width]
    set dash [$ds9(canvas) itemcget $id -dash]

    return [list $type [list $coords $color $fill $width $dash]]
}

proc IllustrateBaseSet {id param} {
    global ds9
    
    foreach {coords color fill width dash} $param {
	$ds9(canvas) coords $id $coords
	$ds9(canvas) itemconfigure $id -outline $color
	$ds9(canvas) itemconfigure $id -fill $fill
	$ds9(canvas) itemconfigure $id -width $width
	$ds9(canvas) itemconfigure $id -dash $dash
    }

    # handles/nodes
    foreach hh [$ds9(canvas) find withtag gr${id}] {
	$ds9(canvas) itemconfigure $hh -outline $color -fill $color
    }

    IllustrateBaseUpdateHandle $id
}

proc IllustrateBaseDup {type param} {
    global ds9
    
    switch $type {
	circle -
	ellipse {set tt oval}
	box {set tt rectangle}
    }

    foreach {coords color fill width dash} $param {
	set id [$ds9(canvas) create $tt \
		    $coords \
		    -outline $color \
		    -fill $fill \
		    -width $width \
		    -dash $dash \
		    -tags [list $type graphic]
	       ]
    }
    IllustrateBaseCreateHandles $id [$ds9(canvas) itemcget $id -outline]

    return $id
}

proc IllustrateBaseCreateHandles {id color} {
    global ds9

    set rr 2
    set bbox [$ds9(canvas) bbox $id]
    set bbx1 [lindex $bbox 0]
    set bby1 [lindex $bbox 1]
    set bbx2 [lindex $bbox 2]
    set bby2 [lindex $bbox 3]

    set h1 [$ds9(canvas) create rectangle \
		[expr $bbx1-$rr] [expr $bby1-$rr] \
		[expr $bbx1+$rr] [expr $bby1+$rr]\
		-outline $color -fill $color \
		-state hidden \
		-tags [list handle gr${id} h1]]
    $ds9(canvas) raise $h1 $id

    set h2 [$ds9(canvas) create rectangle \
		[expr $bbx2-$rr] [expr $bby1-$rr] \
		[expr $bbx2+$rr] [expr $bby1+$rr]\
		-outline $color -fill $color \
		-state hidden \
		-tags [list handle gr${id} h2]]
    $ds9(canvas) raise $h2 $id

    set h3 [$ds9(canvas) create rectangle \
		[expr $bbx2-$rr] [expr $bby2-$rr] \
		[expr $bbx2+$rr] [expr $bby2+$rr]\
		-outline $color -fill $color \
		-state hidden \
		-tags [list handle gr${id} h3]]
    $ds9(canvas) raise $h3 $id
    
    set h4 [$ds9(canvas) create rectangle \
		[expr $bbx1-$rr] [expr $bby2-$rr] \
		[expr $bbx1+$rr] [expr $bby2+$rr]\
		-outline $color -fill $color \
		-state hidden \
		-tags [list handle gr${id} h4]]
    $ds9(canvas) raise $h4 $id
}

proc IllustrateBaseUpdateHandle {id} {
    global ds9
    global illustrate
    global iillustrate

    set rr 2
    set bbox [$ds9(canvas) bbox $id]
    set bbx1 [lindex $bbox 0]
    set bby1 [lindex $bbox 1]
    set bbx2 [lindex $bbox 2]
    set bby2 [lindex $bbox 3]

    set hh [$ds9(canvas) find withtag "gr${id} && h1"]
    $ds9(canvas) coords $hh \
	[expr $bbx1-$rr] [expr $bby1-$rr] \
	[expr $bbx1+$rr] [expr $bby1+$rr]

    set hh [$ds9(canvas) find withtag "gr${id} && h2"]
    $ds9(canvas) coords $hh \
	[expr $bbx2-$rr] [expr $bby1-$rr] \
	[expr $bbx2+$rr] [expr $bby1+$rr]

    set hh [$ds9(canvas) find withtag "gr${id} && h3"]
    $ds9(canvas) coords $hh \
	[expr $bbx2-$rr] [expr $bby2-$rr] \
	[expr $bbx2+$rr] [expr $bby2+$rr]

    set hh [$ds9(canvas) find withtag "gr${id} && h4"]
    $ds9(canvas) coords $hh \
	[expr $bbx1-$rr] [expr $bby2-$rr] \
	[expr $bbx1+$rr] [expr $bby2+$rr]
}

proc IllustrateBaseEdit {id xx yy} {
    global ds9
    global iillustrate

    set coords [$ds9(canvas) coords $id]
    set x1 [lindex $coords 0]
    set y1 [lindex $coords 1]
    set x2 [lindex $coords 2]
    set y2 [lindex $coords 3]

    switch $iillustrate(handle) {
	1 {$ds9(canvas) coords $id $xx $yy $x2 $y2}
	2 {$ds9(canvas) coords $id $x1 $yy $xx $y2}
	3 {$ds9(canvas) coords $id $x1 $y1 $xx $yy}
	4 {$ds9(canvas) coords $id $xx $y1 $x2 $yy}
    }
}

proc IllustrateBaseUpdateColor {id color fill} {
    global ds9
    
    if {$fill} {
	set fillcolor $color
    } else {
	set fillcolor {}
    }

    $ds9(canvas) itemconfigure $id \
	-outline $color \
	-fill $fillcolor

    # handles/nodes
    foreach hh [$ds9(canvas) find withtag gr${id}] {
	$ds9(canvas) itemconfigure $hh -outline $color -fill $color
    }
}

proc IllustrateBaseUpdateWidth {id width dash} {
    global ds9
    global illustrate
    
    if {$dash} {
	set dashlist $illustrate(dashlist)
    } else {
	set dashlist {}
    }

    $ds9(canvas) itemconfigure $id \
	-width $width \
	-dash $dashlist
}

proc IllustrateBaseListProps {id} {
    global ds9
    
    set color [$ds9(canvas) itemcget $id -outline]
    if {[$ds9(canvas) itemcget $id -fill] != {}} {
	set fill 1
    } else {
	set fill 0
    }
    set width [$ds9(canvas) itemcget $id -width]

    set dashlist [$ds9(canvas) itemcget $id -dash]
    if {$dashlist != {}} {
	set dash 1
    } else {
	set dash 0
    }

    set rr {}
    if {$color != {cyan} || $fill || $width != 1 || $dash} {

	append rr " #"
	if {$color != {cyan}} {
	    append rr " color = $color"
	}
	if {$fill} {
	    append rr " fill = yes"
	}
	if {$width != 1} {
	    append rr " width = $width"
	}
	if {$dash} {
	    append rr " dash = yes "
	}
    }

    return $rr
}

proc IllustrateBaseAntsOn {id} {
    global ds9

    $ds9(canvas) itemconfigure $id \
	-outline white \
	-fill {} \
	-dash {8 3}
}

proc IllustrateBaseAntsOff {gr} {
    global ds9

    foreach {id color fillcolor dashlist} $gr {
	$ds9(canvas) itemconfigure $id \
	    -outline $color \
	    -fill $fillcolor \
	    -dash $dashlist
    }
}
