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

    $proc $id "[HiPSFrameName $current(frame)]\n"
}
