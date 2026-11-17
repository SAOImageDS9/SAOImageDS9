#  Copyright (C) 1999-2021
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

# HiPS (IVOA Hierarchical Progressive Surveys). A local HiPS is loaded
# into a frame as the HEALPix map it holds at one order (fitsy FitsHiPS),
# so every HEALPix projection option works. The name is the HiPS root
# directory, optionally followed by options in brackets:
#   /data/Fermi/HiPS[order=3,proj=MOL,lon0=180]
# See TODO_HIPS.md.

proc ImportHiPSFile {fn} {
    global loadParam
    global ds9

    global hipsnet

    # an ID (CDS/P/DSS2/color) is the HiPS at the URL the MocServer
    # gives for it, and is loaded (and recorded) as that URL
    if {[HiPSIsID $fn]} {
	set url [HiPSResolveName $fn]
	HiPSClearErrorInfo
	if {$url == {}} {
	    Error "[msgcat::mc {Unable to load}] HiPS $fn: $hipsnet(error)"
	    return 0
	}
	set fn $url
    }

    # a remote HiPS is fetched into the cache first; file,name keeps the
    # URL (what xpaget hips, Open Recent and backups record), file,fn is
    # what the reader reads
    set local {}
    if {[HiPSIsURL $fn]} {
	set local [HiPSFetch $fn]
	if {$local == {}} {
	    Error "[msgcat::mc {Unable to load}] HiPS $fn: $hipsnet(error)"
	    return 0
	}
    } elseif {[HiPSFileURL $fn] != $fn} {
	set fn [HiPSFileURL $fn]
    }

    set loadParam(file,type) hips
    set loadParam(file,mode) {}
    set loadParam(load,type) hips
    set loadParam(file,name) $fn
    set loadParam(file,fn) $local
    set loadParam(load,layer) {}
    set loadParam(hips,colour) 0
    set loadParam(hips,channel) {}

    # a colour HiPS goes to an RGB frame, one map per channel; anything
    # else to a plain frame
    set colour [HiPSIsColour [expr {$local != {} ? $local : $fn}]]
    HiPSPickFrame $colour

    # ProcessLoad's own error would replace the reader's reason (left in
    # ds9(msg) by internalError), so report both here
    set ds9(msg) {}
    if {$colour} {
	set ok [HiPSLoadColour]
    } else {
	set ok [ProcessLoad 0]
    }
    if {$ok} {
	global hipscube
	if {![info exists hipscube(reloading)] || !$hipscube(reloading)} {
	    HiPSApplyCut $fn
	    RecentAdd hips $fn
	}
	return 1
    }
    regsub {^HiPS: } $ds9(msg) {} why
    set ds9(msg) {}
    if {$why != {}} {
	Error "[msgcat::mc {Unable to load}] HiPS $fn: $why"
    } else {
	Error "[msgcat::mc {Unable to load}] HiPS $fn"
    }
    return 0
}

# The scale limits a HiPS suggests: for FITS tiles the survey's display
# range, hips_pixel_cut (physical values, as the map holds); for PNG/JPEG
# tiles 0-255, the creator's own stretch (the values are display levels,
# so the cut doesn't apply, and limits left from another image would be
# meaningless). They become the frame's user scale limits, on every
# channel of an RGB frame, unless turned off in Preferences > HEALPix.
# A later scale command (or a backup's saved scale) still wins, as it
# comes after the load.
proc HiPSApplyCut {fn} {
    global phpxopen
    global scale
    global current

    if {!$phpxopen(hipscut)} {
	return
    }
    if {[catch {HiPSReadProperties [HiPSRoot [HiPSLocalName $fn]]} props]} {
	return
    }
    if {[HiPSTileExt $props [HiPSOptions $fn]] == {fits}} {
	set cut [HiPSProp $props hips_pixel_cut]
	if {[llength $cut] != 2} {
	    return
	}
	lassign $cut lo hi
	if {![string is double -strict $lo] || \
		![string is double -strict $hi] || $lo >= $hi} {
	    return
	}
    } else {
	set lo 0
	set hi 255
    }

    set scale(min) $lo
    set scale(max) $hi
    set which $current(frame)
    if {$which != {} && [$which get type] == {rgb}} {
	set save [$which get rgb channel]
	foreach cc {red green blue} {
	    $which rgb channel $cc
	    ChangeScaleLimit
	}
	$which rgb channel $save
	ChangeScaleLimit
    } else {
	ChangeScaleLimit
    }
}

# The root directory of a HiPS name (without its [options])
proc HiPSRoot {fn} {
    set id [string first "\[" $fn]
    if {$id > 0} {
	return [string range $fn 0 [expr $id-1]]
    }
    return $fn
}

# Is the HiPS named fn (local root or cache, with options) a colour
# HiPS that will be read from colour tiles: dataproduct_subtype color,
# and png/jpg tiles (a FITS HiPS is read as data)?
proc HiPSIsColour {fn} {
    if {[catch {HiPSReadProperties [HiPSRoot $fn]} props]} {
	return 0
    }
    if {[lsearch -exact [string tolower \
			    [HiPSProp $props dataproduct_subtype]] color] < 0} {
	return 0
    }
    return [expr {[HiPSTileExt $props [HiPSOptions $fn]] in {png jpg}}]
}

# Make the current frame one a HiPS can load into: an RGB frame for a
# colour HiPS, else a plain (or 3D) one; a new frame if it isn't
proc HiPSPickFrame {colour} {
    global current

    if {$current(frame) == {}} {
	if {$colour} {
	    CreateRGBFrame
	} else {
	    CreateFrame
	}
	return
    }
    set type [$current(frame) get type]
    if {$colour} {
	if {$type != {rgb}} {
	    CreateRGBFrame
	}
    } else {
	if {$type != {base} && $type != {3d}} {
	    CreateFrame
	}
    }
}

# Load the colour HiPS in loadParam into the current RGB frame: the red,
# green and blue levels of its tiles into the matching channels
proc HiPSLoadColour {} {
    global current
    global loadParam

    set which $current(frame)
    set save [$which get rgb channel]
    # all three channels are replaced: clear them first, so the first
    # new channel isn't aligned (WCS) to the old images of the others
    if {[$which has fits]} {
	$which clear
    }
    # ProcessLoad clears loadParam when it is done
    set params [array get loadParam]
    set ok 1
    foreach cc {red green blue} nn {0 1 2} {
	$which rgb channel $cc
	array set loadParam $params
	set loadParam(hips,colour) 1
	set loadParam(hips,channel) $nn
	if {![ProcessLoad 0]} {
	    set ok 0
	    break
	}
    }
    $which rgb channel $save
    return $ok
}

# HiPS cubes (dataproduct_type cube, HiPS 1.0 sec. 4.2.3). The reader
# builds one frame of the cube at a time (slice=, default
# hips_cube_firstframe). ds9's Cube dialog drives it: cube.tcl asks its
# frame questions through CubeFrame, which a HiPS cube frame answers from
# its properties (HiPSCubeAnswer), and a new slice reloads the HiPS at
# that frame, keeping the view (HiPSSetSlice).

# The HiPS cube in frame which, as a dict (depth, slice 0-based, crpix,
# crval, cdelt, unit; crval {} if there is no third-axis WCS), or {}
proc HiPSCubeState {which} {
    if {$which == {} || ![llength [info commands $which]]} {
	return {}
    }
    set fn [HiPSFrameName $which]
    if {$fn == {}} {
	return {}
    }
    if {[catch {HiPSReadProperties [HiPSRoot [HiPSLocalName $fn]]} props]} {
	return {}
    }
    if {![string match cube* [HiPSProp $props dataproduct_type image]]} {
	return {}
    }
    set depth [HiPSProp $props hips_cube_depth 1]
    set slice [string trim [$which get fits header keyword HIPSSLIC]]
    if {![string is integer -strict $depth] ||
	![string is integer -strict $slice]} {
	return {}
    }
    set crpix [HiPSProp $props data_cube_crpix3 1]
    set crval [HiPSProp $props data_cube_crval3]
    set cdelt [HiPSProp $props data_cube_cdelt3]
    if {![string is double -strict $crval] ||
	![string is double -strict $cdelt] || $cdelt == 0} {
	set crval {}
	set cdelt {}
    }
    if {![string is double -strict $crpix]} {
	set crpix 1
    }
    return [dict create depth $depth slice $slice crpix $crpix \
		crval $crval cdelt $cdelt \
		unit [HiPSCubeUnit $props]]
}

