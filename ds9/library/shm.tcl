#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc ProcessShmCmd {varname iname ml} {
    upvar $varname var
    upvar $iname i
    global loadParam

    global debug
    if {$debug(tcl,parser)} {
	global parse
	set parse(ml) $ml

	shm::YY_FLUSH_BUFFER
	shm::yy_scan_string [lrange $var $i end]
	shm::yyparse
	incr i [expr $shm::yycnt-1]
    } else {

    set done 0
    while {!$done} {

	# defaults
	set loadParam(load,type) shared
	set loadParam(file,type) fits
	set loadParam(file,mode) {}

	# mask not supported
	set loadParam(load,layer) {}

	set nn [lindex $var [expr $i+4]]
	if {$nn == {} || [string range $nn 0 0] == "-"} {
	    set def 1
	} else {
	    set def 0
	}

	switch -- [lindex $var $i] {
	    key -
	    shmid {
		if {$ml} {
		    MultiLoad
		}
		set loadParam(shared,idtype) [lindex $var $i]
		set loadParam(shared,id) [lindex $var [expr $i+1]]
		set loadParam(file,name) [lindex $var [expr $i+2]]
		incr i 2
	    }

	    fits {
		if {$ml} {
		    MultiLoad
		}
		set loadParam(shared,idtype) [lindex $var [expr $i+1]]
		set loadParam(shared,id) [lindex $var [expr $i+2]]
		set loadParam(file,name) [lindex $var [expr $i+3]]
		incr i 3
	    }
	    sfits {
		if {$ml} {
		    MultiLoad
		}
		set loadParam(load,type) sshared
		set loadParam(shared,idtype) [lindex $var [expr $i+1]]
		set loadParam(shared,hdr) [lindex $var [expr $i+2]]
		set loadParam(shared,id) [lindex $var [expr $i+3]]
		set loadParam(file,name) [lindex $var [expr $i+4]]
		incr i 4
	    }

	    mosaicimage {
		if {$ml} {
		    MultiLoad
		}
		if {$def} {
		    set loadParam(file,mode) {mosaic image iraf}
		    set loadParam(shared,idtype) [lindex $var [expr $i+1]]
		    set loadParam(shared,id) [lindex $var [expr $i+2]]
		    set loadParam(file,name) [lindex $var [expr $i+3]]
		    incr i 3
		} else {
		    set loadParam(file,mode) \
			[list mosaic image [lindex $var [expr $i+1]]]
		    set loadParam(shared,idtype) [lindex $var [expr $i+2]]
		    set loadParam(shared,id) [lindex $var [expr $i+3]]
		    set loadParam(file,name) [lindex $var [expr $i+4]]
		    incr i 4
		}
	    }
	    mosaic {
		if {$def} {
		    set loadParam(file,mode) {mosaic iraf}
		    set loadParam(shared,idtype) [lindex $var [expr $i+1]]
		    set loadParam(shared,id) [lindex $var [expr $i+2]]
		    set loadParam(file,name) [lindex $var [expr $i+3]]
		    incr i 3
		} else {
		    set loadParam(file,mode) \
			[list mosaic [lindex $var [expr $i+1]]]
		    set loadParam(shared,idtype) [lindex $var [expr $i+2]]
		    set loadParam(shared,id) [lindex $var [expr $i+3]]
		    set loadParam(file,name) [lindex $var [expr $i+4]]
		    incr i 4
		}
	    }
	    smosaic {
		set loadParam(load,type) sshared
		set loadParam(file,mode) \
		    [list mosaic [lindex $var [expr $i+1]]]
		set loadParam(shared,idtype) [lindex $var [expr $i+2]]
		set loadParam(shared,hdr) [lindex $var [expr $i+3]]
		set loadParam(shared,id) [lindex $var [expr $i+4]]
		set loadParam(file,name) [lindex $var [expr $i+5]]
		incr i 5
	    }

	    mosaicimageiraf {
		# backward compatibility
		if {$ml} {
		    MultiLoad
		}
		set loadParam(file,mode) {mosaic image iraf}
		set loadParam(shared,idtype) [lindex $var [expr $i+1]]
		set loadParam(shared,id) [lindex $var [expr $i+2]]
		set loadParam(file,name) [lindex $var [expr $i+3]]
		incr i 3
	    }
	    mosaiciraf {
		# backward compatibility
		set loadParam(file,mode) {mosaic iraf}
		set loadParam(shared,idtype) [lindex $var [expr $i+1]]
		set loadParam(shared,id) [lindex $var [expr $i+2]]
		set loadParam(file,name) [lindex $var [expr $i+3]]
		incr i 3
	    }
	    mosaicimagewcs {
		# backward compatibility
		if {$ml} {
		    MultiLoad
		}
		set loadParam(file,mode) {mosaic image wcs}
		set loadParam(shared,idtype) [lindex $var [expr $i+1]]
		set loadParam(shared,id) [lindex $var [expr $i+2]]
		set loadParam(file,name) [lindex $var [expr $i+3]]
		incr i 3
	    }
	    mosaicwcs {
		# backward compatibility
		set loadParam(file,mode) {mosaic wcs}
		set loadParam(shared,idtype) [lindex $var [expr $i+1]]
		set loadParam(shared,id) [lindex $var [expr $i+2]]
		set loadParam(file,name) [lindex $var [expr $i+3]]
		incr i 3
	    }
	    mosaicimagewfpc2 {
		# backward compatibility
		if {$ml} {
		    MultiLoad
		}
		set loadParam(file,mode) {mosaic image wfpc2}
		set loadParam(shared,idtype) [lindex $var [expr $i+1]]
		set loadParam(shared,id) [lindex $var [expr $i+2]]
		set loadParam(file,name) [lindex $var [expr $i+3]]
		incr i 3
	    }

	    rgbcube {
		if {$ml} {
		    MultiLoadRGB
		}
		set loadParam(file,mode) {rgb cube}
		set loadParam(shared,idtype) [lindex $var [expr $i+1]]
		set loadParam(shared,id) [lindex $var [expr $i+2]]
		set loadParam(file,name) [lindex $var [expr $i+3]]
		incr i 3
	    }
	    srgbcube {
		if {$ml} {
		    MultiLoadRGB
		}
		set loadParam(load,type) sshared
		set loadParam(file,mode) {rgb cube}
		set loadParam(shared,idtype) [lindex $var [expr $i+1]]
		set loadParam(shared,hdr) [lindex $var [expr $i+2]]
		set loadParam(shared,id) [lindex $var [expr $i+3]]
		set loadParam(file,name) [lindex $var [expr $i+4]]
		incr i 4
	    }
	    rgbimage {
		if {$ml} {
		    MultiLoadRGB
		}
		set loadParam(file,mode) {rgb image}
		set loadParam(shared,idtype) [lindex $var [expr $i+1]]
		set loadParam(shared,id) [lindex $var [expr $i+2]]
		set loadParam(file,name) [lindex $var [expr $i+3]]
		incr i 3
	    }
	    rgbarray {
		if {$ml} {
		    MultiLoadRGB
		}
		set loadParam(file,type) array
		set loadParam(file,mode) {rgb cube}
		set loadParam(shared,idtype) [lindex $var [expr $i+1]]
		set loadParam(shared,id) [lindex $var [expr $i+2]]
		set loadParam(file,name) [lindex $var [expr $i+3]]
		incr i 3
	    }
	    array {
		if {$ml} {
		    MultiLoad
		}
		set loadParam(file,type) array
		set loadParam(shared,idtype) [lindex $var [expr $i+1]]
		set loadParam(shared,id) [lindex $var [expr $i+2]]
		set loadParam(file,name) [lindex $var [expr $i+3]]
		incr i 3
	    }

	    default {
		if {$ml} {
		    MultiLoad
		}
		set loadParam(shared,idtype) key
		set loadParam(shared,id) [lindex $var $i]
		set loadParam(file,name) [lindex $var [expr $i+1]]
		incr i 1
	    }
	}

	ProcessLoad

	# more to come?
	incr i
	if {([lindex $var $i] == "-shm") || 
	    ([lindex $var $i] == "shm")} {
	    set done 0
	    incr i
	} else {
	    set done 1
	    incr i -1
	}
    }
    FinishLoad
}
}

proc ShmCmdSet {loadtype filetype filemode sharedidtype sharedid filename {sharedhdr {}}} {

    global loadparam
    set loadparam(load,type) $loadtype
    set loadparam(file,type) $filetype
    set loadparam(file,mode) $filemode
    set loadparam(shared,idtype) $sharedidtype
    set loadparam(shared,id) $sharedid
    set loadparam(file,name) $filename
    set loadparam(shared,hdr) $sharedhdr
    
    # mask not supported
    set loadParam(load,layer) {}

    ProcessLoad
}

proc ProcessSendShmCmd {proc id param} {
    global current

    if {$current(frame) != {}} {
	$proc $id "[$current(frame) get fits file name full]\n"
    }
}

