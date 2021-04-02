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

    if {$current(frame) != {}} {
	switch -- [$current(frame) get type] {
	    base -
	    3d {
		if {$layer != {} || $mode != {}} {
		    return
		}
		if {![$current(frame) has fits]} {
		    return
		}
		CreateFrame
	    }
	    rgb {CreateFrame}
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

proc MultiLoadRGB {} {
    global ds9
    global current

    global debug
    if {$debug(tcl,layout)} {
	puts stderr "MultiLoadRGB"
    }

    if {$current(frame) != {}} {
	switch -- [$current(frame) get type] {
	    base -
	    3d {CreateRGBFrame}
	    rgb {
		if {![$current(frame) has fits]} {
		    return
		}
		CreateRGBFrame
	    }
	}
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

    unset loadParam
    return 1
}

proc ProcessLoadSaveParams {varname} {
    global loadParam
    global current

    if {$loadParam(load,layer) == {mask}} {
	global $varname
	if {[info exists $varname]} {
	    set varname "$varname.m[$current(frame) get mask count]"
	}
    } else {
	switch $loadParam(file,mode) {
	    slice -
	    {mosaic wcs} -
	    {mosaic iraf} {
		global $varname
		if {[info exists $varname]} {
		    set varname "$varname.[$current(frame) get fits count]"
		}
	    }
	}
    }

    global $varname
    if {[info exists $varname]} {
	unset $varname
    }

    array set $varname [array get loadParam]
    switch $loadParam(load,layer) {
	mask {
	    global mask
	    set ${varname}(mask,color) $mask(color)
	    set ${varname}(mask,mark) $mask(mark)
	    set ${varname}(mask,low) $mask(low)
	    set ${varname}(mask,high) $mask(high)
	}
    }

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
    LoadUpdate
    UpdateDS9
}

proc ConvertFitsFile {} {
    foreach t {Stdin ExternalFits GzipFile BZip2File CompressFile} {
	if {[$t]} {
	    return
	}
    }
}

proc ConvertArrayFile {} {
    foreach t {Stdin GzipFile BZip2File CompressFile} {
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

    preserve::YY_FLUSH_BUFFER
    preserve::yy_scan_string [lrange $var $i end]
    preserve::yyparse
    incr i [expr $preserve::yycnt-1]
}

proc ProcessSendPreserveCmd {proc id param {sock {}} {fn {}}} {
    global parse
    set parse(proc) $proc
    set parse(id) $id

    preservesend::YY_FLUSH_BUFFER
    preservesend::yy_scan_string $param
    preservesend::yyparse
}

# Update

proc ProcessUpdateCmd {varname iname} {
    upvar $varname var
    upvar $iname i

    update::YY_FLUSH_BUFFER
    update::yy_scan_string [lrange $var $i end]
    update::yyparse
    incr i [expr $update::yycnt-1]
}

proc UpdateCmd {{which {}} {x1 {}} {y1 {}} {x2 {}} {y2 {}}} {
    global current

    if {$current(frame) == {}} {
	return
    }
    $current(frame) update $which $x1 $y1 $x2 $y2
}

proc UpdateCmdNow {{which {}} {x1 {}} {y1 {}} {x2 {}} {y2 {}}} {
    global current

    if {$current(frame) == {}} {
	return
    }
    $current(frame) update now $which $x1 $y1 $x2 $y2
}
