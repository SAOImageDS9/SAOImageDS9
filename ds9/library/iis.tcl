#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc IISDef {} {
    global iis

    # all internal
    set iis(state) 0
    set iis(width) 512
    set iis(height) 512
    set iis(x) -1
    set iis(y) -1
    set iis(frame) {}

    set iis(ififo) "/dev/imt1i"
    set iis(ofifo) "/dev/imt1o"
    set iis(port) 5137
    set iis(unix) "/tmp/.IMT%d"
}

proc IISInit {} {
    global iis

    global debug
    if {$debug(iis)} {
	puts stderr "IISInit:"
    }

    iis open $iis(ififo) $iis(ofifo) $iis(port) $iis(unix)
}

proc IISClose {} {
    global debug
    if {$debug(iis)} {
	puts stderr "IISClose:"
    }

    iis close
}

proc IISDebug {} {
    global debug

    iis debug $debug(iis)
}

# Callbacks

proc IISInitializeCmd {w h} {
    global iis

    global debug
    if {$debug(iis)} {
	puts stderr "IISInitializeCmd: $w $h"
    }

    # default frame size
    set iis(width) $w
    set iis(height) $h
}

proc IISInitFrameCmd {which} {
    global debug
    if {$debug(iis)} {
	puts stderr "IISInitFrameCmd: $which"
    }
}

proc IISSetDisplayFrameCmd {which w h} {
    global iis

    global debug
    if {$debug(iis)} {
	puts stderr "IISSetDisplayFrameCmd: $which $w $h"
    }
    IISGotoFrame $which
    IISLoadFrame $which
}

proc IISSetRefFrameCmd {which} {
    global iis
    global ds9

    global debug
    if {$debug(iis)} {
	puts stderr "IISSetRefFrameCmd: $which"
    }

    if {[lsearch $ds9(frames) Frame$which] == -1} {
	return {[NOSUCHFRAME]}
    }

    if {[Frame$which has iis]} {
	return {}
    }

    set filename [Frame$which get iis file name $iis(x) $iis(y)]

    if {![string equal [string index $filename 0] "/"] } {
        set filename [file join [pwd] $filename]
    }

    return "$filename 1. 0. 0. 1. 0. 0. 1. 32767. 1."
}

proc IISEraseFrameCmd {which} {
    global debug
    if {$debug(iis)} {
	puts stderr "IISEraseFrameCmd: $which"
    }

    Frame$which iis erase
    IISResetTimer $which
}

proc IISMessageCmd {message} {
    global current

    global debug
    if {$debug(iis)} {
	puts stderr "IISMessageCmd: $message"
    }

    $current(frame) iis message "\"$message\""
    RefreshInfoBox $current(frame)
}

proc IISWritePixelsCmd {which ptr x y dx dy} {
    global debug
    if {$debug(iis)} {
#	puts stderr "IISWritePixelsCmd: $which $x $y $dx $dy"
    }

    Frame$which iis set $ptr $x $y $dx $dy
    IISResetTimer $which
}

proc IISReadPixelsCmd {which ptr x y dx dy} {
    global current

    global debug
    if {$debug(iis)} {
#	puts stderr "IISReadPixelsCmd: $which $x $y $dx $dy"
    }

    if {$which > 0} {
	Frame$which get iis $ptr $x $y $dx $dy
    } else {
	$current(frame) get iis $ptr $x $y $dx $dy
    }
#    IISResetTimer $which
}

proc IISWCSCmd {which a b c d e f z1 z2 zt} {
    global debug
    if {$debug(iis)} {
	puts stderr "IISWCSCmd: $which $a $b $c $d $e $f $z1 $z2 $zt"
    }

    # if there is a change in config, we are not told until now
    if {$which > 0} {
	IISLoadFrame $which
	Frame$which iis wcs $a $b $c $d $e $f $z1 $z2 $zt
    }
}

proc IISSetCursorPosCmd {x y} {
    global current

    global debug
    if {$debug(iis)} {
	puts stderr "***IISSetCursorPosCmd: $x $y"
    }

    $current(frame) iis cursor $x $y image
}

proc IISGetCursorPosCmd {} {
    global current

    global debug
    if {$debug(iis)} {
	puts stderr "***IISGetCursorPosCmd:"
    }

    if {[$current(frame) has iis]} {
	# assume frame name 'Framexxx'
	set num [string range $current(frame) 5 end]
	return "[$current(frame) get iis cursor] $num"
    } else {
	# default to first frame
	return "1 1 0"
    }
}

