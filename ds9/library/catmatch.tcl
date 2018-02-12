#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc CATMatchFrame {} {
    global icat
    global current

    # find all cats for frame
    set cats {}
    foreach varname $icat(cats) {
	upvar #0 $varname var
	global $varname

	if {$var(frame) == $current(frame)} {
	    lappend cats $varname
	}
    }

    if {[llength $cats] < 2} {
	Warning [msgcat::mc {At least 2 different catalogs are required}]
	return
    }

    if {[CATMatchDialog $cats]} {
	if {$icat(match1) != {} && 
	    $icat(match2) != {} && 
	    $icat(match1) != $icat(match2)} {
	    CATMatch $current(frame) $icat(match1) $icat(match2)
	} else {
	    Warning [msgcat::mc {At least 2 different catalogs are required}]
	}
    }
}

proc CATMatchDialog {cats} {
    global ds9
    global ed
    global icat

    set w {.catmat}
    set mb {.catmatmb}

    set ed(top) $w
    set ed(mb) $mb
    set ed(ok) 0

    set ed(match1) [lindex $cats 0]
    set varname $ed(match1)
    upvar #0 $varname var
    global $varname
    set ed(match1,msg) $var(title)

    set ed(match2) [lindex $cats 1]
    set varname $ed(match2)
    upvar #0 $varname var
    global $varname
    set ed(match2,msg) $var(title)

    set ed(error) $icat(error)
    set ed(rformat) $icat(eformat)
    set ed(function) $icat(function)
    set ed(unique) $icat(unique)
    set ed(return) $icat(return)

    DialogCreate $w [msgcat::mc {Match}] ed(ok)

    $w configure -menu $mb
    menu $mb

    # file
    $mb add cascade -label [msgcat::mc {File}] -menu $mb.file
    menu $mb.file
    $mb.file add command -label [msgcat::mc {Apply}] -command {set ed(ok) 1}
    $mb.file add command -label [msgcat::mc {Cancel}] -command {set ed(ok) 0}

    # edit
    $mb add cascade -label [msgcat::mc {Edit}] -menu $mb.edit
    EditMenu $mb ed

    # param
    set f [ttk::frame $w.param]

    ttk::label $f.tmatch -text [msgcat::mc {Match}]
    ttk::menubutton $f.match1 -textvariable ed(match1,msg) -menu $f.match1.menu
    ttk::label $f.tand -text [msgcat::mc {and}]
    ttk::menubutton $f.match2 -textvariable ed(match2,msg) -menu $f.match2.menu

    CATMatchDialogCatsMenu $f match1 $cats
    CATMatchDialogCatsMenu $f match2 $cats

    ttk::label $f.terror -text [msgcat::mc {Error}]
    ttk::entry $f.error -textvariable ed(error) -width 14
    ARRFormat $f.eformat ed

    ttk::label $f.tfunction -text [msgcat::mc {Function}]
    ttk::menubutton $f.function -textvariable ed(function,msg) \
	-menu $f.function.menu
    menu $f.function.menu -tearoff 0
    $f.function.menu add radiobutton -variable ed(function) \
	-label "1 [msgcat::mc {and}] 2" \
	-value 1and2 -command [list CATMatchDialogFunctionMenu $f]
    $f.function.menu add radiobutton -variable ed(function) \
	-label "1 [msgcat::mc {not}] 2" \
	-value 1not2 -command [list CATMatchDialogFunctionMenu $f]
    $f.function.menu add radiobutton -variable ed(function) \
	-label "2 [msgcat::mc {not}] 1" \
	-value 2not1 -command [list CATMatchDialogFunctionMenu $f]
    ttk::checkbutton $f.unique -text [msgcat::mc {Unique}] -variable ed(unique)

    ttk::label $f.treturn -text [msgcat::mc {Return}]
    ttk::menubutton $f.return -textvariable ed(return,msg) \
	-menu $f.return.menu
    menu $f.return.menu -tearoff 0
    $f.return.menu add radiobutton -variable ed(return) \
	-label "1 [msgcat::mc {and}] 2" \
	-value 1and2 -command [list CATMatchDialogReturnMenu $f]
    $f.return.menu add radiobutton -variable ed(return) \
	-label "1 [msgcat::mc {only}]" \
	-value 1only -command [list CATMatchDialogReturnMenu $f]
    $f.return.menu add radiobutton -variable ed(return) \
	-label "2 [msgcat::mc {only}]" \
	-value 2only -command [list CATMatchDialogReturnMenu $f]

    grid $f.tmatch $f.match1 $f.tand $f.match2 -padx 2 -pady 2 -sticky ew
    grid $f.terror $f.error x $f.eformat -padx 2 -pady 2 -sticky w
    grid $f.tfunction $f.function x $f.unique -padx 2 -pady 2 -sticky ew
    grid $f.treturn $f.return -padx 2 -pady 2 -sticky ew

    # Buttons
    set f [ttk::frame $w.buttons]
    ttk::button $f.ok -text [msgcat::mc {OK}] -command {set ed(ok) 1} \
        -default active 
    ttk::button $f.cancel -text [msgcat::mc {Cancel}] -command {set ed(ok) 0}
    pack $f.ok $f.cancel -side left -expand true -padx 2 -pady 4

    bind $w <Return> {set ed(ok) 1}

    # Fini
    ttk::separator $w.sep -orient horizontal
    pack $w.param -side top -fill both -expand true
    pack $w.buttons $w.sep -side bottom -fill x

    CATMatchDialogFunctionMenu $w.param
    CATMatchDialogReturnMenu $w.param

    DialogCenter $w
    DialogWait $w ed(ok) $w.buttons.ok

    if {$ed(ok)} {
	set icat(match1) $ed(match1)
	set icat(match2) $ed(match2)
	set icat(error) $ed(error)
	set icat(eformat) $ed(rformat)
	set icat(function) $ed(function)
	set icat(unique) $ed(unique)
	set icat(return) $ed(return)
    }

    DialogDismiss $w
    destroy $mb

    set rr $ed(ok)
    unset ed
    return $rr
}

