#  Copyright (C) 1999-2024
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

# where error come from
# bad tcl code (errorInfo)
# good tcl code, result -code error (errorInfo)
# good C++ code, internalError (fitsy/util.C sets ds9(msg))
# command parser, taccle/fickle, (error.tcl ParseError $msg)
# file parser, bison/flex, result -code error, (errorInfo)

# errorInfo
# errorCode
# errorStack
# ds9(msg)
# ds9(msg,level)
# ds9(msg,src)
#
# destinations
# xpa
# samp
# tcl GUI
# stderr

# capture event loop background errors
proc bgerror {err} {
    tk_messageBox -type ok -icon error \
	-message "[msgcat::mc {An internal error has been detected}] $err"
}

# clear both ds9(msg) and errorInfo
proc InitError {src} {
    global ds9
    set ds9(msg) {}
    set ds9(msg,src) $src
    set ds9(msg,level) info

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

proc ProcessMessage {level msg} {
    global ds9
    global pds9

    set ds9(msg,level) $level
    switch -- $ds9(msg,src) {
	xpa -
	samp {set ds9(msg) $msg}
	tcl {
	    if {$pds9(confirm)} {
		tk_messageBox -message $msg -type ok -icon $level
	    }
	}
    }
}

# here is where tcl parsers (tackle/fickle) will error out
proc ParserError {msg yycnt yy_current_buffer index_} {
    global ds9

    switch -- $ds9(msg,src) {
	xpa -
	samp {
	    Error "$msg, found [lindex $yy_current_buffer [expr $yycnt-1]]"
	}
	tcl {
	    puts stderr "[string range $yy_current_buffer 0 60]"
	    puts stderr [format "%*s" $index_ ^]
	    puts stderr "$msg"
	    QuitDS9
	}
    }
}

# here is where errors from within the canvas widgets 
# will try to get our attention. 
# XPA, SAMP will have already seen any problems
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


