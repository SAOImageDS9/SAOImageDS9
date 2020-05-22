#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc BlockDef {} {
    global iblock
    global block
    global pblock

    set iblock(top) .blk
    set iblock(mb) .blkmb

    set block(lock) 0
    set block(factor) {1 1}

    array set pblock [array get block]
}

proc BlockToFit {} {
    global block
    global current

    if {$current(frame) != {}} {
	RGBEvalLockCurrent rgb(lock,block) [list $current(frame) block to fit]
	set block(factor) [$current(frame) get block factor]
	UpdateBlock
    }
}

proc ChangeBlock {} {
    global block
    global current

    if {$current(frame) != {}} {
	RGBEvalLockCurrent rgb(lock,block) [list $current(frame) block to $block(factor)]
	UpdateBlock
    }
}

proc Block {bx by} {
    global block
    global current

    if {$current(frame) != {}} {
	RGBEvalLockCurrent rgb(lock,block) [list $current(frame) block $bx $by]
	set block(factor) [$current(frame) get block factor]
	UpdateBlock
    }
}

proc UpdateBlock {} {
    global current

    # we need to be realized
    RealizeDS9

    LockBlockCurrent
    UpdateBlockDialog
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

    UpdateHeaderDialog
}

proc BlockDialog {} {
    global block
    global iblock
    global dblock
    global ds9
    global current

    # see if we already have a window visible
    if {[winfo exists $iblock(top)]} {
	raise $iblock(top)
	return
    }

    # create the window
    set w $iblock(top)
    set mb $iblock(mb)

    Toplevel $w $mb 6 [msgcat::mc {Block Parameters}] \
	BlockDestroyDialog

    $mb add cascade -label [msgcat::mc {File}] -menu $mb.file
    $mb add cascade -label [msgcat::mc {Edit}] -menu $mb.edit
    $mb add cascade -label [msgcat::mc {Block}] -menu $mb.block

    ThemeMenu $mb.file
    $mb.file add command -label [msgcat::mc {Apply}] \
	-command BlockApplyDialog
    $mb.file add separator
    $mb.file add command -label [msgcat::mc {Close}] \
	-command BlockDestroyDialog -accelerator "${ds9(ctrl)}W"

    EditMenu $mb iblock

    ThemeMenu $mb.block
    $mb.block add command -label [msgcat::mc {Block In}] -command {Block .5 .5}
    $mb.block add command -label [msgcat::mc {Block Out}] -command {Block 2 2}
    $mb.block add command -label [msgcat::mc {Block Fit}] -command BlockToFit
    $mb.block add separator
    $mb.block add radiobutton -label "[msgcat::mc {Block}] 1" \
	-variable block(factor) -value {1 1} -command ChangeBlock
    $mb.block add radiobutton -label "[msgcat::mc {Block}] 2" \
	-variable block(factor) -value {2 2}  -command ChangeBlock
    $mb.block add radiobutton -label "[msgcat::mc {Block}] 4" \
	-variable block(factor) -value {4 4} -command ChangeBlock
    $mb.block add radiobutton -label "[msgcat::mc {Block}] 8" \
	-variable block(factor) -value {8 8} -command ChangeBlock
    $mb.block add radiobutton -label "[msgcat::mc {Block}] 16" \
	-variable block(factor) -value {16 16} -command ChangeBlock
    $mb.block add radiobutton -label "[msgcat::mc {Block}] 32" \
 	-variable block(factor) -value {32 32} -command ChangeBlock

    # Param
    set f [ttk::frame $w.param]

    ttk::label $f.blocktitle -text [msgcat::mc {Block}]
    ttk::entry $f.blockx -textvariable dblock(x) -width 14
    ttk::entry $f.blocky -textvariable dblock(y) -width 14

    grid $f.blocktitle $f.blockx $f.blocky -padx 2 -pady 2

    # Buttons
    set f [ttk::frame $w.buttons]
    ttk::button $f.apply -text [msgcat::mc {Apply}] -command BlockApplyDialog
    ttk::button $f.close -text [msgcat::mc {Close}] -command BlockDestroyDialog
    pack $f.apply $f.close -side left -expand true -padx 2 -pady 4

    # Fini
    ttk::separator $w.sep -orient horizontal
    pack $w.buttons $w.sep -side bottom -fill x
    pack $w.param -side top -fill both -expand true

    $w.param.blockx select range 0 end

    bind $w <<Close>> BlockDestroyDialog

    UpdateBlockDialog
}

