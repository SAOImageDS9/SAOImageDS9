#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc VLADef {} {
    global vla
    global ivla

    set ivla(top) .vla
    set ivla(mb) .vlatmb

    set vla(sky) fk5
    set vla(rformat) arcmin
    set vla(width) 15
    set vla(height) 15
    set vla(mode) new
    set vla(save) 0
    set vla(survey) first
}

proc VLADialog {} {
    global vla
    global ivla
    global wcs

    if {[winfo exists $ivla(top)]} {
	raise $ivla(top)
	return
    }

    set varname dvla
    upvar #0 $varname var
    global $varname

    set var(top) $ivla(top)
    set var(mb) $ivla(mb)
    set var(sky) $vla(sky)
    set var(skyformat) $wcs(skyformat)
    set var(rformat) $vla(rformat)
    set var(width) $vla(width)
    set var(height) $vla(height)
    # not used
    set var(width,pixels) 300
    set var(height,pixels) 300
    set var(mode) $vla(mode)
    set var(save) $vla(save)
    set var(survey) $vla(survey)

    set w $var(top)
    IMGSVRInit $varname "VLA [msgcat::mc {Server}]" \
	VLAExec VLAAck ARDone ARError

    menu $var(mb).survey
    $var(mb) add cascade -label Survey -menu $var(mb).survey
    $var(mb).survey add radiobutton -label {First} \
	-variable ${varname}(survey) -value first
    $var(mb).survey add radiobutton -label {Stripe 82} \
	-variable ${varname}(survey) -value stripe82
    $var(mb).survey add radiobutton -label {GPS} \
	-variable ${varname}(survey) -value gps

    IMGSVRUpdate $varname
}

proc VLAExec {varname} {
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

    # now to radius
    set rr [expr sqrt($ww*$ww+$hh*$hh)/2.]
    if {$rr>60} {
	set rr 60
    }

    set var(query) [http::formatQuery .submit "Extract the Cutout" RA "$xx $yy" Equinox J2000 ImageSize $rr MaxInt 10 .cgifields ImageType ImageType "FITS Image"]
    set url "https://third.ucllnl.org/cgi-bin/$var(survey)cutout"
    IMGSVRGetURL $varname $url
}

proc VLAAck {varname} {
    upvar #0 $varname var
    global $varname

    set msg {Acknowledgments for the VLA 

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
ongoing FIRST effort, including Richard McMahon and Isobel Hook. This
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

proc ProcessVLACmd {varname iname} {
    upvar $varname var
    upvar $iname i

    VLADialog
    IMGSVRProcessCmd $varname $iname dvla
}

proc ProcessSendVLACmd {proc id param} {
    VLADialog
    IMGSVRProcessSendCmd $proc $id $param dvla
}
