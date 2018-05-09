#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc LoadMECubeFile {fn} {
    global loadParam

    set loadParam(file,type) fits
    set loadParam(file,mode) {ext cube}
    set loadParam(load,type) mmapincr
    set loadParam(file,name) $fn

    # mask not supported
    set loadParam(load,layer) {}

    ConvertFitsFile
    ProcessLoad
}

proc LoadMECubeAlloc {path fn} {
    global loadParam

    set loadParam(file,type) fits
    set loadParam(file,mode) {ext cube}
    set loadParam(load,type) allocgz
    set loadParam(file,name) $fn
    set loadParam(file,fn) $path

    # mask not supported
    set loadParam(load,layer) {}

    ProcessLoad
}

proc LoadMECubeSocket {sock fn} {
    global loadParam

    set loadParam(file,type) fits
    set loadParam(file,mode) {ext cube}
    set loadParam(load,type) socketgz
    set loadParam(file,name) $fn
    set loadParam(socket,id) $sock

    # mask not supported
    set loadParam(load,layer) {}

    return [ProcessLoad 0]
}

proc SaveMECubeFile {fn} {
    global current

    if {$fn == {} || $current(frame) == {}} {
	return
    }

    if {![$current(frame) has fits]} {
	return
    }

    $current(frame) save fits ext cube file "\{$fn\}"
}

proc SaveMECubeSocket {sock} {
    global current

    if {$current(frame) == {}} {
	return
    }

    if {![$current(frame) has fits]} {
	return
    }

    $current(frame) save fits ext cube socket $sock
}

proc ProcessMECubeCmd {varname iname sock fn} {
    upvar $varname var
    upvar $iname i

    global debug
    if {$debug(tcl,parser)} {
	global mecube
	set mecube(load,sock) $sock
	set mecube(load,fn) $fn

	mecube::YY_FLUSH_BUFFER
	mecube::yy_scan_string [lrange $var $i end]
	mecube::yyparse
	incr i [expr $mecube::yycnt-1]
    } else {

    switch -- [string tolower [lindex $var $i]] {
	new {
	    incr i
	    CreateFrame
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
	if {![LoadMECubeSocket $sock $param]} {
	    InitError xpa
	    LoadMECubeFile $param
	}
    } else {
	# comm
	if {$fn != {}} {
	    LoadMECubeAlloc $fn $param
	} else {
	    LoadMECubeFile $param
	}
    }
    FinishLoad
}
}

proc MECubeCmdLoad {param} {
    global mecube
    
    if {$mecube(load,sock) != {}} {
	# xpa
	if {![LoadMECubeSocket $mecube(load,sock) $param]} {
	    InitError xpa
	    LoadMECubeFile $param
	}
    } else {
	# comm
	if {$mecube(load,fn) != {}} {
	    LoadMECubeAlloc $mecube(load,fn) $param
	} else {
	    LoadMECubeFile $param
	}
    }
    FinishLoad
}

proc ProcessSendMECubeCmd {proc id param sock fn} {
    global current

    if {$current(frame) == {}} {
	return
    }

    if {$sock != {}} {
	# xpa
	SaveMECubeSocket $sock
    } elseif {$fn != {}} {
	# comm
	SaveMECubeFile $fn
	$proc $id {} $fn
    }
}
