#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc CropDef {} {
    global crop
    global icrop

    set icrop(top) .cr
    set icrop(mb) .crmb

    set crop(lock) none

    set crop(system) wcs
    set crop(sky) fk5
    set crop(skyformat) degrees
    set crop(dcoord) wcs
    set crop(dformat) degrees
    set crop(rcoord) wcs
}

proc CropReset {} {
    global current

    if {$current(frame) != {}} {
	$current(frame) crop
	UpdateCrop $current(frame)
    }
}

proc CropButton {which x y} {
    global rgb
    RGBEvalLock rgb(lock,crop) $which [list $which crop begin $x $y]
}

proc CropMotion {which x y} {
    $which crop motion $x $y
}

proc CropRelease {which x y} {
    global rgb

    RGBEvalLock rgb(lock,crop) $which [list $which crop end $x $y]
    UpdateCrop $which
}

proc Crop3dButton {which x y zz} {
    $which crop 3d begin $x $y $zz
}

proc Crop3dMotion {which x y zz} {
    $which crop 3d motion $x $y $zz
}

proc Crop3dRelease {which x y zz} {
    $which crop 3d end $x $y $zz
    UpdateCrop $which
}

proc UpdateCrop {which} {
    global current

    global debug
    if {$debug(tcl,update)} {
	puts stderr "UpdateCrop"
    }

    LockCrop $which
    UpdateCropDialog
    UpdateCubeDialog
    UpdateContourScale
    UpdateContourDialog
    UpdateScaleDialog
    GridUpdateZoom
    UpdateGraphAxis $which
    UpdateInfoBoxFrame $which
    UpdateMain
}

proc CropDialog {} {
    global crop
    global icrop
    global dcrop
    global ds9
    global current

    # see if we already have a window visible
    if {[winfo exists $icrop(top)]} {
	raise $icrop(top)
	return
    }

    # create the window
    set w $icrop(top)
    set mb $icrop(mb)

    Toplevel $w $mb 6 [msgcat::mc {Crop Parameters}] \
	CropDestroyDialog

    # for CoordMenuButton
    set crop(frame) $current(frame)

    $mb add cascade -label [msgcat::mc {File}] -menu $mb.file
    $mb add cascade -label [msgcat::mc {Edit}] -menu $mb.edit

    ThemeMenu $mb.file
    $mb.file add command -label [msgcat::mc {Apply}] -command CropApplyDialog
    $mb.file add separator
    $mb.file add command -label [msgcat::mc {Reset}] -command CropReset
    $mb.file add separator
    $mb.file add command -label [msgcat::mc {Close}] \
	-command CropDestroyDialog -accelerator "${ds9(ctrl)}W"

    EditMenu $mb icrop

    # Param
    set f [ttk::frame $w.param]

    ttk::label $f.title -text [msgcat::mc {Center}]
    ttk::entry $f.x -textvariable dcrop(x) -width 14
    ttk::entry $f.y -textvariable dcrop(y) -width 14
    set dcrop(cb) $f.center 
    CoordMenuButton $dcrop(cb) crop system 1 sky skyformat UpdateCropDialog

    ttk::label $f.stitle -text [msgcat::mc {Size}]
    ttk::entry $f.w -textvariable dcrop(w) -width 14
    ttk::entry $f.h -textvariable dcrop(h) -width 14
    set dcrop(db) $f.size 
    DistMenuButton $dcrop(db) crop dcoord 1 dformat UpdateCropDialog

    ttk::label $f.rtitle -text [msgcat::mc {3D}]
    ttk::entry $f.from -textvariable dcrop(zmin) -width 14
    ttk::entry $f.to -textvariable dcrop(zmax) -width 14
    set dcrop(rb) $f.range
    CoordMenuButton $dcrop(rb) crop rcoord 2 {} {} UpdateCropDialog

    grid $f.title $f.x $f.y $dcrop(cb) -padx 2 -pady 2
    grid $f.stitle $f.w $f.h $dcrop(db) -padx 2 -pady 2

    # Buttons
    set f [ttk::frame $w.buttons]
    ttk::button $f.apply -text [msgcat::mc {Apply}] -command CropApplyDialog
    ttk::button $f.reset -text [msgcat::mc {Reset}] -command CropReset
    ttk::button $f.close -text [msgcat::mc {Close}] \
	-command CropDestroyDialog
    pack $f.apply $f.reset $f.close -side left -expand true -padx 2 -pady 4

    # Fini
    ttk::separator $w.sep -orient horizontal
    pack $w.buttons $w.sep -side bottom -fill x
    pack $w.param -side top -fill both -expand true

    $w.param.x select range 0 end

    bind $w <<Close>> CropDestroyDialog

    UpdateCropDialog
}

