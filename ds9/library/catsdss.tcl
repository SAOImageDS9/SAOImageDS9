#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc CATSDSS {varname} {
    upvar #0 $varname var
    global $varname

    global debug
    if {$debug(tcl,cat)} {
	puts stderr "CATSDSS $varname"
    }

    set var(proc,reader) CATSDSSReader
    
    # coord (degrees)
    switch $var(skyformat) {
	degrees {
	    set xx $var(x)
	    set yy $var(y)
	}
	sexagesimal {
	    set xx [h2d [Sex2H $var(x)]]
	    set yy [Sex2D $var(y)]
	}
    }

    # size (arcmin)
    switch $var(rformat) {
	degrees {
	    set ww [expr $var(width)*60.]
	    set hh [expr $var(height)*60.]
	}
	arcmin {
	    set ww $var(width)
	    set hh $var(height)
	}
	arcsec {
	    set ww [expr $var(width)/60.]
	    set hh [expr $var(height)/60.]
	}
    }

    # now to radius
    set rr [expr sqrt($ww*$ww+$hh*$hh)/2.]

    set query {}
    append query "ra=$xx&"
    append query "dec=$yy&"
    append query "radius=$rr&"

#    append query "min_ra=[expr $xx-$ww/2.]&max_ra=[expr $xx+$ww/2.]&"
#    append query "min_dec=[expr $yy-$hh/2.]&max_dec=[expr $yy+$hh/2.]&"

    # output
    if {$var(allrows)} {
	append query "entries=all&"
    } else {
	append query "topnum=$var(max)&"
    }
    append query "format=csv&"

    set var(url) "http://cas.sdss.org/astrodr${var(catalog)}/en/tools/search/x_radial.asp?$query"

    set var(query) {}

    CATLoadIncr $varname
}

proc CATSDSSReader {t sock token} {
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
		return
	    }

	    if {[string equal $line "No objects have been found"]} {
		return
	    }

	    # cols
	    incr ${t}(HLines)
	    set n $T(HLines)
	    set result [string length "$line"]
	    set T(H_$n) $line
	    set T(Header) [split $T(H_$n) ","]

	    # dashes
	
	    set T(Dashes) [regsub -all {[A-Za-z0-9]} $T(H_$n) {-}]
	    set T(Ndshs) [llength $T(Dashes)]
		
	    starbase_colmap $t
	    set T(state) 2
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
		    foreach val [split $line ","] {
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

proc CATSDSSAck {varname} {
    upvar #0 $varname var
    global $varname

    set msg {Acknowledgments for SDSS

Funding for the Sloan Digital Sky Survey (SDSS) has been provided
by the Alfred P. Sloan Foundation, the Participating Institutions,
the National Aeronautics and Space Administration, the National
Science Foundation, the U.S. Department of Energy, the Japanese
Monbukagakusho, and the Max Planck Society. The SDSS Web site is
http://www.sdss.org/.

The SDSS is managed by the Astrophysical Research Consortium (ARC)
for the Participating Institutions. The Participating Institutions
are The University of Chicago, Fermilab, the Institute for
Advanced Study, the Japan Participation Group, The Johns Hopkins
University, the Korean Scientist Group, Los Alamos National
Laboratory, the Max-Planck-Institute for Astronomy (MPIA), the
Max-Planck-Institute for Astrophysics (MPA), New Mexico State
University, University of Pittsburgh, University of Portsmouth,
Princeton University, the United States Naval Observatory, and the
University of Washington.
    }

    SimpleTextDialog ${varname}ack [msgcat::mc {Acknowledgment}] \
	80 10 insert top $msg
}
