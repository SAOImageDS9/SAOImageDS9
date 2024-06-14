#  Copyright (C) 1999-2024
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc ImportHSVArrayFile {fn} {
    global loadParam
    global current

    switch -- [$current(frame) get type] {
	base -
	rgb -
	hls -
	3d {
	    Error [msgcat::mc {Unable to load HSV image into a non-hsv frame}]
	    return
	}
	hsv {}
    }

    set loadParam(file,type) array
    set loadParam(file,mode) {hsv cube}
    set loadParam(load,type) mmapincr

    # if no zdim is present, insert one
    set exp {.*\[.*zdim[ ]*=[ ]*[0-9]+}
    if {![regexp $exp $fn]} {
	set i [string last "\]" $fn]
        set fn "[string range $fn 0 [expr $i-1]],zdim=3\]"
    }
    set loadParam(file,name) $fn

    # mask not supported
    set loadParam(load,layer) {}

    # check for stdin/gz
    ConvertArrayFile
    ProcessLoad
}

proc ImportHSVArrayAlloc {path fn} {
    global loadParam
    global current

    switch -- [$current(frame) get type] {
	base -
	rgb -
	hls -
	3d {
	    Error [msgcat::mc {Unable to load HSV image into a non-hsv frame}]
	    return
	}
	hsv {}
    }

    set loadParam(file,type) array
    set loadParam(file,mode) {hsv cube}
    set loadParam(load,type) allocgz

    # if no zdim is present, insert one
    set exp {.*\[.*zdim[ ]*=[ ]*[0-9]+}
    if {![regexp $exp $fn]} {
	set i [string last "\]" $fn]
        set fn "[string range $fn 0 [expr $i-1]],zdim=3\]"
    }
    if {![regexp $exp $path]} {
	set i [string last "\]" $path]
        set path "[string range $path 0 [expr $i-1]],zdim=3\]"
    }
    set loadParam(file,name) $fn
    set loadParam(file,fn) $path

    # mask not supported
    set loadParam(load,layer) {}

    ProcessLoad
}

proc ImportHSVArraySocket {sock fn} {
    global loadParam
    global current

    switch -- [$current(frame) get type] {
	base -
	rgb -
	hls -
	3d {
	    Error [msgcat::mc {Unable to load HSV image into a non-hsv frame}]
	    return
	}
	hsv {}
    }

    set loadParam(file,type) array
    set loadParam(file,mode) {hsv cube}
    set loadParam(load,type) socketgz
    # if no zdim is present, insert one
    set exp {.*\[.*zdim[ ]*=[ ]*[0-9]+}
    if {![regexp $exp $fn]} {
	set i [string last "\]" $fn]
        set fn "[string range $fn 0 [expr $i-1]],zdim=3\]"
    }
    set loadParam(file,name) $fn
    set loadParam(socket,id) $sock

    # mask not supported
    set loadParam(load,layer) {}

    return [ProcessLoad 0]
}

proc ExportHSVArrayFile {fn opt} {
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

    switch -- [$current(frame) get type] {
	base -
	rgb -
	hls -
	3d {
	    Error [msgcat::mc {Unable to save HSV image from a non-hsv frame}]
	    return
	}
	hsv {}
    }

    $current(frame) save array hsv cube file "\{$fn\}" $opt
}

proc ExportHSVArraySocket {sock opt} {
    global current

    if {$current(frame) == {}} {
	return
    }
    if {![$current(frame) has fits]} {
	return
    }

    switch -- [$current(frame) get type] {
	base -
	rgb -
	hls -
	3d {
	    Error [msgcat::mc {Unable to save HSV image from a non-hsv frame}]
	    return
	}
	hsv {}
    }

    $current(frame) save array hsv cube socket $sock $opt
}

proc ProcessHSVArrayCmd {varname iname sock fn} {
    upvar $varname var
    upvar $iname i

    global parse
    set parse(sock) $sock
    set parse(fn) $fn

    hsvarray::YY_FLUSH_BUFFER
    hsvarray::yy_scan_string [lrange $var $i end]
    hsvarray::yyparse
    incr i [expr $hsvarray::yycnt-1]
}

proc HSVArrayCmdLoad {param} {
    global parse

    if {$parse(sock) != {}} {
	# xpa
	if {![ImportHSVArraySocket $parse(sock) $param]} {
	    InitError xpa
	    ImportHSVArrayFile $param
	}
    } else {
	# comm
	if {$parse(fn) != {}} {
	    ImportHSVArrayAlloc $parse(fn) $param
	} else {
	    ImportHSVArrayFile $param
	}
    }
    FinishLoad
}

proc ProcessSendHSVArrayCmd {proc id param sock fn} {
    global current

    if {$current(frame) == {}} {
	return
    }

    set opt [string tolower [lindex $param 0]]
    if {$sock != {}} {
	# xpa
	ExportHSVArraySocket $sock $opt
    } elseif {$fn != {}} {
	# comm
	ExportHSVArrayFile $fn $opt
	$proc $id {} $fn
    }
}


