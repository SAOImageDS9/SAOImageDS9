#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc SAODef {} {
    global sao
    global isao

    set isao(top) .sao
    set isao(mb) .saomb

    set sao(sky) fk5
    set sao(rformat) arcmin
    set sao(width) 15
    set sao(height) 15
    set sao(mode) new
    set sao(save) 0
}

proc SAODialog {} {
    global sao
    global isao
    global wcs

    if {[winfo exists $isao(top)]} {
	raise $isao(top)
	return
    }

    set varname dsao
    upvar #0 $varname var
    global $varname

    set var(top) $isao(top)
    set var(mb) $isao(mb)
    set var(sky) $sao(sky)
    set var(skyformat) $wcs(skyformat)
    set var(rformat) $sao(rformat)
    set var(width) $sao(width)
    set var(height) $sao(height)
    set var(mode) $sao(mode)
    set var(save) $sao(save)

    set w $var(top)
    IMGSVRInit $varname "SAO-DSS [msgcat::mc {Server}]" SAOExec SAOAck
    IMGSVRUpdate $varname
}

proc SAOExec {varname} {
    upvar #0 $varname var
    global $varname

    if {$var(save)} {
	set compress no
	set var(fn) [SaveFileDialog savefitsfbox $var(top)]
	if {$var(fn) == {}} {
	    ARDone $varname
	    return
	}
    } else {
	set compress gzip
	set var(fn) [tmpnam {.fits.gz}]
    }

    # skyformat
    switch -- $var(skyformat) {
	degrees {
	    set xx [uformat d h: $var(x)]
	    set yy [uformat d d: $var(y)]
	}
	sexagesimal {
	    set xx $var(x)
	    set yy $var(y)
	}
    }

    # size - convert to arcmin
    switch -- $var(rformat) {
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
    if {$ww>60} {
	set ww 60
    }
    if {$hh>60} {
	set hh 60
    }

    # query
    set query [http::formatQuery r $xx d $yy e J2000 w $ww h $ww c $compress]
    set url "http://www.cfa.harvard.edu/archive/dss"
    IMGSVRGetURL $varname $url $query
}

proc SAOAck {varname} {
    upvar #0 $varname var
    global $varname

    set msg {Acknowledgments for the DSS-SAO

The Digitized Sky Surveys were produced at the Space Telescope Science
Institute under U.S.  Government grant NAG W-2166. The images of these
surveys are based on photographic data obtained using the Oschin
Schmidt Telescope on Palomar Mountain and the UK Schmidt Telescope.
The plates were processed into the present compressed digital form
with the permission of these institutions.

The Oschin Schmidt Telescope is operated by the California Institute
of Technology and Palomar Observatory.

The UK Schmidt Telescope was operated by the Royal Observatory
Edinburgh, with funding from the UK Science and Engineering Research
Council (later the UK Particle Physics and Astronomy Research Council),
until 1988 June, and thereafter by the Anglo-Australian
Observatory. The blue plates of the southern Sky Atlas and its
Equatorial Extension (together known as the SERC-J), as well as the
Equatorial Red (ER), and the Second Epoch [red] Survey (SES) were all
taken with the UK Schmidt.
    }

    SimpleTextDialog ${varname}ack [msgcat::mc {Acknowledgment}] \
	80 40 insert top $msg
}

# Process Cmds

proc ProcessSAOCmd {varname iname} {
    upvar $varname var
    upvar $iname i

    SAODialog

    dsssao::YY_FLUSH_BUFFER
    dsssao::yy_scan_string [lrange $var $i end]
    dsssao::yyparse
    incr i [expr $dsssao::yycnt-1]
}

proc ProcessSendSAOCmd {proc id param {sock {}} {fn {}}} {
    global parse
    set parse(proc) $proc
    set parse(id) $id

    SAODialog

    dsssaosend::YY_FLUSH_BUFFER
    dsssaosend::yy_scan_string $param
    dsssaosend::yyparse
}

