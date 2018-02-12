#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

# ####
#
# starbase.tcl -- Tcl interface to starbase
#
# ####

# Starbase Tables Interface
#

set starbase_debug 0

proc Starbase {} {
	global  Starbase
	return $Starbase(version)
}

set Starbase(version) "Starbase Tcl Driver 1.0"

proc starbase_nrows   { D } 	        { upvar $D data; return $data(Nrows) 	}
proc starbase_ncols   { D } 	        { upvar $D data; return $data(Ncols) 	}
proc starbase_get     { D row col }     { upvar $D data; return $data($row,$col) 	}
proc starbase_set     { D row col val } { upvar $D data; set data($row,$col) $val; 	}
proc starbase_colname { D num  }        { upvar $D data; return $data(0,$num) 	}
#proc starbase_columns { D      }        { upvar $D data; return $data(Header)  }
proc starbase_colnum  { D name }        { upvar $D data; return $data($name) 	}

proc starbase_columns {t} {
    upvar $t T

    set row {}
    set Ncols $T(Ncols)
    for { set c 1 } { $c <= $Ncols } { incr c } {
	lappend row $T(0,$c)
    }

    return $row
}

proc starbase_init { t } {
	upvar t T

	set T(Nrows) 0
	set T(Ncols) 0
	set T(Header) ""
}

# Set up a starbase data array for use with ted
#
proc starbase_driver { Dr } {
	upvar $Dr driver

	set driver(nrows)	starbase_nrows
	set driver(ncols)	starbase_ncols
	set driver(get)		starbase_get
	set driver(set)		starbase_set
	set driver(colname)	starbase_colname
	set driver(colnum)	starbase_colnum
	set driver(columns)	starbase_columns
	set driver(colins)	starbase_colins
	set driver(coldel)	starbase_coldel
	set driver(colapp)	starbase_colapp
	set driver(rowins)	starbase_rowins
	set driver(rowdel)	starbase_rowdel
	set driver(rowapp)	starbase_rowapp
}
starbase_driver Starbase

proc starbase_new { t args } {
	upvar $t T

    set T(Header) $args
    set T(Ndshs)  [llength $T(Header)]
    set T(HLines) 2
    starbase_colmap T

    set T(Nrows) 0
}

proc starbase_colmap { h } {
	upvar $h H

    set c 0	
    foreach column $H(Header) {
	incr c
	set column [string trim $column]
	set H($column) $c
	set H(0,$c) $column
    }
    set H(Ncols) $c
}

