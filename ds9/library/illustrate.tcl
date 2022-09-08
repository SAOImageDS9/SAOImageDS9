#  Copyright (C) 1999-2022
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc IllustrateDef {} {
    global illustrate
    global iillustrate
    global pillustrate

    set iillustrate(selection) {}

    set illustrate(shape) polygon
    set illustrate(color) cyan
    set illustrate(fill) 0
    set illustrate(width) 1
    set illustrate(dash) 0
    set illustrate(font) helvetica
    set illustrate(font,size) 12
    set illustrate(font,weight) normal
    set illustrate(font,slant) roman

    array set pillustrate [array get illustrate]

    set pillustrate(circle,radius) 20
    set pillustrate(ellipse,radius1) 40
    set pillustrate(ellipse,radius2) 20
    set pillustrate(box,radius1) 80
    set pillustrate(box,radius2) 40
    set pillustrate(polygon,width) 20
    set pillustrate(polygon,height) 20
}

# Mode

proc IllustrateModeBegin {} {
    IllustrateSelectNone
    IllustrateBindEvents
    UpdateIllustrateMenu
}

proc IllustrateModeEnd {} {
    IllustrateSelectNone
    IllustrateUnBindEvents
    UpdateIllustrateMenu
}

# Graphics

proc IllustrateCreateGraphic {xx yy} {
    global illustrate
    global iillustrate

    if {$illustrate(fill)} {
	set fill $illustrate(color)
    } else {
	set fill {}
    }
    if {$illustrate(dash)} {
	set dash {8 3}
    } else {
	set dash {}
    }

    switch $illustrate(shape) {
	circle {return [IllustrateCreateCircle $xx $yy $fill $dash]}
	ellipse {return [IllustrateCreateEllipse $xx $yy $fill $dash]}
	box {return [IllustrateCreateBox $xx $yy $fill $dash]}
	polygon {return [IllustrateCreatePolygon $xx $yy $fill $dash]}
	line {return [IllustrateCreateLine $xx $yy $dash]}
	text {return [IllustrateCreateText $xx $yy]}
    }
}

proc IllustrateDeleteGraphic {id} {
    global ds9
    global illustrate
    global iillustrate

    # handles
    foreach hh [$ds9(canvas) find withtag gr${id}] {
	$ds9(canvas) delete $hh
    }

    # graphic
    $ds9(canvas) delete $id

    # update selection
    set old $iillustrate(selection)
    set iillustrate(selection) {}
    foreach gr $old {
	foreach {idd x1 y1 x2 y2 color fill dash} $gr {
	    if {$id != $idd} {
		lappend iillustrate(selection) $gr
	    }
	}
    }
}

proc IllustrateUpdateGraphic {} {
    global ds9
    global illustrate
    global iillustrate
    
    if {$illustrate(fill)} {
	set fill $illustrate(color)
    } else {
	set fill {}
    }
    if {$illustrate(dash)} {
	set dash {8 3}
    } else {
	set dash {}
    }

    set old $iillustrate(selection)
    set iillustrate(selection) {}
    foreach gr $old {
	foreach {id x1 y1 x2 y2 ocolor ofill odash} $gr {
	    # graphic
	    switch [$ds9(canvas) type $id] {
		oval -
		rectangle -
		polygon {
		    $ds9(canvas) itemconfigure $id \
			-outline $illustrate(color) \
			-fill $fill \
			-width $illustrate(width) \
			-dash $dash
		}
		line {
		    $ds9(canvas) itemconfigure $id \
			-fill $illustrate(color) \
			-width $illustrate(width) \
			-dash $dash
		}
		text {
		    $ds9(canvas) itemconfigure $id \
			-fill $illustrate(color) \
			-font "{$illustrate(font)} $illustrate(font,size) $illustrate(font,weight) $illustrate(font,slant)"
		    IllustrateUpdateHandleCoordsBase $id
		}
	    }
	    
	    # handles
	    foreach hh [$ds9(canvas) find withtag gr${id}] {
		$ds9(canvas) itemconfigure $hh \
		    -outline $illustrate(color) -fill $illustrate(color)
	    }

	    # update selection list
	    lappend iillustrate(selection) [IllustrateSaveGraphic $id]
	}
    }
}

