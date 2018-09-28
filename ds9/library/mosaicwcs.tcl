#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc LoadMosaicWCSFile {fn layer sys} {
    global loadParam

    set loadParam(file,type) fits
    set loadParam(file,mode) [list mosaic $sys]
    set loadParam(load,type) mmapincr
    set loadParam(file,name) $fn
    set loadParam(load,layer) $layer

    ConvertFitsFile
    ProcessLoad
}

proc LoadMosaicWCSAlloc {path fn layer sys} {
    global loadParam

    set loadParam(file,type) fits
    set loadParam(file,mode) [list mosaic $sys]
    set loadParam(load,type) allocgz
    set loadParam(file,name) $fn
    set loadParam(file,fn) $path
    set loadParam(load,layer) $layer

    ProcessLoad
}

proc LoadMosaicWCSSocket {sock fn layer sys} {
    global loadParam

    set loadParam(file,type) fits
    set loadParam(file,mode) [list mosaic $sys]
    set loadParam(load,type) socketgz
    set loadParam(file,name) $fn
    set loadParam(socket,id) $sock
    set loadParam(load,layer) $layer

    return [ProcessLoad 0]
}

proc SaveMosaicWCSFile {fn opt} {
    global current

    if {$fn == {} || $current(frame) == {}} {
	return
    }
    if {![$current(frame) has fits]} {
	return
    }
 
    if {$opt == {}} {
	set opt 1
    }

    $current(frame) save fits mosaic file "\{$fn\}" $opt
}

proc SaveMosaicWCSSocket {sock opt} {
    global current

    if {$current(frame) == {}} {
	return
    }
    if {![$current(frame) has fits]} {
	return
    }

    if {$opt == {}} {
	set opt 1
    }

    $current(frame) save fits mosaic socket $sock $opt
}

proc ProcessMosaicWCSCmd {varname iname sock fn} {
    upvar $varname var
    upvar $iname i

    global parse
    set parse(sock) $sock
    set parse(fn) $fn

    mosaicwcs::YY_FLUSH_BUFFER
    mosaicwcs::yy_scan_string [lrange $var $i end]
    mosaicwcs::yyparse
    incr i [expr $mosaicwcs::yycnt-1]
}

proc MosaicWCSCmdLoad {param layer sys} {
    global parse

    if {$parse(sock) != {}} {
	# xpa
	if {![LoadMosaicWCSSocket $parse(sock) $param $layer $sys]} {
	    InitError xpa
	    LoadMosaicWCSFile $param $layer $sys
	}
    } else {
	# comm
	if {$parse(fn) != {}} {
	    LoadMosaicWCSAlloc $parse(fn) $param $layer $sys
	} else {
	    LoadMosaicWCSFile $param $layer $sys
	}
    }
    FinishLoad
}

proc ProcessSendMosaicWCSCmd {proc id param sock fn} {
    global current

    if {$current(frame) == {}} {
	return
    }

    set opt [lindex $param 0]
    if {$sock != {}} {
	# xpa
	SaveMosaicWCSSocket $sock $opt
    } elseif {$fn != {}} {
	# comm
	SaveMosaicWCSFile $fn $opt
	$proc $id {} $fn
    }
}
