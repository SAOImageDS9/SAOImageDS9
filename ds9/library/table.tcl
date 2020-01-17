#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc TBLClearFrame {layer} {
    global current

    if {$current(frame) != {}} {
	$current(frame) marker $layer delete all
    }
}

proc TBLValidDB {varname} {
    upvar #0 $varname var
    global $varname

    if {[info exists var(Nrows)] && 
	[info exists var(Ncols)] &&
	[info exists var(HLines)] &&
	[info exists var(Header)]} {
	return 1
    } else {
	return 0
    }
}

proc TBLStatusRows {varname rowlist} {
    upvar #0 $varname var
    global $varname

    # rowlist start at 1
    if {[llength $rowlist]>0} {
	ARStatus $varname "[msgcat::mc {Row}] [join $rowlist {,}]"
    } else {
	ARStatus $varname {}
    }
}

proc TBLSelectTimer {varname layer} {
    upvar #0 $varname var
    global $varname

    switch -- $var(blink) {
	0 {
	    set var(blink) 0
	    set var(blink,count) 0
	    set var(blink,marker) {}
	    set var(blink,marker,color) {}
	}
	1 {
	    for {set ii 0} {$ii<[llength $var(blink,marker)]} {incr ii} {
		set mm [lindex $var(blink,marker) $ii]
		set clr [lindex $var(blink,marker,color) $ii]

		if {[info commands $var(frame)] != {}} {
		    if {[$var(frame) has fits]} {
			if {$var(blink,count) < 4} {
			    switch $clr {
				red {$var(frame) marker $layer $mm color green}
				default {$var(frame) marker $layer $mm color red}
			    }
			}
			$var(frame) marker $layer $mm highlite
		    }
		}
	    }
	    
	    incr ${varname}(blink,count)
	    if {$var(blink,count) < 5} {
		set var(blink) 2
	    } else {
		set var(blink) 0
	    }

	    after 250 [list TBLSelectTimer $varname $layer]
	}
	2 {
	    for {set ii 0} {$ii<[llength $var(blink,marker)]} {incr ii} {
		set mm [lindex $var(blink,marker) $ii]
		set clr [lindex $var(blink,marker,color) $ii]

		if {[info commands $var(frame)] != {}} {
		    if {[$var(frame) has fits]} {
			$var(frame) marker $layer $mm color $clr
			$var(frame) marker $layer $mm unhighlite
		    }
		}
	    }
	    set var(blink) 1

	    after 250 [list TBLSelectTimer $varname $layer]
	}
    }
}

proc TBLSelectTimerCancel {varname layer} {
    upvar #0 $varname var
    global $varname
    
    if {$var(blink)} {
	# cancel all pending
	foreach aa [after info] {
	    set id [string range $aa 6 end]
	    after cancel $aa
	}

	for {set ii 0} {$ii<[llength $var(blink,marker)]} {incr ii} {
	    set mm [lindex $var(blink,marker) $ii]
	    set clr [lindex $var(blink,marker,color) $ii]

	    if {[info commands $var(frame)] != {}} {
		if {[$var(frame) has fits]} {
		    $var(frame) marker $layer $mm color $clr
		}
	    }
	}
    }

    $var(frame) marker $layer $varname unhighlite

    # init timer vars
    set var(blink) 0
    set var(blink,count) 0
    set var(blink,marker) {}
    set var(blink,marker,color) {}
}

proc TBLPanTo {varname mk layer} {
    upvar #0 $varname var
    global $varname

    if {[info commands $var(frame)] == {}} {
	return
    }

    if {![$var(frame) has fits]} {
	return
    }

    # pan to first region
    if {$var(panto) && $mk != {}} {
	set tt [$var(frame) get marker $layer $mk tag]
	if {$tt!={}} {
	    set cc [$var(frame) get marker $layer $tt center \
			$var(psystem) $var(psky)]
	    PanToFrame $var(frame) [lindex $cc 0] [lindex $cc 1] \
		$var(psystem) $var(psky)
	}
    }
}

proc TBLWCSMenuUpdate {varname} {
    upvar #0 $varname var
    global $varname

    ARCoord $varname

    set var(psystem) $var(system)
    set var(psky) $var(sky)
    CoordMenuButtonCmd $varname psystem psky {}
}

proc TBLUpdateFont {ll} {
    foreach varname $ll {
	upvar #0 $varname var
	global $varname

	$var(tbl) configure -font [font actual TkDefaultFont]
    }
}

