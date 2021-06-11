#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc CurrentDef {} {
    global current
    global pcurrent
    global ds9

    set current(frame) {}
    set current(ext) {}
    set current(colorbar) {}
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

    UpdateGraphAxis $current(frame)

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
		UpdateGraphData $current(frame) $x $y canvas
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
	es {return {Español}}
	fr {return {Français}}
	ja {return [encoding convertfrom euc-jp "\xc6\xfc\xcb\xdc\xb8\xec"]}
	pt {return {Português}}
	zh {return [encoding convertfrom big5 "\xA4\xA4\xA4\xE5"]}
    }
}

proc SetLanguage {ll} {
    global ds9
    global pds9
    
    set pds9(language,name) [LanguageToName $ll]

    set x 0
    msgcat::mclocale $ll

    msgcat::mcload [file join $::tk_library msgs]

    # we need to find if we support this language
    if {[msgcat::mcload [file join $ds9(root) msgs]]} {
	incr x
    }
    if {$pds9(language,dir) != {}} {
	if {[msgcat::mcload $pds9(language,dir)]} {
	    incr x
	}
    }

    # if english, always return found
    if {[string equal [string range $ll 0 1] {en}]} {
	incr x
    }

    if {$x} {
	return 1
    } else {
	return 0
    }
}

proc GetEnvHome {} {
    global env
    global tcl_platform

    switch $tcl_platform(platform) {
	unix {
	    if {[info exists env(HOME)]} {
		return $env(HOME)
	    }
	}
	windows {
	    if {[info exists env(HOME)]} {
		set hh [file normalize [file nativename $env(HOME)]]
		if {[file isdirectory $hh]} {
		    return $hh
		}
	    }
	    # this is just a backup, the above should always work
	    if {[info exists env(HOMEDRIVE)] &&	[info exists env(HOMEPATH)]} {
		return "$env(HOMEDRIVE)$env(HOMEPATH)"
	    }
	}
    }
    return {}
}

proc InitTempDir {} { 
    global ds9
    global env

    # check environment vars first
    #   windows is very picky as to file name format 
    if {[info exists env(TEMP)]} {
	set ds9(tmpdir) [file normalize [file nativename $env(TEMP)]]
    } elseif {[info exists env(TMP)]} {
	set ds9(tmpdir) [file normalize [file nativename $env(TMP)]]
    }

    # nothing so far, go with defaults
    if {$ds9(tmpdir) == {}} {
	global tcl_platform
	switch $tcl_platform(platform) {
	    unix {set ds9(tmpdir) "/tmp"}
	    windows {set ds9(tmpdir) "C:/WINDOWS/Temp"}
	}
    }

    #   see if it is valid, else current directory
    if {![file isdirectory $ds9(tmpdir)]} {
	set ds9(tmpdir) {.}
    }
}

proc tmpnam {ext} {
    global ds9

    for {set ii 0} {$ii<10} {incr ii} {
	set fn "$ds9(tmpdir)/ds9[clock clicks]$ext"
	if {![file exists $fn]} {
	    return $fn
	}
    }

    # give up
    return "$ds9(tmpdir)/ds9$ext"
}

# which compiler do we use for filtering?
proc InitFilterCompiler {} {
    global ds9
    global env
    global argv0

    # if the user did not explicitly specify one ...
    if {![info exists env(FILTER_CC)]} {
	switch -- $ds9(wm) {
	    x11 -
	    aqua {}
	    win32 {
		set tcc [file join $ds9(root) tcc/tcc.exe]
 		if {[file exists $tcc]} {
		    set env(FILTER_CC) [file nativename [file attributes [file normalize $tcc] -shortname]]
		    set env(FILTER_TMPDIR) [file nativename [file attributes [file normalize $ds9(tmpdir)] -shortname]]
		}
	    }
	}
    }
}

proc ToYesNo {value} {
    if {$value == 1} {
	return "yes\n"
    } else {
	return "no\n"
    }
}

proc FromYesNo {value} {
    set v [string tolower $value]

    if {$v == "no" || $v == "false" || $v == "off" || $v == 0} {
	return 0
    } else {
	return 1
    }
}

