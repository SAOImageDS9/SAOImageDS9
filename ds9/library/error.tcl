#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

# capture general errors
# this only captures gui errors, not xpa errors
proc bgerror {err} {
    tk_messageBox -type ok -icon error \
	-message "[msgcat::mc {An internal error has been detected}] $err"
}

# force capture xpa/samp/hv/interactive errors
proc InitError {which} {
    global ds9
    set ds9(msg) {}
    set ds9(msg,level) info
    set ds9(msg,src) $which

    global errorInfo
    set errorInfo {}
}

proc Info {message} {
    ProcessMessage info $message
}

proc Warning {message} {
    ProcessMessage warning $message
}

# used by backup
proc Error {message} {
    ProcessMessage error $message
}

proc ProcessMessage {level message} {
    global ds9
    global pds9

    set ds9(msg,level) $level
    switch -- $ds9(msg,src) {
	xpa -
	hv -
	samp {set ds9(msg) $message}
	default {
	    if {$pds9(confirm)} {
		tk_messageBox -message $message -type ok -icon $level
	    }
	}
    }
}

# here is where errors from within the canvas widgets 
# will try to get our attention. 
# XPA, HV, and SAMP will have already seen any problems
proc ErrorTimer {} {
    global ds9
    global pds9

    if {$ds9(msg) != {}} {
	if {$pds9(confirm)} {
	    tk_messageBox -message $ds9(msg) -type ok -icon $ds9(msg,level)
	}
	InitError tcl
    }

    # set again
    after $ds9(msg,timeout) ErrorTimer
}


