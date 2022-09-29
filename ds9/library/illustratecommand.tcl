#  Copyright (C) 1999-2022
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

# Get Inof

proc IllustrateGetInfo {} {
    global pds9
    global iillustrate

    if {[llength $iillustrate(selection)] == 0} {
	if {$pds9(confirm)} {
	    tk_messageBox -type ok -icon info -message [msgcat::mc {Please Select a Region}]
	}
	return
    }

    foreach gr $iillustrate(selection) {
	foreach {id color fillcolor dashlist} $gr {
	    IllustrateDialog $id
	}
    }
}

proc IllustrateDialog {id} {
    switch [IllustrateGetType $id] {
	circle {IllustrateCircleDialog $id}
	ellipse {}
	box {}
	polygon {}
	line {}
	text {}
    }
}

proc IllustrateDialogClose {id} {
    switch [IllustrateGetType $id] {
	circle {IllustrateCircleDialogClose $id}
	ellipse {}
	box {}
	polygon {}
	line {}
	text {}
    }
}

# Show

proc IllustrateShow {} {
    global ds9
    global illustrate
    global iillustrate

    if {$illustrate(show)} {
	# turn on all graphics
	foreach id [$ds9(canvas) find withtag graphic] {
	    $ds9(canvas) itemconfigure $id -state normal
	}

	# turn on handles/nodes of selection
	foreach gr $iillustrate(selection) {
	    foreach {id color fillcolor dashlist} $gr {
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
	foreach {id color fillcolor dashlist} $gr {
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
	foreach {id color fillcolor dashlist} $gr {
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
	foreach {id color fillcolor dashlist} $gr {
	    IllustrateDeleteGraphic $id
	}
    }

    set iillustrate(selection) {}
}

proc IllustrateDeleteAll {} {
    global ds9
    global iillustrate

    foreach id [$ds9(canvas) find withtag {graphic}] {
	IllustrateDeleteGraphic $id
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
    global ds9
    global iillustrate

    foreach {cmd ll} $iillustrate(undo) {
	switch $cmd {
	    create {
		foreach item $ll {
		    foreach {id graphic} $item {
			IllustrateDeleteGraphicOne $id
		    }
		}
	    }
	    edit -
	    selectedit {
		foreach item $ll {
		    foreach {id graphic} $item {
			foreach {type param} $graphic {
			    switch $type {
				circle -
				ellipse -
				box -
				polygon {IllustrateBaseSet $id $param}
				line {IllustrateLineSet $id $param}
				text {IllustrateTextSet $id $param}
			    }
			}
		    }
		}
	    }
	    selectdelete {
		foreach item $ll {
		    foreach {id graphic} $item {
			foreach {type param} $graphic {
			    switch $type {
				circle -
				ellipse -
				box {set id [IllustrateBaseDup $type $param]}
				polygon {set id [IllustratePolygonDup $param]}
				line {set id [IllustrateLineDup $param]}
				text {set id [IllustrateTextDup $param]}
			    }
			    IllustrateAddToSelection $id
			}
		    }
		}
	    }
	}
    }

    set iillustrate(undo) {}

    UpdateEditMenu
}

proc IllustrateCut {} {
    global iillustrate

    set iillustrate(clipboard) {}
    foreach gr $iillustrate(selection) {
	foreach {id color fillcolor dashlist} $gr {
	    switch [IllustrateGetType $id] {
		circle -
		ellipse -
		box -
		polygon {
		    lappend iillustrate(clipboard) [IllustrateBaseCopy $id]
		}
		line {lappend iillustrate(clipboard) [IllustrateLineCopy $id]}
		text {lappend iillustrate(clipboard) [IllustrateTextCopy $id]}
	    }
	    IllustrateDeleteGraphicOne $id
	}
    }

    UpdateEditMenu
}

proc IllustrateCopy {} {
    global iillustrate
    
    set iillustrate(clipboard) {}
    foreach gr $iillustrate(selection) {
	foreach {id color fillcolor dashlist} $gr {
	    switch [IllustrateGetType $id] {
		circle -
		ellipse -
		box  -
		polygon {
		    lappend iillustrate(clipboard) [IllustrateBaseCopy $id]
		}
		line {lappend iillustrate(clipboard) [IllustrateLineCopy $id]}
		text {lappend iillustrate(clipboard) [IllustrateTextCopy $id]}
	    }
	}
    }

    UpdateEditMenu
}

proc IllustratePaste {} {
    global iillustrate

    IllustrateSelectNone
    foreach graphic $iillustrate(clipboard) {
	foreach {type param} $graphic {
	    switch $type {
		circle -
		ellipse -
		box {set id [IllustrateBaseDup $type $param]}
		polygon {set id [IllustratePolygonDup $param]}
		line {set id [IllustrateLineDup $param]}
		text {set id [IllustrateTextDup $param]}
	    }
	    IllustrateAddToSelection $id
	}
    }

    UpdateEditMenu
}

# Load

proc IllustrateLoad {} {
    global ds9
    
    IllustrateLoadFn [OpenFileDialog illustratefbox]
    
}

proc IllustrateLoadFn {fn} {
    if {$fn == {}} {
	return
    }

    if {[catch {set ch [open $fn r]}]} {
	return
    }

    illustratefile::YY_FLUSH_BUFFER
    set illustratefile::yyin $ch
    illustratefile::yyparse

    close $ch
    FileLast illustratefbox $fn
}

# Save

proc IllustrateListHeader {} {
    set rr {}
    append rr  "# Illustrate file format: DS9 version 1.0\n"
    append rr "global color = cyan fill = no width = 1 dash = no font = \"helvetica 12 normal roman\""
}

proc IllustrateSave {ch id} {
    switch [IllustrateGetType $id] {
	circle {puts $ch [IllustrateCircleList $id]}
	ellipse {puts $ch [IllustrateEllipseList $id]}
	box {puts $ch [IllustrateBoxList $id]}
	polygon {puts $ch [IllustratePolygonList $id]}
	line {puts $ch [IllustrateLineList $id]}
	text {puts $ch [IllustrateTextList $id]}
    }
}

proc IllustrateSaveSelect {} {
    global ds9
    global iillustrate

    set fn [SaveFileDialog illustratefbox]
    if {$fn == {}} {
	return
    }

    if {[catch {set ch [open $fn w]}]} {
	return
    }

    puts $ch [IllustrateListHeader]
    foreach gr $iillustrate(selection) {
	foreach {id color fillcolor dashlist} $gr {
	    IllustrateSave $ch $id
	}
    }

    close $ch
    FileLast illustratefbox $fn
}

proc IllustrateSaveAll {} {
    global ds9
    
    set fn [SaveFileDialog illustratefbox]
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
    FileLast illustratefbox $fn
}

# List

proc IllustrateList {varname id} {
    upvar $varname var

    switch [IllustrateGetType $id] {
	circle {append var "[IllustrateCircleList $id]\n"}
	ellipse {append var "[IllustrateEllipseList $id]\n"}
	box {append var "[IllustrateBoxList $id]\n"}
	polygon {append var "[IllustratePolygonList $id]\n"}
	line {append var "[IllustrateLineList $id]\n"}
	text {append var "[IllustrateTextList $id]\n"}
    }
}

proc IllustdrateListSelect {} {
    global ds9
    global iillustrate

    set rr "[IllustrateListHeader]\n"
    foreach gr $iillustrate(selection) {
	foreach {id color fillcolor dashlist} $gr {
	    IllustrateList rr $id
	}
    }

    SimpleTextDialog illustratetxt [msgcat::mc {Illustrate}] \
	80 20 insert top $rr
}

proc IllustrateListAll {} {
    global ds9
    
    set rr "[IllustrateListHeader]\n"
    foreach id [$ds9(canvas) find withtag {graphic}] {
	IllustrateList rr $id
    }
    
    SimpleTextDialog illustratetxt [msgcat::mc {Illustrate}] \
	80 20 insert top $rr
}
