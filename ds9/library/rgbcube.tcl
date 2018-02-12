#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc LoadRGBCubeFile {fn} {
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
    set loadParam(load,type) mmapincr
    set loadParam(file,name) $fn

    # mask not supported
    set loadParam(load,layer) {}

    ConvertFitsFile
    ProcessLoad
}

proc LoadRGBCubeAlloc {path fn} {
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
    set loadParam(load,type) allocgz
    set loadParam(file,name) $fn
    set loadParam(file,fn) $path

    # mask not supported
    set loadParam(load,layer) {}

    ProcessLoad
}

proc LoadRGBCubeSocket {sock fn} {
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
    set loadParam(load,type) socketgz
    set loadParam(file,name) $fn
    set loadParam(socket,id) $sock

    # mask not supported
    set loadParam(load,layer) {}

    return [ProcessLoad 0]
}

proc SaveRGBCubeFile {fn} {
    global current

    if {$fn == {} || $current(frame) == {}} {
	return
    }

    if {![$current(frame) has fits]} {
	return
    }

    $current(frame) save fits rgb cube file "\{$fn\}"
}

proc SaveRGBCubeSocket {sock} {
    global current

    if {$current(frame) == {}} {
	return
    }

    if {![$current(frame) has fits]} {
	return
    }

    $current(frame) save fits rgb cube socket $sock
}

proc ProcessRGBCubeCmd {varname iname sock fn} {
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
	if {![LoadRGBCubeSocket $sock $param]} {
	    InitError xpa
	    LoadRGBCubeFile $param
	}
    } else {
	# comm
	if {$fn != {}} {
	    LoadRGBCubeAlloc $fn $param
	} else {
	    LoadRGBCubeFile $param
	}
    }
    FinishLoad
}

proc ProcessSendRGBCubeCmd {proc id param sock fn} {
    global current

    if {$current(frame) == {}} {
	return
    }

    if {$sock != {}} {
	# xpa
	SaveRGBCubeSocket $sock
    } elseif {$fn != {}} {
	# comm
	SaveRGBCubeFile $fn
	$proc $id {} $fn
    }
}
