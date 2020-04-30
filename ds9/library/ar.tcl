#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc ARInit {varname next} {
    upvar #0 $varname var
    global $varname

    set var(sync) 0
    set var(proc,next) $next

    set var(name) {}
    set var(x) {}
    set var(y) {}
    set var(status) {}
}

proc ARApply {varname} {
    upvar #0 $varname var
    global $varname

    ARStatus $varname {}

    $var(mb).file entryconfig [msgcat::mc {Retrieve}] -state disabled
    $var(mb).file entryconfig [msgcat::mc {Cancel}] -state normal

    $var(apply) configure -state disabled
    $var(cancel) configure -state normal
}

proc ARCancel {varname} {
    upvar #0 $varname var
    global $varname

    # set state to 0 so that we don't process the finish proc
    set var(active) 0

    if {[info exists var(token)]} {
	http::reset $var(token)
    }
}

proc ARDestroy {varname} {
    upvar #0 $varname var
    global $varname

    ARCancel $varname

    if {[winfo exists $var(top)]} {
	destroy $var(top)
	destroy $var(mb)
    }

    unset $varname
}

proc ARReset {varname} {
    upvar #0 $varname var
    global $varname

    set var(active) 0

    if {[info exists var(token)]} {
	http::cleanup $var(token)
	unset var(token)
    }

    $var(mb).file entryconfig [msgcat::mc {Retrieve}] -state normal
    $var(mb).file entryconfig [msgcat::mc {Cancel}] -state disabled

    $var(apply) configure -state normal
    $var(cancel) configure -state disabled
}

proc ARDone {varname} {
    upvar #0 $varname var
    global $varname

    set var(status) [msgcat::mc {Done}]
    ARReset $varname
}

proc ARCancelled {varname} {
    upvar #0 $varname var
    global $varname

    set var(status) [msgcat::mc {Cancelled}]
    ARReset $varname
}

proc ARError {varname message} {
    upvar #0 $varname var
    global $varname

    set var(status) [string range $message 0 80]
    ARReset $varname
}

proc ARStatus {varname message} {
    upvar #0 $varname var
    global $varname

    set var(status) [string range $message 0 80]
}

proc ARClear {varname} {
    upvar #0 $varname var
    global $varname

    set var(name) {}
    set var(x) {}
    set var(y) {}
    set var(status) {}
}

proc ARCoord {varname} {
    upvar #0 $varname var
    global $varname

    global ds9
    global pds9

    switch -- $var(sky) {
	fk4 -
	fk5 -
	icrs {
	    $var(xname) configure -text "\u03b1" \
		-font "$ds9(times) $pds9(font,size)"
	    $var(yname) configure -text "\u03b4" \
		-font "$ds9(times) $pds9(font,size)"
	}
	galactic {
	    $var(xname) configure -text {l} \
		-font "{$ds9(times)} $pds9(font,size) normal italic"
	    $var(yname) configure -text {b} \
		-font "{$ds9(times)} $pds9(font,size) normal italic"
	}
	ecliptic {
	    $var(xname) configure -text "\u03bb" \
		-font "$ds9(times) $pds9(font,size)"
	    $var(yname) configure -text "\u03b2" \
		-font "$ds9(times) $pds9(font,size)"
	}
    }
}

proc AREditMenu {varname} {
    upvar #0 $varname var
    global $varname

    global ds9

    $var(mb) add cascade -label [msgcat::mc {Edit}] -menu $var(mb).edit
    EditMenu $var(mb) $varname
    $var(mb).edit add separator
    $var(mb).edit add command -label [msgcat::mc {Clear}] \
	-command "ARClear $varname"
}

proc ARSkyFormat {w varname} {
    upvar #0 $varname var
    global $varname

    set ${varname}(skyformat,msg) [msgcat::mc $var(skyformat)]
    ttk::menubutton $w -textvariable ${varname}(skyformat,msg) -menu $w.menu
    ThemeMenu $w.menu
    $w.menu add radiobutton -label [msgcat::mc {Degrees}] \
	-variable ${varname}(skyformat) -value degrees \
	-command "ARSkyFormatMenu $varname"
    $w.menu add radiobutton -label {Sexagesimal} \
	-variable ${varname}(skyformat) -value sexagesimal \
	-command "ARSkyFormatMenu $varname"
}

proc ARSkyFormatMenu {varname} {
    upvar #0 $varname var
    global $varname

    set ${varname}(skyformat,msg) $var(skyformat)
}

proc ARRFormat {w varname} {
    upvar #0 $varname var
    global $varname

    set ${varname}(rformat,msg) [msgcat::mc $var(rformat)]
    ttk::menubutton $w -textvariable ${varname}(rformat,msg) -menu $w.menu
    ThemeMenu $w.menu
    $w.menu add radiobutton -label [msgcat::mc {Degrees}] \
	-variable ${varname}(rformat) -value degrees \
	-command "ARRFormatMenu $varname"
    $w.menu add radiobutton -label [msgcat::mc {ArcMin}] \
	-variable ${varname}(rformat) -value arcmin \
	-command "ARRFormatMenu $varname"
    $w.menu add radiobutton -label [msgcat::mc {ArcSec}] \
	-variable ${varname}(rformat) -value arcsec \
	-command "ARRFormatMenu $varname"
}

proc ARRFormatMenu {varname} {
    upvar #0 $varname var
    global $varname

    set ${varname}(rformat,msg) $var(rformat)
}

