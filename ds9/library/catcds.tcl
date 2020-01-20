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

    # url
    set site [CATCDSURL $var(server)]
    set cgidir {viz-bin}
    set script {votable}
    set url "http://$site/$cgidir/$script"
    
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

    set rr $var(radius)

    set query [http::formatQuery -source $var(catalog) -c $xx$yy -c.eq $eq $cr $rr -oc.form dec]

    append query "&[http::formatQuery -out.form VOTable]"
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

    CATLoad $varname $url $query
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
