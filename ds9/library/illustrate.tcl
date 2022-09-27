#  Copyright (C) 1999-2022
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc IllustrateDef {} {
    global illustrate
    global iillustrate
    global pillustrate

    set iillustrate(selection) {}
    set iillustrate(clipboard) {}
    set iillustrate(undo) {}

    set illustrate(show) 1
    set illustrate(shape) polygon
    set illustrate(color) cyan
    set illustrate(fill) 0
    set illustrate(width) 1
    set illustrate(dash) 0
    set illustrate(dashlist) {8 3}
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
    global pillustrate

    switch $illustrate(shape) {
	circle {
	    return [IllustrateCreateCircle $xx $yy 0 \
			$illustrate(color) $illustrate(fill) \
			$illustrate(width) \
			$illustrate(dash) $illustrate(dashlist)]
	}
	ellipse {
	    return [IllustrateCreateEllipse $xx $yy 0 0 \
			$illustrate(color) $illustrate(fill) \
			$illustrate(width) $illustrate(dash) $illustrate(dash)]
			$illustrate(dash) $illustrate(dashlist)]
	}
	box {
	    return [IllustrateCreateBox $xx $yy 0 0 \
			$illustrate(color) $illustrate(fill) \
			$illustrate(width) \
			$illustrate(dash) $illustrate(dashlist)]
	}
	polygon {
	    return [IllustrateCreatePolygon \
			[list $xx $yy $xx $yy $xx $yy $xx $yy] \
			$illustrate(color) $illustrate(fill) \
			$illustrate(width) \
			$illustrate(dash) $illustrate(dashlist)]
	}
	line {
	    return [IllustrateCreateLine $xx $yy $xx $yy \
			$illustrate(color) \
			$illustrate(width) \
			$illustrate(dash) $illustrate(dashlist)]
	}
	text {
	    set txt {Text}
	    if {![EntryDialog [msgcat::mc {Text}] \
		      [msgcat::mc {Enter Text}] 40 txt]} {
		return 0
	    }
	    if {$txt == {}} {
		return 0
	    }
	    return [IllustrateCreateText $xx $yy $txt \
			$illustrate(color) \
			"$illustrate(font) $illustrate(font,size) $illustrate(font,weight) $illustrate(font,slant)"]
	}
    }
}

