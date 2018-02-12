#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc MultiLoad {{layer {}} {mode {}}} {
    global ds9
    global current

    global debug
    if {$debug(tcl,layout)} {
	puts stderr "MultiLoad"
    }

    if {$layer != {} || $mode != {}} {
	return
    }

    if {$current(frame) != {}} {
	if {![$current(frame) has fits]} {
	    return
	}
	switch -- [$current(frame) get type] {
	    base -
	    3d {CreateFrame}
	    rgb {}
	}
    } else {
	CreateFrame
	return
    }

    # go into tile mode if more than one
    set cnt [llength $ds9(frames)]
    if {$cnt > 1 && $current(display) != "tile"} {
	set current(display) tile
	DisplayMode
    }
}

proc MultiLoadBase {} {
    global ds9
    global current

    global debug
    if {$debug(tcl,layout)} {
	puts stderr "MultiLoadBase"
    }

    if {$current(frame) != {}} {
	if {![$current(frame) has fits]} {
	    return
	}
	CreateFrame
    } else {
	CreateFrame
	return
    }

    # go into tile mode if more than one
    set cnt [llength $ds9(frames)]
    if {$cnt > 1 && $current(display) != "tile"} {
	set current(display) tile
	DisplayMode
    }
}

proc MultiLoadRGB {} {
    global ds9
    global current

    global debug
    if {$debug(tcl,layout)} {
	puts stderr "MultiLoadRGB"
    }

    if {$current(frame) != {}} {
	if {![$current(frame) has fits]} {
	    return
	}
	CreateRGBFrame
    } else {
	CreateRGBFrame
	return
    }

    # go into tile mode if more than one
    set cnt [llength $ds9(frames)]
    if {$cnt > 1 && $current(display) != "tile"} {
	set current(display) tile
	DisplayMode
    }
}

# used by backup
proc ProcessLoad {{err 1}} {
    global current
    global loadParam
    global ds9

    # restrict load type for windows
    switch $ds9(wm) {
	x11 -
	aqua {}
	win32 {
	    switch -- $loadParam(load,type) {
		alloc -
		allocgz -
		channel -
		var -
		photo {}

		mmap -
		mmapincr {
		    set loadParam(load,type) allocgz
		    set loadParam(file,fn) $loadParam(file,name)
		}

		smmap -
		shared -
		sshared -
		socket -
		socketgz {Error "[msgcat::mc {This function is not currently supported for this port.}]"}
	    }
	}
    }

    if {[catch {
	switch -- $loadParam(load,type) {
	    alloc -
	    allocgz {$current(frame) load $loadParam(file,type) \
			 $loadParam(file,mode) \
			 \{$loadParam(file,name)\} \
			 $loadParam(load,type) \
			 \{$loadParam(file,fn)\} \
			 $loadParam(load,layer)}
	    channel {
		fconfigure $loadParam(channel,name) -translation binary \
		    -encoding binary
		$current(frame) load $loadParam(file,type) \
		    $loadParam(file,mode) \
		    \{$loadParam(file,name)\} \
		    $loadParam(load,type) \
		    $loadParam(channel,name) \
		    $loadParam(load,layer)

		# clean up
		catch {close $loadParam(channel,name)}
	    }
	    mmap -
	    mmapincr {$current(frame) load $loadParam(file,type) \
			  $loadParam(file,mode) \
			  \{$loadParam(file,name)\} \
			  $loadParam(load,type) \
			  $loadParam(load,layer)}
	    smmap {$current(frame) load $loadParam(file,type) \
		       $loadParam(file,mode) \
		       \{$loadParam(file,header)\} \
		       \{$loadParam(file,name)\} \
		       $loadParam(load,type) \
		       $loadParam(load,layer)}
	    shared {$current(frame) load $loadParam(file,type) \
			$loadParam(file,mode) \
			\{$loadParam(file,name)\} \
			$loadParam(load,type) \
			$loadParam(shared,idtype) \
			$loadParam(shared,id) \
			$loadParam(load,layer)}
	    sshared {$current(frame) load $loadParam(file,type) \
			 $loadParam(file,mode) \
			 \{$loadParam(file,name)\} \
			 $loadParam(load,type) \
			 $loadParam(shared,idtype) \
			 $loadParam(shared,hdr) \
			 $loadParam(shared,id) \
			 $loadParam(load,layer)}
	    socket -
	    socketgz {$current(frame) load $loadParam(file,type) \
			  $loadParam(file,mode) \
			  \{$loadParam(file,name)\} \
			  $loadParam(load,type) \
			  $loadParam(socket,id) \
			  $loadParam(load,layer)}
	    var {$current(frame) load $loadParam(file,type) \
		     $loadParam(file,mode) \
		     \{$loadParam(file,name)\} \
		     $loadParam(load,type) \
		     $loadParam(var,name) \
		     $loadParam(load,layer)}
	    photo {$current(frame) load $loadParam(file,type) \
		       $loadParam(file,mode) \
		       $loadParam(var,name) \{$loadParam(file,name)\}
	    }
	}
    } rr]} {
	if {$err} {
	    Error "[msgcat::mc {Unable to load}] $loadParam(file,type) $loadParam(file,mode) $loadParam(file,name)"
	}
	return 0
    }

    # save loadParam
    if {$loadParam(load,layer) == {}} {
	switch -- [$current(frame) get type] {
	    base -
	    3d {ProcessLoadSaveParams $current(frame)}
	    rgb {
		switch -- $loadParam(file,mode) {
		    {rgb image} -
		    {rgb cube} {ProcessLoadSaveParams $current(frame)}
		    default {
			ProcessLoadSaveParams \
			    "$current(frame)[$current(frame) get rgb channel]"
		    }
		}
	    }
	}
    }

    unset loadParam
    return 1
}

