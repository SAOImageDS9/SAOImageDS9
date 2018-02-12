#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc BackupDialog {} {
    set fn [SaveFileDialog backupfbox]
    if {[string length $fn] != 0} {
	Backup $fn
    }
}

proc Backup {fn} {
    global ds9
    global current

    # script, always overwrite if present
    if {[catch {set ch [open $fn w]}]} {
	Error [msgcat::mc {An error has occurred during backup}]
	return
    }

    # aux directory, create if needed
    set dir "${fn}.dir"
    if {[file exists $dir]} {
	if {![file isdirectory $dir]} {
	    Error [msgcat::mc {An error has occurred during backup}]
	    return
	}
    } else {
	if {[catch {file mkdir $dir}]} {
	    Error [msgcat::mc {An error has occurred during backup}]
	    return
	}
    }

    # update any tags
    if {$current(frame) != {}} {
	$current(frame) colorbar tag "\{[$current(colorbar) get tag]\}"
    }

    # check for newer backup version
    puts $ch "global ds9"
    puts $ch "set vv [lindex $ds9(version) 0]"

    puts $ch "\# this is a check for to ensure a match between the"
    puts $ch "\# current ds9 version matches the prefs version"
    puts $ch "switch -- \[string compare \$vv \[lindex \$ds9(version)\ 0\]\] {"
    puts $ch "  -1 {"
    puts $ch "    if {\[tk_messageBox -type yesno -icon question -message \[msgcat::mc {DS9 has detected an older backup file, do you wish to continue?}\]\] == {no}} {"
    puts $ch "      return"
    puts $ch "    }"
    puts $ch "  }"
    puts $ch "  0 {}"
    puts $ch "  1 {"
    puts $ch "    tk_messageBox -type ok -icon warning -message \[msgcat::mc {DS9 has detected a newer version of a backup file and therefore will not process this file.}\]"
    puts $ch "    return"
    puts $ch "  }"
    puts $ch "}"

    # and file find proc
    puts $ch "proc BackupFindFile {varname} {"
    puts $ch "  upvar \$varname var"
    puts $ch ""
    puts $ch "  set id \[string first \"\\\[\" \$var(file,name)\]"
    puts $ch "  if {\$id > 0} {"
    puts $ch "    set fn \[string range \$var(file,name) 0 \[expr \$id-1\]\]"
    puts $ch "    set ext \[string range \$var(file,name) \$id end\]"
    puts $ch "  } else {"
    puts $ch "    set fn \$var(file,name)"
    puts $ch "    set ext {}"
    puts $ch "  }"
    puts $ch ""
    puts $ch "  if {!\[file exists \$fn\]} {"
    puts $ch "    Error \"\[msgcat::mc {Unable to load}\] \$fn\""
    puts $ch "    global fitsfbox"
    puts $ch "    set fn \[OpenFileDialog fitsfbox\]"
    puts $ch "    if {\$fn == {}} {"
    puts $ch "      Error \[msgcat::mc {An error has occurred during restore}\]"
    puts $ch "      return 0"
    puts $ch "    }"
    puts $ch "    if {!\[file exists \$fn\]} {"
    puts $ch "      Error \[msgcat::mc {An error has occurred during restore}\]"
    puts $ch "      return 0"
    puts $ch "    }"
    puts $ch "    set var(file,name) \"\$fn\$ext\""
    puts $ch "  }"
    puts $ch ""
    puts $ch "  return 1"
    puts $ch "}"

    # Panner
    PannerBackup $ch

    # Colorbar
    ColorbarBackupCmaps $ch $dir
    ColorbarBackup $ch colorbar
    ColorbarBackup $ch colorbarrgb

    # Frames
    foreach ff $ds9(frames) {
	if {![$ff has iis]} {
	    BackupFrame $ch $ff $dir
	}
    }

    # Geometry
    BackupGUI $ch

    # User Plots
    PlotBackup $ch $dir

    # all done
    close $ch
}

proc RestoreDialog {} {
    set fn [OpenFileDialog backupfbox]
    if {[string length $fn] != 0} {
	Restore $fn
    }
}

