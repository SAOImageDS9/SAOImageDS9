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

    global loadParam
    global current

    switch -- [string tolower [lindex $var $i]] {
	new {
	    incr i
	    CreateFrame
	}
	mask {
	    incr i
	    # not supported
	}
	slice {
	    incr i
	    # not supported
	}
    }
    set param [lindex $var $i]

    if {$sock != {}} {
	# xpa
	if {![LoadMosaicImageWFPC2Socket $sock $param]} {
	    InitError xpa
	    LoadMosaicImageWFPC2File $param
	}
    } else {
	# comm
	if {$fn != {}} {
	    LoadMosaicImageWFPC2Alloc $fn $param
	} else {
	    LoadMosaicImageWFPC2File $param
	}
    }
    FinishLoad
}


