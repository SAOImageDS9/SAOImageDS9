#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc CATFltSort {varname} {
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

    # sort?
    set order {}
    if {$var(sort) != {}} {
	set col $catsrc($var(sort))

	for {set ii 1} {$ii<=$catsrc(Nrows)} {incr ii} {
	    set val $catsrc($ii,$col)
	    # if blank, set to 0
	    if {$val == {}} {
		set val 0
	    }
	    lappend order "[list $ii $val]"
	}

	# first try as real, if error, then ascii
	if {[catch {lsort $var(sort,dir) -real -index 1 $order} oo]} {
	    set oo [lsort $var(sort,dir) -ascii -index 1 $order]
	}
	set order $oo
    } else {
	for {set ii 1} {$ii<=$catsrc(Nrows)} {incr ii} {
	    lappend order "[list $ii {}]"
	}
    }

    # data
    set kk 0
    for {set ii 1} {$ii<=$catsrc(Nrows)} {incr ii} {
	set id [lindex [lindex $order [expr $ii-1]]  0]
	# now filter
	set pass 1
	if {$var(filter) != {}} {
	    # eval all colnames
	    foreach col $catsrc(Header) {
		set col [string trim $col]
		set val $catsrc($id,$catsrc($col))
		# here's a tough one-- 
		# what to do if the column is blank
		# for now, just set it to '0'
		if {[string trim "$val"] == {}} {
		    set val 0
		}
		eval "set \{$col\} \{$val\}"
	    }
	    # subst any columv vars
	    if {[catch {subst $var(filter)} ff]} {
		return 0
	    }
	    # evaluate filter
	    if {[catch {expr $ff} result]} {
		return 0
	    }
	    # do we keep the row?
	    if {!$result} {
		set pass 0
	    }
	}

	if {$pass} {
	    incr kk
	    for {set jj 1} {$jj<=$catsrc(Ncols)} {incr jj} {
		set catdest($kk,$jj) $catsrc($id,$jj)
	    }
	}
    }

    # success
    set catdest(Nrows) $kk
    return 1
}


