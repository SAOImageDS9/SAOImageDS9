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
	    # not supported
	}
    }

    if {[string range [lindex $var $i] 0 2] == {wcs}} {
	set opt [lindex $var $i]
	incr i
    } else {
	set opt wcs
    }
    set param [lindex $var $i]

    if {$sock != {}} {
	# xpa
	if {![LoadMosaicImageWCSSocket $sock $param $layer $opt]} {
	    InitError xpa
	    LoadMosaicImageWCSFile $param $layer $opt
	}
    } else {
	# comm
	if {$fn != {}} {
	    LoadMosaicImageWCSAlloc $fn $param $layer $opt
	} else {
	    LoadMosaicImageWCSFile $param $layer $opt
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


