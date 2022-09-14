#  Copyright (C) 1999-2022
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc IllustrateCreateLine {xx yy dash} {
    global ds9
    global illustrate

    set id [$ds9(canvas) create line \
		$xx $yy $xx $yy \
		-fill $illustrate(color) \
		-width $illustrate(width) \
		-dash $dash \
		-tags {line graphic}]

    IllustrateCreateHandlesLine $id
    return $id
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

proc IllustrateMoveToLine {gr xx yy} {
    global ds9
    global iillustrate

    foreach {id x1 y1 x2 y2 color fill dash} $gr {
	set dx [expr $xx-$iillustrate(motion,xx)]
	set dy [expr $yy-$iillustrate(motion,yy)]

	if {$x1<$x2} {
	    set wx $x1
	} else {
	    set wx $x2
	}
	if {$y1<$y2} {
	    set wy $y1
	} else {
	    set wy $y2
	}
	
	$ds9(canvas) moveto $id [expr $dx+$wx] [expr $dy+$wy]
    }
}

proc IllustrateEditLine {gr xx yy} {
    global ds9
    global iillustrate
    
    foreach {id x1 y1 x2 y2 color fill dash} $gr {
	switch $iillustrate(handle) {
	    1 {$ds9(canvas) coords $id $xx $yy $x2 $y2}
	    2 {$ds9(canvas) coords $id $x1 $y1 $xx $yy}
	}
    }
}
