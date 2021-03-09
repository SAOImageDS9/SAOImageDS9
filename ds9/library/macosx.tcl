#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc MacOSOpenDocEvent {} {
    global ds9

    if {$ds9(event,opendoc) != {}} {
	foreach ff $ds9(event,opendoc) {
	    MultiLoad
	    LoadFitsFile $ff {} {}
	    FileLast fitsfbox $ff
	}
	FinishLoad
    }
}

proc MacOSPrintDocEvent {bye} {
    global ds9

    if {$ds9(event,printdoc) != {}} {
	foreach ff $ds9(event,printdoc) {
	    RealizeDS9
	    
	    MultiLoad
	    LoadFitsFile $ff {} {}
	    FileLast fitsfbox $ff

	    FinishLoad
	    PostScript
	}

	if {$bye} {
	    Quit
	}
    }
}
