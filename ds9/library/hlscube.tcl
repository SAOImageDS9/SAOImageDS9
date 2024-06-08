#  Copyright (C) 1999-2024
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc LoadHLSCubeFile {fn} {
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

    set loadParam(file,type) fits
    set loadParam(file,mode) {hls cube}
    set loadParam(load,type) mmapincr
    set loadParam(file,name) $fn

    # mask not supported
    set loadParam(load,layer) {}

    ConvertFitsFile
    ProcessLoad
}

proc LoadHLSCubeAlloc {path fn} {
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

    set loadParam(file,type) fits
    set loadParam(file,mode) {hls cube}
    set loadParam(load,type) allocgz
    set loadParam(file,name) $fn
    set loadParam(file,fn) $path

    # mask not supported
    set loadParam(load,layer) {}

    ProcessLoad
}

proc LoadHLSCubeSocket {sock fn} {
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

    set loadParam(file,type) fits
    set loadParam(file,mode) {hls cube}
    set loadParam(load,type) socketgz
    set loadParam(file,name) $fn
    set loadParam(socket,id) $sock

    # mask not supported
    set loadParam(load,layer) {}

    return [ProcessLoad 0]
}

proc SaveHLSCubeFile {fn} {
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

    $current(frame) save fits hls cube file "\{$fn\}"
}

proc SaveHLSCubeSocket {sock} {
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

    $current(frame) save fits hls cube socket $sock
}

proc ProcessHLSCubeCmd {varname iname sock fn} {
    upvar $varname var
    upvar $iname i

    global parse
    set parse(sock) $sock
    set parse(fn) $fn

    hlscube::YY_FLUSH_BUFFER
    hlscube::yy_scan_string [lrange $var $i end]
    hlscube::yyparse
    incr i [expr $hlscube::yycnt-1]
}

proc HLSCubeCmdLoad {param} {
    global parse

    if {$parse(sock) != {}} {
	# xpa
	if {![LoadHLSCubeSocket $parse(sock) $param]} {
	    InitError xpa
	    LoadHLSCubeFile $param
	}
    } else {
	# comm
	if {$parse(fn) != {}} {
	    LoadHLSCubeAlloc $parse(fn) $param
	} else {
	    LoadHLSCubeFile $param
	}
    }
    FinishLoad
}

proc ProcessSendHLSCubeCmd {proc id param sock fn} {
    global current

    if {$current(frame) == {}} {
	return
    }

    if {$sock != {}} {
	# xpa
	SaveHLSCubeSocket $sock
    } elseif {$fn != {}} {
	# comm
	SaveHLSCubeFile $fn
	$proc $id {} $fn
    }
}
