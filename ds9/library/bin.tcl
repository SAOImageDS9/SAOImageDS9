#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc BinDef {} {
    global bin
    global ibin
    global pbin
    global tcl_platform

    set ibin(top) .bl
    set ibin(mb) .blmb

    set bin(lock) 0
    set bin(function) sum
    set bin(factor) {1 1}
    set bin(depth) 1
    set bin(buffersize) 1024

    array set pbin [array get bin]

    # prefs only
    set pbin(wheel) 0
    set pbin(wheel,factor) 1.2
    # special case
    switch -- $tcl_platform(os) {
	Darwin {
	    switch [lindex [split $tcl_platform(osVersion) {.}] 0] {
		11 {set pbin(wheel,factor) 1.01}
	    }
	}
    }
}

proc Bin {bx by} {
    global current

    if {$current(frame) != {}} {
	BinFrame $current(frame) $bx $by
    }
}

proc BinFrame {which bx by} {
    global bin
    global current
    global rgb

    RGBEvalLock rgb(lock,bin) $which [list $which bin factor $bx $by]
    if {$which == $current(frame)} {
	set bin(factor) "[$current(frame) get bin factor]"
    }
    UpdateBin
}

proc BinAbout {x y} {
    global bin
    global current
    global rgb

    if {$current(frame) != {}} {
	RGBEvalLockCurrent rgb(lock,bin) [list $current(frame) bin about $x $y]
	UpdateBin
    }
}

proc BinAboutCenter {} {
    global bin
    global current
    global rgb

    if {$current(frame) != {}} {
	RGBEvalLockCurrent rgb(lock,bin) [list $current(frame) bin about center]
	UpdateBin
    }
}

proc BinCols {x y z} {
    global bin
    global current
    global rgb

    if {$current(frame) != {}} {
	if {![$current(frame) has bin column $x]} {
	    Error "[msgcat::mc {Invalid Column Name}] $x"
	    return
	}
	if {![$current(frame) has bin column $y]} {
	    Error "[msgcat::mc {Invalid Column Name}] $y"
	    return
	}
	if {$z!={""}} {
	    if {![$current(frame) has bin column $z]} {
		Error "[msgcat::mc {Invalid Column Name}] $z"
		return
	    }
	}

	RGBEvalLockCurrent rgb(lock,bin) "$current(frame) bin cols \{$x\} \{$y\} \{$z\}"
	UpdateBin
    }
}

proc BinFilter {str} {
    global bin
    global current
    global rgb

    if {$current(frame) != {}} {
	RGBEvalLockCurrent rgb(lock,bin) "$current(frame) bin filter \{\{$str\}\}"
	UpdateBin
    }
}

proc BinToFit {} {
    global current
    global bin
    global rgb

    if {$current(frame) != {}} {
	RGBEvalLockCurrent rgb(lock,bin) [list $current(frame) bin to fit]
	set bin(factor) "[$current(frame) get bin factor]"
	UpdateBin
    }
}

proc ChangeBinFactor {} {
    global bin
    global current
    global rgb

    if {$current(frame) != {}} {
	RGBEvalLockCurrent rgb(lock,bin) [list $current(frame) bin factor to $bin(factor)]
	UpdateBin
    }
}

proc ChangeBinDepth {} {
    global bin
    global current
    global rgb

    if {$current(frame) != {}} {
	RGBEvalLockCurrent rgb(lock,bin) [list $current(frame) bin depth $bin(depth)]
	UpdateBin
    }
}

proc ChangeBinFunction {} {
    global bin
    global current
    global rgb

    if {$current(frame) != {}} {
	RGBEvalLockCurrent rgb(lock,bin) [list $current(frame) bin function $bin(function)]
	UpdateBin
    }
}

proc ChangeBinBufferSize {} {
    global bin
    global current
    global rgb

    if {$current(frame) != {}} {
	RGBEvalLockCurrent rgb(lock,bin) [list $current(frame) bin buffer size $bin(buffersize)]
	UpdateBin
    }
}

