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
	if {![LoadMosaicWCSSocket $sock $param $layer $opt]} {
	    InitError xpa
	    LoadMosaicWCSFile $param $layer $opt
	}
    } else {
	# comm
	if {$fn != {}} {
	    LoadMosaicWCSAlloc $fn $param $layer $opt
	} else {
	    LoadMosaicWCSFile $param $layer $opt
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
