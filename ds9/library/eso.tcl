#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc ESODef {} {
    global eso
    global ieso

    set ieso(top) .eso
    set ieso(mb) .esomb

    set eso(sky) fk5
    set eso(rformat) arcmin
    set eso(width) 15
    set eso(height) 15
    set eso(mode) new
    set eso(save) 0
    set eso(survey) {DSS1}
}

proc ESODialog {} {
    global eso
    global ieso
    global wcs

    if {[winfo exists $ieso(top)]} {
	raise $ieso(top)
	return
    }

    set varname deso
    upvar #0 $varname var
    global $varname

    set var(top) $ieso(top)
    set var(mb) $ieso(mb)
    set var(sky) $eso(sky)
    set var(skyformat) $wcs(skyformat)
    set var(rformat) $eso(rformat)
    set var(width) $eso(width)
    set var(height) $eso(height)
    set var(survey) $eso(survey)
    set var(mode) $eso(mode)
    set var(save) $eso(save)

    set w $var(top)
    IMGSVRInit $varname "ESO-DSS [msgcat::mc {Server}]" ESOExec ESOAck

    $var(mb) add cascade -label Survey -menu $var(mb).survey
    ThemeMenu $var(mb).survey
    # these must be Caps, the server will not accept lower case
    $var(mb).survey add radiobutton -label {DSS1} \
	-variable ${varname}(survey) -value DSS1
    $var(mb).survey add radiobutton -label {DSS2-red} \
	-variable ${varname}(survey) -value DSS2-red
    $var(mb).survey add radiobutton -label {DSS2-blue} \
	-variable ${varname}(survey) -value DSS2-blue
    $var(mb).survey add radiobutton -label {DSS2-infrared} \
	-variable ${varname}(survey) -value DSS2-infrared

    IMGSVRUpdate $varname
}

proc ESOExec {varname} {
    upvar #0 $varname var
    global $varname

    if {$var(save)} {
	set mime "application/x-fits"
	set var(fn) [SaveFileDialog savefitsfbox $var(top)]
	if {$var(fn) == {}} {
	    ARDone $varname
	    return
	}
    } else {
	set mime "display/gz-fits"
	set var(fn) [tmpnam {.fits.gz}]
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
    set query [http::formatQuery ra $var(x) dec $var(y) equinox J2000 x $ww y $hh mime-type $mime Sky-Survey $var(survey)]
    # Load image
    # we can't use -query because eso needs a GET not a POST
    set url "http://archive.eso.org/dss/dss?$query"
    IMGSVRGetURL $varname $url {}
}

proc ESOAck {varname} {
    upvar #0 $varname var
    global $varname

    set msg {Acknowledgments for the ESO 

The Digitized Sky Surveys were produced at the Space Telescope Science
Institute under U.S.  Government grant NAG W-2166. The images of these
surveys are based on photographic data obtained using the Oschin
Schmidt Telescope on Palomar Mountain and the UK Schmidt Telescope.
The plates were processed into the present compressed digital form
with the permission of these institutions.

The National Geographic Society - Palomar Observatory Sky Atlas
(POSS-I) was made by the California Institute of Technology with
grants from the National Geographic Society.

The Second Palomar Observatory Sky Survey (POSS-II) was made by the
California Institute of Technology with funds from the National
Science Foundation, the National Geographic Society, the Sloan
Foundation, the Samuel Oschin Foundation, and the Eastman Kodak
Corporation.

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

proc ProcessESOCmd {varname iname} {
    upvar $varname var
    upvar $iname i

    ESODialog

    dsseso::YY_FLUSH_BUFFER
    dsseso::yy_scan_string [lrange $var $i end]
    dsseso::yyparse
    incr i [expr $dsseso::yycnt-1]
}

proc ProcessSendESOCmd {proc id param {sock {}} {fn {}}} {
    global parse
    set parse(proc) $proc
    set parse(id) $id

    ESODialog

    dssesosend::YY_FLUSH_BUFFER
    dssesosend::yy_scan_string $param
    dssesosend::yyparse
}