proc UpdateBin {} {
    global current

    global debug
    if {$debug(tcl,update)} {
	puts stderr "UpdateBin"
    }

    # really need this
    RealizeDS9

    LockBinCurrent
    LockFrameCurrent
    UpdateBinDialog
    UpdatePanZoomDialog
    UpdateCrosshairDialog
    UpdateCropDialog
    UpdateCubeDialog
    UpdateScaleDialog
    UpdateContourScale
    UpdateContourDialog
    UpdateWCSDialog
    UpdateGraphAxis $current(frame)
    UpdateMain
}

proc BinDialog {} {
    global bin
    global ibin
    global dbin
    global ds9

    # see if we already have a window visible
    if {[winfo exists $ibin(top)]} {
	raise $ibin(top)
	return
    }

    # create the window
    set w $ibin(top)
    set mb $ibin(mb)

    Toplevel $w $mb 6 [msgcat::mc {Binning Parameters}] BinDestroyDialog
    $mb add cascade -label [msgcat::mc {File}] -menu $mb.file
    $mb add cascade -label [msgcat::mc {Edit}] -menu $mb.edit
    $mb add cascade -label [msgcat::mc {Method}] -menu $mb.method
    $mb add cascade -label [msgcat::mc {Bin}] -menu $mb.bin
    $mb add cascade -label [msgcat::mc {Buffer}] -menu $mb.buffer

    ThemeMenu $mb.file
    $mb.file add command -label [msgcat::mc {Apply}] \
	-command BinApplyDialog
    $mb.file add separator
    $mb.file add command -label [msgcat::mc {Update Filter}] \
	-command BinUpdateFilterDialog
    $mb.file add command -label [msgcat::mc {Clear Filter}] \
	-command BinClearFilterDialog
    $mb.file add separator
    $mb.file add command -label [msgcat::mc {Close}] \
	-command BinDestroyDialog -accelerator "${ds9(ctrl)}W"

    EditMenu $mb ibin

    ThemeMenu $mb.method
    $mb.method add radiobutton -label [msgcat::mc {Average}] \
	-variable bin(function) -value average -command ChangeBinFunction
    $mb.method add radiobutton -label [msgcat::mc {Sum}] \
	-variable bin(function) -value sum -command ChangeBinFunction

    ThemeMenu $mb.bin
    $mb.bin add command -label [msgcat::mc {Bin In}] \
	-command {Bin .5 .5}
    $mb.bin add command -label [msgcat::mc {Bin Out}] \
	-command {Bin 2 2}
    $mb.bin add command -label [msgcat::mc {Bin Fit}] \
	-command BinToFit
    $mb.bin add separator
    $mb.bin add radiobutton -label "[msgcat::mc {Bin}] 1" \
	-variable bin(factor) -value {1 1} -command ChangeBinFactor
    $mb.bin add radiobutton -label "[msgcat::mc {Bin}] 2" \
	-variable bin(factor) -value {2 2} -command ChangeBinFactor
    $mb.bin add radiobutton -label "[msgcat::mc {Bin}] 4" \
	-variable bin(factor) -value {4 4} -command ChangeBinFactor
    $mb.bin add radiobutton -label "[msgcat::mc {Bin}] 8" \
	-variable bin(factor) -value {8 8} -command ChangeBinFactor
    $mb.bin add radiobutton -label "[msgcat::mc {Bin}] 16" \
	-variable bin(factor) -value {16 16} -command ChangeBinFactor
    $mb.bin add radiobutton -label "[msgcat::mc {Bin}] 32" \
	-variable bin(factor) -value {32 32} -command ChangeBinFactor
    $mb.bin add radiobutton -label "[msgcat::mc {Bin}] 64" \
	-variable bin(factor) -value {64 64} -command ChangeBinFactor
    $mb.bin add radiobutton -label "[msgcat::mc {Bin}] 128" \
	-variable bin(factor) -value {128 128} -command ChangeBinFactor
    $mb.bin add radiobutton -label "[msgcat::mc {Bin}] 256" \
	-variable bin(factor) -value {256 256} -command ChangeBinFactor

    ThemeMenu $mb.buffer
    $mb.buffer add radiobutton -label {128x128} \
	-variable bin(buffersize) -value 128 -command ChangeBinBufferSize 
    $mb.buffer add radiobutton -label {256x256} \
	-variable bin(buffersize) -value 256 -command ChangeBinBufferSize 
    $mb.buffer add radiobutton -label {512x512} \
	-variable bin(buffersize) -value 512 -command ChangeBinBufferSize 
    $mb.buffer add radiobutton -label {1024x1024} \
	-variable bin(buffersize) -value 1024 -command ChangeBinBufferSize
    $mb.buffer add radiobutton -label {2048x2048} \
	-variable bin(buffersize) -value 2048 -command ChangeBinBufferSize
    $mb.buffer add radiobutton -label {4096x4096} \
	-variable bin(buffersize) -value 4096 -command ChangeBinBufferSize
    $mb.buffer add radiobutton -label {8192x8192} \
	-variable bin(buffersize) -value 8192 -command ChangeBinBufferSize

    # Columns
    set f [ttk::labelframe $w.cols -text [msgcat::mc {Bin Columns}] -padding 2]

    ttk::label $f.title -text [msgcat::mc {Column}]
    ttk::label $f.titlefactor -text [msgcat::mc {Bin}]
    ttk::label $f.titlemin -text [msgcat::mc {Min}]
    ttk::label $f.titlemax -text [msgcat::mc {Max}]
    ttk::menubutton $f.x -textvariable dbin(xcol) -menu $f.x.m -width 10
    ttk::entry $f.xfactor -textvariable dbin(factor,x) -width 8
    ttk::label $f.xmin -textvariable dbin(xcol,min) -width 12 -relief groove
    ttk::label $f.xmax -textvariable dbin(xcol,max) -width 12 -relief groove
    ttk::menubutton $f.y -textvariable dbin(ycol) -menu $f.y.m -width 10
    ttk::entry $f.yfactor -textvariable dbin(factor,y) -width 8
    ttk::label $f.ymin -textvariable dbin(ycol,min) -width 12 -relief groove
    ttk::label $f.ymax -textvariable dbin(ycol,max) -width 12 -relief groove

    grid $f.title $f.titlefactor $f.titlemin $f.titlemax -padx 2 -pady 2
    grid $f.x $f.xfactor $f.xmin $f.xmax -padx 2 -pady 2
    grid $f.y $f.yfactor $f.ymin $f.ymax -padx 2 -pady 2

    # Center
    set f [ttk::labelframe $w.center -text [msgcat::mc {Bin Center}] -padding 2]
    ttk::entry $f.x -textvariable dbin(x) -width 12
    ttk::entry $f.y -textvariable dbin(y) -width 12
    ttk::checkbutton $f.auto -text [msgcat::mc {or center of data}] \
	-variable dbin(auto)
    grid $f.x $f.y $f.auto -padx 2 -pady 2

    # Filter
    set f [ttk::labelframe $w.filter -text [msgcat::mc {Bin Filter}] -padding 2]
    set dbin(filter,entry) \
	[ttk::entry $f.filter -textvariable dbin(filter) -width 40]
    grid $f.filter -padx 2 -pady 2

    # Bin 3rd Column
    set f [ttk::labelframe $w.z -text [msgcat::mc {Bin 3rd Column}] -padding 2]
    ttk::label $f.title -text [msgcat::mc {Column}]
    ttk::label $f.titledepth -text [msgcat::mc {Depth}]
    ttk::label $f.titlemin -text [msgcat::mc {Min}]
    ttk::label $f.titlemax -text [msgcat::mc {Max}]

    ttk::menubutton $f.z -textvariable dbin(zcol) -menu $f.z.m -width 10
    ttk::entry $f.depth -textvariable dbin(depth) -width 8
    ttk::entry $f.min -textvariable dbin(zcol,min) -width 12
    ttk::entry $f.max -textvariable dbin(zcol,max) -width 12

    grid $f.title $f.titledepth $f.titlemin $f.titlemax -padx 2 -pady 2
    grid $f.z $f.depth $f.min $f.max -padx 2 -pady 2 -sticky w

    # Buttons
    set f [ttk::frame $w.buttons]
    ttk::button $f.apply -text [msgcat::mc {Apply}] -command BinApplyDialog
    ttk::button $f.update -text [msgcat::mc {Update Filter}] \
	-command BinUpdateFilterDialog
    ttk::button $f.clear -text [msgcat::mc {Clear Filter}] \
	-command BinClearFilterDialog
    ttk::button $f.close -text [msgcat::mc {Close}] -command BinDestroyDialog
    pack $f.apply $f.update $f.clear $f.close \
	-side left -expand true -padx 2 -pady 4

    # Fini
    grid $w.cols -sticky news
    grid $w.center -sticky news
    grid $w.filter -sticky news
    grid $w.z -sticky news
    grid $w.buttons -sticky ew
    grid rowconfigure $w 0 -weight 1
    grid rowconfigure $w 1 -weight 1
    grid rowconfigure $w 2 -weight 1
    grid rowconfigure $w 3 -weight 1
    grid columnconfigure $w 0 -weight 1

    $w.cols.xfactor select range 0 end

    set dbin(auto) 0
    set dbin(minmax) 1

    bind $w <<Close>> BinDestroyDialog

    UpdateBinDialog
}

