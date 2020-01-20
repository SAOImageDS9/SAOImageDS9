#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc CATCXC {varname} {
    upvar #0 $varname var
    global $varname
    global pcat

    global debug
    if {$debug(tcl,cat)} {
	puts stderr "CATCXC $varname"
    }

    CATCXCVOT $varname
}

proc CATCXCVOT {varname} {
    upvar #0 $varname var
    global $varname

    global debug
    if {$debug(tcl,cat)} {
	puts stderr "CATCXCVOT $varname"
    }

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

    # size (degrees)
    switch $var(rformat) {
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

    # output
    if {$var(allcols)} {
	set type 3
    } else {
	set type 2
    }

    # query
    set query [http::formatQuery RA $xx DEC $yy SR $rr VERB $type]
    set url "http://cda.cfa.harvard.edu/cscvo/coneSearch"

    CATLoad $varname $url $query
}

proc CATCXCAck {varname} {
    upvar #0 $varname var
    global $varname

    set msg {Acknowledgments for CXC

Users are kindly requested to acknowledge their use of the Chandra
Source Catalog in any resulting publications.

This will help us greatly to keep track of catalog usage, information
that is essential for providing full accountability of our work and
services, as well as for planning future services.

The following language is suggested:

This research has made use of data obtained from the Chandra Source
Catalog, provided by the Chandra X-ray Center (CXC) as part of the
Chandra Data Archive.

Citing the Chandra Source Catalog in a Publication

Users who wish to reference the Chandra Source Catalog in a
publication should cite

Evans, I. N., et al. 2010, ApJS, 189, 37
or
Evans, I. N., et al. 2010, arXiv:1005.4665
    }

    SimpleTextDialog ${varname}ack [msgcat::mc {Acknowledgment}] \
	80 10 insert top $msg
}
