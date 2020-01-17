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
    switch $var(psystem) {
	image -
	physical -
	detector -
	amplifier {set sys $var(psystem)}
	default {set sys "$var(psystem); $var(psky)"}
    }

    # for each row in the catalog table ...
    for {set ii 1} {$ii <= $nrows} {incr ii} {

	# col
	set rr [starbase_get $var(tbldb) $ii $colreg]
	regsub -all {Polygon J2000} $rr {; fk5; Polygon} rr
	
	# props
	set color green
	set width 1
	set dash 0

	if {$interactive} {
	    set template "\${sys};$rr # color=\${color} width=\${width} dash=\${dash} tag={${varname}} tag={${varname}.\${ii}} select=0 edit=0 move=0 rotate=0 delete=1 highlite=1 callback=delete TBLDeleteCB {${varname}.\${ii}} callback=highlite TBLHighliteCB {${varname}.\${ii}} callback=unhighlite TBLUnhighliteCB {${varname}.\${ii}}\n"
	} else {
	    set template "\${sys};$rr # color=\${color} width=\${width} dash=\${dash} tag=$varname\n"
	}
	append result [subst $template]
    }
}
