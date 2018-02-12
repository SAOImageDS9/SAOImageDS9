#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc Win32Print {} {
    global ds9

    # we need to be realized
    RealizeDS9
    # need the colorbar levels updated
    UpdateColormapLevel

    if {[win32 pm print begin [winfo width $ds9(canvas)] [winfo height $ds9(canvas)] yes]} {
	foreach f $ds9(frames) {
	    $f win32 print
	}
	colorbar win32 print
	colorbarrgb win32 print
	win32 pm print end
    }
}

proc Win32PageSetup {} {
    win32 pm pagesetup
}
