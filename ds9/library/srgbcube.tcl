#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc LoadSRGBCubeFile {hdr fn} {
    global loadParam
    global current

    switch -- [$current(frame) get type] {
	base -
	3d {
	    Error [msgcat::mc {Unable to load RGB image into a non-rgb frame}]
	    return
	}
	rgb {}
    }

    set loadParam(file,type) fits
    set loadParam(file,mode) {rgb cube}
    set loadParam(load,type) smmap
    set loadParam(file,name) $fn
    set loadParam(file,header) $hdr

    # mask not supported
    set loadParam(load,layer) {}

    ProcessLoad
}

proc ProcessSRGBCubeCmd {varname iname sock fn} {
    upvar $varname var
    upvar $iname i

    switch -- [string tolower [lindex $var $i]] {
	new {
	    incr i
	    CreateRGBFrame
	}
	mask {
	    incr i
	    # not supported
	}
	slice {
	    incr i
	    # not supported
	}
    }

    if {$sock != {}} {
	# xpa
	if {0} {
	    # not supported
	} else {
	    LoadSRGBCubeFile [lindex $var $i] [lindex $var [expr $i+1]]
	}
    } else {
	# comm
	if {0} {
	    # not supported
	} else {
	    LoadSRGBCubeFile [lindex $var $i] [lindex $var [expr $i+1]]
	}
    }
    FinishLoad
}
