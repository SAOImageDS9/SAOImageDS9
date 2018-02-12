#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc CATSIMBAD {varname} {
    upvar #0 $varname var
    global $varname
    global pcat

    global debug
    if {$debug(tcl,cat)} {
	puts stderr "CATSIMBAD $varname"
    }

    # parser
    if {$pcat(vot)} {
	set var(proc,parser) CATSIMBADParse
    } else {
	set var(proc,reader) CATSIMBADReader
    }

    # query
    set qq {}

    if {$pcat(vot)} {
	append qq "output script=off\n"
	append qq "output console=off\n"
    }

    if {$pcat(vot)} {
	append qq "votable v1 "
    } else {
	append qq "format object f1 "
    }

    switch -- $var(psky) {
	fk4 {set psky "FK4;1950;1950"}
	fk5 {set psky "FK5;2000;2000"}
	icrs {set psky "ICRS"}
	galactic {set psky "GAL"}
	ecliptic {set psky "ECL"}
    }

    if {$pcat(vot)} {
	append qq "{ coo(d;$psky), main_id, otype(S), pmra, pmdec, plx, z_value, flux(B), flux(V), sp }\n"
	append qq "votable open v1\n"
    } else {
	append qq {"%COO(d;A)\t%COO(d;D)\t%IDLIST(1)\t%OTYPE(S)\t%PM(A)\t%PM(D)\t%PLX(V)\t%RV(Z)\t%FLUXLIST(B;F)\t%FLUXLIST(V;F)\t%SP(S)\n"}
	append qq "\n"
    }

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
    append qq "query coo $xx "
    if {$yy>0} {
	append qq "+$yy"
    } else {
	append qq "$yy"
    }

    set ww $var(width)
    set hh $var(height)
    set rr [expr sqrt($ww*$ww+$hh*$hh)/2.]

    append qq " radius=$rr"
    switch -- $var(rformat) {
	degrees {append qq "d"}
	arcmin {append qq "m"}
	arcsec {append qq "s"}
    }

    switch -- $var(sky) {
	fk4 {append qq " frame=FK4 epoch=B1950 equinox=1950"}
	fk5 {append qq " frame=FK5 epoch=J2000 equinox=2000"}
	icrs {append qq " frame=ICRS"}
	galactic {append qq " frame=GAL"}
	ecliptic {append qq " frame=ECL"}
    }

    if {$pcat(vot)} {
	append qq "\nvotable close\n"
    } else {
	append qq "\n"
    }

    # url
    set var(url) "http://simbad.u-strasbg.fr/simbad/sim-script"
    set var(query) [http::formatQuery script $qq]

    if {$pcat(vot)} {
	CATLoad $varname
    } else {
	CATLoadIncr $varname
    }
}

proc CATSIMBADParse {t token} {
    upvar #0 $t T
    global $t
    global debug

    # we can't trust simbad to turn off any error messages
    variable $token
    upvar 0 $token state

    set id [string first {<?xml} $state(body)]
    set ${token}(body) [string range $state(body) $id end]

    VOTParse $t $token
}

proc CATSIMBADReader {t sock token} {
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

	    # error?
	    if {[string range $line 0 8] == {::error::}} {
		set T(Nrows) 0
		set T(Ncols) 0
		set T(Header) {}
		set T(HLines) 0

		set T(state) -1
		return $result
	    }

	    # start of data?
	    if {[string range $line 0 7] == {::data::}} {
		# cols
		set line "RA\tDEC\tIdentifier\tObject\tPMRA\tPMDEC\tPX\tRV(z)\tB\tV\tSpectralType"

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

proc CATSIMBADAck {varname} {
    upvar #0 $varname var
    global $varname

    set msg {Acknowledgments for SIMBAD

This research has made use of the SIMBAD database,
operated at CDS, Strasbourg, France.
    }

    SimpleTextDialog ${varname}ack [msgcat::mc {Acknowledgment}] \
	80 10 insert top $msg
}
