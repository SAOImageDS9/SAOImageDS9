#  Copyright (C) 1999-2022
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

# Show

proc IllustrateShow {} {
    global ds9
    global iillustrate

    if {$illustrate(show)} {
	# turn on all graphics
	foreach id [$ds9(canvas) find withtag graphic] {
	    $ds9(canvas) itemconfigure $id -state normal
	}

	# turn on handles/nodes of selection
	foreach gr $iillustrate(selection) {
	    foreach {id x1 y1 x2 y2 color fill dash} $gr {
		foreach hh [$ds9(canvas) find withtag gr${id}] {
		    $ds9(canvas) itemconfigure $hh -state normal
		}
	    }
	}
    } else {
	foreach id [$ds9(canvas) find withtag "graphic || handle || node"] {
	    $ds9(canvas) itemconfigure $id -state hidden
	}
    }
}

# Move

proc IllustrateMoveFront {} {
    global ds9
    global iillustrate

    set ll [$ds9(canvas) find withtag {graphic}]
    set top [lindex $ll end]

    # graphic
    foreach gr $iillustrate(selection) {
	foreach {id x1 y1 x2 y2 color fill dash} $gr {
	    if {$id != $top} {
		$ds9(canvas) raise $id $top
	    }
	}
    }
    
    # now sort out the handles
    foreach id [$ds9(canvas) find withtag {graphic}] {
	# handles/nodes
	foreach hh [$ds9(canvas) find withtag gr${id}] {
	    $ds9(canvas) raise $hh $id
	}
    }
}

proc IllustrateMoveBack {} {
    global ds9
    global iillustrate

    set ll [$ds9(canvas) find withtag {graphic}]
    set bottom [lindex $ll 0]

    # graphic
    foreach gr $iillustrate(selection) {
	foreach {id x1 y1 x2 y2 color fill dash} $gr {
	    if {$id != $bottom} {
		$ds9(canvas) lower $id $bottom
	    }
	}
    }
    
    # now sort out the handles
    foreach id [$ds9(canvas) find withtag {graphic}] {
	# handles/nodes
	foreach hh [$ds9(canvas) find withtag gr${id}] {
	    $ds9(canvas) raise $hh $id
	}
    }
}

# Delete

proc IllustrateDeleteSelect {} {
    global ds9
    global iillustrate

    foreach gr $iillustrate(selection) {
	foreach {id x1 y1 x2 y2 color fill dash} $gr {
	    # handles/nodes
	    foreach hh [$ds9(canvas) find withtag gr${id}] {
		$ds9(canvas) delete $hh
	    }

	    # graphic
	    $ds9(canvas) delete $id
	}
    }

    set iillustrate(selection) {}
}

proc IllustrateDeleteAll {} {
    global ds9
    global iillustrate

    foreach id [$ds9(canvas) find withtag {graphic}] {
	$ds9(canvas) delete $id
	# handles/nodes
	foreach hid [$ds9(canvas) find withtag gr${id}] {
	    $ds9(canvas) delete $hid
	}
    }

    set iillustrate(selection) {}
}

# Select

proc IllustrateSelectAll {} {
    global ds9
    
    foreach id [$ds9(canvas) find withtag {graphic}] {
	IllustrateAddToSelection $id
    }
}

proc IllustrateSelectNone {} {
    global ds9
    global iillustrate
    
    # handles
    foreach id [$ds9(canvas) find withtag {handle}] {
	$ds9(canvas) itemconfigure $id -state hidden
    }
    # nodes
    foreach id [$ds9(canvas) find withtag {node}] {
	$ds9(canvas) itemconfigure $id -state hidden
    }
    set iillustrate(selection) {}
}

proc IllustrateInvertSelect {} {
    global ds9

    set ll [$ds9(canvas) find withtag {graphic}]
    foreach id $ll {
	if {[IllustrateIsSelected $id]} {
	    IllustrateUnselect $id
	} else {
	    IllustrateAddToSelection $id
	}
    }
}

proc IllustrateSelectFront {} {
    global ds9

    IllustrateSelectNone
    set id [lindex [$ds9(canvas) find withtag {graphic}] end]
    IllustrateAddToSelection $id
}

proc IllustrateSelectBack {} {
    global ds9

    IllustrateSelectNone
    set id [lindex [$ds9(canvas) find withtag {graphic}] 0]
    IllustrateAddToSelection $id
}

# Undo/Copy/Cut/Paste

proc IllustrateUndo {} {
    UpdateEditMenu
}

