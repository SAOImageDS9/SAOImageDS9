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

    global parse
    set parse(sock) $sock
    set parse(fn) $fn

    mecube::YY_FLUSH_BUFFER
    mecube::yy_scan_string [lrange $var $i end]
    mecube::yyparse
    incr i [expr $mecube::yycnt-1]
}

proc MECubeCmdLoad {param} {
    global parse
    
    if {$parse(sock) != {}} {
	# xpa
	if {![LoadMECubeSocket $parse(sock) $param]} {
	    InitError xpa
	    LoadMECubeFile $param
	}
    } else {
	# comm
	if {$parse(fn) != {}} {
	    LoadMECubeAlloc $parse(fn) $param
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