# data_cube_bunit3, or {} (some surveys write "null" for no unit)
proc HiPSCubeUnit {props} {
    set uu [string trim [HiPSProp $props data_cube_bunit3]]
    if {[string equal -nocase $uu null]} {
	return {}
    }
    return $uu
}

# the third-axis value of image slice ss (1-based)
proc HiPSCubeValue {st ss} {
    if {[dict get $st crval] == {}} {
	return $ss
    }
    return [expr {[dict get $st crval] +
		  ($ss - [dict get $st crpix])*[dict get $st cdelt]}]
}

# A frame command, as the Cube dialog sends it, answered for a HiPS cube
# (axis 2 is the cube's; image slices are 1-based)
proc HiPSCubeAnswer {which st args} {
    set depth [dict get $st depth]
    set cur [expr {[dict get $st slice] + 1}]
    set hasw [expr {[dict get $st crval] != {}}]
    switch -glob -- $args {
	{has fits cube} {return 1}
	{has wcs 3d *} {return [expr {[lindex $args 3] == {image} || $hasw}]}
	{get fits naxes} {return 3}
	{get fits depth} -
	{get fits depth 2} {return $depth}
	{get fits depth *} {return 1}
	{get fits slice} -
	{get fits slice 2} {return $cur}
	{get fits slice from image *} {
	    # get fits slice from image <sys>, or ... image <slice> <sys>
	    if {[llength $args] == 6} {
		set ss $cur
		set sys [lindex $args 5]
	    } else {
		set ss [lindex $args 5]
		set sys [lindex $args 6]
	    }
	    if {$sys == {image}} {
		return $ss
	    }
	    return [HiPSCubeValue $st $ss]
	}
	{get fits slice to image *} {
	    set vv [lindex $args 5]
	    set sys [lindex $args 6]
	    if {$sys == {image} || !$hasw} {
		return [expr {round($vv)}]
	    }
	    return [expr {round(($vv - [dict get $st crval])/
				[dict get $st cdelt] + [dict get $st crpix])}]
	}
	{get fits slice *} {return 1}
	{get crop 3d image} {return [list 1 $depth]}
	{get fits header keyword *} {
	    set key [string trim [lindex $args end] "{}'"]
	    if {[string match CTYPE3* $key]} {
		set uu [dict get $st unit]
		return [expr {$uu != {} ? $uu : {HiPS frame}}]
	    }
	    return [$which {*}$args]
	}
	{update fits slice *} {
	    # update fits slice <axis> <slice>, or <value> <sys>
	    set aa [lindex $args 3]
	    set bb [lindex $args 4]
	    if {$bb == {}} {
		set ss $aa
	    } elseif {[string is integer -strict $aa] && $aa >= 2 && $aa <= 9 &&
		      [string is integer -strict $bb]} {
		if {$aa != 2} {
		    return
		}
		set ss $bb
	    } else {
		set ss [HiPSCubeAnswer $which $st get fits slice to image $aa $bb]
	    }
	    set ss [expr {round($ss)}]
	    if {$ss < 1} {
		set ss 1
	    } elseif {$ss > $depth} {
		set ss $depth
	    }
	    HiPSSetSlice $which [expr {$ss - 1}]
	    return
	}
	default {return [$which {*}$args]}
    }
}

# name with option key=value set (added, or replacing an earlier one)
proc HiPSWithOption {fn key value} {
    set root [HiPSRoot $fn]
    set opts {}
    foreach kv [split [string trim [string range $fn [string length $root] end] {[]}] ,] {
	if {$kv == {}} {
	    continue
	}
	if {[string tolower [string trim [lindex [split $kv =] 0]]] == $key} {
	    continue
	}
	lappend opts $kv
    }
    lappend opts "$key=$value"
    return "$root\[[join $opts ,]\]"
}

# Show frame f (0-based) of the HiPS cube in frame which: reload it there
# (the suggested cut and Open Recent are left alone), keeping the zoom and
# the sky position at the centre
proc HiPSSetSlice {which f} {
    global current
    global hipscube

    set st [HiPSCubeState $which]
    if {$st == {} || [dict get $st slice] == $f} {
	return
    }
    set fn [HiPSWithOption [HiPSFrameName $which] slice $f]

    # a deep window's pixel is finer than the reloaded coarse window's:
    # keep the on-screen scale (zoom per window pixel), which also takes
    # the new frame deep again
    set zoom [$which get zoom]
    set pix0 [HiPSWindowPixel $which]
    set pan [$which get cursor wcs icrs degrees]
    set save $current(frame)
    if {$which != $current(frame)} {
	set current(frame) $which
    }

    set hipscube(reloading) 1
    set ok [ImportHiPSFile $fn]
    set hipscube(reloading) 0
    if {$ok} {
	set pix1 [HiPSWindowPixel $which]
	if {$pix0 > 0 && $pix1 > 0 && abs($pix1/$pix0-1) > 1e-9} {
	    set zz {}
	    foreach z $zoom {
		lappend zz [expr {$z*$pix1/$pix0}]
	    }
	    set zoom $zz
	}
	ZoomTo {*}$zoom
	if {[llength $pan] == 2} {
	    PanToFrame $which {*}$pan wcs icrs
	}
    }
    set current(frame) $save
    UpdateCubeMotionDialog
}

# the size of frame which's window pixel (deg), or 0
proc HiPSWindowPixel {which} {
    if {[catch {expr {abs([$which get fits header keyword CDELT2])}} pix]} {
	return 0
    }
    return $pix
}

# the HiPS name (root directory plus options) loaded in frame which, or
# {} if it doesn't hold a HiPS. ProcessLoad saves each frame's load
# parameters in a global array named after the frame.
proc HiPSFrameName {which} {
    if {$which == {} || ![$which has fits]} {
	return {}
    }
    # an RGB frame keeps each channel's load parameters; a colour HiPS
    # is in all three
    if {[$which get type] == {rgb}} {
	upvar #0 ${which}[$which get rgb channel] var
    } else {
	upvar #0 $which var
    }
    if {![info exists var(file,type)] || $var(file,type) != {hips}} {
	return {}
    }
    return $var(file,name)
}

# backup/restore: a backup names the HiPS (root plus options) and never
# copies it. If the directory has gone, ask for its new place. coverage
# is which aux contour is the coverage overlay ({} if none); the contour
# itself comes back with the frame's other aux contours, in order.
proc HiPSRestore {fn {coverage {}}} {
    set id [string first "\[" $fn]
    if {$id > 0} {
	set dir [string range $fn 0 [expr $id-1]]
	set ext [string range $fn $id end]
    } else {
	set dir $fn
	set ext {}
    }

    # a remote HiPS is fetched again (from the cache when it can be)
    if {![HiPSIsURL $dir] && ![file isdirectory $dir]} {
	Error "[msgcat::mc {Unable to load}] HiPS $dir"
	set dir [tk_chooseDirectory -mustexist 1 \
		     -title [msgcat::mc {Find HiPS directory}]]
	if {$dir == {}} {
	    Error [msgcat::mc {An error has occurred during restore}]
	    return 0
	}
    }
    if {![ImportHiPSFile "$dir$ext"]} {
	return 0
    }
    if {$coverage != {}} {
	global current
	upvar #0 $current(frame) var
	set var(hips,coverage) $coverage
    }
    return 1
}

