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

    IllustrateCreateHandlesPolygon $id [$ds9(canvas) itemcget $id -outline]
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

proc IllustrateCreateHandlesPolygon {id color} {
    global ds9

    set ss 4
    set rr 2
    set bbox [$ds9(canvas) bbox $id]

    # default handles
    
    set bbx1 [expr [lindex $bbox 0]-$ss]
    set bby1 [expr [lindex $bbox 1]-$ss]
    set bbx2 [expr [lindex $bbox 2]+$ss]
    set bby2 [expr [lindex $bbox 3]+$ss]

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

    # nodes

    set bbx1 [lindex $bbox 0]
    set bby1 [lindex $bbox 1]
    set bbx2 [lindex $bbox 2]
    set bby2 [lindex $bbox 3]

    set n1 [$ds9(canvas) create rectangle \
		[expr $bbx1-$rr] [expr $bby1-$rr] \
		[expr $bbx1+$rr] [expr $bby1+$rr]\
		-outline $color -fill $color \
		-state hidden \
		-tags [list node gr${id} n1]]
    $ds9(canvas) raise $n1 $id

    set n2 [$ds9(canvas) create rectangle \
		[expr $bbx2-$rr] [expr $bby1-$rr] \
		[expr $bbx2+$rr] [expr $bby1+$rr]\
		-outline $color -fill $color \
		-state hidden \
		-tags [list node gr${id} n2]]
    $ds9(canvas) raise $n2 $id

    set n3 [$ds9(canvas) create rectangle \
		[expr $bbx2-$rr] [expr $bby2-$rr] \
		[expr $bbx2+$rr] [expr $bby2+$rr]\
		-outline $color -fill $color \
		-state hidden \
		-tags [list node gr${id} n3]]
    $ds9(canvas) raise $n3 $id
    
    set n4 [$ds9(canvas) create rectangle \
		[expr $bbx1-$rr] [expr $bby2-$rr] \
		[expr $bbx1+$rr] [expr $bby2+$rr]\
		-outline $color -fill $color \
		-state hidden \
		-tags [list node gr${id} n4]]
    $ds9(canvas) raise $n4 $id
}

proc IllustrateUpdateHandleCoordsPolygon {id} {
    global ds9
    global illustrate
    global iillustrate

    set ss 4
    set rr 2
    set bbox [$ds9(canvas) bbox $id]

    # default handles

    set bbx1 [expr [lindex $bbox 0]-$ss]
    set bby1 [expr [lindex $bbox 1]-$ss]
    set bbx2 [expr [lindex $bbox 2]+$ss]
    set bby2 [expr [lindex $bbox 3]+$ss]

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

    # nodes

    set cnt 0
    foreach {xx yy} [$ds9(canvas) coords $id] {
	incr cnt
	set nid [$ds9(canvas) find withtag "gr${id} && n${cnt}"]
	$ds9(canvas) coords $nid \
	    [expr $xx-$rr] [expr $yy-$rr] \
	    [expr $xx+$rr] [expr $yy+$rr]
    }
}

proc IllustrateEditPolygon {gr xx yy} {
    global ds9
    global iillustrate
    
    foreach {id x1 y1 x2 y2 color fill dash} $gr {
	if {$iillustrate(handle)} {
	    set bbox [$ds9(canvas) bbox $id]
	    
	    set bbx1 [lindex $bbox 0]
	    set bby1 [lindex $bbox 1]
	    set bbx2 [lindex $bbox 2]
	    set bby2 [lindex $bbox 3]

	    set xc [expr double($bbx2-$bbx1)/2+$bbx1]
	    set yc [expr double($bby2-$bby1)/2+$bby1]

	    switch $iillustrate(handle) {
		1 {
		    set aa [expr abs(double($bbx1)/double($xx))]
		    set bb [expr abs(double($bby1)/double($yy))]
		}
		2 {
		    set aa [expr abs(double($xx)/double($bbx2))]
		    set bb [expr abs(double($bby1)/double($yy))]
		}
		3 {
		    set aa [expr abs(double($xx)/double($bbx2))]
		    set bb [expr abs(double($yy)/double($bby2))]
		}
		4 {
		    set aa [expr abs(double($bbx1)/double($xx))]
		    set bb [expr abs(double($yy)/double($bby2))]
		}
	    }
	    if {$aa > $bb} {
		set sc $aa
	    } else {
		set sc $bb
	    }
	    $ds9(canvas) scale $id $xc $yc $sc $sc

	} elseif {$iillustrate(node)} {
	}
    }
}

proc IllustrateFindNodeNumberPolygon {nid} {
    global ds9

    set tags [$ds9(canvas) gettags $nid]
    if {[regexp {n([0-9]+)} $tags foo num]} {
	return $num
    } else {
	return 0
    }
}

proc IllustrateFindGraphicFromNodePolygon {nid} {
    return [IllustrateFindGraphicFromHandle $nid]a
}
