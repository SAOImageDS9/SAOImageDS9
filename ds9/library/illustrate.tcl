#  Copyright (C) 1999-2022
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc IllustrateDef {} {
    global illustrate
    global iillustrate
    global pillustrate
    global ds9

    set iillustrate(prefix,dialog) {ill}

    set iillustrate(selection) {}
    set iillustrate(clipboard) {}
    set iillustrate(undo) {}

    set illustrate(show) 1
    set illustrate(shape) circle

    # common
    set illustrate(color) cyan
    set illustrate(fill) 0
    set illustrate(width) 1
    set illustrate(dash) 0
    set illustrate(dashlist) {8 3}

    # line
    set illustrate(arrow,left) 0
    set illustrate(arrow,right) 0

    # text
    set illustrate(text) [format "Text\nMore Text"]
    set illustrate(angle) 0
    set illustrate(justify) left
    set illustrate(font) helvetica
    set illustrate(font,size) 12
    set illustrate(font,weight) normal
    set illustrate(font,slant) roman

    # image
    set illustrate(fn) "$ds9(root)/doc/sun.png"

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
    global ds9
    
    # state
    foreach id [$ds9(canvas) find withtag "graphic || handle || node"] {
	$ds9(canvas) itemconfigure $id -state normal
    }

    IllustrateSelectNone
    IllustrateBindEvents
}

proc IllustrateModeEnd {} {
    global ds9
    
    # state
    foreach id [$ds9(canvas) find withtag "graphic || handle || node"] {
	$ds9(canvas) itemconfigure $id -state disabled
    }

    IllustrateSelectNone
    IllustrateUnBindEvents
}

# Graphics

proc IllustrateCreateGraphic {xx yy} {
    global illustrate
    global pillustrate

    switch $illustrate(shape) {
	circle {
	    return [IllustrateCircleCreate $xx $yy 0 \
			$illustrate(color) $illustrate(fill) \
			$illustrate(width) $illustrate(dash)\
		       ]
	}
	ellipse {
	    return [IllustrateEllipseCreate $xx $yy 0 0 \
			$illustrate(color) $illustrate(fill) \
			$illustrate(width) $illustrate(dash)\
		       ]
	}
	box {
	    return [IllustrateBoxCreate $xx $yy 0 0 \
			$illustrate(color) $illustrate(fill) \
			$illustrate(width) $illustrate(dash)\
		       ]
	}
	polygon {
	    return [IllustratePolygonCreate \
			[list $xx $yy $xx $yy $xx $yy $xx $yy] \
			$illustrate(color) $illustrate(fill) \
			$illustrate(width) $illustrate(dash)\
		       ]
	}
	line {
	    return [IllustrateLineCreate $xx $yy $xx $yy \
			$illustrate(color) \
			$illustrate(width) $illustrate(dash) \
			$illustrate(arrow,left) $illustrate(arrow,right) \
		       ]
	}
	text {
	    return [IllustrateTextCreate $xx $yy \
			$illustrate(text) \
			$illustrate(color) \
			$illustrate(font) \
			$illustrate(font,size) \
			$illustrate(font,weight) \
			$illustrate(font,slant)\
			$illustrate(angle) \
			$illustrate(justify) \
		       ]
	}
	image {
	    return [IllustrateImageCreate $xx $yy \
			$illustrate(fn) \
		       ]
	}
    }
}

proc IllustrateDeleteGraphic {id} {
    global ds9

    # dialogs
    IllustrateDeleteCB $id

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
	foreach {idd color fill width dash} $gr {
	    if {$id != $idd} {
		lappend iillustrate(selection) $gr
	    }
	}
    }
}