proc CATMatchDialogFunctionMenu {f} {
    global ed

    switch $ed(function) {
	1and2 {
	    $f.unique configure -state normal
	    $f.return configure -state normal
	    set ed(function,msg) "1 [msgcat::mc {and}] 2"
	}
	1not2 {
	    $f.unique configure -state disabled
	    $f.return configure -state disabled
	    set ed(function,msg) "1 [msgcat::mc {not}] 2"
	}
	2not1 {
	    $f.unique configure -state disabled
	    $f.return configure -state disabled
	    set ed(function,msg) "2 [msgcat::mc {not}] 1"
	}
    }
}

proc CATMatchDialogReturnMenu {f} {
    global ed

    switch $ed(return) {
	1and2 {
	    set ed(return,msg) "1 [msgcat::mc {and}] 2"
	}
	1only {
	    set ed(return,msg) "1 [msgcat::mc {only}]"
	}
	2only {
	    set ed(return,msg) "2 [msgcat::mc {only}]"
	}
    }
}

proc CATMatchDialogCatsMenu {f which cats} {
    global ed

    set m $f.$which.menu

    menu $m -tearoff 0
    foreach varname $cats {
	upvar #0 $varname var
	global $varname

	$m add radiobutton -variable ed($which) -label $var(title) \
	    -value $varname -command [list set ed($which,msg) $var(title)]
    }
}

