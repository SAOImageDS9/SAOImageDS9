#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc FPRegCXC {varname interactive resultname} {
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
	FPFindCenterCXC $rr ra dec
	
	# props
	set color green

	if {$interactive} {
	    set template "# composite($ra,$dec,0) || composite=1 color=\${color} tag={${varname}} tag={${varname}.\${ii}} select=0 edit=0 move=0 rotate=0 delete=1 highlite=1 callback=highlite FPHighliteCB {${varname}.\${ii}} callback=unhighlite FPUnhighliteCB {${varname}.\${ii}}\n$rr\n"
	} else {
	    set template "# composite($ra,$dec,0) || composite=1 color=\${color} tag=$varname\n$rr\n"
	}
	append result [subst $template]
    }
}

proc FPFindCenterCXC {str raname decname} {
    upvar $raname ra
    upvar $decname dec
    
    regsub -all {Polygon} $str {} str
    regsub -all {\|} $str {} str
    regsub -all {;} $str {} str

    set cnt 0
    set ra 0
    set dec 0
    foreach {rr dd} $str {
	set ra [expr $ra+$rr]
	set dec [expr $dec+$dd]
	incr cnt
    }
    if {$cnt>0} {
	set ra [expr $ra/$cnt]
	set dec [expr $dec/$cnt]
    } else {
	# should not need this
	set ra [lindex $str 1]
	set dec [lindex $str 2]
    }
}

proc FPRegHLA {varname interactive resultname} {
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
	
	# props
	set color green

	if {$interactive} {
	    set template "$rr # color=\${color} tag={${varname}} tag={${varname}.\${ii}} select=0 edit=0 move=0 rotate=0 delete=1 highlite=1 callback=highlite FPHighliteCB {${varname}.\${ii}} callback=unhighlite FPUnhighliteCB {${varname}.\${ii}}\n"
	} else {
	    set template "$rr # color=\${color} tag=$varname\n"
	}
	append result [subst $template]
    }
}
