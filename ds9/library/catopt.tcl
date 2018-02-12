#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

# sample CATKeyCB
#   Allow the user to define callbacks to be called when 
#   the user presses a key with selected regions while in edit mode.

if {0} {
# add to CATReg
# callback=key CATKeyCB {${varname}.\${ii}.a}

proc CATKeyCB {tag id} {
    global icat

    global debug
    if {$debug(tcl,cat)} {
	puts stderr "CATKeyCB $tag $id"
    }

    set t [split $tag .]
    set varname [lindex $t 0]
    set row [lindex $t 1]
    set key [lindex $t 2]

    upvar #0 $varname var
    global $varname
    global $var(tbldb)

    if {![info exists ${varname}(top)]} {
	return
    }

    if {$icat(key) == $key} {
	switch -- $key {
	    a {
		puts stderr "Key: $key $row"
		return

		# column name 'TooManySrcs'
		set tcol [starbase_colnum $var(tbldb) {TooManySrcs}]

		# toggle between '0' and '1'
		set tt 	[starbase_get $var(tbldb) $row $tcol]
		if {$tt == {1}} {
		    starbase_set $var(tbldb) $row $tcol {0}
		} else {
		    starbase_set $var(tbldb) $row $tcol {1}
		}
		lappend icat(key,update) [list $varname $row]
	    }
	}
    }
}
}
