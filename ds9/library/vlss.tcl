#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc VLSSDef {} {
    global vlss
    global ivlss

    set ivlss(top) .vlss
    set ivlss(mb) .vlsstmb

    set vlss(sky) fk5
    set vlss(rformat) arcmin
    set vlss(width) 15
    set vlss(height) 15
    set vlss(mode) new
    set vlss(save) 0
}

proc VLSSDialog {} {
    global vlss
    global ivlss
    global wcs

    if {[winfo exists $ivlss(top)]} {
	raise $ivlss(top)
	return
    }

    set varname dvlss
    upvar #0 $varname var
    global $varname

    set var(top) $ivlss(top)
    set var(mb) $ivlss(mb)
    set var(sky) $vlss(sky)
    set var(skyformat) $wcs(skyformat)
    set var(rformat) $vlss(rformat)
    set var(width) $vlss(width)
    set var(height) $vlss(height)
    # not used
    set var(width,pixels) 300
    set var(height,pixels) 300
    set var(mode) $vlss(mode)
    set var(save) $vlss(save)

    set w $var(top)
    IMGSVRInit $varname "VLSS [msgcat::mc {Server}]" \
	VLSSExec VLSSAck ARDone ARError

    IMGSVRUpdate $varname
}

proc VLSSExec {varname} {
    upvar #0 $varname var
    global $varname

    if {$var(save)} {
	set var(fn) [SaveFileDialog savefitsfbox]
	if {$var(fn) == {}} {
	    ARDone $varname
	    return
	}
    } else {
	set var(fn) [tmpnam {.fits}]
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
    regsub -all {:} $xx { } xx
    regsub -all {:} $yy { } yy

    # size - convert to arcmin
    switch -- $var(rformat) {
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

    set var(query) [http::formatQuery submit Submit Equinox J2000 RA $xx Dec $yy Size "$ww $hh" Cells "25.0 25.0" MAPROJ SIN rotate 0.0 Type image/x-fits]
    set url "http://www.cv.nrao.edu/cgi-bin/newVLSSpostage.pl"
    IMGSVRGetURL $varname $url
}

proc VLSSAck {varname} {
    upvar #0 $varname var
    global $varname

    set msg {Acknowledgments for the VLSS 

The VLSS survey is being carried out by the NRAO and the 
Naval Research Lab. 
    }

    SimpleTextDialog ${varname}ack [msgcat::mc {Acknowledgment}] \
	80 40 insert top $msg
}

# Process Cmds

proc ProcessVLSSCmd {varname iname} {
    upvar $varname var
    upvar $iname i

    VLSSDialog
    IMGSVRProcessCmd $varname $iname dvlss
}

proc ProcessSendVLSSCmd {proc id param} {
    VLSSDialog
    IMGSVRProcessSendCmd $proc $id $param dvlss
}