# Cut/Copy

proc TBLCopy {varname} {
    upvar #0 $varname var
    global $varname

    set w [focus -displayof $var(top)]
    if {$w == $var(tbl)} {
	TBLCopyTable $varname
    } else {
	EntryCopy $var(top)
    }
}

proc TBLCut {varname} {
    upvar #0 $varname var
    global $varname

    set w [focus -displayof $var(top)]
    if {$w == $var(tbl)} {
	TBLCopyTable $varname
    } else {
	EntryCut $var(top)
    }
}

proc TBLCopyTable {varname} {
    upvar #0 $varname var
    global $varname

    set w [focus -displayof $var(top)]

    set sel [$var(tbl) curselection]
    set data {}
    set row [lindex [split [lindex $sel 0] ,] 0]
    foreach ss $sel {
	set rr [lindex [split $ss ,] 0]
	if {$rr != $row} {
	    append data "\n"
	    set row $rr
	} else {
	    if {$data != {}} {
		append data "\t"
	    }
	}
	append data "[$var(tbl) get $ss]"
    }
    append data "\n"
    clipboard clear -displayof $w
    clipboard append -displayof $w $data
}

# Save via File

proc TBLSaveVOTFile {varname} {
    set fn [SaveFileDialog votfbox]
    TBLSaveFn $varname $fn VOTWrite
}

proc TBLSaveRDBFile {varname} {
    set fn [SaveFileDialog rdbfbox]
    TBLSaveFn $varname $fn starbase_write
}

proc TBLSaveTSVFile {varname} {
    set fn [SaveFileDialog tsvfbox]
    TBLSaveFn $varname $fn TSVWrite
}

proc TBLSaveFn {varname fn writer} {
    upvar #0 $varname var
    global $varname
    global $var(tbldb)

    if {$fn == {}} {
	return
    }

    # do we have a db?
    if {![TBLValidDB $var(tbldb)]} {
	return
    }

    $writer $var(tbldb) $fn
    ARDone $varname
}

proc TBLCmdSave {fn writer} {
    global cvarname

    if {$fn != {}} {
	TBLSaveFn $cvarname $fn $writer
	FileLast votbox $fn
    }
}

proc TBLCmdCoord {xx yy sky} {
    global cvarname
    upvar #0 $cvarname cvar

    set cvar(x) $xx
    set cvar(y) $yy
    set cvar(sky) $sky
}

proc TBLCmdSize {radius rformat} {
    global cvarname
    upvar #0 $cvarname cvar

    set cvar(radius) $radius
    set cvar(rformat) $rformat
    set cvar(rformat,msg) $rformat
}

proc TBLCmdSkyframe {skyframe} {
    global cvarname
    upvar #0 $cvarname cvar

    set cvar(sky) $skyframe
    CoordMenuButtonCmd $cvarname system sky [list TBLWCSMenuUpdate $cvarname]
}

proc TBLCmdSystem {sys} {
    global cvarname
    upvar #0 $cvarname cvar

    set cvar(system) $sys
    CoordMenuButtonCmd $cvarname system sky [list TBLWCSMenuUpdate $cvarname]
}

# print

proc TBLPrint {varname} {
    upvar #0 $varname var
    global $varname
    global $var(tbldb)

    global ds9
    switch $ds9(wm) {
	x11 -
	aqua -
	win32 {TBLPSPrint $varname}
    }	
}

proc TBLPSPrint {varname} {
    upvar #0 $varname var
    global $varname

    if {[PRPrintDialog]} { 
	if {[catch {TBLPostScript $varname} printError]} {
	    Error "[msgcat::mc {An error has occurred while printing}] $printError"
	}
    }
}

proc TBLPostScript {varname} {
    upvar #0 $varname var
    global $varname
    global $var(tbldb)

    global ps

    if {$ps(dest) == "file"} {
	set ch [open "| cat > $ps(filename,txt)" w]
    } else {
	set ch [open "| $ps(cmd)" w]
    }

    starbase_writefp $var(tbldb) $ch
    close $ch
}

proc TBLCmdPrint {varname} {
    upvar #0 $varname var
    global $varname
    global $var(tbldb)

    global ps

    set ch [open "| $ps(cmd)" w]
    starbase_writefp $var(tbldb) $ch
    close $ch
}

