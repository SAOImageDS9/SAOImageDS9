#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc NSVRServer {varname} {
    upvar #0 $varname var
    global $varname

    global debug
    if {$debug(tcl,image)} {
	puts stderr "NSVRServer $varname"
    }

    global nres
    global pnres

    ARStatus $varname "Looking up $var(name)"

    set ss [split $pnres(server) {-}]
    switch -- [lindex $ss 1] {
	eso -
	sao {set var(url) {http://vizier.cfa.harvard.edu/viz-bin/nph-sesame}}
	cds {set var(url) {http://cdsweb.u-strasbg.fr/cgi-bin/nph-sesame}}
    }
    append ${varname}(url) {/-ox}
    switch -- [lindex $ss 0] {
	ned {append ${varname}(url) {/N}}
	simbad {append ${varname}(url) {/S}}
	vizier {append ${varname}(url) {/V}}
    }

    set var(query) [http::formatQuery $var(name)]

    NSVRGetURL $varname $var(url)
}

proc NSVRGetURL {varname url} {
    upvar #0 $varname var
    global $varname

    global debug
    if {$debug(tcl,image)} {
	puts stderr "NSVRGetURL $varname $url $var(query)"
    }

    set var(ra) {}
    set var(dec) {}
    set var(pos) {}

    global ihttp
    # -query will not work, do it manually
    if {$var(sync)} {
	if {![catch {set var(token) [http::geturl $url?$var(query) \
					 -timeout $ihttp(timeout) \
					 -headers "[ProxyHTTP]"]
	}]} {
	    # reset errorInfo (may be set in http::geturl)
	    global errorInfo
	    set errorInfo {}

	    set var(active) 1
	    NSVRGetURLFinish $varname $var(token)
	} else {
	    ARError $varname "[msgcat::mc {Unable to locate URL}] $url"
	}
    } else {
	if {![catch {set var(token) [http::geturl $url?$var(query) \
					 -timeout $ihttp(timeout) \
					 -command \
					 [list NSVRGetURLFinish $varname] \
					 -headers "[ProxyHTTP]"]
	}]} {
	    # reset errorInfo (may be set in http::geturl)
	    global errorInfo
	    set errorInfo {}

	    set var(active) 1
	} else {
	    ARError $varname "[msgcat::mc {Unable to locate URL}] $url"
	}
    }
}

proc NSVRGetURLFinish {varname token} {
    upvar #0 $varname var
    global $varname

    global debug
    if {$debug(tcl,image)} {
	puts stderr "NSVRGetURLFinish $varname"
    }

    if {!($var(active))} {
	ARCancelled $varname
	return
    }

    upvar #0 $token t

    # Code
    set code [http::ncode $token]

    # Meta
    set meta $t(meta)

    # Log it
    HTTPLog $token

    # Result?
    switch -- $code {
	200 -
	203 -
	404 -
	503 {NSVRSESAME $varname}

	201 -
	300 -
	301 -
	302 -
	303 -
	305 -
	307 {
	    foreach {name value} $meta {
		if {[regexp -nocase ^location$ $name]} {
		    global debug
		    if {$debug(tcl,image)} {
			puts stderr "NSVRGetURLFinish redirect $code to $value"
		    }
		    # clean up and resubmit
		    http::cleanup $token
		    unset var(token)

		    # strip query from url
		    set value [lindex [split $value {?}] 0]

		    NSVRGetURL $varname $value
		}
	    }
	}

	default {ARError $varname "[msgcat::mc {Error code was returned}] $code"}
    }
}

proc NSVRSESAME {varname} {
    upvar #0 $varname var
    global $varname

    global debug
    if {$debug(tcl,image)} {
	puts stderr "NSVRSESAME $varname"
    }

    set pp [xml::parser \
		-characterdatacommand [list NSVRSESAMECharCB $varname]\
		-elementstartcommand [list NSVRSESAMEElemStartCB $varname] \
		-elementendcommand [list NSVRSESAMEElemEndCB $varname] \
		-ignorewhitespace 1 \
	       ]

    set var(parse) {}

    if {[catch {$pp parse [http::data $var(token)]} err]} {
	$pp free
	NSVRParse $varname {} {}
	return
    }

    switch -- $var(skyformat) {
	degrees {
	    if {$var(ra) != {} && $var(dec) != {}} {
		NSVRParse $varname $var(ra) $var(dec)
	    } else {
		NSVRParse $varname {} {}
	    }
	}
	sexagesimal {
	    if {$var(pos) != {}} {
		# can have extra space chars, must clean up
		set ss [split [string trim $var(pos)]]
		NSVRParse $varname [lindex $ss 0] [lindex $ss end]
	    } else {
		NSVRParse $varname {} {}
	    }
	}
    }
}

proc NSVRSESAMECharCB {t data} {
    upvar #0 $t T
    global $t

    set state [lindex $T(parse) end]
    set prev [lindex $T(parse) end-1]

    switch -- $state {
	jpos {
	    set T(pos) $data
	}
	jradeg {
	    set T(ra) $data
	}
	jdedeg {
	    set T(dec) $data
	}
    }
    return {}
}

proc NSVRSESAMEElemStartCB {t name attlist args} {
    upvar #0 $t T
    global $t

    lappend ${t}(parse) $name
    return {}
}

proc NSVRSESAMEElemEndCB {t name args} {
    upvar #0 $t T
    global $t

    set ${t}(parse) [lreplace $T(parse) end end]
    return {}
}

proc NSVRParse {varname x y} {
    upvar #0 $varname var
    global $varname

    global debug
    if {$debug(tcl,image)} {
	puts stderr "NSVRParse $varname $x $y"
    }

    set var(x) $x
    set var(y) $y

    if {($var(x) == {}) || ($var(y) == {})} {
	set var(x) {}
	set var(y) {}

	ARStatus $varname "$var(name) not found"
	ARReset $varname
    } else {
	if {$var(proc,next) != {}} {
	    if {[info exists var(token)]} {
		http::cleanup $var(token)
		unset var(token)
	    }

	    eval $var(proc,next) $varname
	} else {
	    ARDone $varname
	}
    }
}

proc NSVRServerMenu {varname} {
    upvar #0 $varname var
    global $varname

    $var(mb) add cascade -label [msgcat::mc {Name Server}] -menu $var(mb).name
    menu $var(mb).name

    NSVRServerMenuItems $var(mb).name
}

proc NSVRServerMenuItems {mm} {
    global nres

    $mm add radiobutton -label {NED@SAO} -variable pnres(server) \
	-value ned-sao
    $mm add radiobutton -label {NED@CDS} -variable pnres(server) \
	-value ned-cds
    $mm add separator
    $mm add radiobutton -label {SIMBAD@SAO} -variable pnres(server) \
	-value simbad-sao
    $mm add radiobutton -label {SIMBAD@CDS} -variable pnres(server) \
	-value simbad-cds
    $mm add separator
    $mm add radiobutton -label {VIZIER@SAO} -variable pnres(server) \
	-value vizier-sao
    $mm add radiobutton -label {VIZIER@CDS} -variable pnres(server) \
	-value vizier-cds
}