proc BinPopUp {b m l cmd} {
    global ds9

    destroy $m

    ThemeMenu $m
    $m configure -tearoff 0
    set cnt -1
    for {set ii 0} {$ii<[llength $l]} {incr ii} {
	$m add command -label [lindex $l $ii] \
	    -command "global dbin;set $b [lindex $l $ii]; $cmd"

	# wrap if needed
	incr cnt
	if {$cnt>=$ds9(menu,size,wrap)} {
	    set cnt 0
	    $m entryconfig $ii -columnbreak 1
	}
    }
}

proc BinBlankPopUp {m} {
    destroy $m
    ThemeMenu $m
    $m configure -tearoff 0
}

proc UpdateBinDialog {} {
    global bin
    global ibin
    global dbin
    global current

    global debug
    if {$debug(tcl,update)} {
	puts stderr "UpdateBinDialog"
    }

    if {![winfo exists $ibin(top)]} {
	return
    }
    if {$current(frame) == {}} {
	return
    }

    set w $ibin(top)

    set bf "[$current(frame) get bin factor]"
    set dbin(factor,x) [lindex $bf 0]
    set dbin(factor,y) [lindex $bf 1]
    set dbin(depth) [$current(frame) get bin depth]

    if {[$current(frame) has fits bin]} {

	set cols [$current(frame) get bin cols]
	set colslist "[$current(frame) get bin list]"

	set dbin(xcol) [lindex $cols 0]
	set dbin(ycol) [lindex $cols 1]
	BinPopUp dbin(xcol) $w.cols.x.m $colslist UpdateXCol
	BinPopUp dbin(ycol) $w.cols.y.m $colslist UpdateYCol

	set mm [$current(frame) get bin cols minmax \{$dbin(xcol)\}]
	set dbin(xcol,min) [lindex $mm 0]
	set dbin(xcol,max) [lindex $mm 1]

	set mm [$current(frame) get bin cols minmax \{$dbin(ycol)\}]
	set dbin(ycol,min) [lindex $mm 0]
	set dbin(ycol,max) [lindex $mm 1]

	set cursor [$current(frame) get bin cursor]
	set dbin(x) [lindex $cursor 0]
	set dbin(y) [lindex $cursor 1]

	set dbin(filter) [$current(frame) get bin filter]

	set dbin(zcol) [lindex $cols 2]
	BinPopUp dbin(zcol) $w.z.z.m $colslist UpdateZCol
	set mm [$current(frame) get bin cols dim \{$dbin(zcol)\}]
	set dbin(zcol,min) [lindex $mm 0]
	set dbin(zcol,max) [lindex $mm 1]

    } else {
	set dbin(xcol) {}
	set dbin(xcol,min) {}
	set dbin(xcol,max) {}
	set dbin(ycol) {}
	set dbin(ycol,min) {}
	set dbin(ycol,max) {}

	set dbin(x) {}
	set dbin(y) {}

	set dbin(filter) {}

	set dbin(zcol) {}
	set dbin(zcol,min) {}
	set dbin(zcol,max) {}

	BinBlankPopUp $w.cols.x.m
	BinBlankPopUp $w.cols.y.m
	BinBlankPopUp $w.z.z.m
    }
}