proc CropApplyDialog {} {
    global crop
    global icrop
    global dcrop
    global current

    if {$current(frame) != {}} {
	$current(frame) crop center $dcrop(x) $dcrop(y) \
	    $crop(system) $crop(sky) \
	    $dcrop(w) $dcrop(h) $crop(dcoord) $crop(dformat)

	if {[$current(frame) has fits cube]} {
	    $current(frame) crop 3d \
		$dcrop(zmin) $dcrop(zmax) $crop(rcoord) $crop(sky)
	}
	UpdateCrop $current(frame)
    }
}

proc CropDestroyDialog {} {
    global icrop
    global dcrop

    if {[winfo exists $icrop(top)]} {
	destroy $icrop(top)
	destroy $icrop(mb)
	unset dcrop
    }
}

proc UpdateCropMenu {} {
    # can be changed by wcs
    SetCoordSystem crop system sky skyformat
}

proc UpdateCropDialog {} {
    global crop
    global icrop
    global dcrop
    global current

    global debug
    if {$debug(tcl,update)} {
	puts stderr "UpdateCropDialog"
    }

    if {![winfo exists $icrop(top)]} {
	return
    }

    set w $icrop(top)

    if {$current(frame) != {}} {
	set crop(frame) $current(frame)

	if {[$current(frame) has fits]} {
	    # now make sure we have the coord systems
	    AdjustCoordSystem crop system
	    CoordMenuEnable $dcrop(cb).menu crop system sky skyformat
	    CoordMenuButtonCmd crop system sky {}

	    AdjustCoordSystem crop dcoord
	    DistMenuEnable $dcrop(db).menu crop dcoord dformat
	    DistMenuButtonCmd crop dcoord dformat {}

	    AdjustCoordSystem3d crop rcoord
	    CoordMenuEnable $dcrop(rb).menu crop rcoord {} {}
	    CoordMenuButtonCmd crop rcoord {} {}

	    set rr [$current(frame) get crop center \
			$crop(system) $crop(sky) $crop(skyformat) \
			$crop(dcoord) $crop(dformat)]
	    set dcrop(x) [lindex $rr 0]
	    set dcrop(y) [lindex $rr 1]
	    set dcrop(w) [lindex $rr 2]
	    set dcrop(h) [lindex $rr 3]

	    if {[$current(frame) has fits cube]} {
		set ss [$current(frame) get crop 3d $crop(rcoord) $crop(sky)]
		set dcrop(zmin) [lindex $ss 0]
		set dcrop(zmax) [lindex $ss 1]

		grid $w.param.rtitle $w.param.from $w.param.to $dcrop(rb) \
		    -padx 2 -pady 2
	    } else {
		set dcrop(zmin) {}
		set dcrop(zmax) {}

		grid forget $w.param.rtitle $w.param.from $w.param.to $dcrop(rb)
	    }

	    return
	}
    }

    grid forget $w.param.rtitle $w.param.from $w.param.to $dcrop(rb)

    CoordMenuReset $dcrop(cb).menu crop system sky skyformat
    DistMenuReset $dcrop(db).menu crop dcoord dformat
    CoordMenuReset $dcrop(rb).menu crop rcoord {} {}

    set dcrop(x) {}
    set dcrop(y) {}
    set dcrop(w) {}
    set dcrop(h) {}
    set dcrop(zmin) {}
    set dcrop(zmax) {}
}

