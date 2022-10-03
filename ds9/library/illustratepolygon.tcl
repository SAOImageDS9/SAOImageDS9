#  Copyright (C) 1999-2022
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc IllustratePolygonCreate {coords color fill width dash} {
    global ds9
    global illustrate

    if {$fill} {
	set fillcolor $color
    } else {
	set fillcolor {}
    }
    if {$dash} {
	set dashlist $illustrate(dashlist)
    } else {
	set dashlist {}
    }

    set id [$ds9(canvas) create polygon \
		$coords \
		-outline $color \
		-fill $fillcolor \
		-width $width \
		-dash $dashlist \
		-tags {polygon graphic}]

    IllustratePolygonCreateHandles $id [$ds9(canvas) itemcget $id -outline]
    return $id
}

proc IllustratePolygonDefault {id} {
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

proc IllustratePolygonDup {param} {
    global ds9
    
    set coords [lindex $param 0]
    set color [lindex $param 1]
    set fill [lindex $param 2]
    set width [lindex $param 3]
    set dash [lindex $param 4]

    set id [$ds9(canvas) create polygon \
		$coords \
		-outline $color \
		-fill $fill \
		-width $width \
		-dash $dash \
		-tags [list polygon graphic]
	    ]

    IllustratePolygonCreateHandles $id [$ds9(canvas) itemcget $id -outline]
    return $id
}

proc IllustratePolygonList {id} {
    global ds9

    set coords [$ds9(canvas) coords $id]
    return "polygon $coords [IllustrateBaseListProps $id]"
}

proc IllustratePolygonCreateHandles {id color} {
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

    set cnt 0
    foreach {xx yy} [$ds9(canvas) coords $id] {
	incr cnt
	set nn [$ds9(canvas) create rectangle \
		    [expr $xx-$rr] [expr $yy-$rr] \
		    [expr $xx+$rr] [expr $yy+$rr]\
		    -outline $color -fill $color \
		    -state hidden \
		    -tags [list node gr${id}]]
	$ds9(canvas) raise $nn $id
    }
}

proc IllustratePolygonUpdateHandle {id} {
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
    set nlist [$ds9(canvas) find withtag "gr${id} && node"]
    foreach {xx yy} [$ds9(canvas) coords $id] {
	set nid [expr [lindex $nlist $cnt]]
	$ds9(canvas) coords $nid \
	    [expr $xx-$rr] [expr $yy-$rr] \
	    [expr $xx+$rr] [expr $yy+$rr]
	$ds9(canvas) raise $nid $id
	incr cnt
    }
}

proc IllustratePolygonEdit {id xx yy} {
    global ds9
    global iillustrate
    
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
	set nlist [lreverse [$ds9(canvas) find withtag "gr${id} && node"]]
	set nn [expr [lsearch $nlist $iillustrate(node)]+1]
	set ll {}
	set cnt 0
	foreach {cxx cyy} [$ds9(canvas) coords $id] {
	    incr cnt
	    if {$cnt == $nn} {
		lappend ll $xx $yy
	    } else {
		lappend ll $cxx $cyy
	    }
	}
	$ds9(canvas) coords $id $ll
    }
}

proc IllustratePolygonCleanup {id} {
    global ds9

    # int() coords
    set ll {}
    foreach {cx cy} [$ds9(canvas) coords $id] {
	lappend ll [expr int($cx)] [expr int($cy)]
    }
    $ds9(canvas) coords $id $ll
}

proc IllustratePolygonDeleteNode {nid} {
    global ds9

    set ll {}
    set cnt 0
    set id [IllustrateFindGraphicFromNode $nid]
    set nlist [lreverse [$ds9(canvas) find withtag "gr${id} && node"]]
    if {[llength $nlist] > 3} {
	set nn [expr [lsearch $nlist $nid]+1]
	if {$id} {
	    foreach {cxx cyy} [$ds9(canvas) coords $id] {
		incr cnt
		if {$cnt != $nn} {
		    lappend ll $cxx $cyy
		}
	    }
	    $ds9(canvas) coords $id $ll
	}
	$ds9(canvas) delete $nid
	IllustratePolygonUpdateHandle $id
    }
}

