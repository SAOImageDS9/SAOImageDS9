#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc CATCDS {varname} {
    upvar #0 $varname var
    global $varname
    global pcat

    global debug
    if {$debug(tcl,cat)} {
	puts stderr "CATCDS $varname"
    }

    # go for votable or tsv
    if {$pcat(vot)} {
	set var(proc,parser) VOTParse
    } else {
	set var(proc,reader) CATCDSReader
    }

    # url
    set site [CATCDSURL $var(server)]
    set cgidir {viz-bin}
    if {$pcat(vot)} {
	set script {votable}
    } else {
	set script {asu-tsv}
    }
    set var(url) "http://$site/$cgidir/$script"
    
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

    if {$yy>0} {
	set yy "+$yy"
    }

    switch -- $var(sky) {
	fk4 {set eq "B1950"}
	fk5 -
	icrs {set eq "J2000"}
	galactic {set eq "Gal"}
	ecliptic {set eq "Ecl"}
    }

    switch -- $var(rformat) {
	degrees {set cr "-c.rd"}
	arcmin {set cr "-c.rm"}
	arcsec {set cr "-c.rs"}
    }

    set ww $var(width)
    set hh $var(height)
    set rr [expr sqrt($ww*$ww+$hh*$hh)/2.]

    set query [http::formatQuery -source $var(catalog) -c $xx$yy -c.eq $eq $cr $rr -oc.form dec]

    if {$pcat(vot)} {
	append query "&[http::formatQuery -out.form VOTable]"
    } else {
	append query "&[http::formatQuery -out.form Tab-Separated-Values]"
    }

    switch -- $var(psky) {
	fk4 {append query "&[http::formatQuery -out.add _RAB,_DEB]"}
	fk5 -
	icrs {append query "&[http::formatQuery -out.add _RAJ,_DEJ]"}
	galactic {append query "&[http::formatQuery -out.add _GLON,_GLAT]"}
	ecliptic {append query "&[http::formatQuery -out.add _ELON,_ELAT]"}
    }

    # options
    if {!$var(allrows)} {
	append query "&-out.max=$var(max)"
    }
    if {$var(allcols)} {
	append query "&-out.all"
    }

    # url?query
    set var(query) $query

    if {$pcat(vot)} {
	CATLoad $varname
    } else {
	CATLoadIncr $varname
    }
}

proc CATCDSReader {t sock token} {
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
	    incr ${t}(HLines)
	    set n $T(HLines)
	    if {[gets $sock line] == -1} {
		set T(state) -1
		set T(HLines) [expr $T(HLines) - 1]
		set T(Nrows) 0
		set T(Ncols) 0
		return 0
	    }

	    set result [string length "$line"]
	    set T(H_$n) $line
	    if {[regexp -- {^ *(-)+ *(\t *(-)+ *)*} $line]} {
		# remove units line, but save first
		unset T(H_$n)
		incr ${t}(HLines) -1
		incr n -1
		set units $T(H_$n)
		set T(H_$n) $line
		
		# clean up header column name
		set hh $T(H_[expr $n-1])
		regsub -all {\[} $hh {} hh
		regsub -all {\]} $hh {} hh
		set T(H_[expr $n-1]) $hh

		# cols
		set T(Header) [split $T(H_[expr $n-1]) "\t"]
		set T(Unit) [split $units "\t"]
		set T(Dashes) [split $T(H_$n) "\t"]
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
		    # check for beginning of another table
		    if {[string range $line 0 0] == "#"} {
			set T(state) 3
			return $result
		    }

		    # check for garbage at start of line
		    if {![string is double [lindex $line 0]]} {
			set T(state) 3
			return $result
		    }

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

	3 {
	    # finished, eat everything else
	    if {[gets $sock line] == -1} {
		set T(state) 0
	    }
	}
    }

    return $result
}

proc CATCDSURL {server} {
    switch -- $server {
	france -
	cds {return {vizier.u-strasbg.fr}}
	tokyo -
	japan -
	adac {return {vizier.nao.ac.jp}}
	canada -
	cadc {return {vizier.hia.nrc.ca}}
	uk -
	cambridge {return {vizier.ast.cam.ac.uk}}
	usa -
	cfa -
	harvard -
	sao {return {vizier.cfa.harvard.edu}}
	hawaii -
	ukirt {return {www.ukirt.jach.hawaii.edu}}
	india -
	iucaa {return {vizier.iucaa.in}}
	china -
	bejing {return {vizier.china-vo.org}}
	safrica -
	saao {return {viziersaao.chpc.ac.za}}
	russia -
	inasan {
	    # no longer active
	    return {vizier.u-strasbg.fr}
	}
    }
}

proc CATCDSAck {varname} {
    upvar #0 $varname var
    global $varname

    set msg {Acknowledgments for CDS

This research has made use of the VizieR catalogue access tool, CDS,
Strasbourg, France. VizieR is a joint effort of 
CDS (Centre de Données astronomiques de Strasbourg) and 
ESA-ESRIN (Information Systems Division). 
    }

    SimpleTextDialog ${varname}ack [msgcat::mc {Acknowledgment}] \
	80 10 insert top $msg
}