proc ProcessLoadSaveParams {varname} {
    global loadParam
    global current

    switch $loadParam(file,mode) {
	slice -
	{mosaic wcs} -
	{mosaic iraf} {
	    # special case
	    global $varname
	    if {[info exists $varname]} {
		set varname "$varname.[$current(frame) get fits count]"
	    }
	}
    }

    global $varname
    if {[info exists $varname]} {
	unset $varname
    }

    array set $varname [array get loadParam]

    # always save absolute path
    upvar #0 $varname var
    if {[file pathtype $var(file,name)] == {relative}} {
	set var(file,name) [file join [pwd] $var(file,name)]
    }
}

proc LoadUpdate {} {
    global current

    # just in case, frame may have been deleted before FinishLoad during startup
    if {$current(frame) != {}} {
	# if header(s) were open, remove them
	DestroyHeader $current(frame)
    }

    # generate grid so UpdateMenu is correct
    GridUpdateCurrent

    # generate contour so UpdateMenu is correct
    UpdateContourScale
    UpdateContour

    # Cube?
    if {[$current(frame) has fits cube]} {
	CubeDialog
    }
}

proc FinishLoad {} {
    global current

    LoadUpdate
    UpdateDS9
}

proc IsLocalFile {fn} {
    # strip any brackets
    set aa [string first "\[" $fn]
    if {$aa > 0} {
 	set fn [string range $fn 0 [expr $aa-1]]
    }
    
    if {![file exists $fn]} {
	return 0
    }
    if {![file isfile $fn]} {
	return 0
    }
    if {[file isdirectory $fn]} {
	return 0
    }
    if {[file readable $fn]} {
	return 1
    } else {
	return 0
    }
}

proc ConvertFitsFile {} {
    foreach t {Stdin ExternalFits GzipFile BZip2File CompressFile PackFile} {
	if {[$t]} {
	    return
	}
    }
}

proc ConvertArrayFile {} {
    foreach t {Stdin GzipFile BZip2File CompressFile PackFile} {
	if {[$t]} {
	    return
	}
    }
}

# File Types