proc IISCursorModeCmd {state} {
    global iis
    global current
    global icursor
    global ds9

    global debug
    if {$debug(iis)} {
	puts stderr "IISCursorModeCmd: $iis(state)=$state $current(frame)=$iis(frame)"
    }

    if {$state != $iis(state)} {
	# iis(frame) may have been deleted
	if {[lsearch $ds9(frames) $iis(frame)] == -1} {
	    set iis(frame) {}
	}

	if {$iis(frame) == {}} {
	    set which $current(frame)
	} else {
	    set which $iis(frame)
	}

	set iis(state) $state
	$which iis cursor mode $state

	if {$state} {
	    bind $ds9(canvas) <Key> [list IISCursorKey %K %A %x %y]
	    bind $ds9(canvas) <f> {}
	    UnBindEventsFrameKey $which

	    if {$icursor(timer,abort)} {
		set icursor(timer,abort) 0
		set icursor(timer) 1
	    } else {
		set icursor(timer) 1
		CursorTimer
	    }
	} else {
	    bind $ds9(canvas) <Key> {}
	    bind $ds9(canvas) <f> {ToggleBindEvents}
	    BindEventsFrameKey $which

	    set icursor(timer,abort) 1
	    set icursor(timer) 0
	    set iis(frame) [lindex [$ds9(canvas) gettags current] 0]
	}
    }
}

proc IISLoadFrame {which} {
    global iis
    global ds9

    global debug
    if {$debug(iis)} {
	puts stderr "IISLoadFrame: $which"
    }

    if {$which > 0} {
	if {(![Frame$which has iis]) || \
		([Frame$which get fits width] != $iis(width)) || \
		([Frame$which get fits height] != $iis(height))} {
	    
	    Frame$which iis new $iis(width) $iis(height)
	    FinishLoad
	} else {
	    # make sure any previous data is rendered
	    Frame$which update now
	}
    }
}

proc IISGotoFrame {which} {
    global current

    global debug
    if {$debug(iis)} {
	puts stderr "IISGotoFrame: $which"
    }

    if {$which > 0} {
	if {$current(frame) != "Frame$which"} {
	    CreateGotoFrame $which base
	}
    }
}

proc IISResetTimer {which} {
    global iis

    if {![info exists iis(timer$which)]} {
	after 500 IISTimer $which
    }
    set iis(timer$which) 1
}

proc IISTimer {which} {
    global iis

    if {$iis(timer$which)} {
	after 500 IISTimer $which
	set iis(timer$which) 0
    } else {
	if {$which > 0} {
	    Frame$which iis update
	    # re-execute FinishLoad again since we are finally done loading
	    FinishLoad
	}
	unset iis(timer$which)
    }
}

proc IISCursorKey {sym key xx yy} {
    global current
    global iis
    global ds9

    # MacOSX and Ubuntu returns bogus values in xx,yy
    # calculate our own values
    set xx [expr {[winfo pointerx $ds9(canvas)] - [winfo rootx $ds9(canvas)]}]
    set yy [expr {[winfo pointery $ds9(canvas)] - [winfo rooty $ds9(canvas)]}]

    global debug
    if {$debug(iis)} {
	puts stderr "IISCursorKey: $sym $key $xx $yy"
    }

    set which [lindex [$ds9(canvas) gettags current] 0]
    if {$which == {}} {
	return
    }

    set iis(x) $xx
    set iis(y) $yy

    switch -- $sym {
	Up {$which warp 0 -1}
	Down {$which warp 0 1}
	Left {$which warp -1 0}
	Right {$which warp 1 0}

	default {
	    if {$key!={}} {
		set num [string range $which end end]
		set coord [$which get coordinates $xx $yy physical]
		if {$coord == {}} {
		    switch -- $key {
			: -
			q {set coord "0 0"}
			default {return}
		    }
		}
		$which iis cursor $xx $yy canvas
		iis retcur [lindex $coord 0] [lindex $coord 1] $key $num
	    }
	}
    }
}

# Cmds

proc ProcessIISCmd {varname iname} {
    upvar $varname var
    upvar $iname i

    global current

    switch -- [string tolower [lindex $var $i]] {
	filename {
	    if {[string is integer [lindex $var [expr $i+2]]]} {
		if {$current(frame) != {}} {
		    $current(frame) iis set file name \
			[lindex $var [expr $i+1]] [lindex $var [expr $i+2]]
		}
		incr i 2
	    } else {
		if {$current(frame) != {}} {
		    $current(frame) iis set file name [lindex $var [expr $i+1]]
		}
		incr i
	    }
	}
    }
}

proc ProcessSendIISCmd {proc id param} {
    global current

    switch -- [string tolower [lindex $param 0]] {
	filename {
	    if {$current(frame) != {}} {
		$proc $id \
		    "[$current(frame) get iis file name [lindex $param 1]]\n"
	    }
	}
    }
}

