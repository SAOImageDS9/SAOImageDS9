#  Copyright (C) 1999-2020
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc CXCPublicObsId {} {
}

proc CXCPublicConeSearch {} {
    FPDialog cxcpub {Chandra Public Cone Search} {https://cxcfps.cfa.harvard.edu/cgi-bin/cda/footprint/get_vo_table.pl} {ACIS-S ACIS-I HRC-S HRC-I} cxcpublic apply
}

proc CXCPublicSelectCmd {varname ss rc} {
    upvar #0 $varname var
    global $varname

    # starts at 1
    global debug
    if {$debug(tcl,fp)} {
	puts stderr "CXCPublicSelectCmd $varname ss=$ss rc=$rc"
    }

    global $var(tbldb)
    if {![TBLValidDB $var(tbldb)]} {
	return
    }

    # now see the current selection
    set last [lindex [split $ss ,] 0]
    set row [lindex [split $rc ,] 0]

    # needed for status
    # starts at 0
    set rowlist {}
    foreach sel [$var(tbl) curselection] {
	set rr [lindex [split $sel ,] 0]
	lappend rowlist $rr
    }
    set rowlist [lsort -unique $rowlist]

    # kludge
    # tktable can return bogus numbers if arrow keys are used
    # try to fix
    if {$row == 0} {
	set row 1
    }
    if {[llength $rowlist] <= 1} {
	set rowlist $row
    }

    set rows [starbase_nrows $var(tbldb)]
    set col [starbase_colnum $var(tbldb) $var(colid)]
    foreach rr $rowlist {
	if {$rr<=$rows} {
	    set obsid [starbase_get $var(tbldb) $rr $col]
	    set last [string range $obsid end end]
	    set url "https://cxc.cfa.harvard.edu/cdaftp/byobsid/$last/$obsid/primary/"
	    HV $var(hv) "ObsId $obsid" $url
	}
    }

    # status
    TBLStatusRows $varname $rowlist
}
