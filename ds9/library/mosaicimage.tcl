#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc ProcessMosaicImageCmd {varname iname sock fn} {
    upvar $varname var
    upvar $iname i

    set vvar $var
    set ii $i

    switch -- [string tolower [lindex $var $i]] {
	iraf {
	    incr ii
	    ProcessMosaicImageIRAFCmd vvar ii $sock $fn
	}
	wfpc2 {
	    incr ii
	    ProcessMosaicImageWFPC2Cmd vvar ii $sock $fn
	}
	default {ProcessMosaicImageWCSCmd vvar ii $sock $fn}
    }
}

proc ProcessSendMosaicImageCmd {proc id param sock fn} {
    switch -- [string tolower [lindex $param 0]] {
	iraf {}
	wfpc2 {}
	wcs {
	    set param [lindex $param 1 end]
	    ProcessSendMosaicImageWCSCmd $proc $id $param $sock $fn
	}
	default {ProcessSendMosaicImageWCSCmd $proc $id $param $sock $fn}
    }
}
