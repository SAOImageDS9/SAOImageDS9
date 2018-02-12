#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc 2MASSDef {} {
    global twomass
    global itwomass

    set itwomass(top) .twomass
    set itwomass(mb) .twomassmb

    set twomass(sky) fk5
    set twomass(rformat) arcmin
    set twomass(width) 15
    set twomass(height) 15
    set twomass(mode) new
    set twomass(save) 0
    set twomass(survey) j
}

proc 2MASSDialog {} {
    global twomass
    global itwomass
    global wcs

    if {[winfo exists $itwomass(top)]} {
	raise $itwomass(top)
	return
    }

    set varname dtwomass
    upvar #0 $varname var
    global $varname

    set var(top) $itwomass(top)
    set var(mb) $itwomass(mb)
    set var(sky) $twomass(sky)
    set var(skyformat) $wcs(skyformat)
    set var(rformat) $twomass(rformat)
    set var(width) $twomass(width)
    set var(height) $twomass(height)
    # not used
    set var(width,pixels) 300
    set var(height,pixels) 300
    set var(mode) $twomass(mode)
    set var(save) $twomass(save)
    set var(survey) $twomass(survey)

    IMGSVRInit $varname "IPAC-2MASS [msgcat::mc {Server}]" \
	2MASSExec 2MASSAck ARDone ARError

    $var(mb) add cascade -label Survey -menu $var(mb).survey
    menu $var(mb).survey
    $var(mb).survey add radiobutton -label {2MASS (J Band)} \
	-variable ${varname}(survey) -value j
    $var(mb).survey add radiobutton -label {2MASS (H Band)} \
	-variable ${varname}(survey) -value h
    $var(mb).survey add radiobutton -label {2MASS (K Band)} \
	-variable ${varname}(survey) -value k

    IMGSVRUpdate $varname
}

proc 2MASSExec {varname} {
    upvar #0 $varname var
    global $varname

    if {$var(save)} {
	set var(fn) [SaveFileDialog savefitsfbox]
	if {$var(fn) == {}} {
	    ARDone $varname
	    return
	}

    } else {
	set var(fn) [tmpnam {.fits.gz}]
    }

    # size - convert to arcsec
    switch -- $var(rformat) {
	degrees {
	    set ww [expr $var(width)*60.*60.]
	    set hh [expr $var(height)*60.*60.]
	}
	arcmin {
	    set ww [expr $var(width)*60.]
	    set hh [expr $var(height)*60.]
	}
	arcsec {
	    set ww $var(width)
	    set hh $var(height)
	}
    }

    # now to radius
    set rr [expr sqrt($ww*$ww+$hh*$hh)/2.]
    if {$rr>1024} {
	set rr 1024
    }

    set foo "$var(x) $var(y)"

    set var(query) [http::formatQuery objstr $foo size $rr band $var(survey)]
    set url "http://irsa.ipac.caltech.edu/cgi-bin/Oasis/2MASSImg/nph-2massimg"
    IMGSVRGetURL $varname $url
}

proc 2MASSAck {varname} {
    upvar #0 $varname var
    global $varname

    set msg {Acknowledgments for the 2MASS 

This publication makes use of data products from the Two Micron All
Sky Survey, which is a joint project of the University of
Massachusetts and the Infrared Processing and Analysis
Center/California Institute of Technology, funded by the National
Aeronautics and Space Administration and the National Science
Foundation.
    }

    SimpleTextDialog "${varname}ack" [msgcat::mc {Acknowledgment}] \
	80 40 insert top $msg
}

# Process Cmds

proc Process2MASSCmd {varname iname} {
    upvar $varname var
    upvar $iname i

    2MASSDialog
    IMGSVRProcessCmd $varname $iname dtwomass
}

proc ProcessSend2MASSCmd {proc id param} {
    2MASSDialog
    IMGSVRProcessSendCmd $proc $id $param dtwomass
}