proc Restore {fn} {
    global ds9
    global pds9

    if {[string length $fn] == 0} {
	return
    }

    # clear all frames
    DeleteAllFrames

    # kill all image server dialogs
    foreach dlg [list dtwomass dsao deso dstsci dvla dnvss dskyview dvlss] {
	global $dlg
	if {[array exists $dlg]} {
	    ARDestroy $dlg
	}
    }

    # kill all simple text dialogs
    global istxt
    foreach varname $istxt(dialogs) {
	SimpleTextDestroy $varname
    }

    # kill all cats
    global icat
    foreach varname $icat(cats) {
	CATDestroy $varname
    }

    # kill all plots
    global iap
    foreach varname $iap(windows) {
	PlotDestroy $varname
    }

    set dir [file dirname $fn]
    set ffn [lindex [file split $fn] end]
    set cd [pwd]
    cd $dir

    # fix a problem with 6.1.2
    global prefs
    set rr $prefs(version)

    # ok, this is a major kludge to fix a major booboo. 
    # Beta versions generated backup save sets with vv set to 
    # something like '7.4b7'. We need to remove the 'b7' part.
    set src {}
    if {![catch {set ch [open "$ffn" r]}]} {
	set src [read $ch]
	close $ch
    } else {
	Error [msgcat::mc {An error has occurred during restore}]
	return
    }

    set aa [string first {set vv } $src]
    set bb [string first {# this is} $src]
    if {$aa != -1 && $bb != -1 && $aa < $bb} {
	set bb [expr $bb -2]
	set ver [string range $src $aa $bb]
	set ll [string first {b} $ver]
	if {$ll != -1} {
	    set ll [expr $ll -1]
	    set src [string replace $src $aa $bb [string range $ver 0 $ll]]
	}
    } else {
	Error [msgcat::mc {An error has occurred during restore}]
	return
    }

    # and load the world
    if {[catch {eval $src}]} {
	Error [msgcat::mc {An error has occurred during restore}]
	global debug
	if {$debug(tcl,restore)} {
	    global errorInfo
	    puts stderr "$errorInfo"
	}
	return
    }

    # historical note, vv contains version number of save set originator
    if {![info exists vv]} {
	set vv [lindex $ds9(version) 0]
    }

    # fix 6.1.2
    if {$vv == {6.1.2}} {
	set prefs(version) $rr
    }

    # fix any prefs
    FixPrefs $vv

    # reset standard dialog
    switch $ds9(wm) {
	x11 {set pds9(dialog) motif}
	aqua -
	win32 {set pds9(dialog) native}
    }

    # return to start dir
    cd $cd

    # and update it
    UpdateGraphGrid
    LayoutOrient
    UpdateActiveFrames
    ChangeMode
    UpdateDS9
}

proc BackupFrame {ch which dir} {
    set fdir [file join $dir $which]
    set rdir "./[lindex [file split $dir] end]/$which"

    # create dir if needed
    if {![file isdirectory $fdir]} {
	if {[catch {file mkdir $fdir}]} {
	    Error [msgcat::mc {An error has occurred during backup}]
	    return
	}
    }

    # frame
    set type [$which get type]
    puts $ch "CreateNameNumberFrame $which $type"
    switch -- $type {
	base {BackupFrameLoad $ch $which $fdir $rdir {}}
	3d {
	    BackupFrameLoad $ch $which $fdir $rdir {}
	    puts $ch "3DDialog"
	}
	rgb {
	    foreach cc {{} red green blue} {
		BackupFrameLoad $ch $which $fdir $rdir $cc
	    }
	    puts $ch "RGBDialog"
	}
    }

    MagnifierFrameBackup $ch $which
    ColorFrameBackup $ch $which
    ColormapFrameBackup $ch $which

    DS9Backup $ch $which
    CubeBackup $ch $which
    RGBBackup $ch $which
    BinBackup $ch $which
    ScaleBackup $ch $which
    # Block need to be before WCS and Crop
    BlockBackup $ch $which
    # WCS nees to be before Pan/Zoom
    WCSBackup $ch $which $fdir $rdir
    PanZoomBackup $ch $which
    CropBackup $ch $which
    # must be after Pan and Block
    3DBackup $ch $which
    MarkerBackup $ch $which $fdir $rdir
    CentroidBackup $ch $which
    MaskBackup $ch $which
    SmoothBackup $ch $which
    ContourBackup $ch $which $fdir $rdir
    GridBackup $ch $which
    CATBackup $ch $which $fdir $rdir
}

proc BackupFrameLoad {ch which fdir rdir channel} {
    set base $which$channel
    set seq 1

    set varname $base
    global $varname
    if {![info exists $varname]} {
	# special case
	set varname "$base.$seq"
	global $varname
    }

    while {[info exists $varname]} {
	if {$channel != {}} {
	    puts $ch "$which rgb channel $channel"
	}

	array set param [array get $varname]
	switch $param(load,type) {
	    mmap -
	    mmapincr -
	    smmap -
	    shared -
	    sshared {
		if {![BackupFrameLoadMMap param $fdir $rdir]} {
		    Error [msgcat::mc {An error has occurred during backup}]
		    return
		}
	    }
	    alloc -
	    allocgz {
		if {![BackupFrameLoadMMap param $fdir $rdir]} {
		    BackupFrameLoadAlloc $which param $fdir $rdir
		}
	    }
	    channel -
	    socket -
	    socketgz -
	    var {BackupFrameLoadAlloc $which param $fdir $rdir}
	    photo {
		if {[BackupFrameLoadMMap param $fdir $rdir]} {
		    puts $ch "global bcktmp"
		    puts $ch "if {\[catch {image create photo -file $param(file,name)} bcktmp\]} {"
		    puts $ch "Error \[msgcat::mc {An error has occurred during restore}\]"
		    puts $ch "return"
		    puts $ch "}"
		} else {
		    BackupFrameLoadAlloc $which param $fdir $rdir
		}
	    }
	}

	puts $ch "global loadParam"
	puts $ch "array set loadParam \[list [array get param]\]"

	switch $param(load,type) {
	    photo {
		puts $ch "set loadParam(var,name) \$bcktmp"
	    }
	}

	puts $ch "if \[BackupFindFile loadParam\] {"
	puts $ch "  ProcessLoad"
	puts $ch "}"

	switch $param(load,type) {
	    photo {
		puts $ch "image delete \$bcktmp"
	    }
	}

	incr seq
	set varname "$base.$seq"
	global $varname
    }
}

proc BackupFrameLoadMMap {varname fdir rdir} {
    upvar $varname param

    global pds9

    set id [string first "\[" $param(file,name)]
    if {$id > 0} {
	set fn [string range $param(file,name) 0 [expr $id-1]]
	set ext [string range $param(file,name) $id end]
    } else {
	set fn $param(file,name)
	set ext {}
    }

    if {![file exists $fn]} {
	return 0
    }

    # special case, we use 'stdin' for input from stdin, ignore
    if {$fn == {stdin}} {
	return 0
    }

    if {$pds9(backup)} {
	# look for sym links
	switch [file type $fn] {
	    file {}
	    link {set fn [file readlink $fn]}
	    default {
		return 0
	    }
	}

	set src [lindex [file split $fn] end]
	if {![file exists [file join $fdir $src]]} {
	    if {[catch {file copy $fn $fdir}]} {
		return 0
	    }
	}
	set param(file,name) "$rdir/[lindex [file split $fn] end]$ext"
    } else {
	if {[file pathtype $param(file,name)] == {relative}} {
	    set param(file,name) [file join [pwd] $param(file,name)]
	}
    }

    # special case: mmap to allocgz via ConvertFitsFile/ConvertArrayFile
    if {[info exists param(file,fn)]} {
	set param(file,fn) $param(file,name)
    }
    return 1
}

proc BackupFrameLoadAlloc {which varname fdir rdir} {
    upvar $varname param

    set ff [$which get fits file name root base]
    set id [string first "\[" $ff]
    if {$id > 0} {
	set fn [string range $ff 0 [expr $id-1]]
    } else {
	set fn $ff
    }

    if {$ff == {}} {
	set ff ds9.fits
	set fn ds9.fits
    }

    set ffn [file join $fdir $fn]
    switch $param(file,type) {
	fits {
	    switch $param(file,mode) {
		{} {
		    if {[$which has fits bin]} {
			$which save fits table file \"$ffn\"
		    } else {
			$which save fits image file \"$ffn\"
		    }
		}

		{rgb cube} {$which save fits rgb cube file \"$ffn\"}
		{rgb image} {$which save fits rgb image file \"$ffn\"}
		{ext cube} {$which save fits image file \"$ffn\"}

		default {
		    if {[string range $param(file,mode) 0 5] == {mosaic}} {
			$which save fits mosaic image file "\{$ffn\}"
		    }
		}
	    }
	}
	array {
	    switch $param(file,mode) {
		{} {$which save fits image file \"$ffn\"}
		{rgb cube} {$which save fits rgb cube file \"$ffn\"}
	    }
	}
	nrrd {$which save fits image file \"$ffn\"}
	photo {
	    switch -- [$which get type] {
		base -
		3d {$which save fits image file \"$ffn\"}
		rgb {
		    $which save fits rgb cube file \"$ffn\"
		    set param(file,mode) {rgb cube}
		}
	    }
	}
    }

    set param(load,type) mmapincr
    set param(file,type) fits
    # use $fn as we are not saving multiple extentions if present
    set param(file,name) "[file join $rdir $fn]"		
}

proc BackupGUI {ch} {

    # Basic

    global pds9
    puts $ch "global pds9"
    puts $ch "array set pds9 \{ [array get pds9] \}"

    global current
    puts $ch "global current"
    puts $ch "array set current \{ [array get current] \}"
    global pcurrent
    puts $ch "global pcurrent"
    puts $ch "array set pcurrent \{ [array get pcurrent] \}"

    global view
    puts $ch "global view"
    puts $ch "array set view \{ [array get view] \}"
    global pview
    puts $ch "global pview"
    puts $ch "array set pview \{ [array get pview] \}"

    global canvas
    puts $ch "global canvas"
    puts $ch "array set canvas \{ [array get canvas] \}"

    global phttp
    puts $ch "global phttp"
    puts $ch "array set phttp \{ [array get phttp] \}"

    global pbuttons
    puts $ch "global pbuttons"
    puts $ch "array set pbuttons \{ [array get pbuttons] \}"

    global ppanner
    puts $ch "global ppanner"
    puts $ch "array set ppanner \{ [array get ppanner] \}"

    global pmagnifier
    puts $ch "global pmagnifier"
    puts $ch "array set pmagnifier \{ [array get pmagnifier] \}"

    global colorbar
    puts $ch "global colorbar"
    puts $ch "array set colorbar \{ [array get colorbar] \}"

    global saveimage
    puts $ch "global saveimage"
    puts $ch "array set saveimage \{ [array get saveimage] \}"

    # don't save prefs(version), keep the current, not the save set version
    # removed after 6.1.2
    # global prefs
    # puts $ch "global prefs"
    # puts $ch "array set prefs \{ [array get prefs] \}"

    global debug
    puts $ch "global debug"
    puts $ch "array set debug \{ [array get debug] \}"

    # File

    global ps
    puts $ch "global ps"
    puts $ch "array set ps \{ [array get ps] \}"
    global pps
    puts $ch "global pps"
    puts $ch "array set pps \{ [array get pps] \}"

    # Frame

    global rgb
    puts $ch "global rgb"
    puts $ch "array set rgb \{ [array get rgb] \}"

    global threed
    puts $ch "global threed"
    puts $ch "array set threed \{ [array get threed] \}"

    global blink
    puts $ch "global blink"
    puts $ch "array set blink \{ [array get blink] \}"
    global pblink
    puts $ch "global pblink"
    puts $ch "array set pblink \{ [array get pblink] \}"

    global tile
    puts $ch "global tile"
    puts $ch "array set tile \{ [array get tile] \}"
    global ptile
    puts $ch "global ptile"
    puts $ch "array set ptile \{ [array get ptile] \}"

    global crosshair
    puts $ch "global crosshair"
    puts $ch "array set crosshair \{ [array get crosshair] \}"

    global cube
    puts $ch "global cube"
    puts $ch "array set cube \{ [array get cube] \}"

    # Bin

    global bin
    puts $ch "global bin"
    puts $ch "array set bin \{ [array get bin] \}"
    global pbin
    puts $ch "global pbin"
    puts $ch "array set pbin \{ [array get pbin] \}"

    # Zoom

    global panzoom
    puts $ch "global panzoom"
    puts $ch "array set panzoom \{ [array get panzoom] \}"
    global ppanzoom
    puts $ch "global ppanzoom"
    puts $ch "array set ppanzoom \{ [array get ppanzoom] \}"

    # Crop

    global crop
    puts $ch "global crop"
    puts $ch "array set crop \{ [array get crop] \}"

    # Scale

    global scale
    puts $ch "global scale"
    puts $ch "array set scale \{ [array get scale] \}"
    global pscale
    puts $ch "global pscale"
    puts $ch "array set pscale \{ [array get pscale] \}"

    global minmax
    puts $ch "global minmax"
    puts $ch "array set minmax \{ [array get minmax] \}"
    global pminmax
    puts $ch "global pminmax"
    puts $ch "array set pminmax \{ [array get pminmax] \}"

    global zscale
    puts $ch "global zscale"
    puts $ch "array set zscale \{ [array get zscale] \}"
    global pzscale
    puts $ch "global pzscale"
    puts $ch "array set pzscale \{ [array get pzscale] \}"

    # Region

    global marker
    puts $ch "global marker"
    puts $ch "array set marker \{ [array get marker] \}"
    global pmarker
    puts $ch "global pmarker"
    puts $ch "array set pmarker \{ [array get pmarker] \}"

    global centroid
    puts $ch "global centroid"
    puts $ch "array set centroid \{ [array get centroid] \}"

    # WCS

    global wcs
    puts $ch "global wcs"
    puts $ch "array set wcs \{ [array get wcs] \}"
    global pwcs
    puts $ch "global pwcs"
    puts $ch "array set pwcs \{ [array get pwcs] \}"

    # Analysis

    global ime
    puts $ch "global ime"
    puts $ch "array set ime \{ [array get ime] \}"
    global pime
    puts $ch "global pime"
    puts $ch "array set pime \{ [array get pime] \}"

    global graph
    puts $ch "global graph"
    puts $ch "array set graph \{ [array get graph] \}"
    global pgraph
    puts $ch "global pgraph"
    puts $ch "array set pgraph \{ [array get pgraph] \}"

    global pcoord
    puts $ch "global pcoord"
    puts $ch "array set pcoord \{ [array get pcoord] \}"

    global pexamine
    puts $ch "global pexamine"
    puts $ch "array set pexamine \{ [array get pexamine] \}"

    global pixel
    puts $ch "global pixel"
    puts $ch "array set pixel \{ [array get pixel] \}"

    global mask
    puts $ch "global mask"
    puts $ch "array set mask \{ [array get mask] \}"
    global pmask
    puts $ch "global pmask"
    puts $ch "array set pmask \{ [array get pmask] \}"

    global contour
    puts $ch "global contour"
    puts $ch "array set contour \{ [array get contour] \}"
    global pcontour
    puts $ch "global pcontour"
    puts $ch "array set pcontour \{ [array get pcontour] \}"

    global grid
    puts $ch "global grid"
    puts $ch "array set grid \{ [array get grid] \}"
    global pgrid
    puts $ch "global pgrid"
    puts $ch "array set pgrid \{ [array get pgrid] \}"

    global block
    puts $ch "global block"
    puts $ch "array set block \{ [array get block] \}"
    global pblock
    puts $ch "global pblock"
    puts $ch "array set pblock \{ [array get pblock] \}"

    global smooth
    puts $ch "global smooth"
    puts $ch "array set smooth \{ [array get smooth] \}"
    global psmooth
    puts $ch "global psmooth"
    puts $ch "array set psmooth \{ [array get psmooth] \}"

    global pnres
    puts $ch "global pnres"
    puts $ch "array set pnres \{ [array get pnres] \}"

    global sao
    puts $ch "global sao"
    puts $ch "array set sao \{ [array get sao] \}"

    global eso
    puts $ch "global eso"
    puts $ch "array set eso \{ [array get eso] \}"

    global stsci
    puts $ch "global stsci"
    puts $ch "array set stsci \{ [array get stsci] \}"

    global twomass
    puts $ch "global twomass"
    puts $ch "array set twomass \{ [array get twomass] \}"

    global nvss
    puts $ch "global nvss"
    puts $ch "array set nvss \{ [array get nvss] \}"

    global vlss
    puts $ch "global vlss"
    puts $ch "array set vlss \{ [array get vlss] \}"

    global skyview
    puts $ch "global skyview"
    puts $ch "array set skyview \{ [array get skyview] \}"

    global cat
    puts $ch "global cat"
    puts $ch "array set cat \{ [array get cat] \}"
    global pcat
    puts $ch "global pcat"
    puts $ch "array set pcat \{ [array get pcat] \}"

    global vla
    puts $ch "global vla"
    puts $ch "array set vla \{ [array get vla] \}"

    global pvo
    puts $ch "global pvo"
    puts $ch "array set pvo \{ [array get pvo] \}"

    global pap
    puts $ch "global pap"
    puts $ch "array set pap \{ [array get pap] \}"

    global panalysis
    puts $ch "global panalysis"
    puts $ch "array set panalysis \{ [array get panalysis] \}"

    global active
    puts $ch "global active"
    puts $ch "array set active \{ [array get active] \}"
}

proc ProcessBackupCmd {varname iname} {
    upvar $varname var
    upvar $iname i

    set fn [lindex $var $i]
    if {$fn != {}} {
	FileLast backupfbox $fn
	Backup $fn
    } else {
	Error [msgcat::mc {Unable to open file}]
    }
}

proc ProcessRestoreCmd {varname iname} {
    upvar $varname var
    upvar $iname i

    set fn [lindex $var $i]
    if {$fn != {}} {
	FileLast backupfbox $fn
	Restore $fn
    } else {
	Error [msgcat::mc {Unable to open file}]
    }
}