proc BlockApplyDialog {} {
    global block
    global iblock
    global dblock
    global current

    if {$current(frame) != {}} {
	set block(factor) "$dblock(x) $dblock(y)"
	RGBEvalLockCurrent rgb(lock,block) [list $current(frame) block to $block(factor)]

	LockFrameCurrent
	UpdateGraphAxis $current(frame)
	UpdateBlockDialog
	RefreshInfoBox $current(frame)
    }
}

proc BlockDestroyDialog {} {
    global iblock
    global dblock

    if {[winfo exists $iblock(top)]} {
	destroy $iblock(top)
	destroy $iblock(mb)
	unset dblock
    }
}

proc UpdateBlockDialog {} {
    global block
    global iblock
    global dblock
    global current

    global debug
    if {$debug(tcl,update)} {
	puts stderr "UpdateBlockDialog"
    }

    if {![winfo exists $iblock(top)]} {
	return
    }

    if {$current(frame) != {}} {
	set zz [$current(frame) get block factor]
	set dblock(x) [lindex $zz 0]
	set dblock(y) [lindex $zz 1]
    } else {
	set dblock(x) {}
	set dblock(y) {}
    }
}

proc UpdateBlockMenu {} {
    global block
    global current

    global debug
    if {$debug(tcl,update)} {
	puts stderr "UpdateBlockMenu"
    }

    if {$current(frame) != {}} {
	set block(factor) [$current(frame) get block factor]
    }
}

proc MatchBlockCurrent {} {
    global current

    if {$current(frame) != {}} {
	MatchBlock $current(frame)
    }
}

proc MatchBlock {which} {
    global ds9
    global rgb
 
    set factor [$which get block factor]
    foreach ff $ds9(frames) {
	if {$ff != $which} {
	    RGBEvalLock rgb(lock,block) $ff [list $ff block to $factor]
	}
    }
}

proc LockBlockCurrent {} {
    global current

    if {$current(frame) != {}} {
	LockBlock $current(frame)
    }
}

proc LockBlock {which} {
    global block

    if {$block(lock)} {
	MatchBlock $which
    }
}

proc BlockBackup {ch which} {
    switch [$which get type] {
	base -
	3d {BlockBackupBase $ch $which}
	rgb {BlockBackupRGB $ch $which}
    }
}

proc BlockBackupBase {ch which} {
    set factor [$which get block factor]
    puts $ch "$which block to $factor"
}

proc BlockBackupRGB {ch which} {
    set sav [$which get rgb channel]
    foreach cc {red green blue} {
	$which rgb channel $cc
	puts $ch "$which rgb channel $cc"
	BlockBackupBase $ch $which
    }
    $which rgb channel $sav
    puts $ch "$which rgb channel $sav"
}

proc ProcessBlockCmd {varname iname} {
    upvar $varname var
    upvar $iname i

    # we need to be realized
    ProcessRealizeDS9

    block::YY_FLUSH_BUFFER
    block::yy_scan_string [lrange $var $i end]
    block::yyparse
    incr i [expr $block::yycnt-1]
}

proc ProcessSendBlockCmd {proc id param {sock {}} {fn {}}} {
    global parse
    set parse(proc) $proc
    set parse(id) $id

    blocksend::YY_FLUSH_BUFFER
    blocksend::yy_scan_string $param
    blocksend::yyparse
}

proc BlockSendCmd {} {
    global parse
    global block

    set z1 [lindex $block(factor) 0]
    set z2 [lindex $block(factor) 1]
    if {$z1 != $z2} {
	$parse(proc) $parse(id) "$block(factor)\n"
    } else {
	$parse(proc) $parse(id) "$z1\n"
    }
}
