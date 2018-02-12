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
    set param [lindex $var $i]

    if {$sock != {}} {
	# xpa
	if {![LoadMosaicImageIRAFSocket $sock $param $layer]} {
	    InitError xpa
	    LoadMosaicImageIRAFFile $param $layer
	}
    } else {
	# comm
	if {$fn != {}} {
	    LoadMosaicImageIRAFAlloc $fn $param $layer
	} else {
	    LoadMosaicImageIRAFFile $param $layer
	}
    }
    FinishLoad
}
