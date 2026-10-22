#  Copyright (C) 1999-2021
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc TBLFltSort {varname src dest} {
    upvar #0 $varname var
    global $varname

    upvar #0 $src catsrc
    global $src

    upvar #0 $dest catdest
    global $dest

    # create header
    set catdest(Header) $catsrc(Header)
    starbase_colmap catdest

    set catdest(Nrows) 0
    set catdest(HLines) $catsrc(HLines)

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
    # filters are evaluated in their own namespace, so column names
    # can't clobber our locals
    set ns ::TBLFltContext
    catch {namespace delete $ns}
    namespace eval $ns {}

    set kk 0
    for {set ii 1} {$ii<=$catsrc(Nrows)} {incr ii} {
	set id [lindex [lindex $order [expr $ii-1]]  0]
	# now filter
	set pass 1
	if {$var(filter) != {}} {
	    if {[catch {TBLFltAccept $ns $src $id $var(filter)} result]} {
		namespace delete $ns
		return 0
	    }
	    # do we keep the row?
	    if {!$result} {
		set pass 0
	    }
	}

	if {$pass} {
	    incr kk
	    # remember the source row, for selections
	    set catdest(SrcRow,$kk) $id
	    for {set jj 1} {$jj<=$catsrc(Ncols)} {incr jj} {
		set catdest($kk,$jj) $catsrc($id,$jj)
	    }
	}
    }
    namespace delete $ns

    # success
    set catdest(Nrows) $kk
    return 1
}

proc TBLFltAccept {ns src id filter} {
    upvar #0 $src catsrc

    # source row number, set first so a real column named _row wins
    namespace eval $ns [list set _row $id]

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
	namespace eval $ns [list set $col $val]
    }

    # subst any column vars, then evaluate
    set ff [namespace eval $ns [list subst $filter]]
    return [namespace eval $ns [list expr $ff]]
}

# Source (catdb) row numbers of the rows selected in the table
proc TBLSelectedSrcRows {varname} {
    upvar #0 $varname var
    upvar #0 $var(tbldb) db

    set rows {}
    foreach sel [$var(tbl) curselection] {
	set rr [lindex [split $sel ,] 0]
	# skip header row
	if {$rr < 1 || $rr > $db(Nrows)} {
	    continue
	}
	if {[info exists db(SrcRow,$rr)]} {
	    lappend rows $db(SrcRow,$rr)
	} else {
	    lappend rows $rr
	}
    }
    return [lsort -integer -unique $rows]
}

# Matches a row-number term written by TBLRowFilterSet
proc TBLRowFilterRE {} {
    return {\$_row in \{[0-9 ]*\}}
}

# Restrict filter to the given source rows. An existing row term is
# replaced rather than nested; the new rows are always a subset of it.
proc TBLRowFilterSet {filter rows} {
    set term "\$_row in {$rows}"
    if {[regsub [TBLRowFilterRE] $filter $term ff]} {
	return $ff
    } elseif {$filter != {}} {
	return "($filter) && ($term)"
    } else {
	return $term
    }
}

# Remove any row-number term. Replaced by 1 so a surrounding
# (..) && (..) stays valid; a filter that was only the term becomes empty.
proc TBLRowFilterStrip {filter} {
    if {[regexp "^[TBLRowFilterRE]\$" $filter]} {
	return {}
    }
    regsub -all [TBLRowFilterRE] $filter {1} ff
    return $ff
}


