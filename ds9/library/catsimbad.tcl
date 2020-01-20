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

    # query
    set qq {}

    append qq "output script=off\n"
    append qq "output console=off\n"
    append qq "votable v1 "

    switch -- $var(psky) {
	fk4 {set psky "FK4;1950;1950"}
	fk5 {set psky "FK5;2000;2000"}
	icrs {set psky "ICRS"}
	galactic {set psky "GAL"}
	ecliptic {set psky "ECL"}
    }

    append qq "{ coo(d;$psky), main_id, otype(S), pmra, pmdec, plx, z_value, flux(B), flux(V), sp }\n"
    append qq "votable open v1\n"

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

    set rr $var(radius)

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

    append qq "\nvotable close\n"

    # url
    set url "http://simbad.u-strasbg.fr/simbad/sim-script"
    set query [http::formatQuery script $qq]

    CATLoad $varname $url $query
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
