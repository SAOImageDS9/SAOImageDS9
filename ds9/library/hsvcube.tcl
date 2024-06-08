#  Copyright (C) 1999-2024
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc LoadHSVCubeFile {fn} {
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

    set loadParam(file,type) fits
    set loadParam(file,mode) {hsv cube}
    set loadParam(load,type) mmapincr
    set loadParam(file,name) $fn

    # mask not supported
    set loadParam(load,layer) {}

    ConvertFitsFile
    ProcessLoad
}

proc LoadHSVCubeAlloc {path fn} {
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

    set loadParam(file,type) fits
    set loadParam(file,mode) {hsv cube}
    set loadParam(load,type) allocgz
    set loadParam(file,name) $fn
    set loadParam(file,fn) $path

    # mask not supported
    set loadParam(load,layer) {}

    ProcessLoad
}

proc LoadHSVCubeSocket {sock fn} {
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

    set loadParam(file,type) fits
    set loadParam(file,mode) {hsv cube}
    set loadParam(load,type) socketgz
    set loadParam(file,name) $fn
    set loadParam(socket,id) $sock

    # mask not supported
    set loadParam(load,layer) {}

    return [ProcessLoad 0]
}

proc SaveHSVCubeFile {fn} {
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

    $current(frame) save fits hsv cube file "\{$fn\}"
}

proc SaveHSVCubeSocket {sock} {
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

    $current(frame) save fits hsv cube socket $sock
}

proc ProcessHSVCubeCmd {varname iname sock fn} {
    upvar $varname var
    upvar $iname i

    global parse
    set parse(sock) $sock
    set parse(fn) $fn

    hsvcube::YY_FLUSH_BUFFER
    hsvcube::yy_scan_string [lrange $var $i end]
    hsvcube::yyparse
    incr i [expr $hsvcube::yycnt-1]
}

proc HSVCubeCmdLoad {param} {
    global parse

    if {$parse(sock) != {}} {
	# xpa
	if {![LoadHSVCubeSocket $parse(sock) $param]} {
	    InitError xpa
	    LoadHSVCubeFile $param
	}
    } else {
	# comm
	if {$parse(fn) != {}} {
	    LoadHSVCubeAlloc $parse(fn) $param
	} else {
	    LoadHSVCubeFile $param
	}
    }
    FinishLoad
}

proc ProcessSendHSVCubeCmd {proc id param sock fn} {
    global current

    if {$current(frame) == {}} {
	return
    }

    if {$sock != {}} {
	# xpa
	SaveHSVCubeSocket $sock
    } elseif {$fn != {}} {
	# comm
	SaveHSVCubeFile $fn
	$proc $id {} $fn
    }
}