# Coverage overlay. A HiPS's Moc.fits (HiPS 1.0 sec. 4.4.2) says where
# the survey has data. It is drawn as the edge of the coverage: the MOC
# is loaded into a scratch frame as a plate carree HEALPix image (capped
# at order hipscov(order) with order=, so a deep MOC stays small; every
# CAR pixel is sky, unlike the HPX layout's gaps), contoured at 0.5,
# and the contour is pasted into the HiPS frame through sky coordinates
# as an aux contour. That works whatever the MOC's and the survey's
# frames and the projection, and the HEALPix windows already carry aux
# contours through recentring. The frame's saved load parameters keep
# which aux contour it is (hips,coverage), so turning it off removes
# only that one.
proc HiPSCoverage {which on} {
    upvar #0 $which var

    if {$on} {
	if {[info exists var(hips,coverage)]} {
	    return 1
	}
	return [HiPSCoverageShow $which]
    } else {
	HiPSCoverageHide $which
	return 1
    }
}

proc HiPSCoverageShown {which} {
    upvar #0 $which var

    if {$which == {} || [HiPSFrameName $which] == {}} {
	return 0
    }
    return [info exists var(hips,coverage)]
}

proc HiPSCoverageShow {which} {
    global ds9
    global current
    global loadParam
    global hipscov
    upvar #0 $which var

    set fn [HiPSFrameName $which]
    if {$fn == {}} {
	Error [msgcat::mc {HiPS coverage: the current frame does not hold a HiPS}]
	return 0
    }
    set moc [file join [HiPSRoot [HiPSLocalName $fn]] Moc.fits]
    if {![file isfile $moc] && [HiPSIsURL $fn]} {
	set url [string trimright [HiPSRoot $fn] /]
	set tmp [HiPSTemp $moc]
	if {[HiPSGet $url/Moc.fits $tmp] == 200} {
	    HiPSKeep $tmp $moc
	} else {
	    catch {file delete -force $tmp}
	}
    }
    if {![file isfile $moc]} {
	Error "[msgcat::mc {HiPS coverage: no MOC}] ($moc)"
	return 0
    }

    # contour the MOC in a scratch frame; loadParam is the caller's
    # and leave the frame numbering as it was
    set save [array get loadParam]
    set seq $ds9(seq)
    CreateFrame
    set mf $current(frame)
    array set loadParam [list file,type fits file,mode {} \
			     load,type mmapincr load,layer {} \
			     file,name "$moc\[order=$hipscov(order),proj=car\]"]
    set cc {}
    set loaded [ProcessLoad 0]
    if {$loaded} {
	$mf contour create $hipscov(color) $hipscov(width) 0 block 1 1 \
	    linear 1000 minmax local 0 1 "\"0.5\""
	set cc [$mf get contour wcs fk5]
    }
    DeleteSingleFrame $mf
    set ds9(seq) $seq
    array set loadParam $save
    GotoFrame $which

    # a vertex off the sky (the CAR image's edge) breaks the line there;
    # pieces of fewer than 2 points are dropped
    set out {}
    set npts 0
    set piece {}
    foreach line [split $cc \n] {
	if {[regexp {^\s*[-0-9.eE+]+\s+[-0-9.eE+]+\s*$} $line]} {
	    lappend piece $line
	    continue
	}
	# anything else ends the piece: nan, (, ), level=, ...
	if {[llength $piece] >= 2} {
	    lappend out "(" {*}$piece ")"
	    incr npts [llength $piece]
	}
	set piece {}
	if {![string match {*nan*} $line] && $line != "(" && $line != ")"} {
	    lappend out $line
	}
    }
    if {!$loaded} {
	Error "[msgcat::mc {HiPS coverage: unable to read}] $moc"
	return 0
    }
    # a MOC covering the whole sky has no edge: nothing to draw
    if {!$npts} {
	set var(hips,coverage) all
	return 1
    }
    set cc [join $out \n]

    set var(hips,coverage) [$which get contour aux count]
    $which contour paste cc $hipscov(color) $hipscov(width) 0 0 0
    UpdateContourDialog
    return 1
}

proc HiPSCoverageHide {which} {
    upvar #0 $which var

    if {![info exists var(hips,coverage)]} {
	return
    }
    set nn $var(hips,coverage)
    unset var(hips,coverage)
    if {[string is integer -strict $nn] && \
	    [llength [info commands $which]] && \
	    $nn < [$which get contour aux count]} {
	$which contour delete aux $nn
	UpdateContourDialog
    }
}

# Analysis > HiPS Coverage
proc HiPSCoverageMenu {} {
    global current
    global hipscov

    HiPSCoverage $current(frame) $hipscov(view)
    UpdateHiPSCoverageMenu
    if {$hipscov(view) && \
	    [HiPSCoverageWhole $current(frame)]} {
	Info [msgcat::mc {HiPS coverage: the MOC covers the whole sky}]
    }
}

# the coverage is shown, and is the whole sky (nothing drawn)
proc HiPSCoverageWhole {which} {
    upvar #0 $which var

    return [expr {[HiPSCoverageShown $which] && $var(hips,coverage) == {all}}]
}

proc UpdateHiPSCoverageMenu {} {
    global ds9
    global current
    global hipscov

    set hipscov(view) [HiPSCoverageShown $current(frame)]
    set state disabled
    if {$current(frame) != {}} {
	set fn [HiPSFrameName $current(frame)]
	# a remote HiPS's Moc.fits is fetched when asked for
	if {$fn != {} && ([HiPSIsURL $fn] || [file isfile \
		[file join [HiPSRoot [HiPSLocalName $fn]] Moc.fits]])} {
	    set state normal
	}
    }
    catch {$ds9(mb).analysis entryconfig [msgcat::mc {HiPS Coverage}] \
	       -state $state}
}

proc HiPSCoverageCmd {on} {
    global current

    if {$current(frame) == {}} {
	return
    }
    HiPSCoverage $current(frame) $on
    UpdateHiPSCoverageMenu
}

# hips cancel: stop fetching a deep window's tiles, and a load's
proc HiPSCancelCmd {} {
    global hipsnet

    if {$hipsnet(busy)} {
	HiPSCancel
    }
    HiPSDeepCancel
}

# hips close: clear the current frame, if it holds a HiPS
proc HiPSCloseCmd {} {
    global current

    if {[HiPSFrameName $current(frame)] == {}} {
	return
    }
    HiPSDeepDrop $current(frame)
    HiPSDeepStatus
    ClearCurrentFrame
}

proc ProcessHiPSCmd {varname iname} {
    upvar $varname var
    upvar $iname i

    hips::YY_FLUSH_BUFFER
    hips::yy_scan_string [lrange $var $i end]
    hips::yyparse
    incr i [expr $hips::yycnt-1]
}

proc HiPSCmdLoad {fn} {
    ImportHiPSFile $fn
    FinishLoad
}

proc ProcessSendHiPSCmd {proc id param {sock {}} {fn {}}} {
    global current

    switch -- [string tolower [lindex $param 0]] {
	coverage {
	    $proc $id [ToYesNo [HiPSCoverageShown $current(frame)]]
	}
	status {$proc $id "[HiPSDeepPending]\n"}
	list {
	    # many lines: SAMP sends them as a file
	    ProcessSend $proc $id $sock $fn {.txt} \
		[HiPSListText {*}[lrange $param 1 end]]
	}
	default {$proc $id "[HiPSFrameName $current(frame)]\n"}
    }
}

# File > Open HiPS...
# Choose a HiPS root directory, then the order and projection. The
# order list mirrors the reader's choice (fitsy/hips.C): order K reads
# its Allsky.fits if that holds full-size tiles, else its tiles, else a
# reduced Allsky; without order=, the largest map up to nside 2048
# (HIPS_NSIDE_AUTO), the Allsky winning ties; nothing above nside 8192
# (HIPS_NSIDE_MAX).

proc HiPSOpenDef {} {
    global hipsopen
    global hipscov

    # coverage overlay: the Analysis menu's checkbutton (current frame),
    # its line, and the deepest MOC order drawn
    set hipscov(view) 0
    set hipscov(color) cyan
    set hipscov(width) 1
    set hipscov(order) 9

    set hipsopen(nside,auto) 2048
    set hipsopen(nside,max) 8192

    # the last directory and projection chosen, for the rest of the
    # session. The centre and fov are not kept: each survey has its own
    # frame and initial view.
    set hipsopen(dir) {}
    set hipsopen(url) {}
    set hipsopen(proj) hpx
}

