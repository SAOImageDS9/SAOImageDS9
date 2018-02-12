#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc CATNED {varname} {
    upvar #0 $varname var
    global $varname
    global pcat

    global debug
    if {$debug(tcl,cat)} {
	puts stderr "CATNED $varname"
    }

    # parser
    if {$pcat(vot)} {
	set var(proc,parser) VOTParse
    } else {
	set var(proc,reader) CATNEDReader
    }

    # query
    switch $var(skyformat) {
	degrees {
	    set xx $var(x)
	    set yy $var(y)
	}
	sexagesimal {
	    switch -- $var(sky) {
		fk4 -
		fk5 -
		icrs {set xx [h2d [Sex2H $var(x)]]}
		galactic -
		ecliptic {set xx [Sex2D $var(x)]}
	    }
	    set yy [Sex2D $var(y)]
	}
    }

    switch -- $var(rformat) {
	degrees {
	    set ww $var(width)
	    set hh $var(height)
	}
	arcmin {
	    set ww [expr $var(width)/60.]
	    set hh [expr $var(height)/60.]
	}
	arcsec {
	    set ww [expr $var(width)/60./60.]
	    set hh [expr $var(height)/60./60.]
	}
    }
    set rr [expr sqrt($ww*$ww+$hh*$hh)/2.]

    if {$pcat(vot)} {
	set out "xml_main"
    } else {
	set out "ascii_tab"
    }

    switch -- $var(sky) {
	fk4 {
	    set sky "Equatorial"
	    set eq "B1950.0"
	}
	fk5 -
	icrs {
	    set sky "Equatorial"
	    set eq "J2000.0"
	}
	galactic {
	    set sky "Galactic"
	    set eq {}
	}
	ecliptic {
	    set sky "Ecliptic"
	    set eq {}
	}
    }
    switch -- $var(psky) {
	fk4 {
	    set psky "Equatorial"
	    set peq "B1950.0"
	}
	fk5 -
	icrs {
	    set psky "Equatorial"
	    set peq "J2000.0"
	}
	galactic {
	    set psky "Galactic"
	    set peq {}
	}
	ecliptic {
	    set psky "Ecliptic"
	    set peq {}
	}
    }

    # url
    set var(query) {}
    set query [http::formatQuery search_type "Near Position Search" RA $xx DEC $yy SR $rr of $out in_csys $sky in_equinox $eq out_csys $psky out_equinox $peq]
    set var(url) "http://ned.ipac.caltech.edu/cgi-bin/nph-objsearch?$query"

    if {$pcat(vot)} {
	CATLoad $varname
    } else {
	CATLoadIncr $varname
    }
}

proc CATNEDReader {t sock token} {
    upvar #0 $t T
    global $t

    set result 0

    if { ![info exists ${t}(state)]  } {
	set T(state) 0
    }

    switch -- $T(state) {
	0 {
	    # init db
	    fconfigure $sock -blocking 1
	    set T(Nrows) 0
	    set T(Ncols) 0
	    set T(Header) {}
	    set T(HLines) 0

	    set T(state) 1
	}

	1 {
	    # process header
	    if {[gets $sock line] == -1} {
		set T(Nrows) 0
		set T(Ncols) 0
		set T(Header) {}
		set T(HLines) 0

		set T(state) -1
		return $result
	    }

	    set result [string length "$line"]

	    # start of data?
	    if {[string range $line 0 2] == {No.}} {
		# cols
		incr ${t}(HLines)
		set n $T(HLines)
		set T(H_$n) $line
		set T(Header) [split $T(H_$n) "\t"]

		# dashes
		set T(Dashes) [regsub -all {[A-Za-z0-9]} $T(H_$n) {-}]
		set T(Ndshs) [llength $T(Dashes)]
		starbase_colmap $t

		set T(state) 2
	    }
	}

	2 { 
	    # process table
	    if {[gets $sock line] == -1} {
		set T(state) 0
	    } else {
		set result [string length "$line"]
		set line [string trim $line]

		if {$line != {}} {
		    # ok, save it
		    incr ${t}(Nrows)
		    set r $T(Nrows)

		    set NCols [starbase_ncols $t]
		    set c 1
		    foreach val [split $line "\t"] {
			set T($r,$c) $val
			incr c
		    }
		    for {} {$c <= $NCols} {incr c} {
			set T($r,$c) {}
		    }
		}
	    }
	}
    }

    return $result
}

proc CATNEDAck {varname} {
    upvar #0 $varname var
    global $varname

    set msg {Acknowledgments for NED

This research has made use of the NASA/IPAC Extragalactic Database (NED)
which is operated by the Jet Propulsion Laboratory, California Institute
of Technology, under contract with the National Aeronautics and Space
Administration.
    }

    SimpleTextDialog ${varname}ack [msgcat::mc {Acknowledgment}] \
	80 10 insert top $msg
}
