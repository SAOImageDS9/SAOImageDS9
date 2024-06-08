#  Copyright (C) 1999-2024
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc LoadHLSImageFile {fn} {
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
    set loadParam(file,mode) {hls image}
    set loadParam(load,type) mmapincr
    set loadParam(file,name) $fn

    # mask not supported
    set loadParam(load,layer) {}

    ConvertFitsFile
    ProcessLoad
}

proc LoadHLSImageAlloc {path fn} {
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
    set loadParam(file,mode) {hls image}
    set loadParam(load,type) allocgz
    set loadParam(file,name) $fn
    set loadParam(file,fn) $path

    # mask not supported
    set loadParam(load,layer) {}

    ProcessLoad
}

proc LoadHLSImageSocket {sock fn} {
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
    set loadParam(file,mode) {hls image}
    set loadParam(load,type) socketgz
    set loadParam(file,name) $fn
    set loadParam(socket,id) $sock

    # mask not supported
    set loadParam(load,layer) {}

    return [ProcessLoad 0]
}

proc SaveHLSImageFile {fn} {
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

    $current(frame) save fits hls image file "\{$fn\}"
}

proc SaveHLSImageSocket {sock} {
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

    $current(frame) save fits hls image socket $sock
}

proc ProcessHLSImageCmd {varname iname sock fn} {
    upvar $varname var
    upvar $iname i

    global parse
    set parse(sock) $sock
    set parse(fn) $fn

    hlsimage::YY_FLUSH_BUFFER
    hlsimage::yy_scan_string [lrange $var $i end]
    hlsimage::yyparse
    incr i [expr $hlsimage::yycnt-1]
}

proc HLSImageCmdLoad {param} {
    global parse

    if {$parse(sock) != {}} {
	# xpa
	if {![LoadHLSImageSocket $parse(sock) $param]} {
	    InitError xpa
	    LoadHLSImageFile $param
	}
    } else {
	# comm
	if {$parse(fn) != {}} {
	    LoadHLSImageAlloc $parse(fn) $param
	} else {
	    LoadHLSImageFile $param
	}
    }
    FinishLoad
}

proc ProcessSendHLSImageCmd {proc id param sock fn} {
    global current

    if {$current(frame) == {}} {
	return
    }

    if {$sock != {}} {
	# xpa
	SaveHLSImageSocket $sock
    } elseif {$fn != {}} {
	# comm
	SaveHLSImageFile $fn
	$proc $id {} $fn
    }
}