proc UpdateXCol {} {
    global current
    global dbin

    if {$current(frame) != {}
	&& [$current(frame) has fits bin]
	&& $dbin(xcol) != {}} {

	set mm [$current(frame) get bin cols minmax \{$dbin(xcol)\}]
	set dbin(xcol,min) [lindex $mm 0]
	set dbin(xcol,max) [lindex $mm 1]
    } else {
	set dbin(xcol,min) {}
	set dbin(xcol,max) {}
    }
}

proc UpdateYCol {} {
    global current
    global dbin

    if {$current(frame) != {}
	&& [$current(frame) has fits bin]
	&& $dbin(ycol) != {}} {

	set mm [$current(frame) get bin cols minmax \{$dbin(ycol)\}]
	set dbin(ycol,min) [lindex $mm 0]
	set dbin(ycol,max) [lindex $mm 1]
    } else {
	set dbin(ycol,min) {}
	set dbin(ycol,max) {}
    }
}

proc UpdateZCol {} {
    global current
    global dbin

    if {$current(frame) != {}
	&& [$current(frame) has fits bin]
	&& $dbin(zcol) != {}} {

	if {$dbin(minmax)} {
	    set mm [$current(frame) get bin cols dim \{$dbin(zcol)\}]
	    set dbin(zcol,min) [lindex $mm 0]
	    set dbin(zcol,max) [lindex $mm 1]
	}
    } else {
	set dbin(zcol,min) {}
	set dbin(zcol,max) {}
    }
}

