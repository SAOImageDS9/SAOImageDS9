#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc LoadFitsFile {fn layer mode} {
    global loadParam
    global current
    global pds9
    global marker

    set loadParam(file,type) fits
    set loadParam(file,mode) $mode
    set loadParam(load,type) mmapincr
    set loadParam(file,name) $fn
    set loadParam(load,layer) $layer

    ConvertFitsFile
    # save load type, since ProcessLoad will clear loadParam
    if {$loadParam(load,type) == "mmapincr"} {
	set mmap 1
    } else {
	set mmap 0
    }
    ProcessLoad

    # now autoload markers
    if {$pds9(automarker) && $mmap} {
	# now, load fits[REGION] if present
	set id [string first "\[" $fn]
	if {$id > 0} {
	    set base [string range $fn 0 [expr $id-1]]
	} else {
	    set base $fn
	}

	set reg "${base}\[REGION\]"
	if {[$current(frame) fitsy has ext "\"$reg\""]} {
	    RealizeDS9
	    catch {
		$current(frame) marker load fits "\"$reg\"" $marker(color) $marker(dashlist) $marker(width) "\{$marker(font) $marker(font,size) $marker(font,weight) $marker(font,slant)\}"
	    }
	}
    }
}

proc LoadFitsAlloc {path fn layer mode} {
    global loadParam

    set loadParam(file,type) fits
    set loadParam(file,mode) $mode
    set loadParam(load,type) allocgz
    set loadParam(file,name) $fn
    set loadParam(file,fn) $path
    set loadParam(load,layer) $layer

    ProcessLoad
}

proc LoadFitsSocket {sock fn layer mode} {
    global loadParam

    set loadParam(file,type) fits
    set loadParam(file,mode) $mode
    set loadParam(load,type) socketgz
    set loadParam(file,name) $fn
    set loadParam(socket,id) $sock
    set loadParam(load,layer) $layer

    return [ProcessLoad 0]
}

proc SaveFitsFile {which fn} {
    global current

    if {$fn == {} || $current(frame) == {}} {
	return
    }

    if {![$current(frame) has fits]} {
	return
    }

    $current(frame) save fits $which file "\{$fn\}"
}

proc SaveFitsSocket {which sock} {
    global current

    if {$current(frame) == {}} {
	return
    }

    if {![$current(frame) has fits]} {
	return
    }

    $current(frame) save fits $which socket $sock
}

proc ProcessFitsCmd {varname iname sock fn} {
    upvar $varname var
    upvar $iname i

    if {[ProcessFitsBackwardCmd $varname $iname $sock $fn]} {
	return
    }

    global loadParam
    global current

    set layer {}
    set mode {}

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
	    set mode slice
	}
    }
    set param [lindex $var $i]

    if {$sock != {}} {
	# xpa
	if {![LoadFitsSocket $sock $param $layer $mode]} {
	    InitError xpa
	    LoadFitsFile $param $layer $mode
	}
    } else {
	# comm
	if {$fn != {}} {
	    LoadFitsAlloc $fn $param $layer $mode
	} else {
	    LoadFitsFile $param $layer $mode
	}
    }
    FinishLoad
}