# The survey's initial view, hips_initial_ra/dec/fov, in its own frame:
# a dict of lon lat (both {} unless given) and fov ({} unless given).
# hips_initial_ra/dec are ICRS; this rotates them into hips_frame
# exactly as FitsHiPS::initialView (fitsy/hips.C) does.
proc HiPSInitialView {props} {
    set rr [dict create lon {} lat {} fov {}]

    set fov [HiPSProp $props hips_initial_fov]
    if {[string is double -strict $fov] && $fov > 0} {
	dict set rr fov $fov
    }

    set ra [HiPSProp $props hips_initial_ra]
    set dec [HiPSProp $props hips_initial_dec]
    if {![string is double -strict $ra] || ![string is double -strict $dec]
	|| $dec < -90 || $dec > 90} {
	return $rr
    }

    set d2r [expr {acos(-1)/180}]
    set aa [expr {$ra*$d2r}]
    set dd [expr {$dec*$d2r}]
    set vv [list [expr {cos($dd)*cos($aa)}] [expr {cos($dd)*sin($aa)}] \
		[expr {sin($dd)}]]
    switch -- [HiPSProp $props hips_frame equatorial] {
	galactic {
	    # Hipparcos ICRS -> galactic
	    set mm {
		{-0.0548755604162154 -0.8734370902348850 -0.4838350155487132}
		{ 0.4941094278755837 -0.4448296299600112  0.7469822444972189}
		{-0.8676661490190047 -0.1980763734312015  0.4559837761750669}
	    }
	}
	ecliptic {
	    # mean obliquity of J2000, IAU 2006
	    set ee [expr {84381.406/3600*$d2r}]
	    set mm [list {1 0 0} \
			[list 0 [expr {cos($ee)}] [expr {sin($ee)}]] \
			[list 0 [expr {-sin($ee)}] [expr {cos($ee)}]]]
	}
	default {set mm {{1 0 0} {0 1 0} {0 0 1}}}
    }
    set ww {}
    foreach row $mm {
	lassign $row m0 m1 m2
	lappend ww [expr {$m0*[lindex $vv 0]+$m1*[lindex $vv 1]+$m2*[lindex $vv 2]}]
    }
    lassign $ww x y z
    set lon [expr {atan2($y,$x)/$d2r}]
    if {$lon < 0} {
	set lon [expr {$lon+360}]
    }
    set z [expr {$z>1 ? 1 : ($z<-1 ? -1 : $z)}]
    dict set rr lon $lon
    dict set rr lat [expr {asin($z)/$d2r}]
    return $rr
}

# A number for the dialog's fields: 6 decimals, no trailing zeros
proc HiPSOpenFmt {vv} {
    if {$vv == {}} {
	return {}
    }
    return [HPXOpenNum [format %.6f $vv]]
}

# What the reader will use for a zenithal window that has no lon0, lat0
# or fov (FitsHiPS::initialView): a dict of lon0 lat0 fov, as the
# dialog's fields would show them
proc HiPSOpenViewDefaults {proj} {
    global hpxed

    set pi [HPXOpenProjInfo $proj]
    set view $hpxed(view)
    if {[dict get $view lat] != {}} {
	set lon0 [dict get $view lon]
	set lat0 [dict get $view lat]
    } else {
	set lon0 0
	set lat0 [lindex $pi 3]
    }
    set fov [dict get $view fov]
    if {$fov == {}} {
	set fov [lindex $pi 4]
    } elseif {$fov > [lindex $pi 5]} {
	set fov [lindex $pi 5]
    }
    return [dict create lon0 [HiPSOpenFmt $lon0] lat0 [HiPSOpenFmt $lat0] \
		fov [HiPSOpenFmt $fov]]
}

# The projection changed. Moving to a zenithal window from another kind
# starts it at the survey's initial view; between zenithal projections
# the centre is kept and the fov kept within the new one's limit.
proc HiPSOpenProjChanged {} {
    global hpxed

    set oldkind [HPXOpenProjKind $hpxed(oldproj)]
    HPXOpenProjChanged
    set pi [HPXOpenProjInfo $hpxed(proj)]
    if {[lindex $pi 1] != {zenithal}} {
	return
    }
    if {$oldkind != {zenithal}} {
	set dd [HiPSOpenViewDefaults $hpxed(proj)]
	foreach key {lon0 lat0 fov} {
	    set hpxed($key) [dict get $dd $key]
	}
    } else {
	set fov [string trim $hpxed(fov)]
	if {[string is double -strict $fov] && $fov > [lindex $pi 5]} {
	    set hpxed(fov) [lindex $pi 5]
	}
    }
}

# The projection options for the dialog's values. A zenithal window
# writes lon0/lat0 (both, so the reader keeps them) and fov only when
# they differ from what the reader would use without them.
proc HiPSOpenProjOptions {vals} {
    set proj [dict get $vals proj]
    if {[HPXOpenProjKind $proj] != {zenithal}} {
	return [HPXOpenProjOptions $vals]
    }

    set opts [list "proj=$proj"]
    set dd [HiPSOpenViewDefaults $proj]
    set lon0 [HiPSOpenFmt [dict get $vals lon0]]
    set lat0 [HiPSOpenFmt [dict get $vals lat0]]
    if {$lon0 == {}} {
	set lon0 [dict get $dd lon0]
    }
    if {$lat0 == {}} {
	set lat0 [dict get $dd lat0]
    }
    if {$lon0 != [dict get $dd lon0] || $lat0 != [dict get $dd lat0]} {
	lappend opts "lon0=$lon0" "lat0=$lat0"
    }
    set fov [HiPSOpenFmt [dict get $vals fov]]
    if {$fov != {} && $fov != [dict get $dd fov]} {
	lappend opts "fov=$fov"
    }
    return $opts
}

# File > Open HiPS URL...: a remote HiPS, by URL or by ID. Its
# properties are fetched (into the cache) for the dialog; the load
# fetches what the chosen order needs (hipsnet.tcl).
proc OpenHiPSURLDialog {} {
    global hipsopen
    global hipsnet

    set url $hipsopen(url)
    if {![EntryDialog [msgcat::mc {Open HiPS URL}] \
	      [msgcat::mc {HiPS URL (the directory holding properties) or ID}] \
	      60 url]} {
	return
    }
    set url [string trimright [string trim $url] /]
    if {$url == {}} {
	return
    }
    set hipsopen(url) $url

    if {[HiPSIsID $url]} {
	set id [HiPSIDOf $url]
	set url [HiPSResolveID $id]
	HiPSClearErrorInfo
	if {$url == {}} {
	    Error "[msgcat::mc {Unable to load}] HiPS $id: $hipsnet(error)"
	    return
	}
    }
    HiPSOpenURL $url
}

# The Open HiPS dialog for a HiPS URL (file:// is a local HiPS), then
# the load
proc HiPSOpenURL {url} {
    global hipsnet

    if {![HiPSIsURL $url]} {
	set dir [HiPSFileURL $url]
	set fn [HiPSOpenParamsDialog $dir]
    } else {
	set dir [HiPSCacheDir $url]
	if {[HiPSFetchProperties $url $dir] == {}} {
	    HiPSClearErrorInfo
	    Error "[msgcat::mc {Unable to load}] HiPS $url: $hipsnet(error)"
	    return
	}
	HiPSClearErrorInfo
	set fn [HiPSOpenParamsDialog $dir $url]
    }
    if {$fn == {}} {
	return
    }
    HiPSCmdLoad $fn
}

