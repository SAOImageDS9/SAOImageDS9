#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc LoadRGBImageFile {fn} {
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
    set loadParam(file,mode) {rgb image}
    set loadParam(load,type) mmapincr
    set loadParam(file,name) $fn

    # mask not supported
    set loadParam(load,layer) {}

    ConvertFitsFile
    ProcessLoad
}

proc LoadRGBImageAlloc {path fn} {
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
    set loadParam(file,mode) {rgb image}
    set loadParam(load,type) allocgz
    set loadParam(file,name) $fn
    set loadParam(file,fn) $path

    # mask not supported
    set loadParam(load,layer) {}

    ProcessLoad
}

proc LoadRGBImageSocket {sock fn} {
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
    set loadParam(file,mode) {rgb image}
    set loadParam(load,type) socketgz
    set loadParam(file,name) $fn
    set loadParam(socket,id) $sock

    # mask not supported
    set loadParam(load,layer) {}

    return [ProcessLoad 0]
}

proc SaveRGBImageFile {fn} {
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
	3d {
	    Error [msgcat::mc {Unable to save RGB image from a non-rgb frame}]
	    return
	}
	rgb {}
    }

    $current(frame) save fits rgb image file "\{$fn\}"
}

proc SaveRGBImageSocket {sock} {
    global current

    if {$current(frame) == {}} {
	return
    }
    if {![$current(frame) has fits]} {
	return
    }

    switch -- [$current(frame) get type] {
	base -
	3d {
	    Error [msgcat::mc {Unable to save RGB image from a non-rgb frame}]
	    return
	}
	rgb {}
    }

    $current(frame) save fits rgb image socket $sock
}

proc ProcessRGBImageCmd {varname iname sock fn} {
    upvar $varname var
    upvar $iname i

    global parse
    set parse(sock) $sock
    set parse(fn) $fn

    rgbimage::YY_FLUSH_BUFFER
    rgbimage::yy_scan_string [lrange $var $i end]
    rgbimage::yyparse
    incr i [expr $rgbimage::yycnt-1]
}

proc RGBImageCmdLoad {param} {
    global parse

    if {$parse(sock) != {}} {
	# xpa
	if {![LoadRGBImageSocket $parse(sock) $param]} {
	    InitError xpa
	    LoadRGBImageFile $param
	}
    } else {
	# comm
	if {$parse(fn) != {}} {
	    LoadRGBImageAlloc $parse(fn) $param
	} else {
	    LoadRGBImageFile $param
	}
    }
    FinishLoad
}

proc ProcessSendRGBImageCmd {proc id param sock fn} {
    global current

    if {$current(frame) == {}} {
	return
    }

    if {$sock != {}} {
	# xpa
	SaveRGBImageSocket $sock
    } elseif {$fn != {}} {
	# comm
	SaveRGBImageFile $fn
	$proc $id {} $fn
    }
}
