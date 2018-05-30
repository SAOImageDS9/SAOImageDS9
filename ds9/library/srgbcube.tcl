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

    srgbcube::YY_FLUSH_BUFFER
    srgbcube::yy_scan_string [lrange $var $i end]
    srgbcube::yyparse
    incr i [expr $srgbcube::yycnt-1]
}
