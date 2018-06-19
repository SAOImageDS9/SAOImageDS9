#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc IExamDef {} {
    global iexam
    
    set iexam(button) 0
    set iexam(key) 0
    set iexam(any) 0
    set iexam(frame) {}
    set iexam(x) {}
    set iexam(y) {}
    set iexam(event) {}
    set iexam(mode) {}
}

proc IExamButton {which xx yy} {
    global iexam
    global imarker

    if {$iexam(button) || $iexam(any)} {
	# we need this cause MarkerMotion maybe called, 
	# and we don't want it
	set imarker(motion) none
	set imarker(handle) -1

	set iexam(frame) $which
	set iexam(x) $xx
	set iexam(y) $yy

	if {$iexam(any)} {
	    set iexam(event) {<1>}
	}
	set iexam(button) 0
	set iexam(any) 0
    }
}

proc IExamKey {which K xx yy} {
    global iexam

    if {$iexam(key) || $iexam(any)} {
	set iexam(frame) $which
	set iexam(x) $xx
	set iexam(y) $yy
	set iexam(event) $K

	set iexam(key) 0
	set iexam(any) 0
    }
}

proc ProcessSendIExamCmd {proc id param {sock {}} {fn {}}} {
    global parse
    set parse(proc) $proc
    set parse(id) $id

    global iexam
    global icursor
    global current
    set iexam(frame) {}
    set iexam(x) {}
    set iexam(y) {}
    set iexam(event) {}
    set iexam(mode) $current(mode)

    set current(mode) iexam

    set iexam(button) 1
    set iexam(key) 0
    set iexam(any) 0

    global cvarname
    set cvarname {iexam(button)}

    # turn on blinking cursor
    set icursor(timer) 1
    CursorTimer

    iexamsend::YY_FLUSH_BUFFER
    iexamsend::yy_scan_string $param
    iexamsend::yyparse

    # turn off blinking cursor
    set icursor(timer) 0

    set current(mode) $iexam(mode)

    set iexam(button) 0
    set iexam(key) 0

    set iexam(frame) {}
    set iexam(x) {}
    set iexam(y) {}
    set iexam(event) {}
    set iexam(mode) {}

    unset cvarname
}

proc IExamSendCmdDest {which} {
    global iexam
    global cvarname

    set iexam($which) 1
    set cvarname "iexam($which)"
}

proc IExamSendCmdData {ww hh} {
    global iexam
    
    global cvarname
    vwait $cvarname
    ProcessSendCmdTxt "$iexam(event) [$iexam(frame) get data canvas $iexam(x) $iexam(y) $ww $hh]"
}

proc IExamSendCmdCoord {sys sky skyformat} {
    global iexam

    global cvarname
    vwait $cvarname
    ProcessSendCmdTxt "$iexam(event) [$iexam(frame) get coordinates $iexam(x) $iexam(y) $sys $sky $skyformat]"
}

proc IExamSendCmdMacro {cmd} {
    global iexam

    global cvarname
    vwait $cvarname

    # $width,$height,$depth,$bitpix
    ParseXYBitpixMacro cmd $iexam(frame)

    # $filename[$regions]
    ParseFilenameRegionMacro cmd $iexam(frame)

    # $filename
    ParseFilenameMacro cmd $iexam(frame)

    # $regions
    ParseRegionMacro cmd $iexam(frame)

    # $env
    ParseEnvMacro cmd

    # $pan
    ParsePanMacro cmd $iexam(frame)

    # $value
    ParseValueMacro cmd $iexam(frame) $iexam(x) $iexam(y)

    # $x,$y
    ParseXYMacro cmd $iexam(frame) $iexam(x) $iexam(y)

    # $z
    ParseZMacro cmd $iexam(frame)

    ProcessSendCmdTxt "$iexam(event) $cmd"
}

proc ProcessSendIExamCmdOld {proc id param {sock {}} {fn {}}} {
    global iexam

    global icursor
    global current

    set iexam(frame) {}
    set iexam(x) {}
    set iexam(y) {}
    set iexam(event) {}
    set iexam(mode) $current(mode)

    set current(mode) iexam

    set iexam(button) 0
    set iexam(key) 0
    set iexam(any) 0

    # turn on blinking cursor
    set icursor(timer) 1
    CursorTimer

    switch -- [string tolower [lindex $param 0]] {
	button {
	    set iexam(button) 1
	    set varname {iexam(button)}
	    set param [join [lreplace $param 0 0]]
	}
	key {
	    set iexam(key) 1
	    set varname {iexam(key)}
	    set param [join [lreplace $param 0 0]]
	}
	any {
	    set iexam(any) 1
	    set varname {iexam(any)}
	    set param [join [lreplace $param 0 0]]
	}
	default {
	    set iexam(button) 1
	    set varname {iexam(button)}
	}
    }

    switch -- [string tolower [lindex $param 0]] {
	value -
	data {
	    vwait $varname
	    set w [lindex $param 1]
	    set h [lindex $param 2]
	    if {$w == {}} {
		set w 1
	    }
	    if {$h == {}} {
		set h 1
	    }
	    $proc $id "$iexam(event) [$iexam(frame) get data canvas $iexam(x) $iexam(y) $w $h]\n"
	}
	coordinate {
	    set sys [lindex $param 1]
	    set sky [lindex $param 2]
	    set skyformat [lindex $param 3]
	    switch -- $skyformat {
		{} {set skyformat degrees}
	    }
	    switch -- $sky {
		{} {set sky fk5}
	    }
	    switch -- $sys {
		{} {set sys physical}
		fk4 -
		fk5 -
		icrs -
		galactic -
		ecliptic {set sky $sys; set sys wcs}
	    }

	    vwait $varname
	    $proc $id "$iexam(event) [$iexam(frame) get coordinates $iexam(x) $iexam(y) $sys $sky $skyformat]\n"
	}
	{} {
	    vwait $varname
	    $proc $id "$iexam(event) [$iexam(frame) get coordinates $iexam(x) $iexam(y) image fk5 degrees]\n"
	}
	default {
	    vwait $varname
	    set cmd $param

	    # $width,$height,$depth,$bitpix
	    ParseXYBitpixMacro cmd $iexam(frame)

	    # $filename[$regions]
	    ParseFilenameRegionMacro cmd $iexam(frame)

	    # $filename
	    ParseFilenameMacro cmd $iexam(frame)

	    # $regions
	    ParseRegionMacro cmd $iexam(frame)

	    # $env
	    ParseEnvMacro cmd

	    # $pan
	    ParsePanMacro cmd $iexam(frame)

	    # $value
	    ParseValueMacro cmd $iexam(frame) $iexam(x) $iexam(y)

	    # $x,$y
	    ParseXYMacro cmd $iexam(frame) $iexam(x) $iexam(y)

	    # $z
	    ParseZMacro cmd $iexam(frame)

	    $proc $id "$iexam(event) $cmd\n"
	}
    }

    # turn off blinking cursor
    set icursor(timer) 0

    set current(mode) $iexam(mode)

    set iexam(button) 0
    set iexam(key) 0

    set iexam(frame) {}
    set iexam(x) {}
    set iexam(y) {}
    set iexam(event) {}
    set iexam(mode) {}
}