proc CATMatch {frame varname1 varname2}  {
    global icat

    global debug
    if {$debug(tcl,cat)} {
	puts stderr "CATMatch $frame $varname1 $varname2"
    }

    if {$varname1 == {} || $varname2 == {}} {
	return
    }

    upvar #0 $varname1 var1
    global $varname1
    if {![info exists var1(tbldb)]} {
	# error
	return
    }
    global $var1(tbldb)
    set t1 $var1(tbldb)
    upvar #0 $t1 T1

    upvar #0 $varname2 var2
    global $varname2
    if {![info exists var2(tbldb)]} {
	# error
	return
    }
    global $var2(tbldb)
    set t2 $var2(tbldb)
    upvar #0 $t2 T2

    if {![CATValidDB $var1(tbldb)] || ![CATValidDB $var2(tbldb)]} {
	return
    }

    if {$T1(Nrows)==0 || $T2(Nrows)==0} {
	Warning [msgcat::mc {Match Catalog requires at least 1 row per catalog}]
	return
    }

    # cat1
    set nrows1 [starbase_nrows $var1(tbldb)]
    set cols1 [starbase_columns $var1(tbldb)]
    set colx1 [starbase_colnum $var1(tbldb) $var1(colx)]
    set coly1 [starbase_colnum $var1(tbldb) $var1(coly)]

    set nrows2 [starbase_nrows $var2(tbldb)]
    set cols2 [starbase_columns $var2(tbldb)]
    set colx2 [starbase_colnum $var2(tbldb) $var2(colx)]
    set coly2 [starbase_colnum $var2(tbldb) $var2(coly)]

    global xx1 yy1
    global xx2 yy2
    global rr
    set xx1 {}
    set yy1 {}
    set xx2 {}
    set yy2 {}
    set rr {}

    for {set ii 1} {$ii <= $nrows1} {incr ii} {
	lappend xx1 [starbase_get $var1(tbldb) $ii $colx1]
	lappend yy1 [starbase_get $var1(tbldb) $ii $coly1]
    }
    for {set jj 1} {$jj <= $nrows2} {incr jj} {
	lappend xx2 [starbase_get $var2(tbldb) $jj $colx2]
	lappend yy2 [starbase_get $var2(tbldb) $jj $coly2]
    }

    global current
    $current(frame) match xx1 yy1 $var1(system) $var1(sky) \
	xx2 yy2 $var2(system) $var2(sky) \
	$icat(error) $var1(system) $icat(eformat) rr

    switch $icat(function) {
	1and2 {
	    if {$icat(unique)} {
		set aa [lsort -index 0 -integer -unique $rr]
		set rr [lsort -index 1 -integer -unique $aa]
	    } else {
		set rr [lsort -index 0 -integer $rr]
	    }
	}
	1not2 {}
	2not1 {}
    }

    if {[llength $rr] == 0} {
	Info [msgcat::mc {No Items Found}]
	return
    }

    switch $icat(function) {
	1and2 {
	    switch $icat(return) {
		1and2 {CATMatchAnd1and2 $varname1 $varname2 rr}
		1only {CATMatchAnd1only $varname1 $varname2 rr}
		2only {CATMatchAnd2only $varname1 $varname2 rr}
	    }
	    
	}
	1not2 {CATMatchNot $varname1 $varname2 rr}
	2not1 {CATMatchNot $varname2 $varname1 rr}
    }
}

proc CATMatchAnd1and2 {varname1 varname2 rrname} {
    upvar $rrname  rr

    upvar #0 $varname1 var1
    global $varname1
    global $var1(tbldb)
    set t1 $var1(tbldb)
    upvar #0 $t1 T1

    upvar #0 $varname2 var2
    global $varname2
    global $var2(tbldb)
    set t2 $var2(tbldb)
    upvar #0 $t2 T2

    set varname [CATDialog catmatch {} {} {} none]
    upvar #0 $varname var
    global $varname
    global $var(catdb)
    set db $var(catdb)
    upvar #0 $db T

    ARStatus $varname [msgcat::mc {Loading Catalog}]

    CATOff $varname
    CATSet $varname {} "$var1(catalog) and $var2(catalog)" \
	"$var1(title) and $var2(title)"

    set var(name) {}
    set var(x) {}
    set var(y) {}
    set var(width) {}
    set var(height) {}

    # required 
    set T(Header) $T1(Header)
    foreach ll $T2(Header) {
	# make cols unique
	lappend T(Header) "2_$ll"
    }
    set T(Dashes) [regsub -all {[A-Za-z0-9]} $T(Header) {-}]
    set T(Ndshs) [expr $T1(Ndshs)+$T2(Ndshs)]
    set T(H_1) $T(Header)
    set T(H_2) $T(Dashes)
    set T(HLines) 2
    set T(Nrows) 0
    starbase_colmap T

    # optional
    if {[info exists ${t1}(DataType)]} {
	set T(DataType) $T1(DataType)
	if {[info exists ${t2}(DataType)]} {
	    append T(DataType) " $T2(DataType)"
	}
    }
    if {[info exists ${t1}(Id)]} {
	set T(Id) $T1(Id)
	if {[info exists ${t2}(Id)]} {
	    append T(Id) " $T2(Id)"
	}
    }
    if {[info exists ${t1}(ArraySize)]} {
	set T(ArraySize) $T1(ArraySize)
	if {[info exists ${t2}(ArraySize)]} {
	    append T(ArraySize) " $T2(ArraySize)"
	}
    }
    if {[info exists ${t1}(Width)]} {
	set T(Width) $T1(Width)
	if {[info exists ${t2}(Width)]} {
	    append T(Width) " $T2(Width)"
	}
    }
    if {[info exists ${t1}(Precision)]} {
	set T(Precision) $T1(Precision)
	if {[info exists ${t2}(Precision)]} {
	    append T(Precision) " $T2(Precision)"
	}
    }
    if {[info exists ${t1}(Unit)]} {
	set T(Unit) "$T1(Unit) "
	if {[info exists ${t2}(Unit)]} {
	    append T(Unit) " $T2(Unit)"
	}
    }
    if {[info exists ${t1}(Ref)]} {
	set T(Ref) $T1(Ref)
	if {[info exists ${t2}(Ref)]} {
	    append T(Ref) " $T2(Ref)"
	}
    }
    if {[info exists ${t1}(Ucd)]} {
	set T(Ucd) $T1(Ucd)
	if {[info exists ${t2}(Ucd)]} {
	    append T(Ucd) " $T2(Ucd)"
	}
    }
    if {[info exists ${t1}(Description)]} {
	set T(Description) $T1(Description)
	if {[info exists ${t2}(Description)]} {
	    append T(Description) " $T2(Description)"
	}
    }

    set ll 0
    foreach {r1 r2} [join $rr] {
	incr ll

	for {set ii 1} {$ii<=$T1(Ncols)} {incr ii} {
	    set T($ll,$ii) $T1($r1,$ii)
	}
	for {set jj 1} {$jj<=$T2(Ncols)} {incr jj} {
	    set T($ll,[expr $ii+$jj-1]) $T2($r2,$jj)
	}

	incr T(Nrows)
    }

    ARDone $varname
    CATLoadDone $varname
}