# Find

proc IllustrateFind {tag xx yy} {
    global ds9

    # must turn on fill for 'find closest' to work
    set index {}
    foreach id [$ds9(canvas) find withtag $tag] {
	switch [$ds9(canvas) type $id] {
	    oval -
	    rectangle -
	    polygon {
		# is fill on?
		set fill [$ds9(canvas) itemcget $id -fill]
		lappend index [list $id $fill]
		if {$fill == {}} {
		    $ds9(canvas) itemconfigure $id -fill black
		}
	    }
	}
    }
    
    set found [$ds9(canvas) find closest $xx $yy 1]
    if {$found == {}} {
	set found 0
    }

    foreach gr $index {
	foreach {id fill} $gr {
	    if {$fill == {}} {
		$ds9(canvas) itemconfigure $id -fill {}
	    }
	}
    }

    # check to see if found item has tag
    if {$found} {
	if {[lsearch [$ds9(canvas) gettags $found] $tag] == -1} {
	    set found 0
	}
    }

    return $found
}

proc IllustrateFindHandleNumber {hid} {
    global ds9

    set tags [$ds9(canvas) gettags $hid]
    if {[regexp {h([0-9]+)} $tags foo num]} {
	return $num
    } else {
	return 0
    }
}

proc IllustrateFindGraphicFromHandle {hid} {
    global ds9

    set tags [$ds9(canvas) gettags $hid]
    if {[regexp {gr([0-9]+)} $tags foo id]} {
	return $id
    } else {
	return 0
    }
}

proc IllustrateFindGraphicType {id} {
    global ds9
    
    set tags [$ds9(canvas) gettags $id]
    if {[lsearch $tags circle] != -1} {
	return circle
    } elseif {[lsearch $tags ellipse] != -1} {
	return ellipse
    } elseif {[lsearch $tags box] != -1} {
	return box
    } elseif {[lsearch $tags polygon] != -1} {
	return polygon
    } elseif {[lsearch $tags line] != -1} {
	return line
    } elseif {[lsearch $tags text] != -1} {
	return text
    } else {
	# should not be here
	return circle
    }
}

# Selection

proc IllustrateIsSelected {id} {
    global ds9
    global illustrate
    global iillustrate
    
    foreach gr $iillustrate(selection) {
	foreach {idd x1 y1 x2 y2 color fill dash} $gr {
	    if {$id == $idd} {
		return 1
	    }
	}
    }
    return 0
}

proc IllustrateUpdateSelection {} {
    global ds9
    global iillustrate

    set old $iillustrate(selection)
    set iillustrate(selection) {}
    foreach gr $old {
	foreach {id x1 y1 x2 y2 color fill dash} $gr {
	    lappend iillustrate(selection) [IllustrateSaveGraphic $id]
	}
    }
}

proc IllustrateAddToSelection {id} {
    global ds9
    global iillustrate

    foreach hh [$ds9(canvas) find withtag gr${id}] {
	$ds9(canvas) itemconfigure $hh -state normal
    }

    lappend iillustrate(selection) [IllustrateSaveGraphic $id]
}

proc IllustrateUnselect {id} {
    global ds9
    global iillustrate
    
    foreach hh [$ds9(canvas) find withtag gr${id}] {
	$ds9(canvas) itemconfigure $hh -state hidden
    }
    
    set old $iillustrate(selection)
    set iillustrate(selection) {}
    foreach gr $old {
	foreach {idd x1 y1 x2 y2 color fill dash} $gr {
	    if {$id != $idd} {
		lappend iillustrate(selection) $gr
	    }
	}
    }
}

proc IllustrateMoveSelection {dx dy} {
    global ds9
    global iillustrate

    foreach gr $iillustrate(selection) {
	foreach {id x1 y1 x2 y2 color fill dash} $gr {
	    switch [$ds9(canvas) type $id] {
		oval -
		rectangle -
		text {
		    IllustrateMoveBase $gr $dx $dy
		    IllustrateUpdateHandleCoordsBase $id
		}
		polygon {
		    IllustrateMoveBase $gr $dx $dy
		    IllustrateUpdateHandleCoordsPolygon $id
		}
		line {
		    IllustrateMoveBase $gr $dx $dy
		    IllustrateUpdateHandleCoordsLine $id
		}
	    }
	}
    }
}

