#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc LoadMosaicIRAFFile {fn layer} {
    global loadParam

    set loadParam(file,type) fits
    set loadParam(file,mode) {mosaic iraf}
    set loadParam(load,type) mmapincr
    set loadParam(file,name) $fn
    set loadParam(load,layer) $layer

    ConvertFitsFile
    ProcessLoad
}

proc LoadMosaicIRAFAlloc {path fn layer} {
    global loadParam

    set loadParam(file,type) fits
    set loadParam(file,mode) {mosaic iraf}
    set loadParam(load,type) allocgz
    set loadParam(file,name) $fn
    set loadParam(file,fn) $path
    set loadParam(load,layer) $layer

    ProcessLoad
}

proc LoadMosaicIRAFSocket {sock fn layer} {
    global loadParam

    set loadParam(file,type) fits
    set loadParam(file,mode) {mosaic iraf}
    set loadParam(load,type) socketgz
    set loadParam(file,name) $fn
    set loadParam(socket,id) $sock
    set loadParam(load,layer) $layer

    return [ProcessLoad 0]
}

proc ProcessMosaicIRAFCmd {varname iname sock fn} {
    upvar $varname var
    upvar $iname i

    global parse
    set parse(sock) $sock
    set parse(fn) $fn

    mosaiciraf::YY_FLUSH_BUFFER
    mosaiciraf::yy_scan_string [lrange $var $i end]
    mosaiciraf::yyparse
    incr i [expr $mosaiciraf::yycnt-1]
}

proc MosaicIRAFCmdLoad {param layer} {
    global parse

    if {$parse(sock) != {}} {
	# xpa
	if {![LoadMosaicIRAFSocket $parse(sock) $param $layer]} {
	    InitError xpa
	    LoadMosaicIRAFFile $param $layer
	}
    } else {
	# comm
	if {$parse(fn) != {}} {
	    LoadMosaicIRAFAlloc $parse(fn) $param $layer
	} else {
	    LoadMosaicIRAFFile $param $layer
	}
    }
    FinishLoad
}
