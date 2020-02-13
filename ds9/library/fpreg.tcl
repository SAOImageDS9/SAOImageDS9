#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc FPReg {varname interactive resultname} {
    upvar $resultname result

    upvar #0 $varname var
    global $varname
    global $var(tbldb)

    # init result
    set result {}

    set colreg [starbase_colnum $var(tbldb) $var(colreg)]

    # process prologue
    append result "# Region file format: DS9 version 4.0\n"

    # tbldb
    set nrows [starbase_nrows $var(tbldb)]
    set cols [starbase_columns $var(tbldb)]

    # system
    append result "wcs; fk5\n"

    # for each row in the table ...
    for {set ii 1} {$ii <= $nrows} {incr ii} {

	# col
	set rr [starbase_get $var(tbldb) $ii $colreg]
	set ra 0
	set dec 0
	FPFindCenter $rr ra dec
	
	# props
	set color green

	if {$interactive} {
	    set template "# composite($ra,$dec,0) || composite=1 color=\${color} tag={${varname}} tag={${varname}.\${ii}} select=0 edit=0 move=0 rotate=0 delete=1 highlite=1 callback=highlite FPHighliteCB {${varname}.\${ii}} callback=unhighlite FPUnhighliteCB {${varname}.\${ii}}\n$rr\n"
	} else {
	    set template "# composite($ra,$dec,0) || composite=1 color=\${color}\n$rr\n"
	}
	append result [subst $template]
    }
}

proc FPFindCenter {str raname decname} {
    upvar $raname ra
    upvar $decname dec
    
    regsub -all {\|} $str {} str
    regsub -all {;} $str {} str
    regsub -all {\s+} $str { } str

    set ll [split $str { }]
    set cnt 0
    set ra 0
    set dec 0

    for {set ii 0} {$ii<[llength $ll]} {} {
	set token [string tolower [lindex $ll $ii]]
	switch $token {
	    polygon {
		incr ii
		while {[lindex $ll $ii] != {} &&
		       [string is double -strict [lindex $ll $ii]]} {
		    set ra [expr $ra+[lindex $ll $ii]]
		    incr ii
		    set dec [expr $dec+[lindex $ll $ii]]
		    incr ii

		    incr cnt
		}
	    }
	    circle {
		incr ii
		set ra [expr $ra+[lindex $ll $ii]]
		incr ii
		set dec [expr $dec+[lindex $ll $ii]]
		incr ii 2

		incr cnt
	    }
	    ellipse -
	    box {
		incr ii
		set ra [expr $ra+[lindex $ll $ii]]
		incr ii
		set dec [expr $dec+[lindex $ll $ii]]
		incr ii 3

		incr cnt
	    }
	    default {
		# just plug thru garbage
		incr ii
	    }
	}
    }

    if {$cnt>0} {
	set ra [expr $ra/$cnt]
	set dec [expr $dec/$cnt]
    }
}
