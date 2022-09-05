#  Copyright (C) 1999-2022
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc IllustrateCreateBox {xx yy fill dash} {
    global ds9
    global illustrate
    global iillustrate
    global pillustrate

    set id [$ds9(canvas) create rectangle \
		$xx $yy $xx $yy \
		-outline $illustrate(color) \
		-fill $fill \
		-width $illustrate(width) \
		-dash $dash \
		-tags graphic]

    IllustrateBaseCreateHandles $id [$ds9(canvas) itemcget $id -outline]
    return $id
}

proc IllustrateDefaultRectangle {id} {
    global ds9
    global pillustrate
    
    set coords [$ds9(canvas) coords $id]
    set xx [lindex $coords 0]
    set yy [lindex $coords 1]
    set rr1 [expr $pillustrate(box,radius1)/2]
    set rr2 [expr $pillustrate(box,radius2)/2]

    $ds9(canvas) coords $id \
		[expr $xx-$rr1] [expr $yy-$rr2] \
		[expr $xx+$rr1] [expr $yy+$rr2]
}

