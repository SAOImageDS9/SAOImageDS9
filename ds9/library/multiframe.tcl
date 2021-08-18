#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc LoadMultiFrameFile {fn} {
    set path {}
    if {[string range $fn 0 4] == "stdin" || 
	[string range $fn 0 4] == "STDIN" ||
	[string range $fn 0 0] == "-"} {
	set path [tmpnam {.fits}]
	catch {
	    set ch [open "$path" w]
	    fconfigure stdin -translation binary -encoding binary
	    fconfigure $ch -translation binary -encoding binary
	    puts -nonewline $ch [read stdin]
	    close $ch
	}
    }

    LoadMultiFrameAlloc $path $fn
}

proc LoadMultiFrameSocket {sock fn} {
    set path [tmpnam {.fits}]
    catch {
	set ch [open "$path" w]
	fconfigure $ch -translation binary -encoding binary
	fconfigure $sock -translation binary -encoding binary
	puts -nonewline $ch [read $sock]
	close $ch
    }

    set rr [LoadMultiFrameAlloc $path $fn]
    if {!$rr} {
	if {$path != {}} {
	    catch {file delete -force $path}
	}
    }
    return $rr
}

proc LoadMultiFrameAlloc {path fn} {
    global loadParam
    global current
    global ds9

    set ext 0
    set cnt 0
    set did 0
    set need 0

    # start with new frame?
    if {$current(frame) != {}} {
	switch -- [$current(frame) get type] {
	    base {
		if {[$current(frame) has fits]} {
		    CreateFrame
		    set did 1
		}
	    }
	    rgb -
	    3d {
		CreateFrame
		set did 1
	    }
	}
    } else {
	CreateFrame
    }

    while {1} {

	# create a new frame
	if {$need} {
	    CreateFrame
	    set did 1
	}

	# ProcessLoad will clear loadParam each time
	# can be gz, so use allocgz
	set loadParam(file,type) fits
	set loadParam(file,mode) {}
	set loadParam(load,type) allocgz
	set loadParam(load,layer) {}
	if {$path != {}} {
	    set loadParam(file,name) "stdin\[$ext\]"
	    set loadParam(file,fn) "$path\[$ext\]"
	} else {
	    set loadParam(file,name) "$fn\[$ext\]"
	    set loadParam(file,fn) "$fn\[$ext\]"
	}

	if  {![ProcessLoad 0]} {
	    if {$ext} {
		InitError xpa

		if {$did} {
		    DeleteCurrentFrame
		    incr ds9(seq) -1
		}
		if {!$cnt} {
		    Error "[msgcat::mc {Unable to load}] $loadParam(file,type) $loadParam(file,mode) $loadParam(file,name)"
		    return 0
		}
		break;
	    }
	} else {
	    # ignore any bin tables
	    if {![$current(frame) has fits bin]}  {
		incr cnt
		set need 1
	    } else {
		set need 0
	    }
	}

	incr ext
    }

    if {$path != {}} {
	catch {file delete -force $path}
    }

    # go into tile mode if more than one
    if {$cnt && $current(display) != "tile"} {
	set current(display) tile
	DisplayMode
    }

    return 1
}

proc ProcessMultiFrameCmd {varname iname sock fn} {
    upvar $varname var
    upvar $iname i

    global parse
    set parse(sock) $sock
    set parse(fn) $fn

    multiframe::YY_FLUSH_BUFFER
    multiframe::yy_scan_string [lrange $var $i end]
    multiframe::yyparse
    incr i [expr $multiframe::yycnt-1]
}

proc MultiframeCmdLoad {param} {
    global parse

    if {$parse(sock) != {}} {
	# xpa
	global tcl_platform
	switch $tcl_platform(os) {
	    Linux -
	    Darwin -
	    SunOS {
		if {![LoadMultiFrameSocket $parse(sock) $param]} {
		    InitError xpa
		    LoadMultiFrameFile $param
		}
	    }
	    {Windows NT} {LoadMultiFrameFile $param}
	}
    } else {
	# comm
	if {$parse(fn) != {}} {
	    LoadMultiFrameAlloc $parse(fn) $param
	} else {
	    LoadMultiFrameFile $param
	}
    }
    FinishLoad
}
