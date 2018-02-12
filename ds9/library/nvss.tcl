#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc NVSSDef {} {
    global nvss
    global invss

    set invss(top) .nvss
    set invss(mb) .nvssmb

    set nvss(sky) fk5
    set nvss(rformat) arcmin
    set nvss(width) 15
    set nvss(height) 15
    set nvss(mode) new
    set nvss(save) 0
    set nvss(survey) nvss
}

proc NVSSDialog {} {
    global nvss
    global invss
    global wcs

    if {[winfo exists $invss(top)]} {
	raise $invss(top)
	return
    }

    set varname dnvss
    upvar #0 $varname var
    global $varname

    set var(top) $invss(top)
    set var(mb) $invss(mb)
    set var(sky) $nvss(sky)
    set var(skyformat) $wcs(skyformat)
    set var(rformat) $nvss(rformat)
    set var(width) $nvss(width)
    set var(height) $nvss(height)
    # not used
    set var(width,pixels) 300
    set var(height,pixels) 300
    set var(mode) $nvss(mode)
    set var(save) $nvss(save)
    set var(survey) $nvss(survey)

    set w $var(top)
    IMGSVRInit $varname "NVSS [msgcat::mc {Server}]" \
	NVSSExec NVSSAck ARDone ARError

    IMGSVRUpdate $varname
}

proc NVSSExec {varname} {
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

    # size - degrees
    switch -- $var(rformat) {
	degrees {
	    set ww [expr $var(width)]
	    set hh [expr $var(height)]
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

    set var(query) [http::formatQuery submit Submit! Equinox J2000 PolType I RA $xx Dec $yy Size "$ww $hh" Cells "15.0 15.0" MAPROJ SIN Type image/x-fits rotate "0.0"]

#    set var(query) [http::formatQuery .submit "Extract the Cutout" RA "$xx $yy" Equinox J2000 ImageSize $rr MaxInt 10 .cgifields ImageType ImageType "FITS Image"]
    set url "http://www.cv.nrao.edu/cgi-bin/postage.pl"
    IMGSVRGetURL $varname $url
}

proc NVSSAck {varname} {
    upvar #0 $varname var
    global $varname

    set msg {Acknowledgments for the NRAO VLA Sky Survey

This major undertaking has received the generous technical and
scientific support of many individuals. The NRAO staff has provided
extremely valuable assistance in many aspects of the observations
themselves and in the area of software support; in particular, we are
grateful to Rick Perley, Ken Sowinski, Barry Clark, and Bill Cotton in
this regard. The support of the NRAO Director, Paul van den Bout, and
the yeoman service provided by Frazer Owen as Chair of the Survey
Oversight Committee are also greatly appreciated. We also thank the
members of the Oversight Committee (Ken Chambers, Eric Feigelson,
Jackie Hewitt, Gillian Knapp, and Rogier Windhorst) for their time and
wise counsel in this enterprise.

Acknowledgment is also due our colleagues who are involved in the
ongoing NVSS effort, including Richard McMahon and Isobel Hook. This
work is supported in part under the auspices of the Department of
Energy by Lawrence Livermore National Laboratory under contract
No. W-7405-ENG-48 and the Institute for Geophysics and Planetary
Physics, whose director Charles Alcock has been particularly
supportive. We also acknowledge a generous planning grant from the
CalSpace Institute; support from the STScI archive group, STScI
director Bob Williams, and the STScI Director's Discretionary Research
Fund; computing resources from Columbia University; a grant from the
National Science Foundation; a gift of computing equipment from Sun
Microsystems; a NATO travel grant to support our collaboration with
Richard McMahon; and an award from the National Geographic Society
which, in the spirit of their support 40 years ago for the Palomar
Observatory Sky Survey, will be providing funds to continue our
charting of the Universe.
    }

    SimpleTextDialog ${varname}ack [msgcat::mc {Acknowledgment}] \
	80 40 insert top $msg
}

# Process Cmds

proc ProcessNVSSCmd {varname iname} {
    upvar $varname var
    upvar $iname i

    NVSSDialog
    IMGSVRProcessCmd $varname $iname dnvss
}

proc ProcessSendNVSSCmd {proc id param} {
    NVSSDialog
    IMGSVRProcessSendCmd $proc $id $param dnvss
}
