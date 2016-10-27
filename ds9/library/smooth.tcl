#  Copyright (C) 1999-2016
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc SmoothDef {} {
    global smooth
    global ismooth
    global psmooth

    set ismooth(top) .sm
    set ismooth(mb) .smmb

    set smooth(lock) 0
    set smooth(view) 0
    set smooth(function) gaussian
    set smooth(radius) 3

    array set psmooth [array get smooth]
}

proc SmoothUpdate {} {
    global smooth
    global current
    global rgb

    if {$current(frame) != {}} {
	SetWatchCursor
	if {$smooth(view)} {
	    RGBEvalLockCurrent rgb(lock,smooth) [list $current(frame) smooth $smooth(function) $smooth(radius)]
	} else {
	    RGBEvalLockCurrent rgb(lock,smooth) [list $current(frame) smooth delete]
	}
	ResetWatchCursor
    }

    LockSmoothCurrent
    UpdateCubeDialog
    UpdateContourScale
    UpdateContourDialog
    UpdateScaleDialog
    UpdateGraphXAxis $current(frame)
    UpdateMain
}

proc SmoothDialog {} {
    global ds9
    global smooth
    global ismooth

    # see if we already have a window visible
    if {[winfo exists $ismooth(top)]} {
	raise $ismooth(top)
	return
    }

    # create the window
    set w $ismooth(top)
    set mb $ismooth(mb)

    Toplevel $w $mb 6 [msgcat::mc {Smooth Parameters}] SmoothDestroyDialog

    $mb add cascade -label [msgcat::mc {File}] -menu $mb.file
    $mb add cascade -label [msgcat::mc {Edit}] -menu $mb.edit

    menu $mb.file
    $mb.file add command -label [msgcat::mc {Apply}] -command SmoothApplyDialog
    $mb.file add command -label [msgcat::mc {Clear}] -command SmoothOffDialog
    $mb.file add separator
    $mb.file add command -label [msgcat::mc {Close}] \
	-command SmoothDestroyDialog

    EditMenu $mb ismooth

    # Function
    set f [ttk::labelframe $w.func -text [msgcat::mc {Function}] -padding 2]
    ttk::radiobutton $f.boxcar -text [msgcat::mc {Boxcar}] \
	-variable smooth(function) -value boxcar 
    ttk::radiobutton $f.tophat -text [msgcat::mc {Tophat}] \
	-variable smooth(function) -value tophat 
    ttk::radiobutton $f.gaussian -text [msgcat::mc {Gaussian}] \
	-variable smooth(function) -value gaussian 
    grid $f.boxcar $f.tophat $f.gaussian -padx 2 -pady 2
    
    # Kernal
    set f [ttk::labelframe $w.rad -text [msgcat::mc {Kernel}] -padding 2]
    slider $f.slider 1 20 {Radius} smooth(radius) {}
    grid $f.slider -padx 2 -pady 2 -sticky ew
    grid columnconfigure $f 0 -weight 1
    
    # Buttons
    set f [ttk::frame $w.buttons]
    ttk::button $f.apply -text [msgcat::mc {Apply}] -command SmoothApplyDialog
    ttk::button $f.clear -text [msgcat::mc {Clear}] -command SmoothOffDialog
    ttk::button $f.close -text [msgcat::mc {Close}] -command SmoothDestroyDialog
    pack $f.apply $f.clear $f.close -side left -expand true -padx 2 -pady 4

    # Fini
    grid $w.func -sticky news
    grid $w.rad -sticky news
    grid $w.buttons -sticky ew
    grid rowconfigure $w 0 -weight 1
    grid rowconfigure $w 1 -weight 1
    grid columnconfigure $w 0 -weight 1
}

proc SmoothApplyDialog {} {
    global smooth

    set smooth(view) 1
    SmoothUpdate
}

proc SmoothDestroyDialog {} {
    global ismooth

    if {[winfo exists $ismooth(top)]} {
	destroy $ismooth(top)
	destroy $ismooth(mb)
    }
}

proc SmoothOffDialog {} {
    global smooth

    set smooth(view) 0
    SmoothUpdate
}

proc UpdateSmoothMenu {} {
    global smooth
    global current

    global debug
    if {$debug(tcl,update)} {
	puts stderr "UpdateSmoothMenu"
    }

    if {$current(frame) != {}} {
	set smooth(view) [$current(frame) has smooth]
	set smooth(function) [$current(frame) get smooth function]
	set smooth(radius) [$current(frame) get smooth radius]
    }
}