proc IllustrateCut {} {
    global iillustrate

    set iillustrate(clipboard) {}
    foreach gr $iillustrate(selection) {
	foreach {id x1 y1 x2 y2 color fill dash} $gr {
	    set type [IllustrateGetType $id]
	    switch $type {
		circle -
		ellipse -
		box -
		polygon {lappend iillustrate(clipboard) \
			     [IllustrateCopyBase $id $type]}
		line {lappend iillustrate(clipboard) [IllustrateCopyLine $id]}
		text {lappend iillustrate(clipboard) [IllustrateCopyText $id]}
	    }
	    IllustrateDeleteGraphic $id
	}
    }

    UpdateEditMenu
}

proc IllustrateCopy {} {
    global iillustrate
    
    set iillustrate(clipboard) {}
    foreach gr $iillustrate(selection) {
	foreach {id x1 y1 x2 y2 color fill dash} $gr {
	    set type [IllustrateGetType $id]
	    switch $type {
		circle -
		ellipse -
		box  -
		polygon {lappend iillustrate(clipboard) \
			     [IllustrateCopyBase $id $type]}
		line {lappend iillustrate(clipboard) [IllustrateCopyLine $id]}
		text {lappend iillustrate(clipboard) [IllustrateCopyText $id]}
	    }
	}
    }

    UpdateEditMenu
}

proc IllustratePaste {} {
    global iillustrate

    IllustrateSelectNone
    foreach gr $iillustrate(clipboard) {
	foreach {type param} $gr {
	    switch $type {
		circle -
		ellipse -
		box {set id [IllustrateDupBase $type $param]}
		polygon {set id [IllustrateDupPolygon $param]}
		line {set id [IllustrateDupLine $param]}
		text {set id [IllustrateDupText $param]}
	    }
	    IllustrateAddToSelection $id
	}
    }

    UpdateEditMenu
}

# Load

proc IllustrateLoad {} {
    global ds9
    
    IllustrateLoadFn [OpenFileDialog markerfbox]
    
}

proc IllustrateLoadFn {fn} {
    if {$fn == {}} {
	return
    }

    if {[catch {set ch [open $fn r]}]} {
	return
    }

    set illustratereg::yyin $ch
    illustratereg::yyparse

    close $ch
}

# Save

proc IllustrateListHeader {} {
    set rr {}
    append rr  "# Region file format: DS9 version 4.2\n"
    append rr "global color=cyan fill=0 dashlist=8 3 width=1 font=\"helvetica 10 normal roman\" dash=0\n"
    append rr "image\n"
}

proc IllustrateSave {ch id} {
    switch [IllustrateGetType $id] {
	circle {puts $ch "[IllustrateListCircle $id]\n"}
	ellipse {puts $ch "[IllustrateListEllipse $id]\n"}
	box {puts $ch "[IllustrateListBox $id]\n"}
	polygon {puts $ch "[IllustrateListPolygon $id]\n"}
	line {puts $ch "[IllustrateListLine $id]\n"}
	text {puts $ch "[IllustrateListText $id]\n"}
    }
}

proc IllustrateSaveSelect {} {
    global ds9
    global iillustrate

    set fn [SaveFileDialog markerfbox]
    if {$fn == {}} {
	return
    }

    if {[catch {set ch [open $fn w]}]} {
	return
    }

    puts $ch [IllustrateListHeader]
    foreach gr $iillustrate(selection) {
	foreach {id x1 y1 x2 y2 color fill dash} $gr {
	    IllustrateSave $ch $id
	}
    }

    close $ch
}

proc IllustrateSaveAll {} {
    global ds9
    
    set fn [SaveFileDialog markerfbox]
    if {$fn == {}} {
	return
    }

    if {[catch {set ch [open $fn w]}]} {
	return
    }

    puts $ch [IllustrateListHeader]
    foreach id [$ds9(canvas) find withtag {graphic}] {
	IllustrateSave $ch $id
    }

    close $ch
}

# List

proc IllustrateList {varname id} {
    upvar $varname var

    switch [IllustrateGetType $id] {
	circle {append var "[IllustrateListCircle $id]\n"}
	ellipse {append var "[IllustrateListEllipse $id]\n"}
	box {append var "[IllustrateListBox $id]\n"}
	polygon {append var "[IllustrateListPolygon $id]\n"}
	line {append var "[IllustrateListLine $id]\n"}
	text {append var "[IllustrateListText $id]\n"}
    }
}

proc IllustdrateListSelect {} {
    global ds9
    global iillustrate

    set rr [IllustrateListHeader]
    foreach gr $iillustrate(selection) {
	foreach {id x1 y1 x2 y2 color fill dash} $gr {
	    IllustrateList rr $id
	}
    }

    SimpleTextDialog illustratetxt [msgcat::mc {Illustrate}] \
	80 20 insert top $rr
}

proc IllustrateListAll {} {
    global ds9
    
    set rr [IllustrateListHeader]
    foreach id [$ds9(canvas) find withtag {graphic}] {
	IllustrateList rr $id
    }
    
    SimpleTextDialog illustratetxt [msgcat::mc {Illustrate}] \
	80 20 insert top $rr
}
