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

    # go for votable or tsv
    if {$pcat(vot)} {
	CATCXCVOT $varname
    } else {
	CATCXCTSV $varname
    }
}

proc CATCXCVOT {varname} {
    upvar #0 $varname var
    global $varname

    global debug
    if {$debug(tcl,cat)} {
	puts stderr "CATCXCVOT $varname"
    }

    set var(proc,parser) VOTParse
    
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

    # now to radius
    set rr [expr sqrt($ww*$ww+$hh*$hh)/2.]

    # output
    if {$var(allcols)} {
	set type 3
    } else {
	set type 2
    }

    # query
    set var(query) [http::formatQuery RA $xx DEC $yy SR $rr VERB $type]
    set var(url) "http://cda.cfa.harvard.edu/cscvo/coneSearch"

    CATLoad $varname
}

proc CATCXCTSV {varname} {
    upvar #0 $varname var
    global $varname

    global debug
    if {$debug(tcl,cat)} {
	puts stderr "CATCXCTSV $varname"
    }

    set var(proc,reader) CATCXCReader
    
    # coord (degrees)
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

    # output
    if {$var(allcols)} {
	set type observation
    } else {
	set type master
    }

    # query
    set var(query) "ra=$xx&dec=$yy&sr=$rr&type=$type"

    # rows
    if {!$var(allrows)} {
	append var(query) "&rows=$var(max)"
    }

    set var(url) "http://cda.cfa.harvard.edu/cscds9/coneSearch"

    CATLoadIncr $varname
}

proc CATCXCReader {t sock token} {
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

	    incr ${t}(HLines)
	    set n $T(HLines)
	    set T(H_$n) $line

	    if {[regexp -- {^ *(-)+ *(\t *(-)+ *)*} $line]} {
		# clean up header column name
		set hh $T(H_[expr $n-1])
		regsub -all {\[} $hh {} hh
		regsub -all {\]} $hh {} hh
		set T(H_[expr $n-1]) $hh

		# cols
		set T(Header) [split $T(H_[expr $n-1]) "\t"]
		set T(Dashes) [split $T(H_$n) "\t"]
		set T(Ndshs) [llength $T(Dashes)]
		starbase_colmap $t
		set T(state) 2

		# these are hard coded
		set T(Id) $T(Header)
		set T(DataType) {}
		set T(ArraySize) {}
		set T(Unit) {}
		set T(Ucd) {}
		# name
		lappend T(DataType) {char}
		lappend T(ArraySize) {*}
		lappend T(Unit) {}
		lappend T(Ucd) {}
		# ra
		lappend T(DataType) {float}
		lappend T(ArraySize) {}
		lappend T(Unit) {deg}
		lappend T(Ucd) {pos.eq.ra;meta.main}
		# dec
		lappend T(DataType) {float} 
		lappend T(ArraySize) {}
		lappend T(Unit) {deg}
		lappend T(Ucd) {pos.eq.dec;meta.main}
		# err_ellipse_r0
		lappend T(DataType) {float}
		lappend T(ArraySize) {}
		lappend T(Unit) {}
		lappend T(Ucd) {}
		# err_ellipse_r1		
		lappend T(DataType) {float}
		lappend T(ArraySize) {}
		lappend T(Unit) {}
		lappend T(Ucd) {}
		# err_ellipse_ang
		lappend T(DataType) {float}
		lappend T(ArraySize) {}
		lappend T(Unit) {deg}
		lappend T(Ucd) {}
		# conf_flag
		lappend T(DataType) {boolean}
		lappend T(ArraySize) {}
		lappend T(Unit) {}
		lappend T(Ucd) {}
		# extent_flag
		lappend T(DataType) {boolean}
		lappend T(ArraySize) {}
		lappend T(Unit) {}
		lappend T(Ucd) {}
		# sat_src_flag
		lappend T(DataType) {boolean}
		lappend T(ArraySize) {}
		lappend T(Unit) {}
		lappend T(Ucd) {}
		# flux_aper90_b
		lappend T(DataType) {float}
		lappend T(ArraySize) {}
		lappend T(Unit) {}
		lappend T(Ucd) {}
		# flux_aper90_hilim_b
		lappend T(DataType) {float}
		lappend T(ArraySize) {}
		lappend T(Unit) {}
		lappend T(Ucd) {}
		# flux_aper90_lolim_b
		lappend T(DataType) {float}
		lappend T(ArraySize) {}
		lappend T(Unit) {}
		lappend T(Ucd) {}
		# significance
		lappend T(DataType) {float}
		lappend T(ArraySize) {}
		lappend T(Unit) {}
		lappend T(Ucd) {}
		# hard_hm
		lappend T(DataType) {float}
		lappend T(ArraySize) {}
		lappend T(Unit) {}
		lappend T(Ucd) {}
		# hard_ms
		lappend T(DataType) {float}
		lappend T(ArraySize) {}
		lappend T(Unit) {}
		lappend T(Ucd) {}
		# var_intra_index_b
		lappend T(DataType) {int}
		lappend T(ArraySize) {}
		lappend T(Unit) {}
		# var_inter_index_b
		lappend T(DataType) {int}
		lappend T(ArraySize) {}
		lappend T(Unit) {}
		lappend T(Ucd) {}

		if {[llength $T(Header)] > 17} {
		    # obsid
		    lappend T(DataType) {int}
		    lappend T(ArraySize) {}
		    lappend T(Unit) {}
		    lappend T(Ucd) {}
		    # ra_aper
		    lappend T(DataType) {float}
		    lappend T(ArraySize) {}
		    lappend T(Unit) {deg}
		    lappend T(Ucd) {}
		    # dec_aper
		    lappend T(DataType) {float}
		    lappend T(ArraySize) {}
		    lappend T(Unit) {deg}
		    lappend T(Ucd) {}
		    # mjr_axis_aper
		    lappend T(DataType) {float}
		    lappend T(ArraySize) {}
		    lappend T(Unit) {}
		    lappend T(Ucd) {}
		    # mnr_axis_aper
		    lappend T(DataType) {float}
		    lappend T(ArraySize) {}
		    lappend T(Unit) {}
		    lappend T(Ucd) {}
		    # pos_angle_aper
		    lappend T(DataType) {float}
		    lappend T(ArraySize) {}
		    lappend T(Unit) {deg}
		    lappend T(Ucd) {}
		}
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

proc CATCXCAck {varname} {
    upvar #0 $varname var
    global $varname

    set msg {Acknowledgments for CXC

Request for Acknowledgment of Use of the Chandra Source Catalog

Users are kindly requested to acknowledge in the acknowledgment
section of any resulting publications their use of the Chandra Source
Catalog.

This will help us greatly to keep track of catalog usage, information
that is essential for providing full accountability of our work and
services, as well as for planning future services.

The following language is suggested:

This research has made use of data obtained from the Chandra Source
Catalog, provided by the Chandra X-ray Center (CXC) as part of the
Chandra Data Archive.

We would like to remind you that it is also very helpful for us if you
could include Dataset Identifiers in the manuscript. The Dataset
Identifier for the Chandra Source Catalog is:

ADS/Sa.CXO#CSC
    }

    SimpleTextDialog ${varname}ack [msgcat::mc {Acknowledgment}] \
	80 10 insert top $msg
}
