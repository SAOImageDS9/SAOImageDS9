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
	foreach {id color fill width dash} $gr {
	    IllustrateDialog $id
	}
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
	    foreach {id color fill width dash} $gr {
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
	foreach {id color fill width dash} $gr {
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
	foreach {id color fill width dash} $gr {
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

    IllustrateSaveUndo selectdelete {}

    foreach gr $iillustrate(selection) {
	foreach {id color fill width dash} $gr {
	    IllustrateDeleteGraphic $id
	}
    }

    set iillustrate(selection) {}
}

proc IllustrateDeleteAll {} {
    global ds9
    global iillustrate

    IllustrateSaveUndo deleteall {}

    foreach id [$ds9(canvas) find withtag {graphic}] {
	IllustrateDeleteGraphic $id
    }

    set iillustrate(selection) {}
}

# Select

proc IllustrateSelectAll {} {
    global ds9
    global iillustrate
    
    set iillustrate(selection) {}
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
			    IllustrateSet $id $param
			}
		    }
		}
	    }
	    selectdelete -
	    deleteall {
		foreach item $ll {
		    foreach {id graphic} $item {
			foreach {type param} $graphic {
			    set new [IllustrateDup $type $param]
			    IllustrateAddToSelection $new
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
	foreach {id color fill width dash} $gr {
	    lappend iillustrate(clipboard) [IllustrateCopy $id]
	    IllustrateDeleteGraphicOne $id
	}
    }

    UpdateEditMenu
}

proc IllustrateMenuCopy {} {
    global iillustrate
    
    set iillustrate(clipboard) {}
    foreach gr $iillustrate(selection) {
	foreach {id color fill width dash} $gr {
	    lappend iillustrate(clipboard) [IllustrateCopy $id]
	}
    }

    UpdateEditMenu
}

proc IllustratePaste {} {
    global iillustrate

    IllustrateSelectNone
    foreach graphic $iillustrate(clipboard) {
	foreach {type param} $graphic {
	    set new [IllustrateDup $type $param]
	    IllustrateAddToSelection $new
	}
    }

    UpdateEditMenu
}

# Load

proc IllustrateLoad {} {
    IllustrateLoadFn [OpenFileDialog illustratefbox]
}

proc IllustrateLoadFn {fn} {
    if {$fn == {}} {
	return
    }

    if {[catch {set ch [open $fn r]}]} {
	Error "[msgcat::mc {Unable to open file}] $fn"
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
    append rr "# Illustrate file format: DS9 version 1.0\n"
    append rr "global color = cyan fill = no width = 1 dash = no\n"
    append rr "global font = helvetica fontsize = 12 fontweight = normal fontslant = roman"
}

proc IllustrateSaveSelect {} {
    IllustrateSaveSelectFn [SaveFileDialog illustratefbox]
}
    
proc IllustrateSaveSelectFn {fn} {
    global iillustrate

    if {$fn == {}} {
	return
    }

    if {[catch {set ch [open $fn w]}]} {
	return
    }

    puts $ch [IllustrateListHeader]
    foreach gr $iillustrate(selection) {
	foreach {id color fill width dash} $gr {
	    puts $ch [IllustrateList $id]
	}
    }

    close $ch
    FileLast illustratefbox $fn
}

proc IllustrateSaveAll {} {
    IllustrateSaveAllFn [SaveFileDialog illustratefbox]
}

proc IllustrateSaveAllFn {fn} {
    global ds9
    
    if {$fn == {}} {
	return
    }

    if {[catch {set ch [open $fn w]}]} {
	return
    }

    puts $ch [IllustrateListHeader]
    foreach id [$ds9(canvas) find withtag {graphic}] {
	puts $ch [IllustrateList $id]
    }

    close $ch
    FileLast illustratefbox $fn
}

# List

proc IllustrateListSelect {} {
    global ds9
    global iillustrate

    set rr "[IllustrateListHeader]\n"
    foreach gr $iillustrate(selection) {
	foreach {id color fill width dash} $gr {
	    append rr "[IllustrateList $id]\n"
	}
    }

    SimpleTextDialog illustratetxt [msgcat::mc {Illustrate}] \
	80 20 insert top $rr
}

proc IllustrateListAll {} {
    global ds9
    
    set rr "[IllustrateListHeader]\n"
    foreach id [$ds9(canvas) find withtag {graphic}] {
	append rr "[IllustrateList $id]\n"
    }
    
    SimpleTextDialog illustratetxt [msgcat::mc {Illustrate}] \
	80 20 insert top $rr
}
