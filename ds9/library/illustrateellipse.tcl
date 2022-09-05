#  Copyright (C) 1999-2022
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc IllustrateCreateEllipse {xx yy fill dash} {
    global ds9
    global illustrate

    set id [$ds9(canvas) create oval \
		$xx $yy $xx $yy \
		-outline $illustrate(color) \
		-fill $fill \
		-width $illustrate(width) \
		-dash $dash \
		-tags {ellipse graphic}]

    IllustrateBaseCreateHandles $id [$ds9(canvas) itemcget $id -outline]
    return $id
}

# both circle and ellipse come here
proc IllustrateDefaultOval {id} {
    global ds9
    global iillustrate
    global pillustrate

    set coords [$ds9(canvas) coords $id]
    set xx [lindex $coords 0]
    set yy [lindex $coords 1]
    
    switch [IllustrateGetType $id] {
	circle {
	    set rr1 $pillustrate(circle,radius)
	    set rr2 $pillustrate(circle,radius)
	}
	ellipse {
	    set rr1 $pillustrate(ellipse,radius1)
	    set rr2 $pillustrate(ellipse,radius2)
	}
    }
    
    $ds9(canvas) coords $id \
	[expr $xx-$rr1] [expr $yy-$rr2] \
	[expr $xx+$rr1] [expr $yy+$rr2]

}

proc IllustrateOvalEdit {gr xx yy} {
    global ds9
    global iillustrate

    foreach {id x1 y1 x2 y2 color fill dash} $gr {
	switch [IllustrateGetType $id] {
	    ellipse {IllustrateBaseEdit $gr $xx $yy}
	    circle {
		switch $iillustrate(handle) {
		    1 {
			set dx [expr $xx-$x1]
			set dy [expr $yy-$y1]
			set dd [expr sqrt($dx*$dx+$dy*$dy)]
			$ds9(canvas) coords $id \
			    [expr $x1+$dd] [expr $y1+$dd] $x2 $y2
		    }
		    2 {
			$ds9(canvas) coords $id $x1 $yy $xx $y2
		    }
		    3 {
			$ds9(canvas) coords $id $x1 $y1 $xx $yy
		    }
		    4 {
			$ds9(canvas) coords $id $xx $y1 $x2 $yy
		    }
		}
	    }
	}
    }
}