proc BinApplyDialog {} {
    global bin
    global dbin
    global current
    global rgb

    if {$current(frame) == {}} {
	# reset
	set dbin(auto) 0
	return
    }

    # clean up filter if needed
    set dbin(filter) [string trimleft $dbin(filter)]
    set dbin(filter) [string trimright $dbin(filter)]

    # delete any markers if needed
    if {[$current(frame) has fits bin]} {
	set foo [$current(frame) get bin cols]
	set xcol [lindex $foo 0]
	set ycol [lindex $foo 1]

	if {$xcol != $dbin(xcol) || $ycol != $dbin(ycol)} {
	    $current(frame) marker delete all
	}
    }

    if {$dbin(depth)>1} {
	CubeDialog

	if {$dbin(auto)} {
	    if {$dbin(factor,x) != {}
		&& $dbin(factor,y) != {}
		&& $dbin(depth) != {}
		&& $dbin(zcol,min) != {}
		&& $dbin(zcol,max) != {}
		&& $dbin(xcol) != {}
		&& $dbin(ycol) != {}
		&& $dbin(zcol) != {}} {

		RGBEvalLockCurrent rgb(lock,bin) \
		    [list $current(frame) bin to $dbin(factor,x) $dbin(factor,y) $dbin(depth) $dbin(zcol,min) $dbin(zcol,max) about center \{$dbin(xcol)\} \{$dbin(ycol)\} \{$dbin(zcol)\} \{$dbin(filter)\}]
	    }
	} else {
	    if {$dbin(factor,x) != {}
		&& $dbin(factor,y) != {}
		&& $dbin(depth) != {}
		&& $dbin(zcol,min) != {}
		&& $dbin(zcol,max) != {}
		&& $dbin(x) != {}
		&& $dbin(y) != {}
		&& $dbin(xcol) != {}
		&& $dbin(ycol) != {}
		&& $dbin(zcol) != {}} {

		RGBEvalLockCurrent rgb(lock,bin) \
		    [list $current(frame) bin to $dbin(factor,x) $dbin(factor,y) $dbin(depth) $dbin(zcol,min) $dbin(zcol,max) about $dbin(x) $dbin(y) \{$dbin(xcol)\} \{$dbin(ycol)\} \{$dbin(zcol)\} \{$dbin(filter)\}]
	    }
	}
    } else {
	if {$dbin(auto)} {
	    if {$dbin(factor,x) != {}
		&& $dbin(factor,y) != {}
		&& $dbin(xcol) != {}
		&& $dbin(ycol) != {}} {

		RGBEvalLockCurrent rgb(lock,bin) \
		    [list $current(frame) bin to $dbin(factor,x) $dbin(factor,y) about center \{$dbin(xcol)\} \{$dbin(ycol)\} \{$dbin(filter)\}]
	    }
	} else {
	    if {$dbin(factor,x) != {}
		&& $dbin(factor,y) != {}
		&& $dbin(x) != {}
		&& $dbin(y) != {}
		&& $dbin(xcol) != {}
		&& $dbin(ycol) != {}} {

		RGBEvalLockCurrent rgb(lock,bin) \
		    [list $current(frame) bin to $dbin(factor,x) $dbin(factor,y) about $dbin(x) $dbin(y) \{$dbin(xcol)\} \{$dbin(ycol)\} \{$dbin(filter)\}]
	    }
	}
    }

    UpdateScaleMenu
    UpdateBinMenu
    UpdateBin

    # reset
    set dbin(auto) 0
}

