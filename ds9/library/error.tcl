#  Copyright (C) 1999-2024
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

# how to handle errors
#
# where error come from
# bad tcl code (errorInfo)
# command parser (taccle/fickle)
# file does not exists (tcl)
# file exists, bad format (tcl)
# file parser (bison parser widget->error())

# tcl/tk
# errorInfo
# errorCode
# errorStack
#
# DS9
# ds9(msg)
# ds9(msg,level)
# ds9(msg,src)
#
# destinations
# xpa
# samp
# tcl GUI
# stderr

# TCL/TK errors
proc ParserError {msg yycnt yy_current_buffer index_} {
    global ds9

    switch -- $ds9(msg,src) {
	xpa -
	samp {
	    Error "$msg, found [lindex $yy_current_buffer [expr $yycnt-1]]"
	}
	default {
	    puts stderr "[string range $yy_current_buffer 0 60]"
	    puts stderr [format "%*s" $index_ ^]
	    puts stderr "$msg"
	    QuitDS9
	}
    }
}

# DS9 Errors
proc InitError {src} {
    global ds9

    set ds9(msg) {}
    set ds9(msg,src) $src
    set ds9(msg,level) info
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

# here is where tcl code will invoke an error
# XPA, SAMP will process it later
proc ProcessMessage {level message} {
    global ds9
    global pds9

    set ds9(msg) $message
    set ds9(msg,level) $level
    if {$ds9(msg) != {}} {
	switch $ds9(msg,src) {
	    xpa -
	    samp {}
	    tcl {
		if {$pds9(confirm)} {
		    tk_messageBox -message $ds9(msg) -type ok \
			-icon $ds9(msg,level)
		}
		InitError tcl
	    }
	}
    }
}

# here is where errors from within the canvas widgets 
# will try to get our attention. 
# XPA, HV, SAMP will have already seen any problems
proc ErrorTimer {} {
    global ds9
    global pds9

    if {$ds9(msg) != {}} {
	switch $ds9(msg,src) {
	    xpa -
	    samp {}
	    tcl {
		if {$pds9(confirm)} {
		    tk_messageBox -message $ds9(msg) -type ok \
			-icon $ds9(msg,level)
		}
		InitError tcl
	    }
	}
    }

    # set again
    after $ds9(msg,timeout) ErrorTimer
}