# Base

proc IllustrateCreateHandlesBase {id color} {
    global ds9

    set rr 2
    set bbox [$ds9(canvas) bbox $id]
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
}

proc IllustrateUpdateHandleCoordsBase {id} {
    global ds9
    global illustrate
    global iillustrate

    set rr 2
    set bbox [$ds9(canvas) bbox $id]
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
}

proc IllustrateMoveToBase {gr xx yy} {
    global ds9
    global iillustrate

    foreach {id x1 y1 x2 y2 color fill dash} $gr {
	set dx [expr $xx-$iillustrate(motion,xx)]
	set dy [expr $yy-$iillustrate(motion,yy)]

	$ds9(canvas) moveto $id [expr $dx+$x1] [expr $dy+$y1]
    }
}

proc IllustrateMoveBase {gr dx dy} {
    global ds9
    global iillustrate

    foreach {id x1 y1 x2 y2 color fill dash} $gr {
	$ds9(canvas) move $id $dx $dy
    }
}

proc IllustrateEditBase {gr xx yy} {
    global ds9
    global iillustrate

    foreach {id x1 y1 x2 y2 color fill dash} $gr {
	switch $iillustrate(handle) {
	    1 {$ds9(canvas) coords $id $xx $yy $x2 $y2}
	    2 {$ds9(canvas) coords $id $x1 $yy $xx $y2}
	    3 {$ds9(canvas) coords $id $x1 $y1 $xx $yy}
	    4 {$ds9(canvas) coords $id $xx $y1 $x2 $yy}
	}
    }
}

# Util

proc IllustrateSaveGraphic {id} {
    global ds9

    set coords [$ds9(canvas) coords $id]
    switch [$ds9(canvas) type $id] {
	oval -
	rectangle -
	polygon {
	    set color [$ds9(canvas) itemcget $id -outline]
	    set fill [$ds9(canvas) itemcget $id -fill]
	    set dash [$ds9(canvas) itemcget $id -dash]
	}
	line {
	    set color {}
	    set fill [$ds9(canvas) itemcget $id -fill]
	    set dash [$ds9(canvas) itemcget $id -dash]
	}
	text {
	    set color {}
	    set fill [$ds9(canvas) itemcget $id -fill]
	    set dash {}
	}
    }
    return [list $id [lindex $coords 0] [lindex $coords 1] [lindex $coords 2] [lindex $coords 3] $color $fill $dash]
}

proc IllustrateGraphicAntsOn {id} {
    global ds9

    # graphic
    switch [$ds9(canvas) type $id] {
	oval -
	rectangle -
	polygon {
	    $ds9(canvas) itemconfigure $id \
		-outline white \
		-fill {} \
		-dash {8 3}
	}
	line {
	    $ds9(canvas) itemconfigure $id \
		-fill white \
		-dash {8 3}
	}
	text {
	    $ds9(canvas) itemconfigure $id \
		-fill white
	}
    }
}

proc IllustrateGraphicAntsOff {gr} {
    global ds9

    # graphic
    foreach {id x1 y1 x2 y2 color fill dash} $gr {
	switch [$ds9(canvas) type $id] {
	    oval -
	    rectangle -
	    polygon {
		$ds9(canvas) itemconfigure $id \
		    -outline $color \
		    -fill $fill \
		    -dash $dash
	    }
	    line {
		$ds9(canvas) itemconfigure $id \
		    -fill $fill \
		    -dash $dash
	    }
	    text {
		$ds9(canvas) itemconfigure $id \
		    -fill $fill
	    }
	}
    }
}

proc IllustrateHandleOn {id} {
    global ds9

    foreach hh [$ds9(canvas) find withtag gr${id}] {
	$ds9(canvas) itemconfigure $hh -state normal
    }
}

proc IllustrateHandleOff {id} {
    global ds9

    foreach hh [$ds9(canvas) find withtag gr${id}] {
	$ds9(canvas) itemconfigure $hh -state hidden
    }
}

proc IllustrateDumpAll {} {
    global ds9
    
    foreach id [$ds9(canvas) find all] {
	puts "$id: [$ds9(canvas) gettags $id]"
    }
}