# File > Open HiPS from List...: the image and cube HiPS the MocServer
# lists (hipsnet.tcl), filtered by ID or title as you type; the one
# chosen goes on to the Open HiPS dialog.
proc OpenHiPSListDialog {} {
    global hipslist
    global hipsnet

    set w {.hipslist}
    if {[winfo exists $w]} {
	raise $w
	return
    }

    set recs [HiPSListRecords]
    HiPSClearErrorInfo
    if {$recs == {}} {
	Error "[msgcat::mc {Unable to list HiPS}]: $hipsnet(error)"
	return
    }
    set hipslist(recs) $recs
    set hipslist(ok) 0
    if {![info exists hipslist(filter)]} {
	set hipslist(filter) {}
    }

    DialogCreate $w [msgcat::mc {Open HiPS from List}] hipslist(ok)

    set f [ttk::frame $w.filter]
    ttk::label $f.tfilter -text [msgcat::mc {Filter}]
    ttk::entry $f.filter -textvariable hipslist(filter) -width 40
    ttk::label $f.count -textvariable hipslist(count)
    pack $f.tfilter -side left -padx 2
    pack $f.filter -side left -padx 2 -fill x -expand true
    pack $f.count -side left -padx 4

    set f [ttk::frame $w.list]
    set hipslist(tree) $f.tree
    ttk::treeview $f.tree -columns {id title type} -show headings \
	-selectmode browse -height 20 -yscrollcommand [list $f.yscroll set]
    ttk::scrollbar $f.yscroll -orient vertical -command [list $f.tree yview]
    $f.tree heading id -text [msgcat::mc {ID}] -anchor w
    $f.tree heading title -text [msgcat::mc {Title}] -anchor w
    $f.tree heading type -text [msgcat::mc {Type}] -anchor w
    $f.tree column id -width 260 -stretch 0
    $f.tree column title -width 380
    $f.tree column type -width 60 -stretch 0
    grid $f.tree $f.yscroll -sticky news
    grid rowconfigure $f 0 -weight 1
    grid columnconfigure $f 0 -weight 1

    set f [ttk::frame $w.buttons]
    ttk::button $f.ok -text [msgcat::mc {Open}] -command HiPSListOK \
	-default active
    ttk::button $f.update -text [msgcat::mc {Update List}] \
	-command HiPSListUpdate
    ttk::button $f.cancel -text [msgcat::mc {Cancel}] \
	-command {set hipslist(ok) 0}
    pack $f.ok $f.update $f.cancel -side left -expand true -padx 2 -pady 4

    ttk::separator $w.sep -orient horizontal
    pack $w.buttons $w.sep -side bottom -fill x
    pack $w.filter -side top -fill x -padx 2 -pady 2
    pack $w.list -side top -fill both -expand true -padx 2 -pady 2

    bind $w.filter.filter <KeyRelease> HiPSListFill
    bind $hipslist(tree) <Double-1> HiPSListOK
    bind $w <Return> HiPSListOK

    HiPSListFill
    DialogWait $w hipslist(ok) $w.filter.filter

    set id {}
    if {$hipslist(ok)} {
	set id [lindex [$hipslist(tree) selection] 0]
    }
    destroy $w
    unset -nocomplain hipslist(recs) hipslist(tree)
    if {$id == {}} {
	return
    }

    set url [HiPSResolveID $id]
    HiPSClearErrorInfo
    if {$url == {}} {
	Error "[msgcat::mc {Unable to load}] HiPS $id: $hipsnet(error)"
	return
    }
    HiPSOpenURL $url
}

# the list, as filtered; the selection kept if still shown, else the first
proc HiPSListFill {} {
    global hipslist

    set tree $hipslist(tree)
    set sel [lindex [$tree selection] 0]
    $tree delete [$tree children {}]
    set recs [HiPSListMatch $hipslist(recs) $hipslist(filter)]
    foreach rec $recs {
	set id [HiPSProp $rec ID]
	# an ID is unique in the registry; the item's id
	if {[$tree exists $id]} {
	    continue
	}
	$tree insert {} end -id $id -values [list $id \
	    [HiPSProp $rec obs_title] [HiPSProp $rec dataproduct_type]]
    }
    set hipslist(count) "[llength [$tree children {}]] / [llength $hipslist(recs)]"
    if {$sel == {} || ![$tree exists $sel]} {
	set sel [lindex [$tree children {}] 0]
    }
    if {$sel != {}} {
	$tree selection set $sel
	$tree see $sel
    }
}

proc HiPSListUpdate {} {
    global hipslist
    global hipsnet

    set recs [HiPSListRecords 1]
    HiPSClearErrorInfo
    if {$recs == {}} {
	Error "[msgcat::mc {Unable to list HiPS}]: $hipsnet(error)"
	return
    }
    set hipslist(recs) $recs
    HiPSListFill
}

proc HiPSListOK {} {
    global hipslist

    if {[$hipslist(tree) selection] != {}} {
	set hipslist(ok) 1
    }
}

proc OpenHiPSDialog {} {
    global current
    global hipsopen

    set opts [list -mustexist 1 -title [msgcat::mc {Open HiPS}]]
    if {$hipsopen(dir) != {} && [file isdirectory $hipsopen(dir)]} {
	lappend opts -initialdir $hipsopen(dir)
    }
    set dir [tk_chooseDirectory {*}$opts]
    if {$dir == {}} {
	return
    }
    set dir [file normalize $dir]
    # also accept a directory one level inside the HiPS (e.g. Norder3)
    if {![file isfile [file join $dir properties]] && \
	    [file isfile [file join [file dirname $dir] properties]]} {
	set dir [file dirname $dir]
    }
    set hipsopen(dir) [file dirname $dir]

    set fn [HiPSOpenParamsDialog $dir]
    if {$fn == {}} {
	return
    }

    # ImportHiPSFile picks the frame (RGB for a colour HiPS)
    HiPSCmdLoad $fn
}

# The properties file as a dict, the first of repeated keys winning.
# Throws if it can't be read.
proc HiPSReadProperties {dir} {
    set ch [open [file join $dir properties] r]
    set props {}
    while {[gets $ch line] >= 0} {
	set line [string trim $line]
	if {$line == {} || [string index $line 0] == "#"} {
	    continue
	}
	set id [string first = $line]
	if {$id < 1} {
	    continue
	}
	set key [string trim [string range $line 0 [expr $id-1]]]
	set val [string trim [string range $line [expr $id+1] end]]
	if {![dict exists $props $key]} {
	    dict set props $key $val
	}
    }
    close $ch
    return $props
}

proc HiPSProp {props key {default {}}} {
    if {[dict exists $props $key] && [dict get $props $key] != {}} {
	return [dict get $props $key]
    }
    return $default
}

# The tile files a HiPS is read from: those format= in opts (a dict,
# HiPSOptions) asks for (fits, png, jpeg or jpg), else fits (physical
# values) when listed in hips_tile_format, else png, else jpg (display
# values); {} if not listed (or format= is none of those). FitsHiPS
# (fitsy/hips.C) picks the same.
proc HiPSTileExt {props {opts {}}} {
    set formats [string tolower [HiPSProp $props hips_tile_format fits]]
    set words {fits fits png png jpeg jpg jpg jpg}
    if {[dict exists $opts format]} {
	set want [string tolower [dict get $opts format]]
	if {$want == {jpeg}} {
	    set want jpg
	}
	set only {}
	foreach {word ext} $words {
	    if {$ext == $want} {
		lappend only $word $ext
	    }
	}
	set words $only
    }
    foreach {word ext} $words {
	if {[lsearch -exact $formats $word] >= 0} {
	    return $ext
	}
    }
    return {}
}

# Why HiPSTileExt found nothing, as FitsHiPS says it
proc HiPSTileExtError {props opts} {
    set formats [HiPSProp $props hips_tile_format]
    if {![dict exists $opts format]} {
	return "[msgcat::mc {no FITS, PNG or JPEG tiles, this HiPS has}] $formats"
    }
    set want [string tolower [dict get $opts format]]
    switch -- $want {
	fits {set name FITS}
	png {set name PNG}
	jpg - jpeg {set name JPEG}
	default {return [msgcat::mc {format= is fits, png or jpeg}]}
    }
    return "[msgcat::mc {no}] $name [msgcat::mc {tiles}] (hips_tile_format = $formats)"
}

