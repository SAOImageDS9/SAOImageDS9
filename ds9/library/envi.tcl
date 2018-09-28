#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc ImportENVIFile {hdr fn} {
    global loadParam

    set loadParam(file,type) envi
    set loadParam(file,mode) {}
    set loadParam(load,type) smmap
    set loadParam(file,name) $fn
    set loadParam(file,header) $hdr
    set loadParam(load,layer) {}

    ProcessLoad
}

proc ExportENVIFile {hdr fn opt} {
    global current

    if {$fn == {}} {
	return
    }
    if {$current(frame) == {}} {
	return
    }
    if {![$current(frame) has fits]} {
	return
    }

    $current(frame) save envi file "\{$hdr\}" "\{$fn\}" $opt
}

proc ProcessENVICmd {varname iname sock fn} {
    upvar $varname var
    upvar $iname i

	envi::YY_FLUSH_BUFFER
	envi::yy_scan_string [lrange $var $i end]
	envi::yyparse
	incr i [expr $envi::yycnt-1]
}

proc FindENVIDataFile {fn} {
    set rn [file rootname $fn]
    foreach ff {{bil} {bip} {bsq} {raw} {cube}} {
	set fn2 "$rn.$ff"
	if {[file exists $fn2]} {
	    return $fn2
	}
    }
    return {}
}
