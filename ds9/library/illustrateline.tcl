#  Copyright (C) 1999-2022
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc IllustrateCreateLine {x1 y1 x2 y2 color width dash} {
    global ds9

    if {$dash} {
	set dashlist {8 3}
    } else {
	set dashlist {}
    }

    set id [$ds9(canvas) create line \
		$x1 $y1 $x2 $y2 \
		-fill $color \
		-width $width \
		-dash $dashlist \
		-tags {line graphic}]

    IllustrateCreateHandlesLine $id
    return $id
}

proc IllustrateCopyLine {id} {
    global ds9
    
    set coords [$ds9(canvas) coords $id]
    set color [$ds9(canvas) itemcget $id -fill]
    set width [$ds9(canvas) itemcget $id -width]
    set dash [$ds9(canvas) itemcget $id -dash]

    return [list line [list $coords $color $width $dash]]
}

proc IllustrateSetLine {id param} {
    global ds9

    foreach {coords color width dash} $param {
	$ds9(canvas) coords $id $coords
	$ds9(canvas) itemconfigure $id -fill $color
	$ds9(canvas) itemconfigure $id -width $width
	$ds9(canvas) itemconfigure $id -dash $dash
    }

    # handles/nodes
    foreach hh [$ds9(canvas) find withtag gr${id}] {
	$ds9(canvas) itemconfigure $hh -outline $fill -fill $fill
    }

    IllustrateUpdateHandleLine $id
}

proc IllustrateDupLine {param} {
    global ds9
    
    foreach {coords color width dash} $param {
	set id [$ds9(canvas) create line \
		    $coords \
		    -fill $color \
		    -width $width \
		    -dash $dash \
		    -tags {line graphic}]
    }
    IllustrateCreateHandlesLine $id

    return $id
}

proc IllustrateListLine {id} {
    global ds9

    set coords [$ds9(canvas) coords $id]
    set color [$ds9(canvas) itemcget $id -fill]
    set width [$ds9(canvas) itemcget $id -width]
    if {[$ds9(canvas) itemcget $id -dash] != {}} {
	set dash 1
    } else {
	set dash 0
    }
    
    set rr "line $coords"

    if {$dash || $color != {cyan} || $width != 1} {
	append rr " #"
	if {$color != {cyan}} {
	    append rr " color=$color"
	}
	if {$width != 1} {
	    append rr " width=1"
	}
	if {$dash} {
	    append rr " dash=1"
	}
    }

    return $rr
}

proc IllustrateCreateHandlesLine {id} {
    global ds9

    set rr 2

    set color [$ds9(canvas) itemcget $id -fill]
    set bbox [$ds9(canvas) coords $id]

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
}

proc IllustrateUpdateHandleLine {id} {
    global ds9
    global illustrate
    global iillustrate

    set rr 2
    set bbox [$ds9(canvas) coords $id]
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
	[expr $bbx2-$rr] [expr $bby2-$rr] \
	[expr $bbx2+$rr] [expr $bby2+$rr]
}

proc IllustrateEditLine {gr xx yy} {
    global ds9
    global iillustrate
    
    foreach {id color fill dash} $gr {
	set coords [$ds9(canvas) coords $id]
	set x1 [lindex $coords 0]
	set y1 [lindex $coords 1]
	set x2 [lindex $coords 2]
	set y2 [lindex $coords 3]
	switch $iillustrate(handle) {
	    1 {$ds9(canvas) coords $id $xx $yy $x2 $y2}
	    2 {$ds9(canvas) coords $id $x1 $y1 $xx $yy}
	}
    }
}