proc CATMatchAnd1only {varname1 varname2 rrname} {
    upvar $rrname  rr

    upvar #0 $varname1 var1
    global $varname1
    global $var1(tbldb)
    set t1 $var1(tbldb)
    upvar #0 $t1 T1

    upvar #0 $varname2 var2
    global $varname2
    global $var2(tbldb)
    set t2 $var2(tbldb)
    upvar #0 $t2 T2

    set varname [CATDialog catmatch {} {} {} none]
    upvar #0 $varname var
    global $varname
    global $var(catdb)
    set db $var(catdb)
    upvar #0 $db T

    ARStatus $varname [msgcat::mc {Loading Catalog}]

    CATOff $varname
    CATSet $varname {} "$var1(catalog) and $var2(catalog)" \
	"$var1(title) and $var2(title)"

    set var(name) {}
    set var(x) {}
    set var(y) {}
    set var(width) {}
    set var(height) {}

   # required 
    set T(Header) $T1(Header)
    set T(Dashes) $T1(Dashes)
    set T(Ndshs) $T1(Ndshs)
    set T(HLines) $T1(HLines)
    for {set ii 1} {$ii<=$T1(HLines)} {incr ii} {
	set T(H_$ii) $T1(H_$ii)
    }
    set T(Nrows) 0
    starbase_colmap T

    # optional
    if {[info exists ${t1}(DataType)]} {
	set T(DataType) $T1(DataType)
    }
    if {[info exists ${t1}(Id)]} {
	set T(Id) $T1(Id)
    }
    if {[info exists ${t1}(ArraySize)]} {
	set T(ArraySize) $T1(ArraySize)
    }
    if {[info exists ${t1}(Width)]} {
	set T(Width) $T1(Width)
    }
    if {[info exists ${t1}(Precision)]} {
	set T(Precision) $T1(Precision)
    }
    if {[info exists ${t1}(Unit)]} {
	set T(Unit) $T1(Unit)
    }
    if {[info exists ${t1}(Ref)]} {
	set T(Ref) $T1(Ref)
    }
    if {[info exists ${t1}(Ucd)]} {
	set T(Ucd) $T1(Ucd)
    }
    if {[info exists ${t1}(Description)]} {
	set T(Description) $T1(Description)
    }

    set ll 0
    foreach {r1 r2} [join $rr] {
	incr ll

	for {set ii 1} {$ii<=$T1(Ncols)} {incr ii} {
	    set T($ll,$ii) $T1($r1,$ii)
	}

	incr T(Nrows)
    }

    ARDone $varname
    CATLoadDone $varname
}

