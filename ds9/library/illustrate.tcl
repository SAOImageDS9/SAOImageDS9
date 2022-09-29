#  Copyright (C) 1999-2022
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc IllustrateDef {} {
    global illustrate
    global iillustrate
    global pillustrate

    set iillustrate(prefix,dialog) {ill}

    set iillustrate(selection) {}
    set iillustrate(clipboard) {}
    set iillustrate(undo) {}

    set illustrate(show) 1
    set illustrate(shape) circle
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
	    return [IllustrateCircleCreate $xx $yy 0 \
			$illustrate(color) $illustrate(fill) \
			$illustrate(width) $illustrate(dash)]
	}
	ellipse {
	    return [IllustrateEllipseCreate $xx $yy 0 0 \
			$illustrate(color) $illustrate(fill) \
			$illustrate(width) $illustrate(dash)]
	}
	box {
	    return [IllustrateBoxCreate $xx $yy 0 0 \
			$illustrate(color) $illustrate(fill) \
			$illustrate(width) $illustrate(dash)]
	}
	polygon {
	    return [IllustratePolygonCreate \
			[list $xx $yy $xx $yy $xx $yy $xx $yy] \
			$illustrate(color) $illustrate(fill) \
			$illustrate(width) $illustrate(dash)]
	}
	line {
	    return [IllustrateLineCreate $xx $yy $xx $yy \
			$illustrate(color) \
			$illustrate(width) $illustrate(dash)]
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
	    return [IllustrateTextCreate $xx $yy $txt \
			$illustrate(color) \
			"$illustrate(font) $illustrate(font,size) $illustrate(font,weight) $illustrate(font,slant)"]
	}
    }
}

proc IllustrateDeleteGraphic {id} {
    global ds9

    # dialogs
    switch [IllustrateGetType $id] {
	circle {IllustrateCircleDeleteCB $id}
	ellipse {}
	box {}
	polygon {}
	line {}
	text {}
    }

    # handles/nodes
    foreach hh [$ds9(canvas) find withtag gr${id}] {
	$ds9(canvas) delete $hh
    }

    # graphic
    $ds9(canvas) delete $id
}

proc IllustrateDeleteGraphicOne {id} {
    global ds9
    global iillustrate

    IllustrateDeleteGraphic $id

    # update selection
    set old $iillustrate(selection)
    set iillustrate(selection) {}
    foreach gr $old {
	foreach {idd color fillcolor dashlist} $gr {
	    if {$id != $idd} {
		lappend iillustrate(selection) $gr
	    }
	}
    }
}

proc IllustrateUpdateColor {} {
    global ds9
    global illustrate
    global iillustrate
    
    IllustrateSaveUndo selectedit {}

    set old $iillustrate(selection)
    set iillustrate(selection) {}
    foreach gr $old {
	foreach {id color fillcolor dashlist} $gr {
	    switch [IllustrateGetType $id] {
		circle {
		    IllustrateBaseUpdateColor $id \
			$illustrate(color) $illustrate(fill)
		    IllustrateCirclePropsCB $id
		}
		ellipse {
		    IllustrateBaseUpdateColor $id \
			$illustrate(color) $illustrate(fill)
		}
		box {
		    IllustrateBaseUpdateColor $id \
			$illustrate(color) $illustrate(fill)
		}
		polygon {
		    IllustrateBaseUpdateColor $id \
			$illustrate(color) $illustrate(fill)
		}
		line {
		    IllustrateLineUpdateColor $id \
			$illustrate(color)
		}
		text {
		    IllustrateTextUpdateColor $id \
			$illustrate(color)
		}
	    }
            # update selection list
            lappend iillustrate(selection) [IllustrateSaveGraphic $id]
	}
    }
}

