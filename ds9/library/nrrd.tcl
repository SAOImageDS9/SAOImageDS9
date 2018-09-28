#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc ImportNRRDFile {fn layer} {
    global loadParam

    set loadParam(file,type) nrrd
    set loadParam(file,mode) {}
    set loadParam(load,layer) $layer

    # find stdin
    if {[string range $fn 0 4] == "stdin" || 
	[string range $fn 0 4] == "STDIN" ||
	[string range $fn 0 0] == "-"} {
	set loadParam(load,type) alloc
	set loadParam(file,name) stdin
	set loadParam(file,fn) $loadParam(file,name)
    } else {
	set loadParam(load,type) mmap
	set loadParam(file,name) $fn
    }

    ProcessLoad
}

proc ImportNRRDAlloc {path fn layer} {
    global loadParam

    set loadParam(file,type) nrrd
    set loadParam(file,mode) {}
    set loadParam(load,type) alloc
    set loadParam(file,name) $fn
    set loadParam(file,fn) $path
    set loadParam(load,layer) $layer

    ProcessLoad
}

proc ImportNRRDSocket {sock fn layer} {
    global loadParam

    set loadParam(file,type) nrrd
    set loadParam(file,mode) {}
    set loadParam(load,type) socket
    set loadParam(file,name) $fn
    set loadParam(socket,id) $sock
    set loadParam(load,layer) $layer

    return [ProcessLoad 0]
}

proc ExportNRRDFile {fn opt} {
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

    $current(frame) save nrrd file "\{$fn\}" $opt
}

proc ExportNRRDSocket {sock opt} {
    global current

    if {$current(frame) == {}} {
	return
    }
    if {![$current(frame) has fits]} {
	return
    }

    $current(frame) save nrrd socket $sock $opt
}

proc ProcessNRRDCmd {varname iname sock fn} {
    upvar $varname var
    upvar $iname i

    global parse
    set parse(sock) $sock
    set parse(fn) $fn

    nrrd::YY_FLUSH_BUFFER
    nrrd::yy_scan_string [lrange $var $i end]
    nrrd::yyparse
    incr i [expr $nrrd::yycnt-1]
}

proc NRRDCmdLoad {param layer} {
    global parse
    
    if {$parse(sock) != {}} {
	# xpa
	if {![ImportNRRDSocket $parse(sock) $param $layer]} {
	    InitError xpa
	    ImportNRRDFile $param $layer
	}
    } else {
	# comm
	if {$parse(fn) != {}} {
	    ImportNRRDAlloc $parse(fn) $param $layer
	} else {
	    ImportNRRDFile $param $layer
	}
    }
    FinishLoad
}

proc ProcessSendNRRDCmd {proc id param sock fn} {
    global current

    if {$current(frame) == {}} {
	return
    }

    set opt [string tolower [lindex $param 0]]
    if {$sock != {}} {
	# xpa
	ExportNRRDSocket $sock $opt
    } elseif {$fn != {}} {
	# comm
	ExportNRRDFile $fn $opt
	$proc $id {} $fn
    }
}