proc ProcessRealizeDS9 {} {
    global ds9
    global current

    # this can really slow down scripts so use ds9(last)
    # to remember last update
    if {$ds9(last) != $current(frame)} {
	RealizeDS9
	set ds9(last) $current(frame)
    }
}

proc RealizeDS9 {} {
    # this has to come first, to realize the canvas
    global debug
    if {$debug(tcl,idletasks)} {
	puts stderr "RealizeDS9"
    }

    global ds9
    foreach ff $ds9(frames) {
	# get all frames ready
	$ff update
    }

    # now all update all at once
    update
}

proc Sex2H {str} {
    scan $str "%d:%d:%f" h m s
    return [expr $h+($m/60.)+($s/(60.*60.))]
}

proc Sex2Hs {str} {
    scan $str "%d %d %f" h m s
    return [expr $h+($m/60.)+($s/(60.*60.))]
}

proc Sex2D {str} {
    set sign 1
    set degree 0
    set min 0
    set sec 0
    scan $str "%d:%f:%f" degree min sec

    if {$degree != 0} {
	if {$degree < 0} {
	    set sign -1
	}
    } else {
	if {[string range $str 0 0] == {-}} {
	    set sign -1
	}
    }

    return [expr $sign * (abs($degree)+($min/60.)+($sec/(60.*60.)))]
}

proc SetCursor {cursor} {
    global ds9
    global iis
    global current

    # if init phase, don't change cursor
    if {$ds9(init)} {
	return
    }

    # if iis cursor mode, don't change cursor
    if {$iis(state)} {
	return
    }

    if {($current(cursor) != $cursor)} {
	set current(cursor) $cursor
	if {$cursor != {}} {
	    $ds9(canvas) configure -cursor $cursor
	} else {
	    $ds9(canvas) configure -cursor {}
	}
    }
}

proc CursorTimer {} {
    global ds9
    global icursor

    switch -- $icursor(timer) {
	0 {
	    set icursor(timer,abort) 0
	    set icursor(timer) 0
	    set icursor(id) 0
	    $ds9(canvas) configure -cursor {}
	}
	1 {
	    $ds9(canvas) configure -cursor circle
	    set icursor(timer) 2
	    set icursor(id) [after 1000 CursorTimer]
	}
	2 {
	    $ds9(canvas) configure -cursor dot
	    set icursor(timer) 1
	    set icursor(id) [after 1000 CursorTimer]
	}
    }
}

proc AboutBox {} {
    global help
    global ds9
    global ed

    set w {.abt}

    set ed(ok) 0

    DialogCreate $w [msgcat::mc {About SAOImageDS9}] ed(ok)

    # Param
    set f [ttk::frame $w.param]
    canvas $f.c -background white -height 300 -width 500
    pack $f.c -fill both -expand true
    
    set ed(sun) [image create photo -format gif -file $ds9(root)/doc/sun.gif]
    
    $f.c create image 0 0 -image $ed(sun) -anchor nw
    $f.c create text 120 22 -text $help(about) -anchor nw -width 350

    # Buttons
    set f [ttk::frame $w.buttons]
    ttk::button $f.ok -text [msgcat::mc {OK}] -command {set ed(ok) 1} \
	-default active 
    pack $f.ok -padx 2 -pady 2

    bind $w <Return> {set ed(ok) 1}

    # Fini
    ttk::separator $w.sep -orient horizontal
    pack $w.buttons $w.sep -side bottom -fill x
    pack $w.param -side top -fill both -expand true

    DialogWait $w ed(ok)
    destroy $w

    image delete $ed(sun)
    unset ed
}

proc QuitDS9 {} {
    global ds9

    # shutdown SAMP
    global samp
    if {[info exists samp]} {
	catch {SAMPDisconnect}
    }

    # close IIS ports
    catch {IISClose}

    # close out XPA
    global xpa
    if {[info exists xpa]} {
	catch {xpafree $xpa}
    }

    # close all HV windows, they may have tmp files
    global ihv
    foreach hh $ihv(windows) {
	if {[winfo exists $hh]} {
	    catch {HVDestroy $hh}
	}
    }

    # delete frames
    # may have regions with plot windows
    DeleteAllFrames

    # make sure everybody has had a chance to shut down properly
    update

    # and we are done
    focus {}
    exit
}