proc MatchSmoothCurrent {} {
    global current

    if {$current(frame) != {}} {
	MatchSmooth $current(frame)
    }
}

proc MatchSmooth {which} {
    global ds9
    global rgb
 
    set view [$which has smooth]
    set function [$which get smooth function]
    set radius [$which get smooth radius]

    foreach ff $ds9(frames) {
	if {$ff != $which} {
	    if {$view} {
		RGBEvalLock rgb(lock,smooth) $ff [list $ff smooth $function $radius]
	    } else {
		RGBEvalLock rgb(lock,smooth) $ff [list $ff smooth delete]
	    }
	}
    }
}

proc LockSmoothCurrent {} {
    global current

    if {$current(frame) != {}} {
	LockSmooth $current(frame)
    }
}

proc LockSmooth {which} {
    global smooth

    if {$smooth(lock)} {
	MatchSmooth $which
    }
}

proc SmoothBackup {ch which} {
    switch [$which get type] {
	base -
	3d {SmoothBackupBase $ch $which}
	rgb {SmoothBackupRGB $ch $which}
    }
}

proc SmoothBackupBase {ch which} {
    if {[$which has smooth]} {
	set function [$which get smooth function]
	set radius [$which get smooth radius]
	puts $ch "$which smooth $function $radius"
    }
}

proc SmoothBackupRGB {ch which} {
    set sav [$which get rgb channel]
    foreach cc {red green blue} {
	$which rgb channel $cc
	puts $ch "$which rgb channel $cc"
	SmoothBackupBase $ch $which
    }
    $which rgb channel $sav
    puts $ch "$which rgb channel $sav"
}

proc PrefsDialogSmooth {} {
    global dprefs

    set w $dprefs(tab)

    $dprefs(list) insert end [msgcat::mc {Smooth}]
    lappend dprefs(tabs) [ttk::frame $w.smooth]

    set f [ttk::labelframe $w.smooth.param -text [msgcat::mc {Smooth}]]

    ttk::label $f.title -text [msgcat::mc {Function}]
    ttk::menubutton $f.function -textvariable psmooth(function) \
	-menu $f.function.menu

    menu $f.function.menu
    $f.function.menu add radiobutton -label [msgcat::mc {Boxcar}] \
	-variable psmooth(function) -value boxcar
    $f.function.menu add radiobutton -label [msgcat::mc {Tophat}] \
	-variable psmooth(function) -value tophat
    $f.function.menu add radiobutton -label [msgcat::mc {Gaussian}] \
	-variable psmooth(function) -value gaussian

    grid $f.title $f.function -padx 2 -pady 2 -sticky w

    pack $f -side top -fill both -expand true
}

proc ProcessSmoothCmd {varname iname} {
    upvar $varname var
    upvar $iname i

    global smooth

    switch -- [string tolower [lindex $var $i]] {
	open {SmoothDialog}
	close {SmoothDestroyDialog}
	match {MatchSmoothCurrent}
	lock {
	    incr i
	    if {!([string range [lindex $var $i] 0 0] == "-")} {
		set smooth(lock) [FromYesNo [lindex $var $i]]
	    } else {
		set smooth(lock) 1
		incr i -1
	    }
	    LockSmoothCurrent
	}
	radius {
	    incr i
	    set smooth(radius) [lindex $var $i]
	    SmoothUpdate
	}
	function {
	    incr i
	    set smooth(function) [lindex $var $i]
	    SmoothUpdate
	}
	yes -
	true -
	on -
	1 -
	no -
	false -
	off -
	0 {
	    set smooth(view) [FromYesNo [lindex $var $i]]
	    SmoothUpdate
	}

	default {
	    set smooth(view) 1
	    SmoothUpdate
	    incr i -1
	}
    }
}

proc ProcessSendSmoothCmd {proc id param} {
    global smooth

    switch -- [lindex $param 0] {
	lock {$proc $id [ToYesNo $smooth(lock)]} 
	function {$proc $id "$smooth(function)\n"}
	radius {$proc $id "$smooth(radius)\n"}
	default {$proc $id [ToYesNo $smooth(view)]}
    }
}

