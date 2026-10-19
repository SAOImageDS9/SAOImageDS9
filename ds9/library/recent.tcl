#  Copyright (C) 1999-2026
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

# Recent Files
# Images loaded from disk (File Open/Open as/Import, command line, XPA, SAMP)
# are remembered in $prefs(dir)/recent.txt, most recent first.
# Each line is a tcl list: type filename ?key value ...?
#   type: fits, mosaicimagewcs, mosaicimageiraf, mosaicimagewfpc2,
#         mosaicwcs, mosaiciraf, mecube, multiframe,
#         rgbimage, rgbcube, hlsimage, hlscube, hsvimage, hsvcube,
#         array, rgbarray, hlsarray, hsvarray, nrrd, envi, photo
#   keys: mode (slice), sys (mosaic wcs system), data (envi data file)

proc RecentDef {} {
    global irecent

    set irecent(max) 12
    set irecent(list) {}
    set irecent(fn) {}
}

proc RecentFileName {} {
    global prefs

    return [file join $prefs(dir) recent.txt]
}

# split foo.fits[1] into foo.fits and [1]
proc RecentSplitName {fn baseVar extVar} {
    upvar $baseVar base
    upvar $extVar ext

    set id [string first "\[" $fn]
    if {$id > 0} {
	set base [string range $fn 0 [expr $id-1]]
	set ext [string range $fn $id end]
    } else {
	set base $fn
	set ext {}
    }
}

# returns the absolute filename, or {} if this is not a file worth keeping
proc RecentNormalize {fn} {
    global ds9

    if {$fn == {}} {
	return {}
    }

    RecentSplitName $fn base ext
    set base [file normalize $base]

    # stdin, url downloads, missing files, etc
    if {![file isfile $base]} {
	return {}
    }

    # temporary files (http/ftp/hv downloads)
    set tmp [file normalize $ds9(tmpdir)]
    if {[string first "$tmp/" $base] == 0} {
	return {}
    }

    return "$base$ext"
}

proc RecentRead {} {
    global ds9
    global irecent

    if {!$ds9(prefs)} {
	return
    }

    set irecent(list) {}

    set fn [RecentFileName]
    if {![file readable $fn]} {
	return
    }
    if {[catch {set ch [open $fn r]}]} {
	return
    }

    while {[gets $ch line] >= 0} {
	set line [string trim $line]
	if {$line == {} || [string index $line 0] == "#"} {
	    continue
	}
	# skip anything that is not a well formed entry
	if {[catch {llength $line} nn]} {
	    continue
	}
	if {$nn < 2 || [expr $nn%2]} {
	    continue
	}
	lappend irecent(list) $line
	if {[llength $irecent(list)] >= $irecent(max)} {
	    break
	}
    }
    close $ch
}

proc RecentWrite {} {
    global ds9
    global irecent
    global prefs

    if {!$ds9(prefs)} {
	return
    }

    catch {file mkdir $prefs(dir)}
    if {![file isdirectory $prefs(dir)]} {
	return
    }

    # write to a temp file and rename, so a crash leaves the old list intact
    set fn [RecentFileName]
    set tmp "$fn.[pid]"
    if {[catch {set ch [open $tmp w]}]} {
	return
    }
    puts $ch "\# $ds9(app) recent files"
    puts $ch "\# type filename ?key value ...?"
    foreach rr $irecent(list) {
	puts $ch $rr
    }
    close $ch

    if {[catch {file rename -force $tmp $fn}]} {
	catch {file delete -force $tmp}
    }
}

# called by the image loaders after a successful load
# args are key/value pairs: layer, mode, sys, data
proc RecentAdd {type fn args} {
    global irecent

    array set opts $args

    # masks are not images in their own right
    if {[info exists opts(layer)]} {
	if {$opts(layer) == {mask}} {
	    return
	}
	unset opts(layer)
    }

    set fn [RecentNormalize $fn]
    if {$fn == {}} {
	return
    }
    if {[info exists opts(data)]} {
	set opts(data) [RecentNormalize $opts(data)]
	if {$opts(data) == {}} {
	    return
	}
    }

    set entry [list $type $fn]
    foreach key [lsort [array names opts]] {
	if {$opts($key) != {}} {
	    lappend entry $key $opts($key)
	}
    }

    # pick up changes from other ds9s before rewriting
    RecentRead

    # one entry per file, the latest way it was loaded wins
    set ll [list $entry]
    foreach rr $irecent(list) {
	if {[lindex $rr 1] != $fn} {
	    lappend ll $rr
	}
    }
    set irecent(list) [lrange $ll 0 [expr $irecent(max)-1]]

    RecentWrite
    UpdateRecentMenu
}

proc RecentClear {} {
    global irecent

    set irecent(list) {}
    RecentWrite
    UpdateRecentMenu
}