proc OpenSource {} {
    set filename [OpenFileDialog tclfbox]
    if {$filename != {}} {
	uplevel #0 "source \{$filename\}"
    }
}

proc OpenConsole {} {
    global ds9
    
    if {[winfo exists ".tkcon"]} {
	tkcon show
    } else {
	set ::tkcon::OPT(exec) {}
	set ::tkcon::OPT(font) [font actual TkFixedFont]
	
	tkcon::Init

	switch $ds9(wm) {
	    x11 -
	    win32 {bind $::tkcon::PRIV(curtab) <<ThemeChanged>> {break}}
	    aqua {}
	}
    }
}

proc ToggleBindEvents {} {
    global ds9

    if {$ds9(freeze)} {
	set ds9(freeze) 0
	BindEventsCanvas
	BindEventsPanner
    } else {
	set ds9(freeze) 1
	UnBindEventsCanvas
	UnBindEventsPanner
    }
}

proc ChangeMode {} {
    global ds9
    global current

    foreach ff $ds9(frames) {
	$ff crosshair off
	$ff marker catalog unselect all
	$ff marker catalog unhighlite all
	$ff marker unselect all
	$ff marker unhighlite all
    }

    UpdateRegionMenu

    RefreshInfoBox $current(frame)
    PixelTableClearDialog
    ClearGraphData

    switch -- $current(mode) {
	none -
	pointer -
	region -
	catalog -
	footprint {SetCursor {}}
	crosshair {
	    foreach ff $ds9(frames) {
		$ff crosshair on
	    }
	    SetCursor crosshair
	}
	colorbar {SetCursor center_ptr}
	zoom {SetCursor sizing}
	pan {SetCursor fleur}
	rotate {SetCursor exchange}
	crop {SetCursor {}}
	examine {SetCursor target}
	iexam {}
	3d {SetCursor {}}
    }
}

proc ChangeModeItem {which} {
    global current

    set current(mode) $which
    ChangeMode
}

# Font procs

proc InitDefaultFont {} {
    global ds9
    global pds9

    set pds9(font) helvetica
    set pds9(font,weight) normal
    set pds9(font,slant) roman

    switch $ds9(wm) {
	x11 {set pds9(font,size) 9}
	aqua {set pds9(font,size) 13}
	win32 {set pds9(font,size) 10}
    }
}

proc InitDefaultTextFont {} {
    global ds9
    global pds9

    set pds9(text,font) courier
    set pds9(text,font,weight) normal
    set pds9(text,font,slant) roman

    switch $ds9(wm) {
	x11 {set pds9(text,font,size) 9}
	aqua {set pds9(text,font,size) 12}
	win32 {set pds9(text,font,size) 10}
    }
}

proc ResetDefaultFont {} {
    InitDefaultFont
    SetDefaultFont true
}

proc ResetDefaultTextFont {} {
    InitDefaultTextFont
    SetDefaultTextFont true
}

proc SetDefaultFont {which} {
    global ds9
    global pds9

    font configure TkDefaultFont -family $ds9($pds9(font)) \
	-size $pds9(font,size) -weight $pds9(font,weight) \
	-slant $pds9(font,slant)

    switch $ds9(wm) {
	x11 {
	    font configure TkMenuFont -family $ds9($pds9(font)) \
		-size $pds9(font,size) -weight $pds9(font,weight) \
		-slant $pds9(font,slant)
	}
	aqua -
	win32 {
	    # can't change font defs, see font configure doc
	}
    }

    if {$which} {
	global icat
	global isia
	global ifp

	UpdateScaleDialogFont
	UpdateGraphFont
	TBLUpdateFont $icat(cats)
	TBLUpdateFont $isia(sias)
	TBLUpdateFont $ifp(fps)
    }
}

proc SetDefaultTextFont {which} {
    global ds9
    global pds9

    font configure TkFixedFont -family $ds9($pds9(text,font)) \
	-size $pds9(text,font,size) -weight $pds9(text,font,weight) \
	-slant $pds9(text,font,slant)

    if {$which} {
	SimpleTextUpdateFont
	EditTextUpdateFont
    }
}

