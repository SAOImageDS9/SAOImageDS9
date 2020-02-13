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
	    set rr $var(radius)
	}
	arcmin {
	    set rr [expr $var(radius)/60.]
	}
	arcsec {
	    set rr [expr $var(radius)/60./60.]
	}
    }

    set out "xml_main"

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
    set query [http::formatQuery search_type "Near Position Search" RA $xx DEC $yy SR $rr of $out in_csys $sky in_equinox $eq out_csys $psky out_equinox $peq]
    set url "http://ned.ipac.caltech.edu/cgi-bin/nph-objsearch"

    CATLoad $varname "$url?$query" {}
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