proc starbase_coldel { t here } {
	upvar $t T

    set Ncols $T(Ncols)

    set T(Header) [lreplace $T(Header) [expr $here - 1] [expr $here - 1]
    starbase_colmap T

    for { set row 1 } { $row <= $T(Nrows) } { incr row } {
        for { set col $here } { $col < $Ncols } { incr col } {
	    if { [catch { set val $T($row,[expr $col + 1]) }] } {
		set T($row,$col) ""
	    } else {
	        set T($row,$col) $val
	    }
	}
    }
}

proc starbase_colins { t name here } {
	upvar $t T

    if { [info exists $T(Header)] == 0 } {
	set T(Header) $name
    } else {
        set T(Header) [linsert $T(Header) [expr $here - 1] $name]
    }
    starbase_colmap T

    for { set row 1 } { $row <= $T(Nrows) } { incr row } {
        for { set col $T(Ncol) } { $col > $here } { incr col -1 } {
	    if { [catch { set val $T($row,[expr $col - 1]) }] } {
		set T($row,$col) ""
	    } else {
	        set T($row,$col) $val
	    }
	}
    }

    for { set row 1 } { $row <= $T(Nrows) } { incr row } {
	set T($row,$here) ""
    }
}

proc starbase_header { h fp } {
	upvar $h H
	global starbase_line
	set N 1

    if { [info exists starbase_line] } {
	set line $starbase_line
	set n 1

	set H(H_$n) $line
	if { [regexp -- {^ *(-)+ *(\t *(-)+ *)*} $line] } break
	if { $n >= 2 } {
	    set ind [string first "\t" $H(H_[expr $n-1])]
	    if { $ind >= 0 } {
		set name [string range  $H(H_[expr $n-1]) 0 [expr $ind - 1]]
		incr ind
		set H(H_$name) [string range $H(H_[expr $n-1]) $ind end]
		set H(N_$name) [expr $n-1]
	    }
#	    set l [split $H(H_[expr $n-1]) "\t"]
#	    if { [llength $l] > 1 } {
#		set name [lindex $l 0]
#		set H(H_$name) [lrange $l 1 end]
#		set H(N_$name) [expr $n-1]
#	    }
	}

	unset starbase_line
	set N 2
    }
    for { set n $N } { [set eof [gets $fp line]] != -1 } { incr n } {
	set H(H_$n) $line
	if { [regexp -- {^ *(-)+ *(\t *(-)+ *)*} $line] } break

	if { $n >= 2 } {
	    set ind [string first "\t" $H(H_[expr $n-1])]
	    if { $ind >= 0 } {
		set name [string range  $H(H_[expr $n-1]) 0 [expr $ind - 1]]
		incr ind
		set H(H_$name) [string range $H(H_[expr $n-1]) $ind end]
		set H(N_$name) [expr $n-1]
	    }
#	    set l [split $H(H_[expr $n-1]) "\t"]
#	    if { [llength $l] > 1 } {
#		set name [lindex $l 0]
#		set H(H_$name) [lrange $l 1 end]
#		set H(N_$name) [expr $n-1]
#	    }
	}

    }

    if { $eof == -1 } {
	error "ERROR: in starbase_header: unexpected eof"
    }

    set H(H_$n) $line
    set H(HLines) $n
    set H(Header) [split $H(H_[expr $n-1])  "\t"]
    set H(Dashes) [split $H(H_$n)         "\t"]
    set H(Ndshs)  [llength $H(Dashes)]

    starbase_colmap H

    return H(Header)
}

proc starbase_hdrget { h name } {
    upvar $h H

    return $H(H_$name)
}

proc starbase_hdrset { h name value } {
    upvar  #0 $h H 

    if { ![info exists H(H_$name)] } {
	set n [incr H(HLines)]

	set H(H_[expr $n-0]) $H(H_[expr $n-1])
	set H(H_[expr $n-1]) $H(H_[expr $n-2])
	set H(N_$name) [expr $n-2]
    }
    set H(H_$name) 	  $value
    set H(H_$H(N_$name)) "$name	$value"
}

proc starbase_hdrput { h fp } {
	upvar $h H

    if { ![info exists H(HLines)] || ($H(HLines) == 0)  } {
	return
    }

    set nl [expr $H(HLines) - 2]
    for { set l 1 } { $l <= $nl } {  incr l } {
	puts $fp $H(H_$l)
    }

    if { ![info exists H(Ncols)] || ($H(Ncols) == 0)  } {
	return
    }

    set nc $H(Ncols)
    for { set c 1 } { $c <= $nc } {  incr c } {
	puts -nonewline $fp "$H(0,$c)"
	if { $c != $nc } {
	    puts -nonewline $fp "\t"
	} else {
	    puts -nonewline $fp "\n"
	}
    }

    for { set c 1 } { $c <= $nc } {  incr c } {
	set len [string length $H(0,$c)]
	for { set d 1 } { $d <= $len } { incr d } {
	    puts -nonewline $fp "-"
	}
	if { $c != $nc } {
	    puts -nonewline $fp "\t"
	} else {
	    puts -nonewline $fp "\n"
	}
    }
}

proc starbase_hdrput_ { h varname } {
	upvar $h H
    upvar $varname var

    if { ![info exists H(HLines)] || ($H(HLines) == 0)  } {
	return
    }

    set nl [expr $H(HLines) - 2]
    for { set l 1 } { $l <= $nl } {  incr l } {
	append var "$H(H_$l)\n"
    }

    if { ![info exists H(Ncols)] || ($H(Ncols) == 0)  } {
	return
    }

    set nc $H(Ncols)
    for { set c 1 } { $c <= $nc } {  incr c } {
	append var "$H(0,$c)"
	if { $c != $nc } {
	    append var "\t"
	} else {
	    append var "\n"
	}
    }

    for { set c 1 } { $c <= $nc } {  incr c } {
	set len [string length $H(0,$c)]
	for { set d 1 } { $d <= $len } { incr d } {
	    append var "-"
	}
	if { $c != $nc } {
	    append var "\t"
	} else {
	    append var "\n"
	}
    }
}

proc starbase_readfp { t fp } {
	upvar $t T

    starbase_header T $fp

    set NCols [starbase_ncols T]

    for { set r 1 } { [gets $fp line] != -1 } { incr r } {
	if { [string index $line 0] == "\f" } {
	    global starbase_line
	    set starbase_line [string range $line 1 end]
	    break
	}
	set c 1
	foreach val [split $line "\t"] {
	    set T($r,$c) [string trim $val]
	    incr c
	}
	for { } { $c <= $NCols } { incr c } {
	    set T($r,$c) {}
	}
    }
    set T(Nrows) [expr $r-1]
}

proc starbase_read { t file } {
	upvar $t T

    set fp [open $file]
    starbase_readfp T $fp
    close $fp

    set T(filename) $file
}

proc starbase_writefp { t fp } {
	upvar $t T

    starbase_hdrput T $fp

    if { ![info exists T(Nrows)] || ($T(Nrows) == 0)  } {
	return
    }

    set nr $T(Nrows)
    set nc $T(Ncols)
    for { set r 1 } { $r <= $nr } {  incr r } {
	for { set c 1 } { $c < $nc } {  incr c } {
	    if { [catch { set val $T($r,$c) }] } {
		    set val ""
	    }
		    
	    puts -nonewline $fp "$val	"
	}
	if { [catch { set val $T($r,$c) }] } {
		set val ""
	}
	puts $fp $val
    }
}

proc starbase_write { t file } {
	upvar $t T

    set fp [open $file w]
    starbase_writefp T $fp
    close $fp
}

proc starbase_write_ { t } {
	upvar $t T

    set rr {}
    starbase_hdrput_ T rr

    if { ![info exists T(Nrows)] || ($T(Nrows) == 0)  } {
	return
    }

    set nr $T(Nrows)
    set nc $T(Ncols)
    for { set r 1 } { $r <= $nr } {  incr r } {
	for { set c 1 } { $c < $nc } {  incr c } {
	    if { [catch { set val $T($r,$c) }] } {
		    set val ""
	    }
		    
	    append rr "$val	"
	}
	if { [catch { set val $T($r,$c) }] } {
		set val ""
	}
	append rr "$val\n"
    }
    return $rr
}

proc starbase_rowins { t row } {
		upvar $t T

	incr T(Nrows)

	set nr $T(Nrows)
	set nc $T(Ncols)
	for { set r $nr } { $r > $row } { set r [expr $r-1] } {
	    for { set c 1 } { $c <= $nc } { incr c } {
		if { [catch { set val $T([expr $r-1],$c) }] } {
			set val ""
		}
			
	        set T($r,$c) $val
	    }
	}

	for { set c 1 } { $c <= $nc } { incr c } {
	    set T($r,$c) ""
	}
}

proc starbase_rowdel { t row } {
	upvar $t T

    incr T(Nrows) -1

    set nr $T(Nrows)
    set nc $T(Ncols)
    for { set r $row } { $r <= $nr } { incr r } {
	for { set c 1 } { $c <= $nc } { incr c } {
	    if { [catch { set val $T([expr $r+1],$c) }] } {
		    set val ""
	    }
		    
	    set T($r,$c) $val
	}
    }

    for { set c 1 } { $c <= $nc } { incr c } {
	set T($r,$c) ""
    }
}

proc starbase_httpreader { t wait sock http } {
	global $t
        global starbase_debug
	upvar #0 $wait W
	upvar #0 $t T

    set T(http) $http

    if { ![info exists T(state)]  } {
      error "ERROR: starbase_httpreader not properly initialized"
    }

    switch -- $T(state) {
	0 {
	    fconfigure $sock -blocking 1
	    set T(state)	1
	    set T(Nrows)	0
	    set T(HLines)	0
	}

	1 {
	    incr ${t}(HLines)
	    set n $T(HLines)
		
	    if { [gets $sock line] == -1 } {
		set T(state) -1
		set T(HLines) [expr $T(HLines) - 1]
		set T(Nrows) 0
		return
	    }

	    set T(H_$n) $line
	    set l [split $line]
	    if { [llength $l] > 1 } {
		set T(H_[lindex $l 0]) [lrange $l 1 end]
	    }
	    set T(H_$n) $line

	    if { [regexp -- {^ *(-)+ *(\t *(-)+ *)*} $line] } {
		set T(Header) [split $T(H_[expr $n-1])  "\t"]
		set T(Dashes) [split $T(H_$n)		"\t"]
		set T(Ndshs)  [llength $T(Dashes)]
		
		starbase_colmap T
		set T(state) 2
	    }
	}

	2 {
	    if { [gets $sock line] == -1 } {
		set T(state) 0
	    } else {
		if { $starbase_debug } { 
		    puts [format "starbase_httpreader: %s" $line]
		}
		incr ${t}(Nrows)
		set r $T(Nrows)
		
		set NCols [starbase_ncols T]
		set c 1
		foreach val [split $line "\t"] {
		    set T($r,$c) $val
		    incr c
		}
		for { } { $c <= $NCols } { incr c } {
		    set T($r,$c) {}
		}
	    }
	}

	default {
	    error "ERROR: unknown switch in starbase_httpreader"
	}
    }
}

proc starbase_cancel { t wait http } {
	upvar #0 $wait W
	upvar #0 $t T

#	set T(state) 0
	set W 1
}

proc starbase_http { t url wait } {
    upvar #0 $t T

    set T(state) 0
    set T(http) [http::geturl $url 				\
		-handler [list starbase_httpreader $t $wait] 	\
		-command [list starbase_cancel $t $wait]]
}

proc starbase_httpkill { t } {
	upvar #0 $t T

    http::reset $T(http)
}

