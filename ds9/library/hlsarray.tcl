#  Copyright (C) 1999-2024
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc ImportHLSArrayFile {fn} {
    global loadParam
    global current

    switch -- [$current(frame) get type] {
	base -
	rgb -
	hsv -
	3d {
	    Error [msgcat::mc {Unable to load HLS image into a non-hls frame}]
	    return
	}
	hls {}
    }

    set loadParam(file,type) array
    set loadParam(file,mode) {hls cube}
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

proc ImportHLSArrayAlloc {path fn} {
    global loadParam
    global current

    switch -- [$current(frame) get type] {
	base -
	rgb -
	hsv -
	3d {
	    Error [msgcat::mc {Unable to load HLS image into a non-hls frame}]
	    return
	}
	hls {}
    }

    set loadParam(file,type) array
    set loadParam(file,mode) {hls cube}
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

proc ImportHLSArraySocket {sock fn} {
    global loadParam
    global current

    switch -- [$current(frame) get type] {
	base -
	rgb -
	hsv -
	3d {
	    Error [msgcat::mc {Unable to load HLS image into a non-hls frame}]
	    return
	}
	hls {}
    }

    set loadParam(file,type) array
    set loadParam(file,mode) {hls cube}
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

proc ExportHLSArrayFile {fn opt} {
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
	hsv -
	3d {
	    Error [msgcat::mc {Unable to save HLS image from a non-hls frame}]
	    return
	}
	hls {}
    }

    $current(frame) save array hls cube file "\{$fn\}" $opt
}

proc ExportHLSArraySocket {sock opt} {
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
	hsv -
	3d {
	    Error [msgcat::mc {Unable to save HLS image from a non-hls frame}]
	    return
	}
	hls {}
    }

    $current(frame) save array hls cube socket $sock $opt
}

proc ProcessHLSArrayCmd {varname iname sock fn} {
    upvar $varname var
    upvar $iname i

    global parse
    set parse(sock) $sock
    set parse(fn) $fn

    hlsarray::YY_FLUSH_BUFFER
    hlsarray::yy_scan_string [lrange $var $i end]
    hlsarray::yyparse
    incr i [expr $hlsarray::yycnt-1]
}

proc HLSArrayCmdLoad {param} {
    global parse

    if {$parse(sock) != {}} {
	# xpa
	if {![ImportHLSArraySocket $parse(sock) $param]} {
	    InitError xpa
	    ImportHLSArrayFile $param
	}
    } else {
	# comm
	if {$parse(fn) != {}} {
	    ImportHLSArrayAlloc $parse(fn) $param
	} else {
	    ImportHLSArrayFile $param
	}
    }
    FinishLoad
}

proc ProcessSendHLSArrayCmd {proc id param sock fn} {
    global current

    if {$current(frame) == {}} {
	return
    }

    set opt [string tolower [lindex $param 0]]
    if {$sock != {}} {
	# xpa
	ExportHLSArraySocket $sock $opt
    } elseif {$fn != {}} {
	# comm
	ExportHLSArrayFile $fn $opt
	$proc $id {} $fn
    }
}


