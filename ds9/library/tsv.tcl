#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc TSVRead {t fn} {
    upvar #0 $t T
    global $t

    global debug
    if {$debug(tcl,cat) || $debug(tcl,sia)} {
	puts stderr "TSVRead"
    }

    if {$fn == {}} {
	return
    }

    catch {
	set fp [open $fn r]


	# init db
	set T(Nrows) 0
	set T(Ncols) 0
	set T(Header) {}
	set T(HLines) 0
	
	# ok, get first non comment line
	while (true) {
	    if {[gets $fp line] == -1} {
		return
	    }

	    # skip any comments
	    if {[string range $line 0 0] != "#"} {
		break;
	    }
	}

	# reduce number of spaces
	regsub -all { +} $line { } line

	# strip any quotes
	regsub -all {\"} $line {} line

	# determine separator
	if {[llength [split $line "\t"]] > 1} {
	    set ss "\t"
	} elseif {[llength [split $line ","]] > 1} {
	    set ss ","
	} elseif {[llength [split $line ":"]] > 1} {
	    set ss ":"
	} else {
	    set ss " "
	}

	# determine header
	set first {}
	set foo [split $line $ss]
	if {([string is integer [lindex $foo 0]] || [string is double [lindex $foo 0]]) && ([string is integer [lindex $foo 1]] || [string is double [lindex $foo 1]])} {
	    # determine num cols
	    set cnt [llength $foo]

	    # we need to build an header
	    set first $line

	    set line "X${ss}Y"
	    for {set ii 2} {$ii<$cnt} {incr ii} {
		append line "${ss}column[expr $ii+3]"
	    }
	}

	# process header
	set T(Header) [split $line $ss]
	set T(HLines) 2
	set T(H_1) $T(Header)
	set T(H_2) [regsub -all {[A-Za-z0-9]} $T(Header) {-}]
	starbase_colmap $t

	# process table
	if {$first == {}} {
	    gets $fp line
	} else {
	    set line $first
	}

	while {![eof $fp]} {
	    # skip any comments
	    if {[string range $line 0 0] == "#"} {
		set line {}
	    }

	    # reduce number of spaces
	    regsub -all { +} $line { } line
	    set line [string trim $line]

	    # do we have something?
	    if {$line != {}} {
		# ok, save it
		incr ${t}(Nrows)
		set r $T(Nrows)

		set NCols [starbase_ncols $t]
		set c 1
		foreach val [split $line $ss] {
		    set T($r,$c) $val
		    incr c
		}
		for {} {$c <= $NCols} {incr c} {
		    set T($r,$c) {}
		}
	    }

	    gets $fp line
	}

	close $fp
    }
}

proc TSVWrite {t fn {offset 0}} {
    upvar #0 $t T
    global $t

    global debug
    if {$debug(tcl,cat) || $debug(tcl,sia)} {
	puts stderr "TSVWrite"
    }

    if {$fn == {}} {
	return
    }

    set fp [open $fn w]

    set nr $T(Nrows)
    set nc $T(Ncols)

    # header
    for {set cc 1} {$cc < $nc} {incr cc} {
	puts -nonewline $fp "[lindex $T(Header) [expr $cc-1]]\t"
    }
    puts $fp "[lindex $T(Header) [expr $nc-1]]"

    # data
    for {set rr [expr 1+$offset]} {$rr <= $nr} {incr rr} {
	for {set cc 1} {$cc < $nc} {incr cc} {
	    puts -nonewline $fp "$T($rr,$cc)\t"
	}
	puts $fp "$T($rr,$nc)"
    }

    close $fp
}