proc IllustratePolygonFindSegment {xx yy varname} {
    upvar $varname var
    global ds9

    set id [IllustrateFind graphic $xx $yy]
    if {$id} {
	switch [IllustrateGetType $id] {
	    polygon {
		set cnt 0
		set coords [$ds9(canvas) coords $id]
		set ll [llength $coords]
		set l1x [lindex $coords [expr $ll-2]]
		set l1y [lindex $coords [expr $ll-1]]
		foreach {cxx cyy} $coords {
		    incr cnt
		    set l2x $cxx
		    set l2y $cyy
		    
		    # translate l2
		    set tx [expr $l2x-$l1x]
		    set ty [expr $l2y-$l1y]

		    # find angle
		    set aa [expr atan2($ty,$tx)]

		    # end
		    set ex [expr $tx*cos($aa)+$ty*sin($aa)]
		    set ey [expr -$tx*sin($aa)+$ty*cos($aa)]

		    # translate node
		    set nx [expr $xx-$l1x]
		    set ny [expr $yy-$l1y]

		    # node
		    set vx [expr $nx*cos($aa)+$ny*sin($aa)]
		    set vy [expr -$nx*sin($aa)+$ny*cos($aa)]

		    if {$vx>0 && $vx<$ex && $vy>-2 && $vy<2} {
			set var $cnt
			return $id
		    }

		    # next set
		    set l1x $l2x
		    set l1y $l2y
		}
	    }
	}
    }

    return 0
}

proc IllustratePolygonCreateNode {id num xx yy} {
    global ds9

    set nid 0
    set color [$ds9(canvas) itemcget $id -outline]
    set rr 2
    set ll {}
    set cnt 0
    foreach {cxx cyy} [$ds9(canvas) coords $id] {
	incr cnt
	if {$cnt == $num} {
	    set nid [$ds9(canvas) create rectangle \
			 [expr $xx-$rr] [expr $yy-$rr] \
			 [expr $xx+$rr] [expr $yy+$rr]\
			 -outline $color -fill $color \
			 -state hidden \
			 -tags [list node gr${id}]]
	    lappend ll $xx $yy
	}
	lappend ll $cxx $cyy
    }
    $ds9(canvas) coords $id $ll
    IllustratePolygonUpdateHandle $id
}

# Dialog

proc IllustratePolygonDialog {id} {
    global iillustrate

    set varname ${iillustrate(prefix,dialog)}${id}
    global $varname
    upvar #0 $varname var

    global ds9

    set var(id) $id
    set var(top) ".${varname}"
    set var(mb) ".${varname}mb"

    # see if we already have a header window visible
    if {[winfo exists $var(top)]} {
	raise $var(top)
	return
    }

    # proc
    set var(proc,apply) IllustratePolygonApply

    IllustrateBaseDialog $varname
    
    # init
    IllustratePolygonEditCB $var(id)
    IllustrateBaseColorCB $var(id)
    IllustrateBaseWidthCB $var(id)
}

proc IllustratePolygonApply {varname} {
    upvar #0 $varname var
    global $varname

    global ds9
    
    if {$var(xc) != {} && $var(yc) != {}} {
	$ds9(canvas) moveto $var(id) $var(xc) $var(yc)
	IllustratePolygonUpdateHandle $var(id)
    }
}

# callbacks

proc IllustratePolygonEditCB {id} {
    global iillustrate

    set varname ${iillustrate(prefix,dialog)}${id}
    global $varname
    upvar #0 $varname var

    if {![info exists $varname]} {
	return
    }

    global ds9

    set coords [$ds9(canvas) coords $id]
    set x1 [lindex $coords 0]
    set y1 [lindex $coords 1]
    set x2 [lindex $coords 2]
    set y2 [lindex $coords 3]

    set var(xc) [expr ($x2-$x1)/2+$x1]
    set var(yc) [expr ($y2-$y1)/2+$y1]
}


