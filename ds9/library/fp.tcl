#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc FPDef {} {
    global fp
    global ifp
    global pfp

    set fp(id) 0

    set ifp(fps) {}
    set ifp(rformat) arcmin
    set ifp(radius) 15
    set ifp(show) 1
    set ifp(panto) 1
    set ifp(minrows) 20
    set ifp(mincols) 10

    set ifp(def) { \
		       {{Chandra (NASA/CXC)} \
			    fpcxc \
			    {https://cxcfps.cfa.harvard.edu/cgi-bin/cda/footprint/get_vo_table.pl} \
			    {inst=ACIS-S,ACIS-I,HRC-S,HRC-I&} \
			    stcs \
			} \
		   }
}

proc FPAnalysisMenu {mb} {
    global ifp
    global ds9

    foreach ff $ifp(def) {
	set title [lindex $ff 0]
	set vars [lindex $ff 1]
	set url [lindex $ff 2]
	set opts [lindex $ff 3]
	set colreg [lindex $ff 4]

	$mb add command -label $title \
	    -command [list FPDialog $vars $title $url $opts $colreg apply]
    }
}

proc FPGetURL {varname url query} {
    upvar #0 $varname var
    global $varname

    # save just in case of redirection
    set var(qq) $query
    
    ARStatus $varname [msgcat::mc {Loading}]

    global ihttp
    if {$var(sync)} {
	if {![catch {set var(token) [http::geturl $url \
					 -query $query \
					 -timeout $ihttp(timeout) \
					 -headers "[ProxyHTTP]"]


	}]} {
	    # reset errorInfo (may be set in http::geturl)
	    global errorInfo
	    set errorInfo {}

	    set var(active) 1
	    FPGetURLFinish $varname $var(token)
	} else {
	    eval [list $var(proc,error) $varname "[msgcat::mc {Unable to locate URL}] $url"]
	}
    } else {
	if {![catch {set var(token) [http::geturl $url \
					 -query $query \
					 -timeout $ihttp(timeout) \
					 -command \
					 [list FPGetURLFinish $varname] \
					 -headers "[ProxyHTTP]"]
	}]} {
	    # reset errorInfo (may be set in http::geturl)
	    global errorInfo
	    set errorInfo {}

	    set var(active) 1
	} else {
	    eval [list $var(proc,error) $varname "[msgcat::mc {Unable to locate URL}] $url"]
	}
    }
}

proc FPGetURLFinish {varname token} {
    upvar #0 $varname var
    global $varname

    global debug
    if {$debug(tcl,fp)} {
	puts stderr "FPGetURLFinish $varname"
    }

    if {!($var(active))} {
	FPCancelled $varname
	return
    }

    upvar #0 $token t

    # Code
    set code [http::ncode $token]

    # Meta
    set meta $t(meta)

    # Log it
    HTTPLog $token

    # Result?
    switch -- $code {
	{} -
	200 -
	203 -
	404 -
	503 {
	    VOTParse $var(tbldb) $token
	    ARDone $varname
 	    FPLoadDone $varname
	}

	201 -
	300 -
	301 -
	302 -
	303 -
	305 -
	307 {
	    foreach {name value} $meta {
		if {[regexp -nocase ^location$ $name]} {
		    global debug
		    if {$debug(tcl,fp)} {
			puts stderr "FPGetURLFinish redirect $code to $value"
		    }
		    # clean up and resubmit
		    http::cleanup $token
		    unset var(token)

		    FPGetURL $varname $value $var(qq)
		}
	    }
	}

	default {
	    eval [list $var(proc,error) $varname "[msgcat::mc {Error code was returned}] $code"]
	}
    }
}

proc FPLoad {varname url query} {
    upvar #0 $varname var
    global $varname

    # clear previous db
    global $var(tbldb)
    if {[info exists $var(tbldb)]} {
	unset $var(tbldb)
    }

    global debug
    if {$debug(tcl,fp)} {
	puts stderr "FPLoad $varname $url?$query"
    }

    FPGetURL $varname $url $query
}

proc FPLoadDone {varname} {
    upvar #0 $varname var
    global $varname

    global debug
    if {$debug(tcl,fp)} {
	puts stderr "FPLoadDone $varname"
    }

    FPTable $varname
    FPDialogUpdate $varname
}

proc FPOff {varname} {
    upvar #0 $varname var
    global $varname

    global $var(tbldb)
    if {[info exists $var(tbldb)]} {
	unset $var(tbldb)
    }
    set db $var(tbldb)
    set ${db}(Nrows) {}

    $var(tbl) selection clear all

    if {[info commands $var(frame)] != {}} {
	if {[$var(frame) has fits]} {
	    $var(frame) marker footprint $varname delete
	}
    }

    set var(blink) 0

    FPDialogUpdate $varname
}

