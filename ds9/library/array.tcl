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

    if {$fn == {} || $current(frame) == {}} {
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

    global debug
    if {$debug(tcl,parser)} {
	global array
	set array(load,sock) $sock
	set array(load,fn) $fn
	set array(load,layer) {}

	array::YY_FLUSH_BUFFER
	array::yy_scan_string [lrange $var $i end]
	array::yyparse
	incr i [expr $array::yycnt-1]
    } else {

    if {[ProcessArrayBackwardCmd $varname $iname $sock $fn]} {
	return
    }

    global loadParam
    global current

    set layer {}

    switch -- [string tolower [lindex $var $i]] {
	new {
	    incr i
	    CreateFrame
	}
	mask {
	    incr i
	    set layer mask
	}
	slice {
	    incr i
	    # not suppported
	}
    }
    set param [lindex $var $i]

    if {$sock != {}} {
	# xpa
	if {![ImportArraySocket $sock $param $layer]} {
	    InitError xpa
	    ImportArrayFile $param $layer
	}
    } else {
	# comm
	if {$fn != {}} {
	    ImportArrayAlloc $fn $param $layer
	} else {
	    ImportArrayFile $param $layer
	}
    }
    FinishLoad
}
}

proc ArrayCmdSet {which value} {
    global array

    set array($which) $value
}

proc ArrayCmdLoad {param} {
    global array

    if {$array(load,sock) != {}} {
	# xpa
	if {![ImportArraySocket $array(load,sock) $param $array(load,layer)]} {
	    InitError xpa
	    ImportArrayFile $param $array(load,layer)
	}
    } else {
	# comm
	if {$array(load,fn) != {}} {
	    ImportArrayAlloc $array(load,fn) $param $array(load,layer)
	} else {
	    ImportArrayFile $param $array(load,layer)
	}
    }
    FinishLoad
}

proc ArrayCmdLoadRGB {param} {
    global array

    if {$array(load,sock) != {}} {
	# xpa
	if {![ImportRGBArraySocket $array(load,sock) $param]} {
	    InitError xpa
	    ImportRGBArrayFile $param
	}
    } else {
	# comm
	if {$array(load,fn) != {}} {
	    ImportRGBArrayAlloc $array(load,fn) $param
	} else {
	    ImportRGBArrayFile $param
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

# backward compatibility
proc ProcessArrayBackwardCmd {varname iname sock fn} {
    upvar 2 $varname var
    upvar 2 $iname i

    set vvar $var
    set ii $i

    switch -- [string tolower [lindex $var $i]] {
	rgb {
	    set vvar [lreplace $var 0 0]
	    ProcessRGBArrayCmd vvar ii $sock $fn
	    return 1
	}
	new {
	    switch -- [string tolower [lindex $var [expr $i+1]]] {
		rgb {
		    set vvar [lreplace $var 1 1]
		    ProcessRGBArrayCmd vvar ii $sock $fn
		    return 1
		}
	    }
	}
    }

    return 0
}

