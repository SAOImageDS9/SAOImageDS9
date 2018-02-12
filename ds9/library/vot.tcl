#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc VOTParse {t token} {
    upvar #0 $t T
    global $t
    global debug

    global debug
    if {$debug(tcl,cat) || $debug(tcl,sia)} {
	puts stderr "VOTParse"
    }

#    set fp [open debug.xml w]
#    puts $fp [http::data $token]
#    close $fp

    set xml [xml::parser \
		 -characterdatacommand [list VOTCharCB $t] \
		 -elementstartcommand [list VOTElemStartCB $t] \
		 -elementendcommand [list VOTElemEndCB $t] \
		 -ignorewhitespace 1 \
		]

    set T(tree,state) {}
    set T(tree,prev) {}
    if {[catch {$xml parse [http::data $token]} err]} {
	if {$debug(tcl,cat) || $debug(tcl,sia)} {
	    puts stderr "VOTParse: $err"
	}
    }

    $xml free
}

proc VOTRead {t fn} {
    upvar #0 $t T
    global $t

    global debug
    if {$debug(tcl,cat) || $debug(tcl,sia)} {
	puts stderr "VOTRead"
    }

    if {$fn == {}} {
	return
    }

    catch {
	set fp [open $fn r]

	set xml [xml::parser \
		     -characterdatacommand [list VOTCharCB $t]\
		     -elementstartcommand [list VOTElemStartCB $t] \
		     -elementendcommand [list VOTElemEndCB $t] \
		     -ignorewhitespace 1 \
		    ]

	set T(tree,state) {}
	set T(tree,prev) {}
	if {[catch {$xml parse [read $fp]} err]} {
	    if {$debug(tcl,cat) || $debug(tcl,sia)} {
		puts stderr "VOTRead: $err"
	    }
	}
	
	$xml free

	close $fp
    }
}

proc VOTWrite {t fn} {
    upvar #0 $t T
    global $t

    global debug
    if {$debug(tcl,cat) || $debug(tcl,sia)} {
	puts stderr "VOTWrite"
    }

    if {$fn == {}} {
	return
    }

    set fp [open $fn w]

    set nr $T(Nrows)
    set nc $T(Ncols)

    puts $fp {<?xml version="1.0" encoding="UTF-8"?>}
    puts $fp {<VOTABLE version="1.1">}
    puts $fp {<RESOURCE>}
    puts $fp {<TABLE>}

    # header
    puts -nonewline $fp {<DESCRIPTION>}
    set nh [expr $T(HLines)-1]
    for {set hh 1} {$hh < $nh} {incr hh} {
	puts $fp [XMLQuote "$T(H_$hh)"]
    }
    puts $fp {</DESCRIPTION>}

    # cols
    for {set cc 1} {$cc <= $nc} {incr cc} {
	puts -nonewline $fp {<FIELD }
	# required
	puts -nonewline $fp "name=\"[XMLQuote [lindex $T(Header) [expr $cc-1]]]\" "
	# required
	if {[info exists ${t}(DataType)]} {
	    puts -nonewline $fp "datatype=\"[XMLQuote [lindex $T(DataType) [expr $cc-1]]]\" "
	} else {
	    puts -nonewline $fp "datatype=\"char\" arraysize=\"*\" "
	}

	if {[info exists ${t}(Id)]} {
	    if {[lindex $T(Id) [expr $cc-1]] != {}} {
		puts -nonewline $fp "ID=\"[XMLQuote [lindex $T(Id) [expr $cc-1]]]\" "
	    }
	}
	if {[info exists ${t}(ArraySize)]} {
	    if {[lindex $T(ArraySize) [expr $cc-1]] != {}} {
		puts -nonewline $fp "arraysize=\"[XMLQuote [lindex $T(ArraySize) [expr $cc-1]]]\" "
	    }
	}
	if {[info exists ${t}(Width)]} {
	    if {[lindex $T(Width) [expr $cc-1]] != {}} {
		puts -nonewline $fp "width=\"[XMLQuote [lindex $T(Width) [expr $cc-1]]]\" "
	    }
	}
	if {[info exists ${t}(Precision)]} {
	    if {[lindex $T(Precision) [expr $cc-1]] != {}} {
		puts -nonewline $fp "precision=\"[XMLQuote [lindex $T(Precision) [expr $cc-1]]]\" "
	    }
	}
	if {[info exists ${t}(Unit)]} {
	    if {[lindex $T(Unit) [expr $cc-1]] != {}} {
		puts -nonewline $fp "unit=\"[XMLQuote [lindex $T(Unit) [expr $cc-1]]]\" "
	    }
	}
	if {[info exists ${t}(Ref)]} {
	    if {[lindex $T(Ref) [expr $cc-1]] != {}} {
		puts -nonewline $fp "ref=\"[XMLQuote [lindex $T(Ref) [expr $cc-1]]]\" "
	    }
	}
	if {[info exists ${t}(Ucd)]} {
	    if {[lindex $T(Ucd) [expr $cc-1]] != {}} {
		puts -nonewline $fp "ucd=\"[XMLQuote [lindex $T(Ucd) [expr $cc-1]]]\" "
	    }
	}

	puts $fp {>}

	if {[info exists ${t}(Description)]} {
	    if {[lindex $T(Description) [expr $cc-1]] != {}} {
		puts -nonewline $fp {<DESCRIPTION>}
		puts -nonewline $fp "[XMLQuote [lindex $T(Description) [expr $cc-1]]]"
		puts $fp {</DESCRIPTION>}
	    }
	}

	puts $fp {</FIELD>}
    }

    # data
    puts $fp {<DATA>}
    puts $fp {<TABLEDATA>}

    for {set rr 1} {$rr <= $nr} {incr rr} {
	puts -nonewline $fp {<TR>}
	for {set cc 1} {$cc <= $nc} {incr cc} {
	    puts -nonewline $fp "<TD>[XMLQuote $T($rr,$cc)]</TD>"
	}
	puts $fp {</TR>}
    }

    # clean up
    puts $fp {</TABLEDATA>}
    puts $fp {</DATA>}
    puts $fp {</TABLE>}
    puts $fp {</RESOURCE>}
    puts $fp {</VOTABLE>}

    close $fp
}