# An image's size as HiPSFitsInfo gives it (width, height, ok), for any
# tile format; png and jpg are decoded through a Tk photo
proc HiPSImageInfo {fn ext} {
    if {$ext == {fits}} {
	return [HiPSFitsInfo $fn]
    }
    if {[catch {image create photo -file $fn} img]} {
	return {}
    }
    set rr [dict create width [image width $img] height [image height $img] ok 1]
    image delete $img
    return $rr
}

# A FITS file's primary header: a dict of width (NAXIS1), height
# (NAXIS2) and ok (the file holds all the data), or {} if unreadable
proc HiPSFitsInfo {fn} {
    if {[catch {open $fn rb} ch]} {
	return {}
    }
    # the header is at most a few blocks
    set buf [read $ch [expr 2880*8]]
    close $ch

    array set kk {BITPIX 0 NAXIS1 0 NAXIS2 0}
    set end 0
    for {set ii 0} {$ii+80 <= [string length $buf]} {incr ii 80} {
	set card [string range $buf $ii [expr $ii+79]]
	set key [string trim [string range $card 0 7]]
	if {$key == {END}} {
	    set end [expr {($ii/2880+1)*2880}]
	    break
	}
	if {[info exists kk($key)]} {
	    set vv [string trim [lindex [split [string range $card 10 end] /] 0]]
	    if {[string is integer -strict $vv]} {
		set kk($key) $vv
	    }
	}
    }
    if {!$end || !$kk(NAXIS1) || !$kk(NAXIS2)} {
	return {}
    }
    set need [expr {$end + abs($kk(BITPIX))/8*wide($kk(NAXIS1))*$kk(NAXIS2)}]
    return [dict create width $kk(NAXIS1) height $kk(NAXIS2) \
		ok [expr {[file size $fn] >= $need}]]
}

# What each order present in dir can give, as a list of dicts, deepest
# first: order, nside and source (allsky, tiles, reduced, or {} for
# nothing readable) for order=K; tiles (FITS tiles present), total
# (tiles in the sky), allsky (usable Allsky tile width, 0 if none) and
# allskybad (1 if an Allsky is there but can't be used, e.g. truncated)
proc HiPSOpenOrders {dir width {ext fits} {sfx {}}} {
    global hipsopen

    set orders {}
    foreach dd [glob -nocomplain -types d -directory $dir Norder*] {
	set kk [string range [file tail $dd] 6 end]
	if {[string is integer -strict $kk] && $kk >= 0 && $kk <= 29} {
	    lappend orders [scan $kk %d]
	}
    }

    set rr {}
    foreach kk [lsort -integer -decreasing -unique $orders] {
	set od [file join $dir "Norder$kk"]
	set total [expr {12*(wide(1)<<(2*$kk))}]
	# this cube frame's tiles only (NpixN_n; frame 0 has no suffix).
	# An order too deep to load is only checked for any (a local copy
	# of a deep survey may hold millions); tiles is then -1.
	set deep [expr {(wide($width)<<$kk) > $hipsopen(nside,max)}]
	set tiles 0
	foreach dd [glob -nocomplain -types d -directory $od Dir*] {
	    foreach ff [glob -nocomplain -types f -directory $dd Npix*.$ext] {
		if {[regexp "^Npix\\d+$sfx\\.$ext\$" [file tail $ff]]} {
		    incr tiles
		    if {$deep} {
			break
		    }
		}
	    }
	    if {$deep && $tiles} {
		set tiles -1
		break
	    }
	}

	# Allsky tile width: the mosaic is int(sqrt(total)) tiles wide
	# Allsky tile width, as FitsHiPS::allskyWidth: orders 0-3 only,
	# the mosaic int(sqrt(total)) tiles wide, power-of-two tiles that
	# fill it, and the whole file present. Otherwise unused, and an
	# Allsky that is there but fails this is marked bad.
	set aw 0
	set abad 0
	set af [file join $od Allsky$sfx.$ext]
	if {$kk <= 3 && [file isfile $af]} {
	    set ncol [expr {int(sqrt($total))}]
	    set nrow [expr {($total+$ncol-1)/$ncol}]
	    set ai [HiPSImageInfo $af $ext]
	    if {$ai != {} && [dict get $ai ok]} {
		set nx [dict get $ai width]
		set ny [dict get $ai height]
		set ww [expr {$nx/$ncol}]
		if {$ww > 0 && ($ww & ($ww-1)) == 0 && $ww*$ncol == $nx && \
			$ww*$nrow <= $ny} {
		    set aw $ww
		}
	    }
	    set abad [expr {!$aw}]
	}

	if {$aw == $width} {
	    set source allsky
	    set nside [expr {$width<<$kk}]
	} elseif {$tiles != 0} {
	    set source tiles
	    set nside [expr {wide($width)<<$kk}]
	} elseif {$aw > 0} {
	    set source reduced
	    set nside [expr {$aw<<$kk}]
	} else {
	    set source {}
	    set nside 0
	}
	lappend rr [dict create order $kk nside $nside source $source \
			tiles $tiles total $total allsky $aw allskybad $abad]
    }
    return $rr
}

# What the reader picks without order=, as a dict like one of
# HiPSOpenOrders' but with the nside and source of that choice, or {}.
# This follows FitsHiPS::chooseSource (fitsy/hips.C) step for step:
# orders from 0 while the tiles fit nside 2048, the Allsky tried before
# the tiles, ties going to what was found first; then a reduced Allsky
# at order 3 or less may still be the largest that fits.
proc HiPSOpenAutoOrder {orders width maxorder} {
    global hipsopen

    foreach oo $orders {
	set byorder([dict get $oo order]) $oo
    }

    set best 0
    set choice {}
    for {set kk 0} {$kk <= $maxorder} {incr kk} {
	set tn [expr {wide($width)<<$kk}]
	if {$tn > $hipsopen(nside,auto)} {
	    break
	}
	if {![info exists byorder($kk)]} {
	    continue
	}
	set oo $byorder($kk)
	set aw [dict get $oo allsky]
	if {$aw && ($aw<<$kk) > $best} {
	    set best [expr {$aw<<$kk}]
	    set choice [list $kk allsky]
	}
	if {$tn > $best && [dict get $oo tiles] > 0} {
	    set best $tn
	    set choice [list $kk tiles]
	}
    }
    for {set kk 0} {$kk <= $maxorder && $kk <= 3} {incr kk} {
	if {![info exists byorder($kk)]} {
	    continue
	}
	set aw [dict get $byorder($kk) allsky]
	set nn [expr {wide($aw)<<$kk}]
	if {$aw && $nn <= $hipsopen(nside,auto) && $nn > $best} {
	    set best $nn
	    set choice [list $kk allsky]
	}
    }

    if {$choice == {}} {
	return {}
    }
    lassign $choice kk src
    set oo $byorder($kk)
    dict set oo nside $best
    if {$src == {allsky} && [dict get $oo allsky] != $width} {
	set src reduced
    }
    dict set oo source $src
    return $oo
}

# The orders of a remote HiPS, from its properties alone (the tiles
# aren't known until fetched): order, nside, source remote, tiles (about:
# 12*4^K scaled by moc_sky_fraction), total, bytes to fetch (about),
# toobig (more than the fetch limit), deepest first
proc HiPSOpenRemoteOrders {props width ext maxorder} {
    global hipsnet

    set minorder [HiPSProp $props hips_order_min 0]
    if {![string is integer -strict $minorder] || $minorder < 0} {
	set minorder 0
    }
    set frac [HiPSProp $props moc_sky_fraction 1]
    if {![string is double -strict $frac] || $frac <= 0 || $frac > 1} {
	set frac 1
    }
    set bitpix [HiPSProp $props hips_pixel_bitpix -32]
    if {$ext != {fits} || ![string is integer -strict $bitpix] ||
	$bitpix == 0} {
	set bitpix 8
    }
    set rr {}
    for {set kk $maxorder} {$kk >= $minorder} {incr kk -1} {
	set total [expr {12*(wide(1)<<(2*$kk))}]
	set tiles [expr {wide(ceil($total*$frac))}]
	set bytes [expr {$tiles*$width*$width*abs($bitpix)/8}]
	lappend rr [dict create order $kk nside [expr {wide($width)<<$kk}] \
			source remote tiles $tiles total $total bytes $bytes \
			toobig [expr {$bytes > $hipsnet(maxbytes)}] \
			allsky 0 allskybad 0]
    }
    return $rr
}