proc IllustrateColor {} {
    global ds9
    global illustrate
    global iillustrate
    
    IllustrateSaveUndo selectedit {}

    foreach gr $iillustrate(selection) {
	foreach {id color fill width dash} $gr {
	    switch [IllustrateGetType $id] {
		circle -
		ellipse -
		box -
		polygon {
		    IllustrateBaseColor $id \
			$illustrate(color) $illustrate(fill)
		    IllustrateBaseColorCB $id
		}
		line {
		    IllustrateLineColor $id \
			$illustrate(color)
		    IllustrateLineColorCB $id
		}
		text {
		    IllustrateTextColor $id \
			$illustrate(color)
		    IllustrateTextColorCB $id
		}
	    }
	}
    }
    IllustrateUpdateSelection
}

proc IllustrateWidth {} {
    global ds9
    global illustrate
    global iillustrate
    
    IllustrateSaveUndo selectedit {}

    foreach gr $iillustrate(selection) {
	foreach {id color fill width dash} $gr {
	    # graphic
	    switch [IllustrateGetType $id] {
		circle -
		ellipse -
		box -
		polygon -
		line {
		    IllustrateBaseWidthSet $id \
			$illustrate(width) $illustrate(dash)
		    IllustrateBaseWidthCB $id
		}
		text {}
	    }
	}
    }
    IllustrateUpdateSelection
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

# Selection

proc IllustrateIsSelected {id} {
    global ds9
    global illustrate
    global iillustrate
    
    foreach gr $iillustrate(selection) {
	foreach {idd color fill width dash} $gr {
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
	foreach {id color fill width dash} $gr {
	    lappend iillustrate(selection) [IllustrateSaveSelection $id]
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

    lappend iillustrate(selection) [IllustrateSaveSelection $id]
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
	foreach {idd color fill width dash} $gr {
	    if {$id != $idd} {
		lappend iillustrate(selection) $gr
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
	edit {lappend ll [list $id [IllustrateCopy $id]]}
	selectedit -
	selectdelete {
	    foreach gr $iillustrate(selection) {
		foreach {id color fill width dash} $gr {
		    lappend ll [list $id [IllustrateCopy $id]]
		}
	    }
	}
	deleteall {
	    foreach id [$ds9(canvas) find withtag {graphic}] {
		lappend ll [list $id [IllustrateCopy $id]]
	    }
	}
    }
    set iillustrate(undo) [list $undo $ll]
    UpdateEditMenu
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

proc IllustrateBackup {ch dir} {
    global ds9
    global iillustrate

    set rdir "./[lindex [file split $dir] end]"
    if {[$ds9(canvas) find withtag {graphic}]>0} {
	# prep
	set fn $dir/ds9.seg
	if {[catch {set ff [open $fn w]}]} {
	    return
	}

	# look for 'image' graphics
	set rr "[IllustrateListHeader]\n"
	foreach id [$ds9(canvas) find withtag {graphic}] {
	    set ll [IllustrateList $id]
	    switch [IllustrateGetType $id] {
		image {
		    # new image filename and save
		    set ext [file ext [lindex $ll 3]]
		    set imgfn "image${id}${ext}"
		    set ph [$ds9(canvas) itemcget $id -image]
		    $ph write $dir/$imgfn
		    
		    # swap out for new filename
		    append rr "[lindex $ll 0] "
		    append rr "[lindex $ll 1] "
		    append rr "[lindex $ll 2] "
		    append rr "$rdir/$imgfn\n"
		}
		default {
		    append rr "$ll\n"
		}
	    }
	}
	puts $ff $rr
	close $ff
	
	puts $ch "IllustrateLoadFn $fn"
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

    set rr "[IllustrateListHeader]\n"
    foreach id [$ds9(canvas) find withtag {graphic}] {
	IllustrateList rr $id
    }

    ProcessSend $parse(proc) $parse(id) $parse(sock) $parse(fn) {.seg} $rr
}

proc IllustrateCmdOpen {} {
    global iillustrate
    
    foreach gr $iillustrate(selection) {
	foreach {id color fill width dash} $gr {
	    IllustrateDialog $id
	}
    }
}

proc IllustrateCmdClose {} {
    global iillustrate
    
    foreach gr $iillustrate(selection) {
	foreach {id color fill width dash} $gr {
	    IllustrateDialogClose $id
	}
    }
}
