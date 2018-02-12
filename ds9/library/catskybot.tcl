#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc CATSkyBot {varname} {
    upvar #0 $varname var
    global $varname

    global debug
    if {$debug(tcl,cat)} {
	puts stderr "CATSkyBot $varname"
    }

    CATSkyBotVOT $varname
}

proc CATSkyBotVOT {varname} {
    upvar #0 $varname var
    global $varname

    global debug
    if {$debug(tcl,cat)} {
	puts stderr "CATSkyBotVOT $varname"
    }

    set var(proc,parser) VOTParse
    
    # coord (degrees)
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

    # size (arcmin)
    switch $var(rformat) {
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

    # now to radius
    set rr [expr sqrt($ww*$ww+$hh*$hh)/2.]

    # output
    if {$var(allcols)} {
	set type 3
    } else {
	set type 2
    }

    # figure out a epoch (DATE-OBS, then DATE)
    global current
    set epoch [string trim [$current(frame) get fits header keyword DATE-OBS]]
    if {$epoch == {}} {
	set epoch [string trim [$current(frame) get fits header keyword DATE_OBS]]
    }
    if {$epoch == {}} {
	set epoch [string trim [$current(frame) get fits header keyword DATE]]
    }
    if {$epoch == {}} {
	ARError $varname [msgcat::mc {Unable to determine date of observation}]
	return
    }

    # do we have a time? else check UT, UTC-OBS, UTIME, TIME-OBS
    set ut {}
    if {[string first {T} $epoch] == -1} {
	set ut [string trim [$current(frame) get fits header keyword UT]]
	if {$ut == {}} {
	    set ut [string trim [$current(frame) get fits header keyword UTC-OBS]]
	}
	if {$ut == {}} {
	    set ut [string trim [$current(frame) get fits header keyword UTIME]]
	}
	if {$ut == {}} {
	    set ut [string trim [$current(frame) get fits header keyword TIME-OBS]]
	}
	if {$ut == {}} {
	    set ut [string trim [$current(frame) get fits header keyword TIME_OBS]]
	}

	if {$ut != {}} {
	    append epoch "T$ut"
	}
    }

    # do we finally have a date with time?
    set dt [split $epoch {T}]
    set dd [lindex $dt 0]
    set tt [lindex $dt 1]
    if {$tt != {}} {
	# do we have EXPTIME or EXP_TIME?
	set exp [string trim [$current(frame) get fits header keyword EXPTIME]]
	if {$exp == {}} {
	    set exp [string trim [$current(frame) get fits header keyword EXP_TIME]]
	}

	if {$exp != {} && [string is double $exp]} {
	    # ok, rebuild epoch
	    set ttt [split $tt {:}]
	    set total [expr [lindex $ttt 0]*60.*60. + [lindex $ttt 1]*60. + [lindex $ttt 2] + [expr $exp/2.]]
	    set hh [format "%02d" [expr int($total/60./60.)]]
	    set total [expr $total - $hh*60.*60.]
	    set mm [format "%02d" [expr int($total/60.)]]
	    set ss [format "%02.1f" [expr $total - $mm*60.]]
	    set epoch "${dd}T${hh}:${mm}:${ss}"
	}
    }

    # query
    set var(query) [http::formatQuery EPOCH $epoch RA $xx DEC $yy SR $rr VERB $type -mime votable -loc $var(loc) -filter 0 -objFilter $var(asteroids)$var(planets)$var(comets)]
    set var(url) "http://vo.imcce.fr/webservices/skybot/skybotconesearch_query.php"
    CATLoad $varname
}

proc CATSkyBotAck {varname} {
    upvar #0 $varname var
    global $varname

    set msg {Acknowledgments for SkyBot

Request for Acknowledgment of Use of SkyBot

If SkyBoT was helpful for your research work, the following acknowledgment
would be appreciated: "This research has made use of IMCCE's SkyBoT VO tool",
or cite the following article 2006ASPC..351..367B.
    }

    SimpleTextDialog ${varname}ack [msgcat::mc {Acknowledgment}] \
	80 10 insert top $msg
}