# Callbacks

proc VOTCharCB {t data} {
    upvar #0 $t T
    global $t
    global debug

    switch -- $T(tree,state) {
	TD {
	    set r $T(Nrows)
	    set c $T(cnt)
	    set T($r,$c) [string trim $data]
	}
	DESCRIPTION {
	    set data [string trim $data]
	    if {$data != {}} {
		switch -- $T(tree,prev) {
		    VOTABLE -
		    RESOURCE -
		    TABLE {
			foreach ll [split [string trim $data] "\n"] {
			    incr ${t}(HLines)
			    set n $T(HLines)
			    if {[string range $ll 0 0] == {#}} {
				set T(H_$n) "$ll"
			    } else {
				set T(H_$n) "# $ll"
			    }
			}
		    }
		    FIELD {
			set T(Description) \
			    [lreplace $T(Description) end end $data]
		    }
		}
	    }
	}
    }

    # sometimes, we get a bogus call, (ignore whitespace does not work)
    set T(tree,state) {}
    return {}
}

proc VOTElemStartCB {t name attlist args} {
    upvar #0 $t T
    global $t
    global debug

    switch -- $name {
	VOTABLE {
	    # init db
	    set T(Nrows) 0
	    set T(Ncols) 0
	    set T(Header) {}
	    set T(HLines) 0
	    set T(tree,prev) $name
	}
	FIELD {
	    set fname {}
	    set id {}
	    set datatype {}
	    set arraysize {}
	    set width {}
	    set precision {}
	    set unit {}
	    set ref {}
	    set ucd {}
	    foreach {key value} $attlist {
		switch -- [string tolower $key] {
		    name {set fname "$value"}
		    id {set id "$value"}
		    datatype {set datatype $value}
		    arraysize {set arraysize $value}
		    width {set width $value}
		    precision {set precision $value}
		    unit {set unit "$value"}
		    ref {set ref "$value"}
		    ucd {set ucd "$value"}
		}
	    }
	    if {$fname != {}} {
		lappend ${t}(Header) "$fname"
	    } else {
		lappend ${t}(Header) "$id"
	    }
	    lappend ${t}(Id) "$id"
	    lappend ${t}(DataType) $datatype
	    lappend ${t}(ArraySize) $arraysize
	    lappend ${t}(Width) $width
	    lappend ${t}(Precision) $precision
	    lappend ${t}(Unit) "$unit"
	    lappend ${t}(Ref) "$ref"
	    lappend ${t}(Ucd) "$ucd"

	    # filled in later
	    lappend ${t}(Description) {}

	    set T(tree,prev) $name
	}
	TABLEDATA {
	    # ok, we now need to build the header
	    incr ${t}(HLines)
	    set n $T(HLines)
	    set T(H_$n) [join $T(Header)]

	    set T(Dashes) [regsub -all {[A-Za-z0-9]} $T(H_$n) {-}]
	    set T(Ndshs) [llength $T(Header)]

	    incr ${t}(HLines)
	    set n $T(HLines)
	    set T(H_$n) [join $T(Dashes)]

	    starbase_colmap $t
	}
	TR {
	    incr ${t}(Nrows)
	    set T(cnt) 0
	}
	TD {
	    incr ${t}(cnt)

	    set r $T(Nrows)
	    set c $T(cnt)
	    set T($r,$c) {}
	}

	RESOURCE -
	TABLE {
	    set T(tree,prev) $name
	}

	FIELDref -
	DESCRIPTION -
	COOSYS -
	PARAM -
	PARAMref -
	INFO -
	LINK -
	GROUP -
	DATA -
	BINARY -
	STREAM -
	FITS -
	VALUES -
	MIN -
	MAX -
	OPTION -
	DEFINITIONS {}

	default {return -code error}
    }

    set ${t}(tree,state) $name
    return {}
}

proc VOTElemEndCB {t name args} {
    upvar #0 $t T
    global $t
    global debug

    # we can't count on this being called for all end-tags
    switch -- $name {
	TABLEDATA {
	    # ok, we're done
	    return -code break
	}
	VOTABLE -
	FIELD -
	FIELDref -
	TR -
	TD -
	RESOURCE -
	TABLE -
	DESCRIPTION -
	COOSYS -
	PARAM -
	PARAMref -
	INFO -
	LINK -
	GROUP -
	DATA -
	BINARY -
	STREAM -
	FITS -
	VALUES -
	MIN -
	MAX -
	OPTION -
	DEFINITIONS {}

	default {return -code error}
    }
    return {}
}

