#  Copyright (C) 1999-2021
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc CurrentDef {} {
    global current
    global pcurrent
    global ds9

    set current(frame) {}
    set current(colorbar) {}
    set current(ext) {}
    set current(cursor) {}
    set current(rgb) red

    set current(display) single
    set current(mode) none
    set current(zoom) {1 1}
    set current(rotate) 0
    set current(orient) none
    set current(align) 0

    set pcurrent(display) $current(display)
    set pcurrent(mode) $current(mode)
    set pcurrent(zoom) $current(zoom)
    set pcurrent(rotate) $current(rotate)
    set pcurrent(orient) $current(orient)
    set pcurrent(align) $current(align)
}

proc CursorDef {} {
    global icursor

    set icursor(save) {}
    set icursor(id) 0
    set icursor(timer) 0
    set icursor(timer,abort) 0
}

proc GetNumCores {} {
    global tcl_platform
    global env

    switch $tcl_platform(os) {
	Linux {
            if {![catch {open "/proc/cpuinfo"} f]} {
                set cores [regexp -all -line {^processor\s} [read $f]]
                close $f
                if {$cores > 0} {
                    return $cores
                }
            }
	}
	Darwin {
            if {![catch {exec sysctl -n "hw.ncpu"} cores]} {
                return $cores
            }
	}
	{Windows NT} {
	    return $env(NUMBER_OF_PROCESSORS)
	}
    }

    return 1
}

proc UpdateDS9 {} {
    global ds9
    global current

    # This routine is called when ever there is a state change within ds9
    # for example, a image is loaded, current(frame) is changed, etc

    global debug
    if {$debug(tcl,update)} {
	puts stderr "UpdateDS9 begin..."
    }

    UpdateFileMenu
    UpdateEditMenu
    UpdateFrameMenu
    UpdateBinMenu
    UpdateZoomMenu
    UpdateScaleMenu
    UpdateColorMenu
    UpdateRegionMenu
    # wcs(system) set here
    UpdateWCSMenu 
    UpdateAnalysisMenu

    UpdateMaskMenu
    UpdateContourMenu
    UpdateGridMenu
    UpdateBlockMenu
    UpdateSmoothMenu
    UpdateCubeMenu
    UpdateRGBMenu
    UpdatePanZoomMenu

    UpdateBinDialog
    UpdatePanZoomDialog
    UpdateCrosshairDialog
    UpdateCropDialog
    UpdateScaleDialog
    UpdateColorDialog
    UpdateWCSDialog

    UpdateGroupDialog
    UpdateCATDialog
    UpdateCentroidDialog
    UpdateCubeDialog
    UpdateRGBDialog
    Update3DDialog
    UpdateContourDialog
    UpdateGridDialog

    RefreshInfoBox $current(frame)
    UpdateColormapLevel
    
    if {$debug(tcl,update)} {
	puts stderr "UpdateDS9 end...\n"
    }
}

# changes to other dialogs can affect the infobox and pixeltable
proc UpdateMain {} {
    global current

    global debug
    if {$debug(tcl,update)} {
	puts stderr "UpdateMain"
    }

    RefreshInfoBox $current(frame)
    UpdateColormapLevel
    switch -- $current(mode) {
	crosshair {
	    if {$current(frame) != {}} {
		set coord [$current(frame) get crosshair canvas]
		set x [lindex $coord 0]
		set y [lindex $coord 1]

		# just in case we have a mosaic
		UpdateColormapLevelMosaic $current(frame) $x $y canvas
		UpdatePixelTableDialog $current(frame) $x $y canvas
		UpdateGraphsData $current(frame) $x $y canvas
	    }
	}
	none -
	pointer -
	region -
	catalog -
	footprint -
	colorbar -
	pan -
	zoom -
	rotate -
	crop -
	examine -
	iexam -
	3d {}
    }
}

proc ProcessCmdSet {varname key value {cmd {}}} {
    global $varname

    set ${varname}($key) $value
    if {$cmd != {}} {
	eval $cmd
    }
}

proc ProcessCmdSet2 {varname key value key2 value2 {cmd {}}} {
    global $varname

    set ${varname}($key) $value
    set ${varname}($key2) $value2
    if {$cmd != {}} {
	eval $cmd
    }
}

proc ProcessCmdSet3 {varname key value key2 value2 key3 value3 {cmd {}}} {
    global $varname

    set ${varname}($key) $value
    set ${varname}($key2) $value2
    set ${varname}($key3) $value3
    if {$cmd != {}} {
	eval $cmd
    }
}

