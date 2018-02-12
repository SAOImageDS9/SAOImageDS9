#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc InitExternalFile {} {
    global ds9

    if {[file exists "./$ds9(ext,file)"]} {
	ProcessExternalFile "./$ds9(ext,file)"
    } elseif {[file exists "./$ds9(ext,alt)"]} {
	ProcessExternalFile "./$ds9(ext,alt)"
    } elseif {[file exists "~/$ds9(ext,file)"]} {
	ProcessExternalFile "~/$ds9(ext,file)"
    } elseif {[file exists "~/$ds9(ext,alt)"]} {
	ProcessExternalFile "~/$ds9(ext,alt)"
    }
}

proc ProcessExternalFile {fn} {
    global extFits

    set status 1
    if {[file exists "$fn"]} {
	set id [open $fn r]
	while {[gets $id line] >= 0} {
	    # empty line
	    if {[string length $line] == 0} continue
	    # comments	    
	    if {[string range $line 0 0] == "\#"} continue
	    # else
	    switch -- $status {
		1 {
		    # eat the line
		    set template {}
		    set status 2
		}
		2 {
		    set template "$line"
		    set status 3
		}
		3 {
		    # eat the line
		    set status 4
		}
		4 {
		    if {"$template" != {} && "$line" != {}} {
			foreach t $template {
			    set extFits($t) "$line"
			}
		    }

		    set status 1
		}
	    }
	}
	close $id
    }
}