proc BinUpdateFilterDialog {} {
    global dbin
    global current

    $dbin(filter,entry) delete 0 end
    if {$current(frame) != {}} {
	$dbin(filter,entry) insert 0 \
	    [$current(frame) marker list ds9 physical fk5 degrees yes]
    }
}

proc BinClearFilterDialog {} {
    global dbin

    $dbin(filter,entry) delete 0 end
}

proc BinDestroyDialog {} {
    global ibin
    global dbin

    if {[winfo exists $ibin(top)]} {
	destroy $ibin(top)
	destroy $ibin(mb)
	unset dbin
    }
}

proc MatchBinCurrent {} {
    global current

    if {$current(frame) != {}} {
	MatchBin $current(frame)
    }
}

proc MatchBin {which} {
    global ds9
    global rgb
 
    set factor [$which get bin factor]
    set depth [$which get bin depth]
    set filter [$which get bin filter]
    set size [$which get bin buffer size]
    set function [$which get bin function]
    set cols [$which get bin cols]

    foreach ff $ds9(frames) {
	if {$ff != $which} {
	    RGBEvalLock rgb(lock,bin) $ff [list $ff bin factor to $factor]
	    RGBEvalLock rgb(lock,bin) $ff [list $ff bin depth $depth]
	    RGBEvalLock rgb(lock,bin) $ff "$ff bin filter \{\{$filter\}\}"
	    RGBEvalLock rgb(lock,bin) $ff [list $ff bin buffer size $size]
	    RGBEvalLock rgb(lock,bin) $ff [list $ff bin function $function]
	    RGBEvalLock rgb(lock,bin) $ff "$ff bin cols \{\{[lindex $cols 0]\}\} \{\{[lindex $cols 1]\}\} \{\{[lindex $cols 2]\}\}"
	}
    }
}

proc LockBinCurrent {} {
    global current

    if {$current(frame) != {}} {
	LockBin $current(frame)
    }
}

proc LockBin {which} {
    global bin

    if {$bin(lock)} {
	MatchBin $which
    }
}

proc BinBackup {ch which} {
    switch [$which get type] {
	base -
	3d {BinBackupBase $ch $which}
	rgb {BinBackupRGB $ch $which}
    }
}

proc BinBackupBase {ch which} {
    puts $ch "$which bin factor to [$which get bin factor]"
    puts $ch "$which bin depth [$which get bin depth]"
    puts $ch "$which bin filter \{\"[$which get bin filter]\"\}"
    puts $ch "$which bin buffer size [$which get bin buffer size]"
    set pos [$which get bin cursor]
    if {$pos != {}} {
	puts $ch "$which bin about $pos"
    }
    puts $ch "$which bin function [$which get bin function]"
    set cols [$which get bin cols]
    if {$cols != {}} {
	puts $ch "$which bin cols \{\"[lindex $cols 0]\"\} \{\"[lindex $cols 1]\"\} \{\"[lindex $cols 2]\"\}  "
    }
}

proc BinBackupRGB {ch which} {
    set sav [$which get rgb channel]
    foreach cc {red green blue} {
	$which rgb channel $cc
	puts $ch "$which rgb channel $cc"
	BinBackupBase $ch $which
    }
    $which rgb channel $sav
    puts $ch "$which rgb channel $sav"
}

# Process Cmds

proc ProcessBinCmd {varname iname} {
    upvar $varname var
    upvar $iname i

    bin::YY_FLUSH_BUFFER
    bin::yy_scan_string [lrange $var $i end]
    bin::yyparse
    incr i [expr $bin::yycnt-1]
}

proc ProcessSendBinCmd {proc id param {sock {}} {fn {}}} {
    global parse
    set parse(proc) $proc
    set parse(id) $id

    binsend::YY_FLUSH_BUFFER
    binsend::yy_scan_string $param
    binsend::yyparse
}