proc Stdin {} {
    global loadParam

    # find -, -[], -[foo] but not -abc
    if {[regexp -- {^-(\[.*)?$} $loadParam(file,name)]} {
	set loadParam(load,type) allocgz
	set loadParam(file,name) "stdin[string range $loadParam(file,name) 1 end]"
	set loadParam(file,fn) $loadParam(file,name)
	return 1
    } elseif {[string range $loadParam(file,name) 0 4] == "stdin" || 
	      [string range $loadParam(file,name) 0 4] == "STDIN"} {
	set loadParam(load,type) allocgz
	set loadParam(file,name) "stdin[string range $loadParam(file,name) 5 end]"
	set loadParam(file,fn) $loadParam(file,name)
	return 1
    }
    return 0
}

proc BZip2File {} {
    global loadParam

    if { [regexp {(.*)\.bz2($|\[)} $loadParam(file,name) matched root] } {
	if {[catch {set ch [open "| bunzip2 < $root.bz2 " r]}]} {
	    return 0
	}
	set loadParam(load,type) channel
	set loadParam(channel,name) $ch
	return 1
    }
    return 0
}

proc CompressFile {} {
    global loadParam

    if {[regexp {(.*)\.Z($|\[)} $loadParam(file,name) matched root]} {
	if {[catch {set ch [open "| uncompress < $root.Z " r]}]} {
	    return 0
	}
	set loadParam(load,type) channel
	set loadParam(channel,name) $ch
	return 1
    }
    return 0
}

proc PackFile {} {
    global loadParam

    if {[regexp {(.*)\.z($|\[)} $loadParam(file,name) matched root]} {
	if {[catch {set ch [open "| pcat $root.z " r]}]} {
	    return 0
	}
	set loadParam(load,type) channel
	set loadParam(channel,name) $ch
	return 1
    }
    return 0
}

proc GzipFile {} {
    global loadParam

    set fn $loadParam(file,name)
    set id [string first "\[" $fn]
    if {$id > 0} {
	set fn [string range $fn 0 [expr $id-1]]
    }

    catch {
	set ch [open $fn r]
	fconfigure $ch -encoding binary -translation binary
	set bb [read $ch 2]
	close $ch
	binary scan $bb H4 cc
	if {$cc == {1f8b}} {
	    set loadParam(load,type) allocgz
	    set loadParam(file,fn) $loadParam(file,name)
	    return 1
	}
    }
    return 0
}

proc ExternalFits {} {
    global loadParam
    global extFits

    foreach id [array names extFits] {
	if {[string match $id "$loadParam(file,name)"]} {
	    regsub -all {\$filename} $extFits($id) "$loadParam(file,name)" \
		result
	    set cmd "| $result"
	    if {[catch {set ch [open "$cmd" r]} err]} {
		Error "open $cmd failed: $err"
		return 0
	    }
	    set loadParam(load,type) channel
	    set loadParam(channel,name) $ch
	    return 1
	}
    }
    return 0
}

# Preserve

proc ProcessPreserveCmd {varname iname} {
    upvar $varname var
    upvar $iname i

    global ds9
    global scale
    global panzoom
    global marker

    switch -- [string tolower [lindex $var $i]] {
	pan {
	    incr i
	    set panzoom(preserve) [FromYesNo [lindex $var $i]]
	    PreservePan
	}
	marker -
	regions {
	    incr i
	    set marker(preserve) [FromYesNo [lindex $var $i]]
	    MarkerPreserve
	}
    }
}

proc ProcessSendPreserveCmd {proc id param} {
    global scale
    global panzoom
    global marker

    switch -- [string tolower $param] {
	scale {
	    # backward compatibility
	    $proc $id "no\n"
	}
	pan {$proc $id [ToYesNo $panzoom(preserve)]}
	regions {$proc $id [ToYesNo $marker(preserve)]}
    }
}

# Update

proc ProcessUpdateCmd {varname iname} {
    upvar $varname var
    upvar $iname i

    global current
    global ds9

    if {$current(frame) == {}} {
	return
    }

    if {[lindex $var $i] != {} && [string range [lindex $var $i] 0 0] != {-}} {
	switch -- [string tolower [lindex $var $i]] {
	    on -
	    yes -
	    no -
	    off {
		# backward compatibility
	    }

	    now {
		if {[string is integer [lindex $var [expr $i+1]]]} {
		    $current(frame) update now \
			[lindex $var [expr $i+1]] \
			[lindex $var [expr $i+2]] [lindex $var [expr $i+3]] \
			[lindex $var [expr $i+4]] [lindex $var [expr $i+5]]
		    
		    incr i 5
		} else {
		    $current(frame) update now
		}
	    }
	    {} {
		$current(frame) update
		incr i -1
	    }

	    default {
		$current(frame) update \
		    [lindex $var $i] \
		    [lindex $var [expr $i+1]] [lindex $var [expr $i+2]] \
		    [lindex $var [expr $i+3]] [lindex $var [expr $i+4]]
		incr i 4
	    }
	}
    } else {
	$current(frame) update
	incr i -1
    }
}