proc CATMatchAnd2only {varname1 varname2 rrname} {
    upvar $rrname  rr

    upvar #0 $varname1 var1
    global $varname1
    global $var1(tbldb)
    set t1 $var1(tbldb)
    upvar #0 $t1 T1

    upvar #0 $varname2 var2
    global $varname2
    global $var2(tbldb)
    set t2 $var2(tbldb)
    upvar #0 $t2 T2

    set varname [CATDialog catmatch {} {} {} none]
    upvar #0 $varname var
    global $varname
    global $var(catdb)
    set db $var(catdb)
    upvar #0 $db T

    ARStatus $varname [msgcat::mc {Loading Catalog}]

    CATOff $varname
    CATSet $varname {} "$var1(catalog) and $var2(catalog)" \
	"$var1(title) and $var2(title)"

    set var(name) {}
    set var(x) {}
    set var(y) {}
    set var(width) {}
    set var(height) {}

   # required 
    set T(Header) $T2(Header)
    set T(Dashes) $T2(Dashes)
    set T(Ndshs) $T2(Ndshs)
    set T(HLines) $T2(HLines)
    for {set ii 1} {$ii<=$T2(HLines)} {incr ii} {
	set T(H_$ii) $T2(H_$ii)
    }
    set T(Nrows) 0
    starbase_colmap T

    # optional
    if {[info exists ${t2}(DataType)]} {
	set T(DataType) $T2(DataType)
    }
    if {[info exists ${t2}(Id)]} {
	set T(Id) $T2(Id)
    }
    if {[info exists ${t2}(ArraySize)]} {
	set T(ArraySize) $T2(ArraySize)
    }
    if {[info exists ${t2}(Width)]} {
	set T(Width) $T2(Width)
    }
    if {[info exists ${t2}(Precision)]} {
	set T(Precision) $T2(Precision)
    }
    if {[info exists ${t2}(Unit)]} {
	set T(Unit) $T2(Unit)
    }
    if {[info exists ${t2}(Ref)]} {
	set T(Ref) $T2(Ref)
    }
    if {[info exists ${t2}(Ucd)]} {
	set T(Ucd) $T2(Ucd)
    }
    if {[info exists ${t2}(Description)]} {
	set T(Description) $T2(Description)
    }

    set ll 0
    foreach {r1 r2} [join $rr] {
	incr ll

	for {set ii 1} {$ii<=$T2(Ncols)} {incr ii} {
	    set T($ll,$ii) $T2($r2,$ii)
	}

	incr T(Nrows)
    }

    ARDone $varname
    CATLoadDone $varname
}

proc CATMatchNot {varname1 varname2 rrname} {
    upvar $rrname  rr

    upvar #0 $varname1 var1
    global $varname1
    global $var1(tbldb)
    set t1 $var1(tbldb)
    upvar #0 $t1 T1

    upvar #0 $varname2 var2
    global $varname2
    global $var2(tbldb)
    set t2 $var2(tbldb)
    upvar #0 $t2 T2

    set varname [CATDialog catmatch {} {} {} none]
    upvar #0 $varname var
    global $varname
    global $var(catdb)
    set db $var(catdb)
    upvar #0 $db T

    ARStatus $varname [msgcat::mc {Loading Catalog}]

    CATOff $varname
    CATSet $varname {} "$var1(catalog) and not $var2(catalog)" \
	"$var1(title) and not $var2(title)"

    set var(name) {}
    set var(x) {}
    set var(y) {}
    set var(width) {}
    set var(height) {}

    # required 
    set T(Header) $T1(Header)
    set T(Dashes) $T1(Dashes)
    set T(Ndshs) $T1(Ndshs)
    set T(HLines) $T1(HLines)
    for {set ii 1} {$ii<=$T1(HLines)} {incr ii} {
	set T(H_$ii) $T1(H_$ii)
    }
    set T(Nrows) 0
    starbase_colmap T

    # optional
    if {[info exists ${t1}(DataType)]} {
	set T(DataType) $T1(DataType)
    }
    if {[info exists ${t1}(Id)]} {
	set T(Id) $T1(Id)
    }
    if {[info exists ${t1}(ArraySize)]} {
	set T(ArraySize) $T1(ArraySize)
    }
    if {[info exists ${t1}(Width)]} {
	set T(Width) $T1(Width)
    }
    if {[info exists ${t1}(Precision)]} {
	set T(Precision) $T1(Precision)
    }
    if {[info exists ${t1}(Unit)]} {
	set T(Unit) $T1(Unit)
    }
    if {[info exists ${t1}(Ref)]} {
	set T(Ref) $T1(Ref)
    }
    if {[info exists ${t1}(Ucd)]} {
	set T(Ucd) $T1(Ucd)
    }
    if {[info exists ${t1}(Description)]} {
	set T(Description) $T1(Description)
    }

    set ss {}
    foreach {r1 r2} [join $rr] {
	lappend ss $r1
    }
    set ss [lsort -integer -unique $ss]

    set ll 0
    for {set jj 1} {$jj<=$T1(Nrows)} {incr jj} {
	if {[lsearch -integer -sorted $ss $jj] == -1} {
	    incr ll
	    for {set ii 1} {$ii<=$T1(Ncols)} {incr ii} {
		set T($ll,$ii) $T1($jj,$ii)
	    }
	    incr T(Nrows)
	}
    }

    ARDone $varname
    CATLoadDone $varname
}