# used by backup
proc FPTable {varname} {
    upvar #0 $varname var
    global $varname
    global $var(tbldb)
    global ifp

    global debug
    if {$debug(tcl,fp)} {
	puts stderr "FPTable $varname"
    }

    if {![TBLValidDB $var(tbldb)]} {
	return
    }

    # clear the selection
    $var(tbl) selection clear all

    # clear regions
    if {[info commands $var(frame)] != {}} {
	if {[$var(frame) has fits]} {
	    $var(frame) marker footprint $varname delete
	}
    }

    global $var(tbldb)
    $var(found) configure -textvariable ${var(tbldb)}(Nrows)

#    starbase_writefp $var(tbldb) stdout

    if {[starbase_nrows $var(tbldb)] == 0} {
	ARStatus $varname [msgcat::mc {No Items Found}]
	return
    }

    set nc [starbase_ncols $var(tbldb)]
    if { $nc > $ifp(mincols)} {
	$var(tbl) configure -cols $nc
    } else {
	$var(tbl) configure -cols $ifp(mincols)
    }

    # add header
    set nr [expr [starbase_nrows $var(tbldb)]+1]
    if {$nr > $ifp(minrows)} {
	$var(tbl) configure -rows $nr
    } else {
	$var(tbl) configure -rows $ifp(minrows)
    }

    FPGenerate $varname
}

proc FPGenerate {varname} {
    upvar #0 $varname var
    global $varname
    global $var(tbldb)

    global debug
    if {$debug(tcl,fp)} {
	puts stderr "FPGenerate $varname"
    }

    # do we have a db?
    if {![TBLValidDB $var(tbldb)]} {
	return
    }

    ARStatus $varname [msgcat::mc {Plotting Regions}]

    # delete any previous 
    if {[info commands $var(frame)] != {}} {
	if {[$var(frame) has fits]} {
	    $var(frame) marker footprint $varname delete
	}
    }

    if {$var(show)} {
	global reg
	set reg {}
	FPReg $varname 1 reg
	if {[info commands $var(frame)] != {}} {
	    if {[$var(frame) has fits]} {
		if {[catch {$var(frame) marker footprint command ds9 var reg}]} {
		    eval [list $var(proc,error) $varname "[msgcat::mc {Internal Parse Error}]"]
		    return
		}
	    }
	}
    }

    ARStatus $varname [msgcat::mc Done]
}

proc FPGenerateRegions {varname} {
    upvar #0 $varname var
    global $varname
    global $var(tbldb)

    global debug
    if {$debug(tcl,fp)} {
	puts stderr "FPGenerateRegions $varname"
    }

    # do we have a db?
    if {![TBLValidDB $var(tbldb)]} {
	return
    }

    ARStatus $varname [msgcat::mc {Generating Regions}]

    global reg
    set reg {}
    FPReg $varname 0 reg
    if {[info commands $var(frame)] != {}} {
	if {[$var(frame) has fits]} {
	    if {[catch {$var(frame) marker command ds9 var reg}]} {
		eval [list $var(proc,error) $varname "[msgcat::mc {Internal Parse Error}]"]
		return
	    }
	}
    }

    ARStatus $varname [msgcat::mc Done]
}

proc FPUpdateWCS {} {
    global ifp
    global current

    if {$current(frame) != {}} {
	$current(frame) marker footprint delete all

	foreach varname $ifp(fps) {
	    upvar #0 $varname var
	    global $varname

	    FPGenerate $varname
	}
    }
}

# Process Cmds

proc ProcessFPCmd {varname iname} {
    upvar $varname var
    upvar $iname i

    global ifp
    # we need to be realized
    ProcessRealizeDS9

    set ref [lindex $ifp(fps) end]
    global cvarname
    set cvarname $ref

    fp::YY_FLUSH_BUFFER
    fp::yy_scan_string [lrange $var $i end]
    fp::yyparse
    incr i [expr $fp::yycnt-1]
}

proc FPCmdCheck {} {
    global cvarname
    upvar #0 $cvarname cvar

    if {![info exists cvar(top)]} {
	Error "[msgcat::mc {Unable to find Footprint window}] $cvarname"
	return 0
    }
    if {![winfo exists $cvar(top)]} {
	Error "[msgcat:: mc {Unable to find Footprint window}] $cvarname"
	return 0
    }
    return 1
}

proc FPCmdRef {ref} {
    global ifp
    global cvarname

    # look for reference in current list
    if {[lsearch $ifp(fps) fp${ref}] < 0} {
	# see if its from our list of fps
	foreach mm $ifp(def) {
	    set title [lindex $mm 0]
	    set vars [lindex $mm 1]
	    set url [lindex $mm 2]
	    set opts [lindex $mm 3]
	    set colreg [lindex $mm 4]

	    if {$title != {-} && "fp${ref}" == $vars} {
		FPDialog $vars $title $url $opts $colreg sync
		set cvarname fp${ref}
	    }
	}
    }
}

proc ProcessSendFPCmd {proc id param sock fn} {
    global ifp
    $proc $id "$ifp(fps)\n"
}
