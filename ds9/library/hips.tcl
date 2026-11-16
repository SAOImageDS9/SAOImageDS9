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

    set loadParam(file,type) hips
    set loadParam(file,mode) {}
    set loadParam(load,type) hips
    set loadParam(file,name) $fn
    set loadParam(load,layer) {}

    # ProcessLoad's own error would replace the reader's reason (left in
    # ds9(msg) by internalError), so report both here
    set ds9(msg) {}
    if {[ProcessLoad 0]} {
	HiPSApplyCut $fn
	RecentAdd hips $fn
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

# The survey's suggested display range, hips_pixel_cut (physical
# values, as the map holds), becomes the frame's user scale limits,
# unless turned off in Preferences > HEALPix. A later scale command (or
# a backup's saved scale) still wins, as it comes after the load.
proc HiPSApplyCut {fn} {
    global phpxopen
    global scale

    if {!$phpxopen(hipscut)} {
	return
    }
    if {[catch {HiPSReadProperties [HiPSRoot $fn]} props]} {
	return
    }
    set cut [HiPSProp $props hips_pixel_cut]
    if {[llength $cut] != 2} {
	return
    }
    lassign $cut lo hi
    if {![string is double -strict $lo] || ![string is double -strict $hi] \
	    || $lo >= $hi} {
	return
    }
    set scale(min) $lo
    set scale(max) $hi
    ChangeScaleLimit
}

# The root directory of a HiPS name (without its [options])
proc HiPSRoot {fn} {
    set id [string first "\[" $fn]
    if {$id > 0} {
	return [string range $fn 0 [expr $id-1]]
    }
    return $fn
}

# the HiPS name (root directory plus options) loaded in frame which, or
# {} if it doesn't hold a HiPS. ProcessLoad saves each frame's load
# parameters in a global array named after the frame.
proc HiPSFrameName {which} {
    upvar #0 $which var

    if {$which == {} || ![$which has fits]} {
	return {}
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

    if {![file isdirectory $dir]} {
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
    set moc [file join [HiPSRoot $fn] Moc.fits]
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
    # nn is the set's place in the list; delete takes its id
    if {[string is integer -strict $nn] && \
	    [llength [info commands $which]] && \
	    $nn < [$which get contour aux count]} {
	$which contour delete aux [lindex [$which get contour aux] $nn 0]
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
	if {$fn != {} && \
		[file isfile [file join [HiPSRoot $fn] Moc.fits]]} {
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
	    $proc $id "[ToYesNo [HiPSCoverageShown $current(frame)]]\n"
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

    # a HiPS loads as a HEALPix map, which needs a plain frame
    if {$current(frame) == {}} {
	CreateFrame
    } else {
	switch -- [$current(frame) get type] {
	    base -
	    3d {}
	    default {CreateFrame}
	}
    }
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
proc HiPSOpenOrders {dir width} {

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
	set total [expr {12*(1<<(2*$kk))}]
	set tiles [llength [glob -nocomplain -types f -directory $od \
				Dir*/Npix*.fits]]

	# Allsky tile width: the mosaic is int(sqrt(total)) tiles wide
	# Allsky tile width, as FitsHiPS::allskyWidth: orders 0-3 only,
	# the mosaic int(sqrt(total)) tiles wide, power-of-two tiles that
	# fill it, and the whole file present. Otherwise unused, and an
	# Allsky that is there but fails this is marked bad.
	set aw 0
	set abad 0
	set af [file join $od Allsky.fits]
	if {$kk <= 3 && [file isfile $af]} {
	    set ncol [expr {int(sqrt($total))}]
	    set nrow [expr {($total+$ncol-1)/$ncol}]
	    set ai [HiPSFitsInfo $af]
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
	} elseif {$tiles > 0} {
	    set source tiles
	    set nside [expr {$width<<$kk}]
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
	{} {
	    if {[dict get $oo allskybad]} {
		return "$ll: [msgcat::mc {Allsky unreadable, no FITS tiles}]"
	    }
	    return "$ll: [msgcat::mc {no FITS tiles}]"
	}
	allsky {set src [msgcat::mc {Allsky}]}
	reduced {set src [msgcat::mc {reduced Allsky}]}
	tiles {
	    set src "[dict get $oo tiles]/[dict get $oo total] [msgcat::mc {tiles}]"
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
proc HiPSOpenParamsDialog {dir} {
    global hipsopen
    global hpxed

    if {[catch {HiPSReadProperties $dir} props]} {
	Error "[msgcat::mc {Unable to load}] HiPS $dir: [msgcat::mc {no readable properties file}]"
	return {}
    }
    if {[HiPSProp $props dataproduct_type image] == {catalog}} {
	Error "[msgcat::mc {Unable to load}] HiPS $dir: [msgcat::mc {catalogue HiPS are not supported}]"
	return {}
    }
    set formats [HiPSProp $props hips_tile_format fits]
    if {[lsearch -exact [string tolower $formats] fits] < 0} {
	Error "[msgcat::mc {Unable to load}] HiPS $dir: [msgcat::mc {only FITS tiles can be read, this HiPS has}] $formats"
	return {}
    }
    set width [HiPSProp $props hips_tile_width 512]
    if {![string is integer -strict $width] || $width < 1} {
	set width 512
    }
    set maxorder [HiPSProp $props hips_order 29]
    if {![string is integer -strict $maxorder]} {
	set maxorder 29
    }
    set orders [HiPSOpenOrders $dir $width]
    set auto [HiPSOpenAutoOrder $orders $width $maxorder]

    # the orders that can be loaded with order=K, and the smallest
    set usable {}
    set smallest {}
    foreach oo $orders {
	set nside [dict get $oo nside]
	if {$nside > 0 && $nside <= $hipsopen(nside,max) && \
		[dict get $oo order] <= $maxorder} {
	    lappend usable [dict get $oo order]
	    if {$smallest == {} || $nside < [dict get $smallest nside]} {
		set smallest $oo
	    }
	}
    }
    if {$auto == {} && $smallest == {}} {
	Error "[msgcat::mc {Unable to load}] HiPS $dir: [msgcat::mc {no order has FITS tiles or a readable Allsky.fits}]"
	return {}
    }

    set w {.hipsopen}

    array unset hpxed
    set hpxed(ok) 0
    set hpxed(whpx) {}
    # without an automatic choice, start from the smallest map
    if {$auto != {}} {
	set hpxed(order) {}
    } else {
	set hpxed(order) [dict get $smallest order]
    }
    set hpxed(proj) $hipsopen(proj)
    if {[HPXOpenProjInfo $hpxed(proj)] == {}} {
	set hpxed(proj) hpx
    }
    foreach key {lon0 lat0 fov} {
	set hpxed($key) {}
    }
    set hpxed(orders) $orders
    set hpxed(view) [HiPSInitialView $props]

    DialogCreate $w [msgcat::mc {Open HiPS}] hpxed(ok)

    # Survey
    set f [ttk::frame $w.file]
    set title [HiPSProp $props obs_title [file tail $dir]]
    ttk::label $f.name -text $title -font TkHeadingFont
    ttk::label $f.dir -text $dir
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
	ttk::label $f.cut -text "[msgcat::mc {Suggested scale limits}]: $cut"
	grid $f.cut -padx 2 -pady 2 -sticky w
    }

    # Data
    set f [ttk::labelframe $w.data -text [msgcat::mc {Data}]]
    ttk::label $f.torder -text [msgcat::mc {Order}]
    ttk::menubutton $f.order -textvariable hpxed(orderlabel) -menu $f.order.m
    ThemeMenu $f.order.m
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
    foreach oo $orders {
	set nside [dict get $oo nside]
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
    grid $f.torder $f.order -padx 2 -pady 2 -sticky w

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
	set opts [concat $opts [HiPSOpenProjOptions $vals]]
	set fn $dir
	if {$opts != {}} {
	    append fn "\[[join $opts ,]\]"
	}
    }
    array unset hpxed
    return $fn
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
