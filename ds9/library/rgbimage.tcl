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

    if {$fn == {} || $current(frame) == {}} {
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

    if {![$current(frame) has fits]} {
	return
    }

    $current(frame) save fits rgb image file "\{$fn\}"
}

proc SaveRGBImageSocket {sock} {
    global current

    if {$current(frame) == {}} {
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

    if {![$current(frame) has fits]} {
	return
    }

    $current(frame) save fits rgb image socket $sock
}

proc ProcessRGBImageCmd {varname iname sock fn} {
    upvar $varname var
    upvar $iname i

    switch -- [string tolower [lindex $var $i]] {
	new {
	    incr i
	    CreateRGBFrame
	}
	mask {
	    incr i
	    # not supported
	}
	slice {
	    incr i
	    # not supported
	}
    }
    set param [lindex $var $i]

    if {$sock != {}} {
	# xpa
	if {![LoadRGBImageSocket $sock $param]} {
	    InitError xpa
	    LoadRGBImageFile $param
	}
    } else {
	# comm
	if {$fn != {}} {
	    LoadRGBImageAlloc $fn $param
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
