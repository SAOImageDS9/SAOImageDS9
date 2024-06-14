#  Copyright (C) 1999-2024
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc LoadHSVImageFile {fn} {
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
    set loadParam(file,mode) {hsv image}
    set loadParam(load,type) mmapincr
    set loadParam(file,name) $fn

    # mask not supported
    set loadParam(load,layer) {}

    ConvertFitsFile
    ProcessLoad
}

proc LoadHSVImageAlloc {path fn} {
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
    set loadParam(file,mode) {hsv image}
    set loadParam(load,type) allocgz
    set loadParam(file,name) $fn
    set loadParam(file,fn) $path

    # mask not supported
    set loadParam(load,layer) {}

    ProcessLoad
}

proc LoadHSVImageSocket {sock fn} {
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
    set loadParam(file,mode) {hsv image}
    set loadParam(load,type) socketgz
    set loadParam(file,name) $fn
    set loadParam(socket,id) $sock

    # mask not supported
    set loadParam(load,layer) {}

    return [ProcessLoad 0]
}

proc SaveHSVImageFile {fn} {
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

    $current(frame) save fits hsv image file "\{$fn\}"
}

proc SaveHSVImageSocket {sock} {
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

    $current(frame) save fits hsv image socket $sock
}

proc ProcessHSVImageCmd {varname iname sock fn} {
    upvar $varname var
    upvar $iname i

    global parse
    set parse(sock) $sock
    set parse(fn) $fn

    hsvimage::YY_FLUSH_BUFFER
    hsvimage::yy_scan_string [lrange $var $i end]
    hsvimage::yyparse
    incr i [expr $hsvimage::yycnt-1]
}

proc HSVImageCmdLoad {param} {
    global parse

    if {$parse(sock) != {}} {
	# xpa
	if {![LoadHSVImageSocket $parse(sock) $param]} {
	    InitError xpa
	    LoadHSVImageFile $param
	}
    } else {
	# comm
	if {$parse(fn) != {}} {
	    LoadHSVImageAlloc $parse(fn) $param
	} else {
	    LoadHSVImageFile $param
	}
    }
    FinishLoad
}

proc ProcessSendHSVImageCmd {proc id param sock fn} {
    global current

    if {$current(frame) == {}} {
	return
    }

    if {$sock != {}} {
	# xpa
	SaveHSVImageSocket $sock
    } elseif {$fn != {}} {
	# comm
	SaveHSVImageFile $fn
	$proc $id {} $fn
    }
}
