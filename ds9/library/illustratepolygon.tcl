#  Copyright (C) 1999-2022
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc IllustrateCreatePolygon {xx yy fill dash} {
    global ds9
    global illustrate

    set id [$ds9(canvas) create polygon \
		$xx $yy $xx $yy $xx $yy $xx $yy \
		-outline $illustrate(color)	\
		-fill $fill \
		-width $illustrate(width) \
		-dash $dash \
		-tags {polygon graphic}]

    IllustrateCreateHandlesBase $id [$ds9(canvas) itemcget $id -outline]
    return $id
}

proc IllustrateDefaultPolygon {id} {
    global ds9
    global pillustrate
    
    set coords [$ds9(canvas) coords $id]
    set xx [lindex $coords 0]
    set yy [lindex $coords 1]
    set rr1 $pillustrate(polygon,width)
    set rr2 $pillustrate(polygon,height)

    $ds9(canvas) coords $id \
	[expr $xx-$rr1] [expr $yy-$rr2] \
	[expr $xx+$rr1] [expr $yy-$rr2] \
	[expr $xx+$rr1] [expr $yy+$rr2]\
	[expr $xx-$rr1] [expr $yy+$rr2]
}

proc IllustrateEditPolygon {gr xx yy} {
    global ds9
    
    foreach {id x1 y1 x2 y2 color fill dash} $gr {
	if {$iillustrate(handle) < 5} {
	    switch $iillustrate(handle) {
		1 {$ds9(canvas) coords $id $xx $yy $x2 $y2}
		2 {$ds9(canvas) coords $id $x1 $yy $xx $y2}
		3 {$ds9(canvas) coords $id $x1 $y1 $xx $yy}
		4 {$ds9(canvas) coords $id $xx $y1 $x2 $yy}
	    }
	} else {
	}
    }
}
