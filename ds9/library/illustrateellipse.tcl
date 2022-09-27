#  Copyright (C) 1999-2022
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc IllustrateCreateEllipse {xx yy rr1 rr2 color fill width dash dashlist} {
    global ds9

    if {$fill} {
	set fillcolor $color
    } else {
	set fillcolor {}
    }
    if {$dash} {
	set dashlist $dashlist
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

    IllustrateCreateHandlesBase $id [$ds9(canvas) itemcget $id -outline]
    return $id
}

proc IllustrateDefaultEllipse {id} {
    global ds9
    global pillustrate

    set coords [$ds9(canvas) coords $id]
    set xx [lindex $coords 0]
    set yy [lindex $coords 1]
    
    set rr1 $pillustrate(ellipse,radius1)
    set rr2 $pillustrate(ellipse,radius2)
    
    $ds9(canvas) coords $id \
	[expr $xx-$rr1] [expr $yy-$rr2] \
	[expr $xx+$rr1] [expr $yy+$rr2]
}

proc IllustrateListEllipse {id} {
    global ds9

    set coords [$ds9(canvas) coords $id]
    
    set x1 [lindex $coords 0]
    set y1 [lindex $coords 1]
    set x2 [lindex $coords 2]
    set y2 [lindex $coords 3]

    set xc [expr ($x2-$x1)/2+$x1]
    set yc [expr ($y2-$y1)/2+$y1]
    set r1 [expr ($x2-$x1)/2]
    set r2 [expr ($y2-$y1)/2]
    
    return "ellipse $xc $yc $r1 $r2 [IllustrateListPropsBase $id]"
}
