#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc STSCIDef {} {
    global stsci
    global istsci

    set istsci(top) .stsci
    set istsci(mb) .stscimb

    set stsci(sky) fk5
    set stsci(rformat) arcmin
    set stsci(width) 15
    set stsci(height) 15
    set stsci(mode) new
    set stsci(save) 0
    set stsci(survey) {all}
}

proc STSCIDialog {} {
    global stsci
    global istsci
    global wcs

    if {[winfo exists $istsci(top)]} {
	raise $istsci(top)
	return
    }

    set varname dstscii
    upvar #0 $varname var
    global $varname

    set var(top) $istsci(top)
    set var(mb) $istsci(mb)
    set var(sky) $stsci(sky)
    set var(skyformat) $wcs(skyformat)
    set var(rformat) $stsci(rformat)
    set var(width) $stsci(width)
    set var(height) $stsci(height)
    # not used
    set var(width,pixels) 300
    set var(height,pixels) 300
    set var(mode) $stsci(mode)
    set var(save) $stsci(save)
    set var(survey) $stsci(survey)

    set w $var(top)
    IMGSVRInit $varname "STSCI-DSS [msgcat::mc {Server}]" \
	STSCIExec STSCIAck ARDone ARError

    menu $var(mb).survey
    $var(mb) add cascade -label Survey -menu $var(mb).survey
    $var(mb).survey add radiobutton -label {POSS2/UKSTU Red} \
	-variable ${varname}(survey) -value poss2ukstu_red
    $var(mb).survey add radiobutton -label {POSS2/UKSTU Infrared} \
	-variable ${varname}(survey) -value poss2ukstu_ir
    $var(mb).survey add radiobutton -label {POSS2/UKSTU Blue} \
	-variable ${varname}(survey) -value poss2ukstu_blue
    $var(mb).survey add radiobutton \
	-label {POSS1 (First Generation) Blue} \
	-variable ${varname}(survey) -value poss1_blue
    $var(mb).survey add radiobutton \
	-label {POSS1 (First Generation) Red} \
	-variable ${varname}(survey) -value poss1_red
    $var(mb).survey add radiobutton \
	-label {Best of a combined list of all plates} \
	-variable ${varname}(survey) -value all
    $var(mb).survey add radiobutton \
	-label {Quick-V Survey} \
	-variable ${varname}(survey) -value quickv
    $var(mb).survey add radiobutton \
	-label {HST Phase 2 Target Positioning (GSC 2)} \
	-variable ${varname}(survey) -value phase2_gsc2
    $var(mb).survey add radiobutton \
	-label {HST Phase 2 Target Positioning (GSC 1)} \
	-variable ${varname}(survey) -value phase2_gsc1

    IMGSVRUpdate $varname
}

proc STSCIExec {varname} {
    upvar #0 $varname var
    global $varname

    if {$var(save)} {
	set compress none
	set var(fn) [SaveFileDialog savefitsfbox]
	if {$var(fn) == {}} {
	    ARDone $varname
	    return
	}
    } else {
	set compress gz
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
    set var(query) [http::formatQuery r $var(x) d $var(y) e J2000 w $ww h $hh f fits c $compress v $var(survey)]
    set url "http://stdatu.stsci.edu/cgi-bin/dss_search"
    IMGSVRGetURL $varname $url
}

proc STSCIAck {varname} {
    upvar #0 $varname var
    global $varname

    set msg {Acknowledgments for the DSS-STSCI 

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

proc ProcessSTSCICmd {varname iname} {
    upvar $varname var
    upvar $iname i

    STSCIDialog
    IMGSVRProcessCmd $varname $iname dstscii
}

proc ProcessSendSTSCICmd {proc id param} {
    STSCIDialog
    IMGSVRProcessSendCmd $proc $id $param dstscii
}
