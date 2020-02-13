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
    set ifp(panto) 0
    set ifp(minrows) 20
    set ifp(mincols) 10

    set ifp(def) { \
		       {{Chandra (NASA/CXC)} \
			    fpcxc \
			    {https://cxcfps.cfa.harvard.edu/cgi-bin/cda/footprint/get_vo_table.pl} \
			    {ACIS-S ACIS-I HRC-S HRC-I} \
			    cxc \
			} \
		       {{Hubble Legacy Archive (STSCI)} \
			    fphla \
			    {http://hla.stsci.edu/cgi-bin/hlaSIAP.cgi/footprint/get_vo_table.pl} \
			    {ACS ACSGrism WFPC2 WFPC2-PC NICMOS NICGrism WFC3 COS STIS FOS GHRS} \
			    hla \
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
	set instr [lindex $ff 3]
	set format [lindex $ff 4]

	$mb add command -label $title -command [list FPDialog $vars $title $url $instr $format apply]
    }
}

proc FPLoad {varname url query} {
    upvar #0 $varname var
    global $varname

    global debug
    if {$debug(tcl,fp)} {
	puts stderr "FPLoad $varname $url?$query"
    }

    # clear previous db
    global $var(catdb)
    if {[info exists $var(catdb)]} {
	unset $var(catdb)
    }

    TBLGetURL $varname $url $query
}

proc FPProcess {varname} {
    upvar #0 $varname var
    global $varname

    global debug
    if {$debug(tcl,fp)} {
	puts stderr "FPProcess $varname"
    }

    VOTParse $var(catdb) $var(token)
    ARDone $varname

    FPTable $varname
    FPDialogUpdate $varname
}

proc FPTable {varname} {
    upvar #0 $varname var
    global $varname
    global $var(catdb)
    global ifp

    global debug
    if {$debug(tcl,fp)} {
	puts stderr "FPTable $varname"
    }

    if {![TBLValidDB $var(catdb)]} {
	return
    }

    # delete any previous tbldb
    set db ${varname}tbldb
    global $db
    if {[info exists $db]} {
	unset $db
    }

    # clear the selection
    $var(tbl) selection clear all

    # clear regions
    if {[info commands $var(frame)] != {}} {
	if {[$var(frame) has fits]} {
	    $var(frame) marker footprint $varname delete
	}
    }

    # filter regions
    set var(tbldb) ${varname}tbldb
    global $var(tbldb)
    if {![eval $var(proc,flt) $varname]} {
	Error [msgcat::mc {Internal Parse Error}]
	if {[info exists $var(tbldb)]} {
	    unset $var(tbldb)
	}
	set var(tbldb) $var(catdb)
    }

    global $var(tbldb)
    $var(tbl) configure -variable $var(tbldb)
    $var(found) configure -textvariable ${var(tbldb)}(Nrows)

#    starbase_writefp $var(catdb) stdout
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

proc FPFltCXC {varname} {
    upvar #0 $varname var
    global $varname
    global $var(catdb)
    global $var(tbldb)

    upvar #0 $var(catdb) catsrc
    upvar #0 $var(tbldb) catdest

    # create header
    set catdest(Header) $catsrc(Header)
    starbase_colmap catdest

    set catdest(Ndshs) [llength $catdest(Header)]
    set catdest(Nrows) 0
    set catdest(HLines) $catsrc(HLines)
    set catdest(Dashes) $catsrc(Dashes)

    # optional
    if {[info exists catsrc(DataType)]} {
	set catdest(DataType) $catsrc(DataType)
    }
    if {[info exists catsrc(Id)]} {
	set catdest(Id) $catsrc(Id)
    }
    if {[info exists catsrc(ArraySize)]} {
	set catdest(ArraySize) $catsrc(ArraySize)
    }
    if {[info exists catsrc(Width)]} {
	set catdest(Width) $catsrc(Width)
    }
    if {[info exists catsrc(Precision)]} {
	set catdest(Precision) $catsrc(Precision)
    }
    if {[info exists catsrc(Unit)]} {
	set catdest(Unit) $catsrc(Unit)
    }
    if {[info exists catsrc(Ref)]} {
	set catdest(Ref) $catsrc(Ref)
    }
    if {[info exists catsrc(Ucd)]} {
	set catdest(Ucd) $catsrc(Ucd)
    }
    if {[info exists catsrc(Description)]} {
	set catdest(Description) $catsrc(Description)
    }

    for {set ii 1} {$ii<=$catsrc(HLines)} {incr ii} {
	set catdest(H_$ii) $catsrc(H_$ii)
    }
    for {set jj 1} {$jj<=$catsrc(Ncols)} {incr jj} {
	set catdest(0,$jj) $catsrc(0,$jj)
    }

    # data
    set kk 0
    set idCol $catsrc($var(colid))
    set regCol $catsrc($var(colreg))
    set obsId 0
    set regs {}

    for {set ii 1} {$ii<=$catsrc(Nrows)} {incr ii} {
	if {$obsId != $catsrc($ii,$idCol)} {
	    set obsId $catsrc($ii,$idCol)
	    set regs $catsrc($ii,$regCol)

	    # write the first one
	    incr kk
	    for {set jj 1} {$jj<=$catsrc(Ncols)} {incr jj} {
		set catdest($kk,$jj) $catsrc($ii,$jj)
	    }
	} else {
	    append regs " || ; $catsrc($ii,$regCol)"
	}
	
	regsub -all -nocase {j2000} $regs {} regs
	regsub -all -nocase {icrs} $regs {} regs
	set catdest($kk,$regCol) $regs
    }

    # cleanup
    regsub -all {J2000} $regs {} regs
    set catdest($kk,$regCol) $regs

    set catdest(Nrows) $kk
    return 1
}

proc FPFltHLA {varname} {
    upvar #0 $varname var
    global $varname
    global $var(catdb)
    global $var(tbldb)

    upvar #0 $var(catdb) catsrc
    upvar #0 $var(tbldb) catdest

    # create header
    set catdest(Header) $catsrc(Header)
    starbase_colmap catdest

    set catdest(Ndshs) [llength $catdest(Header)]
    set catdest(Nrows) 0
    set catdest(HLines) $catsrc(HLines)
    set catdest(Dashes) $catsrc(Dashes)

    # optional
    if {[info exists catsrc(DataType)]} {
	set catdest(DataType) $catsrc(DataType)
    }
    if {[info exists catsrc(Id)]} {
	set catdest(Id) $catsrc(Id)
    }
    if {[info exists catsrc(ArraySize)]} {
	set catdest(ArraySize) $catsrc(ArraySize)
    }
    if {[info exists catsrc(Width)]} {
	set catdest(Width) $catsrc(Width)
    }
    if {[info exists catsrc(Precision)]} {
	set catdest(Precision) $catsrc(Precision)
    }
    if {[info exists catsrc(Unit)]} {
	set catdest(Unit) $catsrc(Unit)
    }
    if {[info exists catsrc(Ref)]} {
	set catdest(Ref) $catsrc(Ref)
    }
    if {[info exists catsrc(Ucd)]} {
	set catdest(Ucd) $catsrc(Ucd)
    }
    if {[info exists catsrc(Description)]} {
	set catdest(Description) $catsrc(Description)
    }

    for {set ii 1} {$ii<=$catsrc(HLines)} {incr ii} {
	set catdest(H_$ii) $catsrc(H_$ii)
    }
    for {set jj 1} {$jj<=$catsrc(Ncols)} {incr jj} {
	set catdest(0,$jj) $catsrc(0,$jj)
    }

    # data
    set kk 0
    set idCol $catsrc($var(colid))
    set regCol $catsrc($var(colreg))
    set obsId 0
    set regs {}

    for {set ii 1} {$ii<=$catsrc(Nrows)} {incr ii} {
	for {set jj 1} {$jj<=$catsrc(Ncols)} {incr jj} {
	    set catdest($ii,$jj) $catsrc($ii,$jj)
	}
	set regs $catsrc($ii,$regCol)
	regsub -all -nocase {j2000} $regs {} regs
	regsub -all -nocase {icrs} $regs {} regs
	regsub -all -nocase {polygon} $regs {||; polygon} regs
	regsub -all -nocase {circle} $regs {||; circle} regs
	regsub -all -nocase {ellipse} $regs {||; ellipse} regs
	regsub -all -nocase {box} $regs {||; box} regs
	set regs [string trim $regs {|;}]
	set catdest($ii,$regCol) $regs
    }
    set catdest(Nrows) $catsrc(Nrows) 

    return 1
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
		    $var(proc,error) $varname "[msgcat::mc {Internal Parse Error}]"
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
		$var(proc,error) $varname "[msgcat::mc {Internal Parse Error}]"
		return
	    }
	}
    }

    ARStatus $varname [msgcat::mc Done]
}

proc FPOff {varname} {
    upvar #0 $varname var
    global $varname

    global debug
    if {$debug(tcl,fp)} {
	puts stderr "FPOff $varname"
    }

    global $var(catdb)
    if {[info exists $var(catdb)]} {
	unset $var(catdb)
    }
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
	    set instr [lindex $mm 3]
	    set format [lindex $mm 4]

	    if {$title != {-} && "fp${ref}" == $vars} {
		FPDialog $vars $title $url $instr $format sync
		set cvarname fp${ref}
	    }
	}
    }
}

proc ProcessSendFPCmd {proc id param sock fn} {
    global ifp
    $proc $id "$ifp(fps)\n"
}
