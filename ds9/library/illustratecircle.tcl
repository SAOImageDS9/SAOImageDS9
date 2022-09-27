#  Copyright (C) 1999-2022
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc IllustrateCreateCircle {xx yy rr color fill width dash dashlist} {
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
		[expr $xx-$rr] [expr $yy-$rr] \
		[expr $xx+$rr] [expr $yy+$rr] \
		-outline $color \
		-fill $fillcolor \
		-width $width \
		-dash $dashlist \
		-tags {circle graphic}]

    IllustrateCreateHandlesBase $id [$ds9(canvas) itemcget $id -outline]
    return $id
}

proc IllustrateDefaultCircle {id} {
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

proc IllustrateListCircle {id} {
    global ds9

    set coords [$ds9(canvas) coords $id]
    
    set x1 [lindex $coords 0]
    set y1 [lindex $coords 1]
    set x2 [lindex $coords 2]
    set y2 [lindex $coords 3]

    set xc [expr ($x2-$x1)/2+$x1]
    set yc [expr ($y2-$y1)/2+$y1]
    set ra [expr ($x2-$x1)/2]
    
    return "circle $xc $yc $ra [IllustrateListPropsBase $id]"
}

proc IllustrateEditCircle {gr xx yy} {
    global ds9
    global iillustrate

    foreach {id color fill dash} $gr {
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