proc ProcessCmdSet4 {varname key value key2 value2 key3 value3 key4 value4 {cmd {}}} {
    global $varname

    set ${varname}($key) $value
    set ${varname}($key2) $value2
    set ${varname}($key3) $value3
    set ${varname}($key4) $value4
    if {$cmd != {}} {
	eval $cmd
    }
}

proc ProcessCmdAppend {varname key value {cmd {}}} {
    global $varname

    append ${varname}($key) $value
    if {$cmd != {}} {
	eval $cmd
    }
}

proc ProcessCmdCurrent {key cmd} {
    global current

    if {$current($key) != {}} {
	$current($key) $cmd
    }
}

proc ProcessCmdFontStyle {varname key value {cmd {}}} {
    global $varname

    switch $value {
	normal {
	    set ${varname}($key,weight) normal
	    set ${varname}($key,slant) roman
	}
	bold {
	    set ${varname}($key,weight) bold
	    set ${varname}($key,slant) roman
	}
	italic {
	    set ${varname}($key,weight) normal
	    set ${varname}($key,slant) italic
	}
    }

    if {$cmd != {}} {
	eval $cmd
    }
}

proc ProcessCmdCVAR0 {cmd} {
    global cvarname

    if {$cvarname != {}} {
	eval $cmd $cvarname
    }
}

proc ProcessCmdCVAR {key value {cmd {}}} {
    global cvarname
    upvar #0 $cvarname cvar

    set cvar($key) $value
    if {$cmd != {} && $cvarname != {}} {
	eval $cmd $cvarname
    }
}

proc ProcessCmdCVAR2 {key value key2 value2 {cmd {}}} {
    global cvarname
    upvar #0 $cvarname cvar

    set cvar($key) $value
    set cvar($key2) $value2
    if {$cmd != {} && $cvarname != {}} {
	eval $cmd $cvarname
    }
}

proc ProcessCmdCVAR3 {key value key2 value2 key3 value3 {cmd {}}} {
    global cvarname
    upvar #0 $cvarname cvar

    set cvar($key) $value
    set cvar($key2) $value2
    set cvar($key3) $value3
    if {$cmd != {} && $cvarname != {}} {
	eval $cmd $cvarname
    }
}

proc ProcessCmdCVAR4 {key value key2 value2 key3 value3 key4 value4 {cmd {}}} {
    global cvarname
    upvar #0 $cvarname cvar

    set cvar($key) $value
    set cvar($key2) $value2
    set cvar($key3) $value3
    set cvar($key4) $value4
    if {$cmd != {} && $cvarname != {}} {
	eval $cmd $cvarname
    }
}

proc ProcessCmdCVAR5 {key value key2 value2 key3 value3
		      key4 value4 key5 value5 {cmd {}}} {
    global cvarname
    upvar #0 $cvarname cvar

    set cvar($key) $value
    set cvar($key2) $value2
    set cvar($key3) $value3
    set cvar($key4) $value4
    set cvar($key5) $value5
    if {$cmd != {} && $cvarname != {}} {
	eval $cmd $cvarname
    }
}

proc ProcessCmdCVAR6 {key value key2 value2 key3 value3
		      key4 value4 key5 value5 key6 value6 {cmd {}}} {
    global cvarname
    upvar #0 $cvarname cvar

    set cvar($key) $value
    set cvar($key2) $value2
    set cvar($key3) $value3
    set cvar($key4) $value4
    set cvar($key5) $value5
    set cvar($key6) $value6
    if {$cmd != {} && $cvarname != {}} {
	eval $cmd $cvarname
    }
}

proc ProcessCmdCVAROpt {cmd opt} {
    global cvarname

    if {$cvarname != {}} {
	eval $cmd $cvarname {$opt}
    }
}

proc ProcessSendCmd {cmd} {
    global parse
    $parse(proc) $parse(id) "[$cmd]"
}

proc ProcessSendCmdYesNo {varname key} {
    upvar #0 $varname var
    global $varname

    global parse
    $parse(proc) $parse(id) "[ToYesNo $var($key)]"
}

proc ProcessSendCmdCVAR {cmd} {
    global cvarname
    upvar #0 $cvarname cvar

    global parse
    if {$cmd != {} && $cvarname != {}} {
	$parse(proc) $parse(id) "[$cmd $cvarname]"
    }
}