proc PrefsBgColor {} {
    global ds9
    global pds9

    foreach ff $ds9(frames) {
	$ff bg color $pds9(bg)
	$ff bg color $pds9(bg,use)
    }
}

proc PrefsNanColor {} {
    global ds9
    global pds9

    foreach ff $ds9(frames) {
	$ff nan color $pds9(nan)
    }
}

proc PrefsPrecision {} {
    global ds9
    global pds9

    foreach ff $ds9(frames) {
	$ff precision $pds9(prec,linear) $pds9(prec,deg) \
	    $pds9(prec,hms) $pds9(prec,dms) \
	    $pds9(prec,len,linear) $pds9(prec,len,deg) \
	    $pds9(prec,len,arcmin) $pds9(prec,len,arcsec) \
	    $pds9(prec,angle)
    }
    # prefs validation command
    return true
}

proc ChangeThreads {} {
    global ds9

    foreach ff $ds9(frames) {
	$ff threads $ds9(threads)
    }
    # prefs validation command
    return true
}

proc PrefsIRAFAlign {} {
    global ds9
    global pds9

    foreach ff $ds9(frames) {
	$ff iraf align $pds9(iraf)
    }
}

proc DisplayLog {item} {
    SimpleTextDialog ftptxt [msgcat::mc {Message Log}] 80 40 append bottom $item
}