proc ProcessSendFitsCmd {proc id param sock fn} {
    global current

    if {$current(frame) == {}} {
	return
    }

    set which image

    switch -- [string tolower [lindex $param 0]] {
	width {
	    $proc $id "[$current(frame) get fits width]\n"
	    return
	}
	height {
	    $proc $id "[$current(frame) get fits height]\n"
	    return
	}
	depth {
	    $proc $id "[$current(frame) get fits depth 2]\n"
	    return
	}
	bitpix {
	    $proc $id "[$current(frame) get fits bitpix]\n"
	    return
	}
	size {
	    set sys [lindex $param 1] 
	    set sky [lindex $param 2] 
	    set format [lindex $param 3]
	    if {$sys == {} && $sky == {} && $format == {}} {
		$proc $id "[$current(frame) get fits size]\n"
	    } else {
		FixSpec sys sky format image fk5 degrees
		$proc $id "[$current(frame) get fits size $sys $sky $format]\n"
	    }
	    return
	}
	header {
	    switch -- [llength $param] {
		1 {ProcessSend $proc $id {} $fn {.txt} "[$current(frame) get fits header 1]\n"}
		2 {ProcessSend $proc $id {} $fn {.txt} "[$current(frame) get fits header [lindex $param 1]]\n"}
		3 {
		    set key [lindex $param 2]
		    set key [string trim $key \']
		    set key [string trim $key \{]
		    set key [string trim $key \}]
		    $proc $id "[string trim [$current(frame) get fits header keyword \{$key\}]]\n"
		}
		4 {
		    set key [lindex $param 3]
		    set key [string trim $key \']
		    set key [string trim $key \{]
		    set key [string trim $key \}]
		    $proc $id "[string trim [$current(frame) get fits header [lindex $param 1] keyword \{$key\}]]\n"
		}
	    }
	    return
	}
	type {
	    if {[$current(frame) has fits bin]} {
		$proc $id "table\n"
	    } else {
		$proc $id "image\n"
	    }
	    return
	}
	table {set which table}
	image {}
	slice {set which slice}
	resample {set which resample}
    }

    if {$sock != {}} {
	# xpa
	SaveFitsSocket $which $sock
    } elseif {$fn != {}} {
	# comm
	SaveFitsFile $which $fn
	$proc $id {} $fn
    }
}

# backward compatibility
proc ProcessFitsBackwardCmd {varname iname sock fn} {
    upvar 2 $varname var
    upvar 2 $iname i

    set vvar $var
    set ii $i

    switch -- [string tolower [lindex $var $i]] {
	new {
	    switch -- [string tolower [lindex $var [expr $i+1]]] {
		rgbimage {
		    set vvar [lreplace $var 1 1]
		    ProcessRGBImageCmd vvar ii $sock $fn
		    return 1
		}
		rgbcube {
		    set vvar [lreplace $var 1 1]
		    ProcessRGBCubeCmd vvar ii $sock $fn
		    return 1
		}

		datacube -
		mecube -
		medatacube {
		    set vvar [lreplace $var 1 1]
		    ProcessMECubeCmd vvar ii $sock $fn
		    return 1
		}

		mosaicimage {
		    set vvar [lreplace $var 1 1]
		    ProcessMosaicImageCmd vvar ii $sock $fn
		    return 1
		}
		mosaicimagewcs {
		    set vvar [lreplace $var 1 1]
		    ProcessMosaicImageWCSCmd vvar ii $sock $fn
		    return 1
		}
		mosaicimageiraf {
		    set vvar [lreplace $var 1 1]
		    ProcessMosaicImageIRAFCmd vvar ii $sock $fn
		    return 1
		}
		mosaicimagewfpc2 {
		    set vvar [lreplace $var 1 1]
		    ProcessMosaicImageWFPC2Cmd vvar ii $sock $fn
		    return 1
		}

		mosaic {
		    set vvar [lreplace $var 1 1]
		    ProcessMosaicCmd vvar ii $sock $fn
		    return 1
		}
		mosaicwcs {
		    set vvar [lreplace $var 1 1]
		    ProcessMosaicWCSCmd vvar ii $sock $fn
		    return 1
		}
		mosaiciraf {
		    set vvar [lreplace $var 1 1]
		    ProcessMosaicIRAFCmd vvar ii $sock $fn
		    return 1
		}
	    }
	}

	mask {
	    switch -- [string tolower [lindex $var [expr $i+1]]] {
		mosaicimage {
		    set vvar [lreplace $var 1 1]
		    ProcessMosaicImageCmd vvar ii $sock $fn
		    return 1
		}
		mosaicimagewcs {
		    set vvar [lreplace $var 1 1]
		    ProcessMosaicImageWCSCmd vvar ii $sock $fn
		    return 1
		}
		mosaicimageiraf {
		    set vvar [lreplace $var 1 1]
		    ProcessMosaicImageIRAFCmd vvar ii $sock $fn
		    return 1
		}
		mosaicimagewfpc2 {
		    set vvar [lreplace $var 1 1]
		    ProcessMosaicImageWFPC2Cmd vvar ii $sock $fn
		    return 1
		}

		mosaic {
		    set vvar [lreplace $var 1 1]
		    ProcessMosaicCmd vvar ii $sock $fn
		    return 1
		}
		mosaicwcs {
		    set vvar [lreplace $var 1 1]
		    ProcessMosaicWCSCmd vvar ii $sock $fn
		    return 1
		}
		mosaiciraf {
		    set vvar [lreplace $var 1 1]
		    ProcessMosaicIRAFCmd vvar ii $sock $fn
		    return 1
		}
	    }
	}

	datacube -
	mecube -
	medatacube {
	    set vvar [lreplace $var 0 0]
	    ProcessMECubeCmd vvar ii $sock $fn
	    return 1
	}
	memf -
	multiframe {
	    set vvar [lreplace $var 0 0]
	    ProcessMultiFrameCmd vvar ii $sock $fn
	    return 1
	}

	rgbimage {
	    set vvar [lreplace $var 0 0]
	    ProcessRGBImageCmd vvar ii $sock $fn
	    return 1
	}
	rgbcube {
	    set vvar [lreplace $var 0 0]
	    ProcessRGBCubeCmd vvar ii $sock $fn
	    return 1
	}

	mosaicimage {
	    set vvar [lreplace $var 0 0]
	    ProcessMosaicImageCmd vvar ii $sock $fn
	    return 1
	}
	mosaicimagewcs {
	    set vvar [lreplace $var 0 0]
	    ProcessMosaicImageWCSCmd vvar ii $sock $fn
	    return 1
	}
	mosaicimageiraf {
	    set vvar [lreplace $var 0 0]
	    ProcessMosaicImageIRAFCmd vvar ii $sock $fn
	    return 1
	}
	mosaicimagewfpc2 {
	    set vvar [lreplace $var 0 0]
	    ProcessMosaicImageWFPC2Cmd vvar ii $sock $fn
	    return 1
	}

	mosaic {
	    set vvar [lreplace $var 0 0]
	    ProcessMosaicCmd vvar ii $sock $fn
	    return 1
	}
	mosaicwcs {
	    set vvar [lreplace $var 0 0]
	    ProcessMosaicWCSCmd vvar ii $sock $fn
	    return 1
	}
	mosaiciraf {
	    set vvar [lreplace $var 0 0]
	    ProcessMosaicIRAFCmd vvar ii $sock $fn
	    return 1
	}
    }

    return 0
}