proc IllustrateUpdateWidth {} {
    global ds9
    global illustrate
    global iillustrate
    
    IllustrateSaveUndo selectedit {}

    set old $iillustrate(selection)
    set iillustrate(selection) {}
    foreach gr $old {
	foreach {id color fillcolor dashlist} $gr {
	    # graphic
	    switch [IllustrateGetType $id] {
		circle {
		    IllustrateBaseUpdateWidth $id \
			$illustrate(width) $illustrate(dash)
		    IllustrateCirclePropsCB $id
		}
		ellipse {
		    IllustrateBaseUpdateWidth $id \
			$illustrate(width) $illustrate(dash)
		}
		box {
		    IllustrateBaseUpdateWidth $id \
			$illustrate(width) $illustrate(dash)
		}
		polygon {
		    IllustrateBaseUpdateWidth $id \
			$illustrate(width) $illustrate(dash)
		}
		line {
		    IllustrateLineUpdateWidth $id \
			$illustrate(width) $illustrate(dash)
		}
		text {}
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
	foreach {idd color fillcolor dashlist} $gr {
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
	foreach {id color fillcolor dashlist} $gr {
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
	foreach {idd color fillcolor dashlist} $gr {
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
	foreach {id color fillcolor dashlist} $gr {
	    switch [IllustrateGetType $id] {
		circle -
		ellipse -
		box -
		text {
		    $ds9(canvas) move $id $dx $dy
		    IllustrateBaseUpdateHandle $id
		}
		polygon {
		    $ds9(canvas) move $id $dx $dy
		    IllustratePolygonUpdateHandle $id
		}
		line {
		    $ds9(canvas) move $id $dx $dy
		    IllustrateLineUpdateHandle $id
		}
	    }
	}
    }
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
		polygon {lappend ll [list $id [IllustrateBaseCopy $id]]}
		line {lappend ll [list $id [IllustrateLineCopy $id]]}
		text {lappend ll [list $id [IllustrateTextCopy $id]]}
	    }
	}
	selectedit -
	selectdelete {
	    foreach gr $iillustrate(selection) {
		foreach {id color fillcolor dashlist} $gr {
		    switch [IllustrateGetType $id] {
			circle -
			ellipse -
			box  -
			polygon {lappend ll [list $id [IllustrateBaseCopy $id]]}
			line {lappend ll [list $id [IllustrateLineCopy $id]]}
			text {lappend ll [list $id [IllustrateTextCopy $id]]}
		    }
		}
	    }
	}
    }
    set iillustrate(undo) [list $undo $ll]

    UpdateEditMenu
}

proc IllustrateSaveGraphic {id} {
    switch [IllustrateGetType $id] {
	circle -
	ellipse -
	box -
	polygon {return [IllustrateBaseSave $id]}
	line {return [IllustrateLineSave $id]}
	text {return [IllustrateTextSave $id]}
    }
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
    foreach {id color fillcolor dashlist} $gr {
	switch [IllustrateGetType $id] {
	    circle -
	    ellipse -
	    box -
	    polygon {
		$ds9(canvas) itemconfigure $id \
		    -outline $color \
		    -fill $fillcolor \
		    -dash $dashlist
	    }
	    line {
		$ds9(canvas) itemconfigure $id \
		    -fill $fillcolor \
		    -dash $dashlist
	    }
	    text {
		$ds9(canvas) itemconfigure $id \
		    -fill $fillcolor
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

proc ProcessIllustrateCmd {varname iname sock fn} {
    upvar $varname var
    upvar $iname i

    global parse
    set parse(sock) $sock
    set parse(fn) $fn

    illustrate::YY_FLUSH_BUFFER
    illustrate::yy_scan_string [lrange $var $i end]
    illustrate::yyparse
    incr i [expr $illustrate::yycnt-1]
}

proc ProcessSendIllustrateCmd {proc id param {sock {}} {fn {}}} {
    global parse
    set parse(proc) $proc
    set parse(id) $id
    set parse(sock) $sock
    set parse(fn) $fn
    puts "a:[array get parse]"

    illustratesend::YY_FLUSH_BUFFER
    illustratesend::yy_scan_string $param
    illustratesend::yyparse
}

proc IllustrateCmdLoad {} {
    global parse

    if {$parse(sock) != {}} {
	illustratefile::YY_FLUSH_BUFFER
	illustratefile::yy_scan_string [read $parse(sock)]
	illustratefile::yyparse
	close $parse(sock)
    } elseif {$parse(fn) != {}} {
	IllustrateLoadFn $parse(fn)
    }
}

proc IllustrateCmdCommand {cmd} {
    illustratefile::YY_FLUSH_BUFFER
    illustratefile::yy_scan_string $cmd
    illustratefile::yyparse
}

proc IllustrateCmdSend {} {
    global ds9
    global parse
    puts "b:[array get parse]"
    set rr "[IllustrateListHeader]\n"
    foreach id [$ds9(canvas) find withtag {graphic}] {
	IllustrateList rr $id
    }

    ProcessSend $parse(proc) $parse(id) $parse(sock) $parse(fn) {.seg} $rr
}

proc IllustrateCmdOpen {} {
    global iillustrate
    
    foreach gr $iillustrate(selection) {
	foreach {id color fillcolor dashlist} $gr {
	    IllustrateDialog $id
	}
    }
}

proc IllustrateCmdOpen {} {
    global iillustrate
    
    foreach gr $iillustrate(selection) {
	foreach {id color fillcolor dashlist} $gr {
	    IllustrateDialogClose $id
	}
    }
}
