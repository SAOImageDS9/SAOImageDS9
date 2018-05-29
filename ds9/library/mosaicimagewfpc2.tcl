#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc LoadMosaicImageWFPC2File {fn} {
    global loadParam

    set loadParam(file,type) fits
    set loadParam(file,mode) {mosaic image wfpc2}
    set loadParam(load,type) mmapincr
    set loadParam(file,name) $fn

    # mask not supported
    set loadParam(load,layer) {}

    ConvertFitsFile
    ProcessLoad
}

proc LoadMosaicImageWFPC2Alloc {path fn} {
    global loadParam

    set loadParam(file,type) fits
    set loadParam(file,mode) {mosaic image wfpc2}
    set loadParam(load,type) allocgz
    set loadParam(file,name) $fn
    set loadParam(file,fn) $path

    # mask not supported
    set loadParam(load,layer) {}

    ProcessLoad
}

proc LoadMosaicImageWFPC2Socket {sock fn} {
    global loadParam

    set loadParam(file,type) fits
    set loadParam(file,mode) {mosaic image wfpc2}
    set loadParam(load,type) socketgz
    set loadParam(file,name) $fn
    set loadParam(socket,id) $sock

    # mask not supported
    set loadParam(load,layer) {}

    return [ProcessLoad 0]
}

proc ProcessMosaicImageWFPC2Cmd {varname iname sock fn} {
    upvar $varname var
    upvar $iname i

    global parse
    set parse(sock) $sock
    set parse(fn) $fn

    mosaicimagewfpc2::YY_FLUSH_BUFFER
    mosaicimagewfpc2::yy_scan_string [lrange $var $i end]
    mosaicimagewfpc2::yyparse
    incr i [expr $mosaicimagewfpc2::yycnt-1]
}

proc MosaicImageWFPC2CmdLoad {param} {
    global parse

    if {$parse(sock) != {}} {
	# xpa
	if {![LoadMosaicImageWFPC2Socket $parse(sock) $param]} {
	    InitError xpa
	    LoadMosaicImageWFPC2File $param
	}
    } else {
	# comm
	if {$parse(fn) != {}} {
	    LoadMosaicImageWFPC2Alloc $parse(fn) $param
	} else {
	    LoadMosaicImageWFPC2File $param
	}
    }
    FinishLoad
}
