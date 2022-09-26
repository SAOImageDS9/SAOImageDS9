#  Copyright (C) 1999-2022
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc IllustrateCreateEllipse {xx yy rr1 rr2 color fill width dash} {
    global ds9

    if {$fill} {
	set fillcolor $color
    } else {
	set fillcolor {}
    }
    if {$dash} {
	set dashlist {8 3}
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
    set color [$ds9(canvas) itemcget $id -outline]
    if {[$ds9(canvas) itemcget $id -fill] != {}} {
	set fill 1
    } else {
	set fill 0
    }
    set width [$ds9(canvas) itemcget $id -width]
    if {[$ds9(canvas) itemcget $id -dash] != {}} {
	set dash 1
    } else {
	set dash 0
    }
    
    set x1 [lindex $coords 0]
    set y1 [lindex $coords 1]
    set x2 [lindex $coords 2]
    set y2 [lindex $coords 3]

    set xc [expr ($x2-$x1)/2+$x1]
    set yc [expr ($y2-$y1)/2+$y1]
    set r1 [expr ($x2-$x1)/2]
    set r2 [expr ($y2-$y1)/2]
    
    set rr "ellispe $xc $yc $r1 $r2"

    if {$dash || $fill || $color != {cyan} || $width != 1} {
	append rr " #"
	if {$color != {cyan}} {
	    append rr " color=$color"
	}
	if {$fill} {
	    append rr " fill=1"
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
