#  Copyright (C) 1999-2020
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc CXCPublicObsId {} {
    global ed

    set w {.apobsid}
    set mb {.apobsidmb}

    set ed(top) $w
    set ed(ok) 0
    set ed(obsid) 100
    set ed(hv) cxcpubhv

    DialogCreate $w [msgcat::mc {ObsId}] ed(ok)

    $w configure -menu $mb
    ThemeMenu $mb

    # file
    $mb add cascade -label [msgcat::mc {File}] -menu $mb.file
    ThemeMenu $mb.file
    $mb.file add command -label [msgcat::mc {Apply}] -command {set ed(ok) 1}
    $mb.file add separator
    $mb.file add command -label [msgcat::mc {Cancel}] -command {set ed(ok) 0}

    # edit
    $mb add cascade -label [msgcat::mc {Edit}] -menu $mb.edit
    EditMenu $mb ed

    # Param
    set f [ttk::frame $w.param]
    ttk::label $f.title -text [msgcat::mc {ObsId}]
    ttk::entry $f.obsid -textvariable ed(obsid) -width 13

    grid $f.title $f.obsid -padx 2 -pady 2 -sticky w

    # Buttons
    set f [ttk::frame $w.buttons]
    ttk::button $f.ok -text [msgcat::mc {OK}] -command {set ed(ok) 1} \
	-default active
    ttk::button $f.cancel -text [msgcat::mc {Cancel}] -command {set ed(ok) 0}
    pack $f.ok $f.cancel -side left -expand true -padx 2 -pady 4

    bind $w <Return> {set ed(ok) 1}

    # Fini
    ttk::separator $w.sep -orient horizontal
    pack $w.buttons $w.sep -side bottom -fill x
    pack $w.param -side top -fill both -expand true

    DialogWait $w ed(ok) $w.param.obsid
    destroy $w
    destroy $mb

    if {$ed(ok)} {
	set last [string range $ed(obsid) end end]
	set url "https://cxc.cfa.harvard.edu/cdaftp/byobsid/$last/$ed(obsid)/primary/"
	HV $ed(hv) "ObsId $ed(obsid)" $url {} 0 1
    }

    set rr $ed(ok)
    unset ed
    return $rr
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
	    HV $var(hv) "ObsId $obsid" $url {} 0 1
	}
    }

    # status
    TBLStatusRows $varname $rowlist
}