proc MatchCropCurrent {sys} {
    global current

    if {$current(frame) != {}} {
	MatchCrop $current(frame) $sys
    }
}

proc MatchCrop {which sys} {
    global ds9
    global rgb

    # make sure matrices have been updated
    RealizeDS9

    set tt [$which has crop]
    set datasec [$which get datasec]

    if {$tt} {
	switch -- $sys {
	    image -
	    physical -
	    amplifier -
	    detector {
		set rr [$which get crop center $sys fk5 degrees $sys degrees]
		set r(x) [lindex $rr 0]
		set r(y) [lindex $rr 1]
		set r(w) [lindex $rr 2]
		set r(h) [lindex $rr 3]
		set qq [$which get crop 3d image]

		foreach ff $ds9(frames) {
		    if {$ff != $which} {
			RGBEvalLock rgb(lock,crop) $ff [list $ff datasec $datasec]
			RGBEvalLock rgb(lock,crop) $ff [list $ff crop center $r(x) $r(y) $sys fk5 $r(w) $r(h) $sys degrees]
			RGBEvalLock rgb(lock,crop) $ff [list $ff crop 3d $qq image]
		    }
		}
	    }
	    wcs {
		set ss [lindex [$which get wcs] 0]
		if {[$which has wcs $ss]} {
		    set rr [$which get crop center $ss fk5 degrees $ss degrees]
		    set r(x) [lindex $rr 0]
		    set r(y) [lindex $rr 1]
		    set r(w) [lindex $rr 2]
		    set r(h) [lindex $rr 3]
		    set qq [$which get crop 3d $ss fk5]

		    foreach ff $ds9(frames) {
			if {$ff != $which} {
			    if {[$ff has wcs $ss]} {
				RGBEvalLock rgb(lock,crop) $ff [list $ff crop center $r(x) $r(y) $ss fk5 $r(w) $r(h) $ss degrees]
				RGBEvalLock rgb(lock,crop) $ff [list $ff crop 3d $qq $ss]
			    }
			}
		    }
		}
	    }
	}
    } else {
	foreach ff $ds9(frames) {
	    if {$ff != $which} {
		RGBEvalLock rgb(lock,crop) $ff [list $ff crop]
		RGBEvalLock rgb(lock,crop) $ff [list $ff crop 3d]
	    }
	}
    }
}

proc LockCropCurrent {} {
    global current
    
    if {$current(frame) != {}} {
	LockCrop $current(frame)
    }
}

proc LockCrop {which} {
    global crop

    switch -- $crop(lock) {
	none {}
	default {MatchCrop $which $crop(lock)}
    }
}

proc CropBackup {ch which} {
    switch [$which get type] {
	base -
	3d {CropBackupBase $ch $which}
	rgb {CropBackupRGB $ch $which}
    }
}

proc CropBackupBase {ch which} {
    if {[$which has crop]} {
	if {[$which has fits]} {
	    set rr [$which get crop physical fk5 degrees] 
	    puts $ch "$which crop $rr physical fk5"

	    if {[$which has fits cube]} {
		set ss [$which get crop 3d image]
		puts $ch "$which crop 3d $ss image"
	    }
	}
    }
}

proc CropBackupRGB {ch which} {
    set sav [$which get rgb channel]
    foreach cc {red green blue} {
	$which rgb channel $cc
	puts $ch "$which rgb channel $cc"
	CropBackupBase $ch $which
    }
    $which rgb channel $sav
    puts $ch "$which rgb channel $sav"
}

# Process Cmds

proc ProcessCropCmd {varname iname} {
    upvar $varname var
    upvar $iname i

    # we need to be realized
    ProcessRealizeDS9

    crop::YY_FLUSH_BUFFER
    crop::yy_scan_string [lrange $var $i end]
    crop::yyparse
    incr i [expr $crop::yycnt-1]
}

proc ProcessSendCropCmd {proc id param {sock {}} {fn {}}} {
    global parse
    set parse(proc) $proc
    set parse(id) $id

    cropsend::YY_FLUSH_BUFFER
    cropsend::yy_scan_string $param
    cropsend::yyparse
}