proc RecentOpen {entry} {
    global current

    set type [lindex $entry 0]
    set fn [lindex $entry 1]
    array set opts {mode {} sys wcs data {}}
    array set opts [lrange $entry 2 end]

    RecentSplitName $fn base ext
    if {![file isfile $base]} {
	Error "[msgcat::mc {Unable to open file}] $fn"
	RecentRemove $fn
	return
    }

    # just in case
    if {$current(frame) == {}} {
	CreateFrame
    }

    switch -- $type {
	rgbimage -
	rgbcube {
	    if {[$current(frame) get type] != {rgb}} {
		CreateRGBFrame
	    }
	    Open $fn $type {} {} {}
	}
	hlsimage -
	hlscube {
	    if {[$current(frame) get type] != {hls}} {
		CreateHLSFrame
	    }
	    Open $fn $type {} {} {}
	}
	hsvimage -
	hsvcube {
	    if {[$current(frame) get type] != {hsv}} {
		CreateHSVFrame
	    }
	    Open $fn $type {} {} {}
	}

	fits -
	mosaicimagewcs -
	mosaicimageiraf -
	mosaicimagewfpc2 -
	mosaicwcs -
	mosaiciraf -
	mecube -
	multiframe {Open $fn $type {} $opts(mode) $opts(sys)}

	array -
	rgbarray -
	hlsarray -
	hsvarray -
	nrrd {Import $fn $type {} {} {}}
	envi {Import $fn envi {} {} $opts(data)}
	photo {Import $fn png {} $opts(mode) {}}

	default {Error "[msgcat::mc {Unknown file type}] $type"}
    }
}

proc RecentRemove {fn} {
    global irecent

    RecentRead
    set ll {}
    foreach rr $irecent(list) {
	if {[lindex $rr 1] != $fn} {
	    lappend ll $rr
	}
    }
    set irecent(list) $ll
    RecentWrite
    UpdateRecentMenu
}

proc RecentLabel {entry} {
    set type [lindex $entry 0]
    set fn [lindex $entry 1]
    array set opts [lrange $entry 2 end]

    # keep long paths from making the menu absurdly wide
    set max 64
    if {[string length $fn] > $max} {
	set tail [file tail $fn]
	set nn [expr $max-[string length $tail]-4]
	if {$nn > 8} {
	    set fn "[string range $fn 0 $nn]...[file separator]$tail"
	} else {
	    set fn "...[file separator]$tail"
	}
    }

    switch -- $type {
	fits {set hint {}}
	mosaicimagewcs {set hint [msgcat::mc {Mosaic WCS}]}
	mosaicimageiraf {set hint [msgcat::mc {Mosaic IRAF}]}
	mosaicimagewfpc2 {set hint [msgcat::mc {Mosaic WFPC2}]}
	mosaicwcs {set hint [msgcat::mc {Mosaic WCS Segments}]}
	mosaiciraf {set hint [msgcat::mc {Mosaic IRAF Segments}]}
	mecube {set hint [msgcat::mc {Multiple Extension Cube}]}
	multiframe {set hint [msgcat::mc {Multiple Extension Frames}]}
	rgbimage {set hint [msgcat::mc {RGB Image}]}
	rgbcube {set hint [msgcat::mc {RGB Cube}]}
	hlsimage {set hint [msgcat::mc {HLS Image}]}
	hlscube {set hint [msgcat::mc {HLS Cube}]}
	hsvimage {set hint [msgcat::mc {HSV Image}]}
	hsvcube {set hint [msgcat::mc {HSV Cube}]}
	array {set hint [msgcat::mc {Array}]}
	rgbarray {set hint [msgcat::mc {RGB Array}]}
	hlsarray {set hint [msgcat::mc {HLS Array}]}
	hsvarray {set hint [msgcat::mc {HSV Array}]}
	nrrd {set hint {NRRD}}
	envi {set hint {ENVI}}
	photo {set hint [string toupper [string trimleft [file extension $fn] .]]}
	default {set hint $type}
    }
    if {[info exists opts(mode)] && $opts(mode) == {slice}} {
	set hint [string trim "$hint [msgcat::mc {Slice}]"]
    }

    if {$hint != {}} {
	return "$fn  ($hint)"
    } else {
	return $fn
    }
}

# Menu

proc RecentMainMenu {} {
    global ds9

    ThemeMenu $ds9(mb).file.recent
    RecentRead
    UpdateRecentMenu
}

proc UpdateRecentMenu {} {
    global ds9
    global irecent

    set m $ds9(mb).file.recent
    if {![winfo exists $m]} {
	return
    }

    $m delete 0 end
    foreach rr $irecent(list) {
	$m add command -label [RecentLabel $rr] -command [list RecentOpen $rr]
    }
    if {[llength $irecent(list)] == 0} {
	$m add command -label [msgcat::mc {No Recent Files}] -state disabled
    }
    $m add separator
    $m add command -label [msgcat::mc {Clear Menu}] -command RecentClear
    if {[llength $irecent(list)] == 0} {
	$m entryconfig end -state disabled
    }
}