proc ParseURL {url varname} {
    upvar $varname r

    set r(scheme) {}
    set r(authority) {}
    set r(path) {}
    set r(query) {}
    set r(fragment) {}
    set exp {^(([^:/?#]+):)?(//([^/?#]*))?([^?#]*)(\?([^#]*))?(#(.*))?}

    if {![regexp -nocase $exp $url x a r(scheme) c r(authority) r(path) f r(query) h r(fragment)]} {
	return 0
    }

    # check for windows disk drives
    global tcl_platform
    switch $tcl_platform(platform) {
	unix {
	    switch -- $r(scheme) {
		zipfs {
		    # special case for zipfs
		    set r(path) "$r(scheme):$r(path)"
		    set r(scheme) {}
		}
		ftp {
		    # strip any username/passwd
		    set id [string first {@} $r(authority)]
		    if { $id != -1} {
			set r(authority) [string range $r(authority) [expr $id+1] end]
		    }
		}
	    }
	}
	windows {
	    switch -- $r(scheme) {
		{} -
		ftp -
		http -
		https -
		file {
		    if {[regexp {/([A-Z]:)(/.*)} $r(path) a b c]} {
			set r(path) "$b$c"
		    }
		}
		default {
		    set r(path) "$r(scheme):$r(path)"
		    set r(scheme) {}
		}
	    }
	}
    }

    return 1
}

proc BreakUp {str} {
    set r {}
    set l [string length $str]
    for {set i 0} {$i < $l} {incr i} {
	set c [string index $str $i]
	append r $c
	if {$c=="\}"} {
	    append r "\n"
	}
    }
    return $r
}

proc InPath {which} {
    global env
    global tcl_platform

    switch $tcl_platform(platform) {
	unix {
	    set target ${which}
	    set paths [split $env(PATH) :]
	}
	windows {
	    set target ${which}.exe
	    set paths [split $env(PATH) \;]
	}
    }

    foreach p $paths {
	if {[file executable [file join $p $target]]} {
	    return 1
	}
    }
    return 0
}

proc FTPLog {s msg state} {
    global debug

    if {$debug(tcl,ftp)} {
	DisplayLog "$s $msg $state\n"
    }
}

proc HTTPLog {token} {
    global debug

    if {$debug(tcl,http)} {
	upvar #0 $token t

	DisplayLog "url: $t(url)\n"
	DisplayLog "http: $t(http)\n"
	DisplayLog "type: $t(type)\n"
	DisplayLog "binary: $t(binary)\n"
	DisplayLog "coding: $t(coding)\n"
	DisplayLog "currentsize: $t(currentsize)\n"
	DisplayLog "totalsize: $t(totalsize)\n"
	DisplayLog "status: $t(status)\n"
	if {[info exists t(error)]} {
	    DisplayLog "error: $t(error)\n"
	}
	if {[info exists t(posterror)]} {
	    DisplayLog "posterror: $t(posterror)\n"
	}
	DisplayLog "meta: [BreakUp $t(meta)]\n"
    }
}

proc ConfigHTTP {} {
    global phttp

    # set the User-Agent
    http::config -useragent ds9

    # set up tls
    http::register https 443 [list ::tls::socket -tls1 1]

    # set the proxy if requested
    if {$phttp(proxy)} {
	http::config -proxyhost $phttp(proxy,host) -proxyport $phttp(proxy,port)
    }
}

proc ProxyHTTP {} {
    global phttp

    set auth {}
    if {$phttp(proxy) && $phttp(auth)} {
	set auth [list "Proxy-Authorization" [concat "Basic" [base64::encode $phttp(auth,user):$phttp(auth,passwd)]]]
    } 

    return $auth
}

proc FixSpec {sysname skyname formatname defsys defsky defformat} {
    upvar $sysname sys
    upvar $skyname sky
    upvar $formatname format

    set rr 0

    switch -- $sys {
	image -
	physical -
	detector -
	amplifier -
	wcs -
	wcsa -
	wcsb -
	wcsc -
	wcsd -
	wcse -
	wcsf -
	wcsg -
	wcsh -
	wcsi -
	wcsj -
	wcsk -
	wcsl -
	wcsm -
	wcsn -
	wcso -
	wcsp -
	wcsq -
	wcsr -
	wcss -
	wcst -
	wcsu -
	wcsv -
	wcsw -
	wcsx -
	wcsy -
	wcsz {incr rr}

	fk4 -
	b1950 -
	fk5 -
	j2000 -
	icrs -
	galactic -
	ecliptic {
	    set format $sky
	    set sky $sys
	    set sys wcs
	}
	
	default {
	    set format $sky
	    set sky $sys
	    set sys $defsys
	}
    }

    switch -- $sky {
	fk4 -
	b1950 -
	fk5 -
	j2000 -
	icrs -
	galactic -
	ecliptic {incr rr}

	default {
	    set format $sky
	    set sky $defsky
	}
    }

    switch -- $format {
	degrees -
	arcmin -
	arcsec -
	sexagesimal {incr rr}

	default {
	    set format $defformat
	}
    }

    return $rr
}

proc MacOSPhotoFix {top xx yy} {
    global ds9
    global tcl_platform
    
    switch $ds9(wm) {
	x11 {
	    if {$tcl_platform(os) == {Darwin}} {
		set geom [wm geometry $top]
		wm geometry $top "[lindex [split $geom {+}] 0]+$xx+$yy"
		update
		return $geom
	    }
	}
	aqua {macos sc yes}
	win32 {}
    }
    
    return {}
}

proc MacOSPhotoRestore {top geom} {
    global ds9
    global tcl_platform

    switch $ds9(wm) {
	x11 {
	    if {$geom != {} &&
		$tcl_platform(os) == {Darwin}} {
		wm geometry $top $geom
	    }
	}
	aqua {macos sc no}
	win32 {}
    }
}

proc DS9Backup {ch which} {
    global pds9

    puts $ch "$which precision $pds9(prec,linear) $pds9(prec,deg) $pds9(prec,hms) $pds9(prec,dms) $pds9(prec,len,linear) $pds9(prec,len,deg) $pds9(prec,len,arcmin) $pds9(prec,len,arcsec) $pds9(prec,angle)"

    puts $ch "$which bg color $pds9(bg)"
    puts $ch "$which bg color $pds9(bg,use)"
    puts $ch "$which nan color $pds9(nan)"
}

# Process Cmds

proc ProcessPrefsFirstCmd {varname iname} {
    upvar $varname var
    upvar $iname i

    prefsfirst::YY_FLUSH_BUFFER
    prefsfirst::yy_scan_string [lrange $var $i end]
    prefsfirst::yyparse
    incr i [expr $prefsfirst::yycnt-1]
}

proc ProcessPrefsCmd {varname iname} {
    upvar $varname var
    upvar $iname i

    prefs::YY_FLUSH_BUFFER
    prefs::yy_scan_string [lrange $var $i end]
    prefs::yyparse
    incr i [expr $prefs::yycnt-1]
}

proc ProcessSendPrefsCmd {proc id param {sock {}} {fn {}}} {
    global parse
    set parse(proc) $proc
    set parse(id) $id

    prefssend::YY_FLUSH_BUFFER
    prefssend::yy_scan_string $param
    prefssend::yyparse
}

proc PrefsSendCmdPrecision {} {
    global parse

    ProcessSendPrecisionCmd $parse(proc) $parse(id) {}
}

proc ProcessPrecisionCmd {varname iname} {
    upvar $varname var
    upvar $iname i

    precision::YY_FLUSH_BUFFER
    precision::yy_scan_string [lrange $var $i end]
    precision::yyparse
    incr i [expr $precision::yycnt-1]
}

proc ProcessSendPrecisionCmd {proc id param {sock {}} {fn {}}} {
    global pds9

    $proc $id "$pds9(prec,linear) $pds9(prec,deg) $pds9(prec,hms) $pds9(prec,dms) $pds9(prec,len,linear) $pds9(prec,len,deg) $pds9(prec,len,arcmin) $pds9(prec,len,arcsec) $pds9(prec,angle)\n"
}

proc ProcessBgCmd {varname iname} {
    upvar $varname var
    upvar $iname i

    bg::YY_FLUSH_BUFFER
    bg::yy_scan_string [lrange $var $i end]
    bg::yyparse
    incr i [expr $bg::yycnt-1]
}

proc ProcessSendBgCmd {proc id param {sock {}} {fn {}}} {
    global pds9
    $proc $id "$pds9(bg)\n"
}

proc ProcessNanCmd {varname iname} {
    upvar $varname var
    upvar $iname i

    nan::YY_FLUSH_BUFFER
    nan::yy_scan_string [lrange $var $i end]
    nan::yyparse
    incr i [expr $nan::yycnt-1]
}

proc ProcessSendNanCmd {proc id param {sock {}} {fn {}}} {
    global pds9
    $proc $id "$pds9(nan)\n"
}

proc ProcessThreadsCmd {varname iname} {
    upvar $varname var
    upvar $iname i

    threads::YY_FLUSH_BUFFER
    threads::yy_scan_string [lrange $var $i end]
    threads::yyparse
    incr i [expr $threads::yycnt-1]
}

proc ProcessSendThreadsCmd {proc id param {sock {}} {fn {}}} {
    global ds9
    $proc $id "$ds9(threads)\n"
}

proc ProcessSendIRAFAlignCmd {proc id param {sock {}} {fn {}}} {
    global pds9
    $proc $id [ToYesNo $pds9(iraf)]
}

proc ProcessCDCmd {varname iname} {
    upvar $varname var
    upvar $iname i

    cd [lindex $var $i]
}

proc ProcessSendCDCmd {proc id param {sock {}} {fn {}}} {
    $proc $id "[pwd]\n"
}

proc ProcessConsoleCmd {varname iname} {
    upvar $varname var
    upvar $iname i

    OpenConsole

    # ignore error message about ActiveTcl
    global ds9
    InitError $ds9(msg,src)
}

proc ProcessCursorCmd {varname iname} {
    upvar $varname var
    upvar $iname i

    cursor::YY_FLUSH_BUFFER
    cursor::yy_scan_string [lrange $var $i end]
    cursor::yyparse
    incr i [expr $cursor::yycnt-1]
}

proc CursorCmd {x y} {
    global current

    if {$current(frame) == {}} {
	return
    }

    switch -- $current(mode) {
	none {$current(frame) warp $x $y}
	pointer -
	region -
	catalog -
	footprint {MarkerArrowKey $current(frame) $x $y}
	crosshair {CrosshairArrowKey $current(frame) $x $y}
	colorbar {}
	pan {PanCanvas $x $y}
	zoom -
	rotate -
	crop -
	examine -
	iexam -
	3d {}
    }
}

proc ProcessSendDataCmd {proc id param sock fn} {
    global parse
    set parse(proc) $proc
    set parse(id) $id
    set parse(sock) $sock
    set parse(fn) $fn

    datasend::YY_FLUSH_BUFFER
    datasend::yy_scan_string $param
    datasend::yyparse
}

proc DataSendCmd {sys sky xx yy ww hh strip} {
    global parse
    global current

    if {$current(frame) == {}} {
	return
    }

    $current(frame) get data $sys $sky $xx $yy $ww $hh rr
    set ss {}
    foreach ii [array names rr] {
	if {$strip} {
	    append ss "$rr($ii)\n"
	} else {
	    append ss "$ii = $rr($ii)\n"
	}
    }
    ProcessSend $parse(proc) $parse(id) $parse(sock) $parse(fn) {.dat} $ss
}

proc ProcessIconifyCmd {varname iname} {
    upvar $varname var
    upvar $iname i

    iconify::YY_FLUSH_BUFFER
    iconify::yy_scan_string [lrange $var $i end]
    iconify::yyparse
    incr i [expr $iconify::yycnt-1]
}

proc IconifyCmd {which} {
    global ds9

    if {$which} {
	wm iconify $ds9(top)
    } else {
	wm deiconify $ds9(top)
    }
}

proc ProcessSendIconifyCmd {proc id param {sock {}} {fn {}}} {
    global ds9
    if {[wm state $ds9(top)] == "normal"} {
	$proc $id "no\n"
    } else {
	$proc $id "yes\n"
    }
}

proc ProcessLowerCmd {varname iname} {
    upvar $varname var
    upvar $iname i

    global ds9
    lower $ds9(top)
}

proc ProcessModeCmd {varname iname} {
    upvar $varname var
    upvar $iname i

    mode::YY_FLUSH_BUFFER
    mode::yy_scan_string [lrange $var $i end]
    mode::yyparse
    incr i [expr $mode::yycnt-1]
}

proc ProcessQuitCmd {varname iname} {
    upvar $varname var
    upvar $iname i

    QuitDS9
}

proc ProcessSendModeCmd {proc id param {sock {}} {fn {}}} {
    global current
    $proc $id "$current(mode)\n"
}

proc ProcessRaiseCmd {varname iname} {
    upvar $varname var
    upvar $iname i

    global ds9
    raise $ds9(top)
}

proc ProcessSleepCmd {varname iname} {
    upvar $varname var
    upvar $iname i

    # yes, we need this
    UpdateDS9
    RealizeDS9

    sleep::YY_FLUSH_BUFFER
    sleep::yy_scan_string [lrange $var $i end]
    sleep::yyparse
    incr i [expr $sleep::yycnt-1]
}

proc ProcessSourceCmd {varname iname} {
    upvar $varname var
    upvar $iname i

    # we need to be realized
    # you never know what someone will try to do
    ProcessRealizeDS9

    source::YY_FLUSH_BUFFER
    source::yy_scan_string [lrange $var $i end]
    source::yyparse
    incr i [expr $source::yycnt-1]
}

proc SourceCmd {fn} {
    uplevel #0 "source $fn"
}

proc ProcessTclCmd {varname iname buf fn} {
    upvar $varname var
    upvar $iname i

    # backward compatibility
    switch -- [string tolower [lindex $var $i]] {
	yes -
	true -
	on -
	1 -
	no -
	false -
	off -
	0 {
	    return
	}
    }

    if {$buf != {}} {
	uplevel #0 $buf
    } elseif {$fn != {}} {
	if {[file exists $fn]} {
	    set ch [open $fn r]
	    set cmd [read $ch]
	    close $ch
	    uplevel #0 $cmd
	}
    } elseif {[lindex $var $i] != {}} {
	# special case
	uplevel #0 [lindex $var $i]
    }
}

# backward compatibility
proc ProcessThemeCmd {varname iname} {
    upvar $varname var
    upvar $iname i

    global pds9
    set pds9(theme) [lindex $var $i]
    ThemeChange
}

# backward compatibility
proc ProcessSendThemeCmd {proc id param {sock {}} {fn {}}} {
    global pds9
    $proc $id "$pds9(theme)\n"
}

proc ProcessSendVersionCmd {proc id param {sock {}} {fn {}}} {
    global ds9
    $proc $id "$ds9(title) $ds9(version,display)\n"
}

proc XMLQuote {val} {
    return [string map {& &amp; < &lt; > &gt; \' &apos; \" &quot;} $val]
}

proc XMLUnQuote {val} {
    return [string map {&amp; & &lt; < &gt; > &apos; \' &quot; \"} $val]
}

