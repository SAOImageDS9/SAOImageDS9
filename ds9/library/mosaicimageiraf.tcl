#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc LoadMosaicImageIRAFFile {fn layer} {
    global loadParam

    set loadParam(file,type) fits
    set loadParam(file,mode) {mosaic image iraf}
    set loadParam(load,type) mmapincr
    set loadParam(file,name) $fn
    set loadParam(load,layer) $layer

    ConvertFitsFile
    ProcessLoad
}

proc LoadMosaicImageIRAFAlloc {path fn layer} {
    global loadParam

    set loadParam(file,type) fits
    set loadParam(file,mode) {mosaic image iraf}
    set loadParam(load,type) allocgz
    set loadParam(file,name) $fn
    set loadParam(file,fn) $path
    set loadParam(load,layer) $layer

    ProcessLoad
}

proc LoadMosaicImageIRAFSocket {sock fn layer} {
    global loadParam

    set loadParam(file,type) fits
    set loadParam(file,mode) {mosaic image iraf}
    set loadParam(load,type) socketgz
    set loadParam(file,name) $fn
    set loadParam(socket,id) $sock
    set loadParam(load,layer) $layer

    return [ProcessLoad 0]
}

proc ProcessMosaicImageIRAFCmd {varname iname sock fn} {
    upvar $varname var
    upvar $iname i

    global parse
    set parse(sock) $sock
    set parse(fn) $fn

    mosaicimageiraf::YY_FLUSH_BUFFER
    mosaicimageiraf::yy_scan_string [lrange $var $i end]
    mosaicimageiraf::yyparse
    incr i [expr $mosaicimageiraf::yycnt-1]
}

proc MosaicImageIRAFCmdLoad {param layer} {
    global parse
    
    if {$parse(sock) != {}} {
	# xpa
	if {![LoadMosaicImageIRAFSocket $parse(sock) $param $layer]} {
	    InitError xpa
	    LoadMosaicImageIRAFFile $param $layer
	}
    } else {
	# comm
	if {$parse(fn) != {}} {
	    LoadMosaicImageIRAFAlloc $parse(fn) $param $layer
	} else {
	    LoadMosaicImageIRAFFile $param $layer
	}
    }
    FinishLoad
}
