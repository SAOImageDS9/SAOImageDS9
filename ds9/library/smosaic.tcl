#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc ProcessSMosaicCmd {varname iname sock fn} {
    upvar $varname var
    upvar $iname i

    set vvar $var
    set ii $i

    switch -- [string tolower [lindex $var $i]] {
	iraf {
	    incr ii
	    ProcessSMosaicIRAFCmd vvar ii $sock $fn
	}
	{} {
	    set vvar [linsert $var $i wcs]
	    ProcessSMosaicWCSCmd vvar ii $sock $fn
	}
	default {ProcessSMosaicWCSCmd vvar ii $sock $fn}
    }
}
