#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc LoadMosaicImageWCSFile {fn layer sys} {
    global loadParam

    set loadParam(file,type) fits
    set loadParam(file,mode) [list mosaic image $sys]
    set loadParam(load,type) mmapincr
    set loadParam(file,name) $fn
    set loadParam(load,layer) $layer

    ConvertFitsFile
    ProcessLoad
}

proc LoadMosaicImageWCSAlloc {path fn layer sys} {
    global loadParam

    set loadParam(file,type) fits
    set loadParam(file,mode) [list mosaic image $sys]
    set loadParam(load,type) allocgz
    set loadParam(file,name) $fn
    set loadParam(file,fn) $path
    set loadParam(load,layer) $layer

    ProcessLoad
}

proc LoadMosaicImageWCSSocket {sock fn layer sys} {
    global loadParam

    set loadParam(file,type) fits
    set loadParam(file,mode) [list mosaic image $sys]
    set loadParam(load,type) socketgz
    set loadParam(file,name) $fn
    set loadParam(socket,id) $sock
    set loadParam(load,layer) $layer

    return [ProcessLoad 0]
}

proc SaveMosaicImageWCSFile {fn} {
    global current

    if {$fn == {} || $current(frame) == {}} {
	return
    }
    if {![$current(frame) has fits]} {
	return
    }

    $current(frame) save fits mosaic image file "\{$fn\}"
}

proc SaveMosaicImageWCSSocket {sock} {
    global current

    if {$current(frame) == {}} {
	return
    }
    if {![$current(frame) has fits]} {
	return
    }

    $current(frame) save fits mosaic image socket $sock
}

proc ProcessMosaicImageWCSCmd {varname iname sock fn} {
    upvar $varname var
    upvar $iname i

    global parse
    set parse(sock) $sock
    set parse(fn) $fn

    mosaicimagewcs::YY_FLUSH_BUFFER
    mosaicimagewcs::yy_scan_string [lrange $var $i end]
    mosaicimagewcs::yyparse
    incr i [expr $mosaicimagewcs::yycnt-1]
}

proc MosaicImageWCSCmdLoad {param layer sys} {
    global parse

    if {$parse(sock) != {}} {
	# xpa
	if {![LoadMosaicImageWCSSocket $parse(sock) $param $layer $sys]} {
	    InitError xpa
	    LoadMosaicImageWCSFile $param $layer $sys
	}
    } else {
	# comm
	if {$parse(fn) != {}} {
	    LoadMosaicImageWCSAlloc $parse(fn) $param $layer $sys
	} else {
	    LoadMosaicImageWCSFile $param $layer $sys
	}
    }
    FinishLoad
}

proc ProcessSendMosaicImageWCSCmd {proc id param sock fn} {
    global current

    if {$current(frame) == {}} {
	return
    }

    if {$sock != {}} {
	# xpa
	SaveMosaicImageWCSSocket $sock
    } elseif {$fn != {}} {
	# comm
	SaveMosaicImageWCSFile $fn
	$proc $id {} $fn
    }
}