proc IllustrateDeleteGraphic {id} {
    global ds9
    global illustrate
    global iillustrate

    # handles/nodes
    foreach hh [$ds9(canvas) find withtag gr${id}] {
	$ds9(canvas) delete $hh
    }

    # graphic
    $ds9(canvas) delete $id

    # update selection
    set old $iillustrate(selection)
    set iillustrate(selection) {}
    foreach gr $old {
	foreach {idd color fill dash} $gr {
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
    
    IllustrateSaveUndo selectedit {}

    if {$illustrate(fill)} {
	set fill $illustrate(color)
    } else {
	set fill {}
    }
    if {$illustrate(dash)} {
	set dash $illustrate(dashlist)
    } else {
	set dash {}
    }

    set old $iillustrate(selection)
    set iillustrate(selection) {}
    foreach gr $old {
	foreach {id ocolor ofill odash} $gr {
	    # graphic
	    switch [IllustrateGetType $id] {
		circle -
		ellipse -
		box -
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
		    IllustrateUpdateHandleBase $id
		}
	    }
	    
	    # handles/nodes
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
	switch [IllustrateGetType $id] {
	    circle -
	    ellipse -
	    box -
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

proc IllustrateFindGraphicFromNode {nid} {
    return [IllustrateFindGraphicFromHandle $nid]
}

proc IllustrateGetType {id} {
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
	foreach {idd color fill dash} $gr {
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
	foreach {id color fill dash} $gr {
	    lappend iillustrate(selection) [IllustrateSaveGraphic $id]
	}
    }
}

proc IllustrateAddToSelection {id} {
    global ds9
    global iillustrate

    # handles/nodes
    foreach hh [$ds9(canvas) find withtag gr${id}] {
	$ds9(canvas) itemconfigure $hh -state normal
    }

    lappend iillustrate(selection) [IllustrateSaveGraphic $id]
}

proc IllustrateUnselect {id} {
    global ds9
    global iillustrate
    
    # handles/nodes
    foreach hh [$ds9(canvas) find withtag gr${id}] {
	$ds9(canvas) itemconfigure $hh -state hidden
    }
    
    set old $iillustrate(selection)
    set iillustrate(selection) {}
    foreach gr $old {
	foreach {idd color fill dash} $gr {
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
	foreach {id color fill dash} $gr {
	    switch [IllustrateGetType $id] {
		circle -
		ellipse -
		box -
		text {
		    $ds9(canvas) move $id $dx $dy
		    IllustrateUpdateHandleBase $id
		}
		polygon {
		    $ds9(canvas) move $id $dx $dy
		    IllustrateUpdateHandlePolygon $id
		}
		line {
		    $ds9(canvas) move $id $dx $dy
		    IllustrateUpdateHandleLine $id
		}
	    }
	}
    }
}

# Base

proc IllustrateCopyBase {id} {
    global ds9
    
    set type [IllustrateGetType $id]
    
    set coords [$ds9(canvas) coords $id]
    set color [$ds9(canvas) itemcget $id -outline]
    set fill [$ds9(canvas) itemcget $id -fill]
    set width [$ds9(canvas) itemcget $id -width]
    set dash [$ds9(canvas) itemcget $id -dash]

    return [list $type [list $coords $color $fill $width $dash]]
}

proc IllustrateSetBase {id param} {
    global ds9
    
    foreach {coords color fill width dash} $param {
	$ds9(canvas) coords $id $coords
	$ds9(canvas) itemconfigure $id -outline $color
	$ds9(canvas) itemconfigure $id -fill $fill
	$ds9(canvas) itemconfigure $id -width $width
	$ds9(canvas) itemconfigure $id -dash $dash
    }

    # handles/nodes
    foreach hh [$ds9(canvas) find withtag gr${id}] {
	$ds9(canvas) itemconfigure $hh -outline $color -fill $color
    }

    IllustrateUpdateHandleBase $id
}

proc IllustrateDupBase {type param} {
    global ds9
    
    switch $type {
	circle -
	ellipse {set tt oval}
	box {set tt rectangle}
    }

    foreach {coords color fill width dash} $param {
	set id [$ds9(canvas) create $tt \
		    $coords \
		    -outline $color \
		    -fill $fill \
		    -width $width \
		    -dash $dash \
		    -tags [list $type graphic]
	       ]
    }
    IllustrateCreateHandlesBase $id [$ds9(canvas) itemcget $id -outline]

    return $id
}

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

proc IllustrateUpdateHandleBase {id} {
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

proc IllustrateEditBase {gr xx yy} {
    global ds9
    global iillustrate

    foreach {id color fill dash} $gr {
	set coords [$ds9(canvas) coords $id]
	set x1 [lindex $coords 0]
	set y1 [lindex $coords 1]
	set x2 [lindex $coords 2]
	set y2 [lindex $coords 3]
	switch $iillustrate(handle) {
	    1 {$ds9(canvas) coords $id $xx $yy $x2 $y2}
	    2 {$ds9(canvas) coords $id $x1 $yy $xx $y2}
	    3 {$ds9(canvas) coords $id $x1 $y1 $xx $yy}
	    4 {$ds9(canvas) coords $id $xx $y1 $x2 $yy}
	}
    }
}

proc IllustrateListPropsBase {id} {
    global ds9
    
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

    set rr {}
    if {$color != {cyan} || $fill || $width != 1 || $dash} {
	append rr " #"
	if {$color != {cyan}} {
	    append rr " color = $color"
	}
	if {$fill} {
	    append rr " fill = yes"
	}
	if {$width != 1} {
	    append rr " width = $width"
	}
	if {$dash} {
	    append rr " dash = yes "
	}
    }

    return $rr
}

# Util

proc IllustrateSaveUndo {undo id} {
    global ds9
    global iillustrate

    set ll {}
    switch $undo {
	create -
	edit {
	    switch [IllustrateGetType $id] {
		circle -
		ellipse -
		box  -
		polygon {lappend ll [list $id [IllustrateCopyBase $id]]}
		line {lappend ll [list $id [IllustrateCopyLine $id]]}
		text {lappend ll [list $id [IllustrateCopyText $id]]}
	    }
	}
	selectedit -
	selectdelete {
	    foreach gr $iillustrate(selection) {
		foreach {id color fill dash} $gr {
		    switch [IllustrateGetType $id] {
			circle -
			ellipse -
			box  -
			polygon {lappend ll [list $id [IllustrateCopyBase $id]]}
			line {lappend ll [list $id [IllustrateCopyLine $id]]}
			text {lappend ll [list $id [IllustrateCopyText $id]]}
		    }
		}
	    }
	}
    }
    set iillustrate(undo) [list $undo $ll]

    UpdateEditMenu
}

proc IllustrateSaveGraphic {id} {
    global ds9

    switch [IllustrateGetType $id] {
	circle -
	ellipse -
	box -
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

    return [list $id $color $fill $dash]
}

proc IllustrateGraphicAntsOn {id} {
    global ds9

    # graphic
    switch [IllustrateGetType $id] {
	circle -
	ellipse -
	box -
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
    foreach {id color fill dash} $gr {
	switch [IllustrateGetType $id] {
	    circle -
	    ellipse -
	    box -
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

    # handles/nodes
    foreach hh [$ds9(canvas) find withtag gr${id}] {
	$ds9(canvas) itemconfigure $hh -state normal
    }
}

proc IllustrateHandleOff {id} {
    global ds9

    # handles/nodes
    foreach hh [$ds9(canvas) find withtag gr${id}] {
	$ds9(canvas) itemconfigure $hh -state hidden
    }
}

proc IllustrateDump {} {
    global ds9
    
    foreach id [$ds9(canvas) find all] {
	puts "$id: [$ds9(canvas) gettags $id]"
    }
}

# Process Cmds

proc ProcessIllustrateCmd {varname iname} {
    upvar $varname var
    upvar $iname i

    illustrate::YY_FLUSH_BUFFER
    illustrate::yy_scan_string [lrange $var $i end]
    illustrate::yyparse
    incr i [expr $illustrate::yycnt-1]
}

proc ProcessSendIllustrateCmd {proc id param {sock {}} {fn {}}} {
    global parse
    set parse(proc) $proc
    set parse(id) $id

    illustratesend::YY_FLUSH_BUFFER
    illustratesend::yy_scan_string $param
    illustratesend::yyparse
}