# "12 MB": the map's memory (4-byte pixels)
proc HiPSOpenSize {nside} {
    set mb [expr {12.0*$nside*$nside*4/1024/1024}]
    if {$mb < 10} {
	return "[format %.1f $mb] MB"
    }
    return "[format %.0f $mb] MB"
}

# One line about an order: "Order 3: nside 512, all-sky image, 12 MB"
proc HiPSOpenOrderLabel {oo} {
    global hipsopen

    set kk [dict get $oo order]
    set nside [dict get $oo nside]
    set ll "[msgcat::mc {Order}] $kk"
    switch -- [dict get $oo source] {
	quick {
	    return [msgcat::mc {quick look: the survey's all-sky image}]
	}
	remote {
	    set mb [expr {[dict get $oo bytes]/1048576.0}]
	    set fetch [expr {$mb < 10 ? [format %.1f $mb] : [format %.0f $mb]}]
	    set ll "$ll: NSIDE $nside, ~[dict get $oo tiles] [msgcat::mc {tiles}], ~$fetch MB [msgcat::mc {to fetch}]"
	    if {[dict get $oo toobig]} {
		append ll " ([msgcat::mc {too much}])"
	    } elseif {$nside > $hipsopen(nside,max)} {
		append ll " ([msgcat::mc {too large}])"
	    }
	    return $ll
	}
	{} {
	    if {[dict get $oo allskybad]} {
		return "$ll: [msgcat::mc {Allsky unreadable, no tiles}]"
	    }
	    return "$ll: [msgcat::mc {no tiles}]"
	}
	allsky {set src [msgcat::mc {Allsky}]}
	reduced {set src [msgcat::mc {reduced Allsky}]}
	tiles {
	    if {[dict get $oo tiles] < 0} {
		set src [msgcat::mc {tiles}]
	    } else {
		set src "[dict get $oo tiles]/[dict get $oo total] [msgcat::mc {tiles}]"
	    }
	}
    }
    set ll "$ll: NSIDE $nside, $src, [HiPSOpenSize $nside]"
    if {[dict get $oo allskybad]} {
	append ll ", [msgcat::mc {Allsky unreadable}]"
    }
    if {$nside > $hipsopen(nside,max)} {
	append ll " ([msgcat::mc {too large}])"
    }
    return $ll
}

# The dialog. Returns the name to load (dir plus options), or {} on
# cancel or error.
proc HiPSOpenParamsDialog {dir {url {}}} {
    global hipsopen
    global hpxed

    # a remote HiPS: dir is its cache (properties fetched), url its name
    set name [expr {$url != {} ? $url : $dir}]

    if {[catch {HiPSReadProperties $dir} props]} {
	Error "[msgcat::mc {Unable to load}] HiPS $dir: [msgcat::mc {no readable properties file}]"
	return {}
    }
    if {[HiPSProp $props dataproduct_type image] == {catalog}} {
	Error "[msgcat::mc {Unable to load}] HiPS $name: [msgcat::mc {catalogue HiPS are not supported}]"
	return {}
    }
    set formats [HiPSProp $props hips_tile_format fits]
    set ext [HiPSTileExt $props]
    if {$ext == {}} {
	Error "[msgcat::mc {Unable to load}] HiPS $name: [msgcat::mc {no FITS, PNG or JPEG tiles, this HiPS has}] $formats"
	return {}
    }
    set scan [HiPSOpenScan $dir $url $props $ext]
    if {$scan == {}} {
	Error "[msgcat::mc {Unable to load}] HiPS $dir: [msgcat::mc {no order has tiles or a readable Allsky}] ($ext)"
	return {}
    }

    set w {.hipsopen}

    array unset hpxed
    set hpxed(ok) 0
    set hpxed(whpx) {}
    set hpxed(dir) $dir
    set hpxed(url) $url
    set hpxed(props) $props
    # the tiles read: the automatic choice, unless another is picked
    set hpxed(ext) $ext
    set hpxed(defext) $ext
    set hpxed(scan) $scan
    set hpxed(scanext) $ext
    HiPSOpenScanOrder
    set hpxed(proj) $hipsopen(proj)
    if {[HPXOpenProjInfo $hpxed(proj)] == {}} {
	set hpxed(proj) hpx
    }
    foreach key {lon0 lat0 fov} {
	set hpxed($key) {}
    }
    set hpxed(view) [HiPSInitialView $props]

    DialogCreate $w [msgcat::mc {Open HiPS}] hpxed(ok)

    # Survey
    set f [ttk::frame $w.file]
    set title [HiPSProp $props obs_title [file tail $name]]
    ttk::label $f.name -text $title -font TkHeadingFont
    ttk::label $f.dir -text $name
    set desc {}
    lappend desc [HiPSProp $props hips_frame equatorial]
    set omin [HiPSProp $props hips_order_min 0]
    lappend desc "[msgcat::mc {orders}] $omin-[HiPSProp $props hips_order ?]"
    lappend desc "[msgcat::mc {tile}] [HiPSProp $props hips_tile_width 512]"
    lappend desc $formats
    ttk::label $f.desc -text [join $desc {, }]
    grid $f.name -padx 2 -pady 2 -sticky w
    grid $f.dir -padx 2 -pady 0 -sticky w
    grid $f.desc -padx 2 -pady 2 -sticky w
    set view {}
    if {[HiPSProp $props hips_initial_ra] != {}} {
	lappend view "RA [HiPSProp $props hips_initial_ra] Dec [HiPSProp $props hips_initial_dec] (ICRS)"
    }
    if {[dict get $hpxed(view) fov] != {}} {
	lappend view "[msgcat::mc {fov}] [HiPSOpenFmt [dict get $hpxed(view) fov]]"
    }
    set cut [HiPSProp $props hips_pixel_cut]
    if {$view != {}} {
	ttk::label $f.view -text "[msgcat::mc {Initial view}]: [join $view {, }]"
	grid $f.view -padx 2 -pady 0 -sticky w
    }
    if {$cut != {}} {
	set hpxed(cut) "[msgcat::mc {Suggested scale limits}]: $cut"
	ttk::label $f.cut -textvariable hpxed(cut)
	grid $f.cut -padx 2 -pady 2 -sticky w
    }

    # Data: the tiles (when there is a choice), and the order
    set f [ttk::labelframe $w.data -text [msgcat::mc {Data}]]
    set hpxed(wdata) $f
    set exts {}
    foreach ee {fits png jpg} {
	if {[HiPSTileExt $props [dict create format $ee]] != {}} {
	    lappend exts $ee
	}
    }
    ttk::label $f.ttiles -text [msgcat::mc {Tiles}]
    ttk::menubutton $f.tiles -textvariable hpxed(extlabel) -menu $f.tiles.m
    ThemeMenu $f.tiles.m
    foreach ee $exts {
	$f.tiles.m add radiobutton -label [HiPSOpenExtLabel $ee] \
	    -variable hpxed(ext) -value $ee -command HiPSOpenExtChanged
    }
    ttk::label $f.reading -textvariable hpxed(reading)
    if {[llength $exts] > 1} {
	grid $f.ttiles $f.tiles -padx 2 -pady 2 -sticky w
    }
    ttk::label $f.torder -text [msgcat::mc {Order}]
    ttk::menubutton $f.order -textvariable hpxed(orderlabel) -menu $f.order.m
    ThemeMenu $f.order.m
    grid $f.torder $f.order -padx 2 -pady 2 -sticky w
    grid $f.reading - -padx 2 -pady 2 -sticky w
    HiPSOpenOrderMenu

    # Projection
    HPXOpenProjFrame [ttk::labelframe $w.proj -text [msgcat::mc {Projection}]] \
	HiPSOpenProjChanged

    # Buttons
    set f [ttk::frame $w.buttons]
    ttk::button $f.ok -text [msgcat::mc {OK}] -command HiPSOpenOK \
	-default active
    ttk::button $f.cancel -text [msgcat::mc {Cancel}] \
	-command {set hpxed(ok) 0}
    pack $f.ok $f.cancel -side left -expand true -padx 2 -pady 4

    bind $w <Return> HiPSOpenOK

    # Fini
    ttk::separator $w.sep -orient horizontal
    pack $w.buttons $w.sep -side bottom -fill x
    pack $w.file -side top -fill x -padx 2 -pady 2
    pack $w.data $w.proj -side top -fill x -padx 4 -pady 2

    HiPSOpenOrderChanged
    set hpxed(oldproj) {}
    HiPSOpenProjChanged

    DialogWait $w hpxed(ok)
    destroy $w

    set fn {}
    if {$hpxed(ok)} {
	set vals [dict create layout equatorial quad 1]
	foreach key {proj lon0 lat0 fov} {
	    dict set vals $key [string trim $hpxed($key)]
	}
	# remember for the next HiPS
	set hipsopen(proj) $hpxed(proj)
	set opts {}
	if {$hpxed(order) != {}} {
	    lappend opts "order=$hpxed(order)"
	}
	if {$hpxed(ext) != $hpxed(defext)} {
	    lappend opts "format=[expr {$hpxed(ext) == {jpg} ? {jpeg} : $hpxed(ext)}]"
	}
	set opts [concat $opts [HiPSOpenProjOptions $vals]]
	set fn $name
	if {$opts != {}} {
	    append fn "\[[join $opts ,]\]"
	}
    }
    array unset hpxed
    return $fn
}

# The orders the dialog offers for tiles ext: a dict of orders, auto
# (the automatic choice, {} if none), usable (the orders order=K can
# load) and smallest; {} if nothing can be loaded
proc HiPSOpenScan {dir url props ext} {
    global hipsopen

    set width [HiPSProp $props hips_tile_width 512]
    if {![string is integer -strict $width] || $width < 1} {
	set width 512
    }
    set maxorder [HiPSProp $props hips_order 29]
    if {![string is integer -strict $maxorder]} {
	set maxorder 29
    }
    if {$url == {}} {
	set orders [HiPSOpenOrders $dir $width $ext [HiPSSliceSuffix $props {}]]
	set auto [HiPSOpenAutoOrder $orders $width $maxorder]
    } else {
	set orders [HiPSOpenRemoteOrders $props $width $ext $maxorder]
	# without order=, the quick look (hipsnet.tcl)
	set auto [dict create order {} nside 0 source quick allskybad 0]
    }

    # the orders that can be loaded with order=K, and the smallest
    set usable {}
    set smallest {}
    foreach oo $orders {
	set nside [dict get $oo nside]
	if {$nside > 0 && $nside <= $hipsopen(nside,max) && \
		[dict get $oo order] <= $maxorder &&
	    !([dict exists $oo toobig] && [dict get $oo toobig])} {
	    lappend usable [dict get $oo order]
	    if {$smallest == {} || $nside < [dict get $smallest nside]} {
		set smallest $oo
	    }
	}
    }
    if {$auto == {} && $smallest == {}} {
	return {}
    }
    return [dict create orders $orders auto $auto usable $usable \
		smallest $smallest maxorder $maxorder]
}

# the order the dialog starts at: automatic, else the smallest map
proc HiPSOpenScanOrder {} {
    global hpxed

    if {[dict get $hpxed(scan) auto] != {}} {
	set hpxed(order) {}
    } else {
	set hpxed(order) [dict get [dict get $hpxed(scan) smallest] order]
    }
}

proc HiPSOpenExtLabel {ext} {
    switch -- $ext {
	fits {return [msgcat::mc {FITS (data values)}]}
	png {return [msgcat::mc {PNG (display values 0-255)}]}
	jpg {return [msgcat::mc {JPEG (display values 0-255)}]}
    }
}

# (re)fill the order menu, and the lines that depend on the tiles read
proc HiPSOpenOrderMenu {} {
    global hpxed
    global hipsopen

    set f $hpxed(wdata)
    set ext $hpxed(ext)
    set hpxed(extlabel) [HiPSOpenExtLabel $ext]
    set colour [HiPSIsColour \
	"$hpxed(dir)\[format=[expr {$ext == {jpg} ? {jpeg} : $ext}]\]"]
    if {$ext == {fits}} {
	set hpxed(reading) {}
    } elseif {$colour} {
	set hpxed(reading) "[msgcat::mc {Reading}] $ext: [msgcat::mc {colour, into an RGB frame}]"
    } else {
	set hpxed(reading) "[msgcat::mc {Reading}] $ext: [msgcat::mc {display values 0-255}]"
    }
    # the suggested limits are physical values, not png/jpg levels
    if {[winfo exists $hpxed(wdata)] && [info exists hpxed(cut)]} {
	set lab [winfo parent $f].file.cut
	if {[winfo exists $lab]} {
	    if {$ext == {fits}} {
		grid $lab
	    } else {
		grid remove $lab
	    }
	}
    }

    set auto [dict get $hpxed(scan) auto]
    set usable [dict get $hpxed(scan) usable]
    set maxorder [dict get $hpxed(scan) maxorder]
    set hpxed(orders) [dict get $hpxed(scan) orders]

    $f.order.m delete 0 end
    if {$auto != {}} {
	set hpxed(autolabel) "[msgcat::mc {Automatic}] ([HiPSOpenOrderLabel $auto])"
	set state normal
    } else {
	set hpxed(autolabel) "[msgcat::mc {Automatic}] ([msgcat::mc {nothing up to NSIDE}] $hipsopen(nside,auto))"
	set state disabled
    }
    $f.order.m add radiobutton -label $hpxed(autolabel) \
	-variable hpxed(order) -value {} -command HiPSOpenOrderChanged \
	-state $state
    $f.order.m add separator
    foreach oo $hpxed(orders) {
	set label [HiPSOpenOrderLabel $oo]
	set state normal
	if {[lsearch -exact $usable [dict get $oo order]] < 0} {
	    set state disabled
	}
	if {[dict get $oo order] > $maxorder} {
	    append label " ([msgcat::mc {deeper than hips_order}])"
	}
	$f.order.m add radiobutton -label $label \
	    -variable hpxed(order) -value [dict get $oo order] \
	    -command HiPSOpenOrderChanged -state $state
    }
    HiPSOpenOrderChanged
}

# another kind of tiles: their orders (a local HiPS may have different
# ones of each)
proc HiPSOpenExtChanged {} {
    global hpxed

    set scan [HiPSOpenScan $hpxed(dir) $hpxed(url) $hpxed(props) $hpxed(ext)]
    if {$scan == {}} {
	Error "[msgcat::mc {no order has tiles or a readable Allsky}] ($hpxed(ext))"
	set hpxed(ext) $hpxed(scanext)
	return
    }
    set hpxed(scan) $scan
    set hpxed(scanext) $hpxed(ext)
    HiPSOpenScanOrder
    HiPSOpenOrderMenu
}

proc HiPSOpenOrderChanged {} {
    global hpxed

    if {$hpxed(order) == {}} {
	set hpxed(orderlabel) $hpxed(autolabel)
	return
    }
    foreach oo $hpxed(orders) {
	if {[dict get $oo order] == $hpxed(order)} {
	    set hpxed(orderlabel) [HiPSOpenOrderLabel $oo]
	}
    }
}

proc HiPSOpenOK {} {
    global hpxed

    set vals {}
    foreach key {proj lon0 lat0 fov} {
	dict set vals $key $hpxed($key)
    }
    set err [HPXOpenCheck $vals]
    if {$err != {}} {
	Error $err
	return
    }
    set hpxed(ok) 1
}
