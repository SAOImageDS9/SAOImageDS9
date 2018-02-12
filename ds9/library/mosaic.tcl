#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc ProcessMosaicCmd {varname iname sock fn} {
    upvar $varname var
    upvar $iname i

    set vvar $var
    set ii $i

    switch -- [string tolower [lindex $var $i]] {
	iraf {
	    incr ii
	    ProcessMosaicIRAFCmd vvar ii $sock $fn
	}
	wfpc2 {}
	default {ProcessMosaicWCSCmd vvar ii $sock $fn}
    }
}

proc ProcessSendMosaicCmd {proc id param sock fn} {
    switch -- [string tolower [lindex $param 0]] {
	iraf {}
	wfpc2 {}
	wcs {
	    set param [lindex $param 1 end]
	    ProcessSendMosaicWCSCmd $proc $id $param $sock $fn
	}
	default {ProcessSendMosaicWCSCmd $proc $id $param $sock $fn}
    }
}
