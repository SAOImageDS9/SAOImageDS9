#  Copyright (C) 1999-2018
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
    set smooth(radius,minor) 3
    set smooth(sigma) 1.5
    set smooth(sigma,minor) 1.5
    set smooth(angle) 0

    array set psmooth [array get smooth]
}

proc SmoothUpdate {} {
    global smooth
    global current
    global rgb

    if {$current(frame) != {}} {
	SetWatchCursor
	if {$smooth(view)} {
	    RGBEvalLockCurrent rgb(lock,smooth) [list $current(frame) smooth $smooth(function) $smooth(radius) $smooth(radius,minor) $smooth(sigma) $smooth(sigma,minor) $smooth(angle)]
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
    UpdateGraphAxis $current(frame)
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
	-variable smooth(function) -value boxcar \
	-command SmoothUpdateDialog
    ttk::radiobutton $f.tophat -text [msgcat::mc {Tophat}] \
	-variable smooth(function) -value tophat \
	-command SmoothUpdateDialog
    ttk::radiobutton $f.gaussian -text [msgcat::mc {Gaussian}] \
	-variable smooth(function) -value gaussian \
	-command SmoothUpdateDialog
    ttk::radiobutton $f.elliptic -text [msgcat::mc {Elliptical Gaussian}] \
	-variable smooth(function) -value elliptic \
	-command SmoothUpdateDialog
    grid $f.boxcar $f.tophat $f.gaussian $f.elliptic -padx 2 -pady 2 -sticky w

    # boxcar
    set f [ttk::labelframe $w.boxcar -text [msgcat::mc {Boxcar}] -padding 2]
    ttk::label $f.tdescr -text [msgcat::mc {Width}]
    ttk::label $f.descr -text {2*radius+1}
    slider $f.slider 1 20 {Radius} smooth(radius) {}

    grid $f.tdescr $f.descr -padx 2 -pady 2 -sticky w
    grid $f.slider -columnspan 20 -padx 2 -pady 2 -sticky ew

    # tophat
    set f [ttk::labelframe $w.tophat -text [msgcat::mc {Tophat}] -padding 2]
    ttk::label $f.tdescr -text [msgcat::mc {Diameter}]
    ttk::label $f.descr -text {2*radius+1}
    slider $f.slider 1 20 {Radius} smooth(radius) {}

    grid $f.tdescr $f.descr -padx 2 -pady 2 -sticky w
    grid $f.slider -columnspan 20 -padx 2 -pady 2 -sticky ew
    
    # gaussian
    set f [ttk::labelframe $w.gaussian -text [msgcat::mc {Gaussian}] -padding 2]
    ttk::label $f.tdescr -text [msgcat::mc {Diameter}]
    ttk::label $f.descr -text {2*radius+1}
    slider $f.rslider 1 20 {Radius} smooth(radius) \
	{SmoothCheckSigma radius sigma}
    slider $f.sslider 1. 20. {Sigma} smooth(sigma) {}

    grid $f.tdescr $f.descr -padx 2 -pady 2 -sticky w
    grid $f.rslider -columnspan 20 -padx 2 -pady 2 -sticky ew
    grid $f.sslider -columnspan 20 -padx 2 -pady 2 -sticky ew

    # elliptical gaussian
    set f [ttk::labelframe $w.elliptic \
	       -text [msgcat::mc {Elliptical Gaussian}] -padding 2]
    ttk::label $f.tdescr -text [msgcat::mc {Diameter}]
    ttk::label $f.tangle -text {Angle}
    ttk::entry $f.angle -textvariable smooth(angle) -width 7
    ttk::label $f.descr -text {2*radius+1}
    slider $f.rslider 1 20 [msgcat::mc {Major Radius}] smooth(radius) \
	{SmoothCheckSigma radius sigma}
    slider $f.rmslider 1 20 [msgcat::mc {Minor Radius}] smooth(radius,minor) \
	{SmoothCheckSigma radius,minor sigma,minor}
    slider $f.sslider 1. 20. [msgcat::mc {Major Sigma}] smooth(sigma) {}
    slider $f.smlider 1. 20. [msgcat::mc {Minor Sigma}] smooth(sigma,minor) {}

    grid $f.tangle $f.angle -padx 2 -pady 2 -sticky w
    grid $f.tdescr $f.descr -padx 2 -pady 2 -sticky w
    grid $f.rslider -columnspan 20 -padx 2 -pady 2 -sticky ew
    grid $f.rmslider -columnspan 20 -padx 2 -pady 2 -sticky ew
    grid $f.sslider -columnspan 20 -padx 2 -pady 2 -sticky ew
    grid $f.smlider -columnspan 20 -padx 2 -pady 2 -sticky ew

    # Buttons
    set f [ttk::frame $w.buttons]
    ttk::button $f.apply -text [msgcat::mc {Apply}] -command SmoothApplyDialog
    ttk::button $f.clear -text [msgcat::mc {Clear}] -command SmoothOffDialog
    ttk::button $f.close -text [msgcat::mc {Close}] -command SmoothDestroyDialog
    pack $f.apply $f.clear $f.close -side left -expand true -padx 2 -pady 4

    # Fini
    grid $w.func -sticky news
    grid rowconfigure $w 0 -weight 1
    grid rowconfigure $w 1 -weight 1
    grid columnconfigure $w 0 -weight 1

    SmoothUpdateDialog
}

proc SmoothCheckSigma {rr ss} {
    global smooth

    set smooth($ss) [expr $smooth($rr)/2.]
}

proc SmoothUpdateDialog {} {
    global ismooth
    global smooth
    global ds9

    if {![winfo exists $ismooth(top)]} {
	return
    }

    set w $ismooth(top)
    set mb $ismooth(mb)

    grid forget $w.boxcar
    grid forget $w.tophat
    grid forget $w.gaussian
    grid forget $w.elliptic
    grid forget $w.buttons

    switch $smooth(function) {
	boxcar {grid $w.boxcar -sticky news}
	tophat {grid $w.tophat -sticky news}
	gaussian {grid $w.gaussian -sticky news}
	elliptic {grid $w.elliptic -sticky news}
    }
    grid $w.buttons -sticky ew
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
	set smooth(radius,minor) [$current(frame) get smooth radius minor]
	set smooth(sigma) [$current(frame) get smooth sigma]
	set smooth(sigma,minor) [$current(frame) get smooth sigma minor]
	set smooth(angle) [$current(frame) get smooth angle]
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
    set radiusminor [$which get smooth radius minor]
    set sigma [$which get smooth sigma]
    set sigmaminor [$which get smooth sigma minor]
    set angle [$which get smooth angle]

    foreach ff $ds9(frames) {
	if {$ff != $which} {
	    if {$view} {
		RGBEvalLock rgb(lock,smooth) $ff [list $ff smooth $function $radius $radiusminor $sigma $sigmaminor $angle]
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
	set radiusminor [$which get smooth radius minor]
	set sigma [$which get smooth sigma]
	set sigmaminor [$which get smooth sigma minor]
	set angle [$which get smooth angle]
	puts $ch "$which smooth $function $radius $radiusminor $sigma $sigmaminor $angle"
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
	function {
	    incr i
	    set smooth(function) [lindex $var $i]
	    SmoothUpdate
	}
	radius {
	    incr i
	    set smooth(radius) [lindex $var $i]
	    SmoothUpdate
	}
	radiusminor {
	    incr i
	    set smooth(radius,minor) [lindex $var $i]
	    SmoothUpdate
	}
	sigma {
	    incr i
	    set smooth(sigma) [lindex $var $i]
	    SmoothUpdate
	}
	sigmaminor {
	    incr i
	    set smooth(sigma,minor) [lindex $var $i]
	    SmoothUpdate
	}
	angle {
	    incr i
	    set smooth(angle) [lindex $var $i]
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
	radiusminor {$proc $id "$smooth(radius,minor)\n"}
	sigma {$proc $id "$smooth(sigma)\n"}
	sigmaminor {$proc $id "$smooth(sigma,minor)\n"}
	angle {$proc $id "$smooth(angle)\n"}
	default {$proc $id [ToYesNo $smooth(view)]}
    }
}