proc ProcessSendCmdCVARGet {key} {
    global cvarname
    upvar #0 $cvarname cvar

    global parse
    $parse(proc) $parse(id) "$cvar($key)\n"
}

proc ProcessSendCmdCVARGetYesNo {key} {
    global cvarname
    upvar #0 $cvarname cvar

    global parse
    $parse(proc) $parse(id) [ToYesNo $cvar($key)]
}

proc ProcessSendCmdGet {varname key} {
    upvar #0 $varname var
    global $varname

    global parse
    $parse(proc) $parse(id) "$var($key)\n"
}

proc ProcessSendCmdGet2 {varname key key2} {
    upvar #0 $varname var
    global $varname

    global parse
    $parse(proc) $parse(id) "$var($key) $var($key2)\n"
}

proc ProcessSendCmdGet3 {varname key key2 key3} {
    upvar #0 $varname var
    global $varname

    global parse
    $parse(proc) $parse(id) "$var($key) $var($key2) $var($key3)\n"
}

proc ProcessSendCmdGet9 {varname key key2 key3 key4 key5 key6 key7 key8 key9} {
    upvar #0 $varname var
    global $varname

    global parse
    $parse(proc) $parse(id) "$var($key) $var($key2) $var($key3) $var($key4) $var($key5) $var($key6) $var($key7) $var($key8) $var($key9)\n"
}

proc ProcessSendCmdCurrent {cmd} {
    global parse
    global current

    if {$current(frame) != {}} {
	$parse(proc) $parse(id) "[$current(frame) $cmd]\n"
    }
}

proc ProcessSendCmdCurrentYesNo {cmd} {
    global parse
    global current

    if {$current(frame) != {}} {
	$parse(proc) $parse(id) "[ToYesNo [$current(frame) $cmd]]"
    }
}

proc ProcessSendCmdTxt {rr} {
    global parse
    $parse(proc) $parse(id) "$rr\n"
}

proc ProcessSendCmdSend {ext cmd} {
    global parse
    global current

    if {$current(frame) != {}} {
	ProcessSend $parse(proc) $parse(id) $parse(sock) $parse(fn) \
	    $ext [$current(frame) $cmd]
    }
}

proc ProcessSend {proc id sock fn ext rr} {
    if {$fn != {}} {
	append fn $ext
	set ch [open $fn w]
	puts $ch $rr
	close $ch
	$proc $id {} $fn
    } else {
	$proc $id $rr
    }
}

proc SourceInitFileDir {ext} {
    global ds9
    
    foreach pp {{.} {}} {
	set fn $pp$ds9(app)$ext
	set ff [file join [GetEnvHome] $fn]
	switch [SourceInitFile $ff] {
	    1 {return 1}
	    default {return 0}
	}
    }
    return 0
}

proc SourceInitFile {fn} {
    global tcl_platform

    # do this cause old scripts may assume access during source command
    global ds9

    if {[file exist $fn] && [file isfile $fn]} {
	# check permissions
	switch $tcl_platform(platform) {
	    unix {
		set pp [split [file attributes $fn -perm] {}]
		if {![ValidReadOnly [lindex $pp 3]] ||
		    ![ValidReadOnly [lindex $pp 4]]} {
		    set msg "[msgcat::mc {Invalid file permissions detected}]: $fn [msgcat::mc {Please change the file's permission to disable other users write access. Use anyway?}]"
		    
		    if {[tk_messageBox -type yesno -icon question -message $msg] != {yes}} {
			# failed to execute
			return 0
		    }
		}
	    }
	    windows {}
	}

	# can't make this a debug command line option
	# prefs set before options parsed
	if {[catch {source $fn}]} {
	    Error "[msgcat::mc {An error has occurred while executing}] $fn. [msgcat::mc {DS9 will complete the initialization process}]"
	    # failed to execute
	    return 0
	}
	# success execute
	return 1
    }

    # not found
    return -1
}

proc ValidReadOnly {perm} {
    if {[string is integer $perm]} {
	switch $perm {
	    0 -
	    1 -
	    4 -
	    5 {return 1}
	    default {return 0}
	}
    }
    return 0;
}

proc LanguageToName {which} {
    switch $which {
	locale {return {Locale}}
	cs {return "\u010Cesky"}
	da {return {Dansk}}
	de {return {Deutsch}}
	en {return {English}}
