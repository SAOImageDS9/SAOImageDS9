#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc ImportArrayFile {fn layer} {
    global loadParam

    set loadParam(file,type) array
    set loadParam(file,mode) {}
    set loadParam(load,type) mmapincr
    set loadParam(file,name) $fn
    set loadParam(load,layer) $layer

    # check for stdin/gz
    ConvertArrayFile
    ProcessLoad
}

proc ImportArrayAlloc {path fn layer} {
    global loadParam

    set loadParam(file,type) array
    set loadParam(file,mode) {}
    set loadParam(load,type) allocgz
    set loadParam(file,name) $fn
    set loadParam(file,fn) $path
    set loadParam(load,layer) $layer

    ProcessLoad
}

proc ImportArraySocket {sock fn layer} {
    global loadParam

    set loadParam(file,type) array
    set loadParam(file,mode) {}
    set loadParam(load,type) socketgz
    set loadParam(file,name) $fn
    set loadParam(socket,id) $sock
    set loadParam(load,layer) $layer

    return [ProcessLoad 0]
}

proc ExportArrayFile {fn opt} {
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

    $current(frame) save array file "\{$fn\}" $opt
}

proc ExportArraySocket {sock opt} {
    global current

    if {$current(frame) == {}} {
	return
    }
    if {![$current(frame) has fits]} {
	return
    }

    $current(frame) save array socket $sock $opt
}

proc ProcessArrayCmd {varname iname sock fn} {
    upvar $varname var
    upvar $iname i

    global parse
    set parse(sock) $sock
    set parse(fn) $fn

    array::YY_FLUSH_BUFFER
    array::yy_scan_string [lrange $var $i end]
    array::yyparse
    incr i [expr $array::yycnt-1]
}

proc ArrayCmdLoad {param layer} {
    global parse

    if {$parse(sock) != {}} {
	# xpa
	if {![ImportArraySocket $parse(sock) $param $layer]} {
	    InitError xpa
	    ImportArrayFile $param $layer
	}
    } else {
	# comm
	if {$parse(fn) != {}} {
	    ImportArrayAlloc $parse(fn) $param $layer
	} else {
	    ImportArrayFile $param $layer
	}
    }
    FinishLoad
}

proc ProcessSendArrayCmd {proc id param sock fn} {
    global current

    if {$current(frame) == {}} {
	return
    }

    set opt [string tolower [lindex $param 0]]
    if {$sock != {}} {
	# xpa
	ExportArraySocket $sock $opt
    } elseif {$fn != {}} {
	# comm
	ExportArrayFile $fn $opt
	$proc $id {} $fn
    }
}
