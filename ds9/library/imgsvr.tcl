#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc IMGSVRInit {varname title exec ack} {
    upvar #0 $varname var
    global $varname

    global ds9
    global pds9

    # AR variables
    ARInit $varname IMGSVRServer

    # IMG variables
    set var(proc,exec) $exec
    set var(proc,ack) $ack
    set var(proc,done) ARDone
    set var(proc,error) ARError

    # create the window
    set w $var(top)
    set mb $var(mb)

    Toplevel $w $mb 6 $title "ARDestroy $varname"

    $mb add cascade -label [msgcat::mc {File}] -menu $mb.file
    ThemeMenu $mb.file
    $mb.file add command -label [msgcat::mc {Retrieve}] \
	-command "IMGSVRApply $varname 0"
    $mb.file add command -label [msgcat::mc {Cancel}] \
	-command "ARCancel $varname"
    $mb.file add separator
    $mb.file add command -label [msgcat::mc {Update from Current Frame}] \
	-command "IMGSVRUpdate $varname"
    $mb.file add command \
	-label [msgcat::mc {Update from Current Crosshair}] \
	-command "IMGSVRCrosshair $varname"
    $mb.file add separator
    $mb.file add command -label [msgcat::mc {Acknowledgment}] \
	-command "IMGSVRAck $varname"
    $mb.file add separator
    $mb.file add command -label [msgcat::mc {Close}] \
	-command "ARDestroy $varname" -accelerator "${ds9(ctrl)}W"

    AREditMenu $varname
    NSVRServerMenu $varname

    $mb add cascade -label [msgcat::mc {Preferences}] -menu $mb.prefs
    ThemeMenu $mb.prefs
    $mb.prefs add checkbutton -label [msgcat::mc {Save Image on Download}] \
	-variable ${varname}(save)
    $mb.prefs add separator
    $mb.prefs add radiobutton -label [msgcat::mc {New Frame}] \
	-variable ${varname}(mode) -value new
    $mb.prefs add radiobutton -label [msgcat::mc {Current Frame}] \
	-variable ${varname}(mode) -value current

    # Param
    set f [ttk::frame $w.param]

    ttk::label $f.nametitle -text [msgcat::mc {Object}]
    ttk::entry $f.name -textvariable ${varname}(name) -width 50
    ttk::label $f.sky -textvariable ${varname}(sky) -anchor w
    set var(xname) [ttk::label $f.xtitle -text {} -width 1]
    ttk::entry $f.x -textvariable ${varname}(x) -width 14
    set var(yname) [ttk::label $f.ytitle -text {} -width 1]
    ttk::entry $f.y -textvariable ${varname}(y) -width 14
    ARSkyFormat $f.skyformat $varname
    ttk::label $f.wtitle -text [msgcat::mc {Width}]
    ttk::entry $f.w -textvariable ${varname}(width) -width 14
    ttk::label $f.htitle -text [msgcat::mc {Height}]
    ttk::entry $f.h -textvariable ${varname}(height) -width 14
    ARRFormat $f.format $varname

    grid $f.nametitle x $f.name - - - - -padx 2 -pady 2 -sticky ew
    grid $f.sky $f.xtitle $f.x $f.ytitle $f.y $f.skyformat \
	-padx 2 -pady 2 -sticky w
    grid $f.wtitle x $f.w $f.htitle $f.h $f.format -padx 2 -pady 2 -sticky w

    # Status
    set f [ttk::frame $w.status]
    ttk::label $f.title -text [msgcat::mc {Status}]
    ttk::label $f.item -textvariable ${varname}(status)
    grid $f.title $f.item -padx 2 -pady 2 -sticky w

    # Buttons
    set f [ttk::frame $w.buttons]
    set var(apply) [ttk::button $f.apply -text [msgcat::mc {Retrieve}] \
			-command "IMGSVRApply $varname 0"]
    set var(cancel) [ttk::button $f.cancel -text [msgcat::mc {Cancel}] \
			 -command "ARCancel $varname" -state disabled]
    ttk::button $f.close -text [msgcat::mc {Close}] \
	-command "ARDestroy $varname"
    pack $f.apply $f.cancel $f.close -side left -expand true -padx 2 -pady 4 

    # Fini
    ttk::separator $w.sep -orient horizontal
    ttk::separator $w.sep2 -orient horizontal
    pack $w.buttons $w.sep $w.status $w.sep2 -side bottom -fill x
    pack $w.param -side top -fill both -expand true

    bind $w <<Close>> [list ARDestroy $varname]

    ARCoord $varname
    ARStatus $varname {}
}

proc IMGSVRApply {varname sync} {
    upvar #0 $varname var
    global $varname

    global debug
    if {$debug(tcl,image)} {
	puts stderr "IMGSVRApply $varname $sync"
    }

    set var(sync) $sync
    ARApply $varname
    if {($var(name) != {})} {
	set var(sky) fk5
	ARCoord $varname

	NSVRServer $varname
    } else {
	IMGSVRServer $varname
    }
}

proc IMGSVRAck {varname} {
    upvar #0 $varname var
    global $varname

    global debug
    if {$debug(tcl,image)} {
	puts stderr "IMGSVRAck $varname"
    }

    eval "$var(proc,ack) $varname"
}

proc IMGSVRUpdate {varname} {
    upvar #0 $varname var
    global $varname

    global current
    global wcs

    global debug
    if {$debug(tcl,image)} {
	puts stderr "IMGSVRUpdate $varname"
    }

    if {[winfo exists $var(top)]} {
	set var(name) {}
	if {$current(frame) != {} } {
	    if {[$current(frame) has wcs celestial $wcs(system)]} {
		set coord [$current(frame) get fits center \
			       $wcs(system) $var(sky) $var(skyformat)]
		set var(x) [lindex $coord 0]
		set var(y) [lindex $coord 1]

		set size [$current(frame) get fits size \
			      $wcs(system) $var(sky) $var(rformat)]
		set var(width) [lindex $size 0]
		set var(height) [lindex $size 1]

		return
	    }
	} else {
	    set var(x) {}
	    set var(y) {}
	    set var(width) {}
	    set var(height) {}
	}
    }
}

proc IMGSVRCrosshair {varname} {
    upvar #0 $varname var
    global $varname

    global debug
    if {$debug(tcl,image)} {
	puts stderr "IMGSVRCrosshair $varname"
    }

    global current
    global wcs

    if {[winfo exists $var(top)]} {
	set var(name) {}
	if {$current(frame) != {} } {
	    if {[$current(frame) has wcs celestial $wcs(system)]} {
		set coord [$current(frame) get crosshair \
			       $wcs(system) $var(sky) $var(skyformat)]
		set var(x) [lindex $coord 0]
		set var(y) [lindex $coord 1]

		return
	    }
	}
	set var(x) {}
	set var(y) {}
    }
}

proc IMGSVRServer {varname} {
    upvar #0 $varname var
    global $varname
    global current

    global debug
    if {$debug(tcl,image)} {
	puts stderr "IMGSVRServer $varname"
    }

    if {($var(x) != {}) && 
	($var(y) != {}) && 
	($var(width) != {}) && 
	($var(height) != {})} {

	ARStatus $varname [msgcat::mc {Contacting Server}]
	eval [list $var(proc,exec) $varname]
    } else {
	eval [list $var(proc,error) $varname [msgcat::mc {Please specify width, height, and either name or (ra,dec)}]]
    }
}

proc IMGSVRGetURL {varname url query} {
    upvar #0 $varname var
    global $varname

    global debug
    if {$debug(tcl,image)} {
	puts stderr "IMGSVRGetURL $varname $url $query"
    }

    set var(ch) [open "$var(fn)" w]
    # save query just in case of redirection
    set var(qq) $query

    global ihttp
    if {$var(sync)} {
	if {![catch {set var(token) [http::geturl $url \
					 -timeout $ihttp(timeout) \
					 -channel $var(ch) \
					 -progress \
					 [list IMGSVRProgress $varname] \
					 -binary 1 \
					 -headers "[ProxyHTTP]" \
					 -query "$query"]
	}]} {
	    # reset errorInfo (may be set in http::geturl)
	    global errorInfo
	    set errorInfo {}

	    set var(active) 1
	    IMGSVRGetURLFinish $varname $var(token)
	} else {
	    catch {close $var(ch)}
	    eval [list $var(proc,error) $varname "[msgcat::mc {Unable to locate URL}] $url"]
	}
    } else {
	if {![catch {set var(token) [http::geturl $url \
					 -timeout $ihttp(timeout) \
					 -channel $var(ch) \
					 -command \
					 [list IMGSVRGetURLFinish $varname] \
					 -progress \
					 [list IMGSVRProgress $varname] \
					 -binary 1 \
					 -headers "[ProxyHTTP]" \
					 -query "$query"]
	}]} {
	    # reset errorInfo (may be set in http::geturl)
	    global errorInfo
	    set errorInfo {}

	    set var(active) 1
	} else {
	    catch {close $var(ch)}
	    eval [list $var(proc,error) $varname "[msgcat::mc {Unable to locate URL}] $url"]
	}
    }
}

proc IMGSVRGetURLFinish {varname token} {
    upvar #0 $varname var
    global $varname

    global debug
    if {$debug(tcl,image)} {
	puts stderr "IMGSVRGetURLFinish $varname"
    }

    global current
    global ds9
    global loadParam

    catch {close $var(ch)}

    if {!($var(active))} {
	ARCancelled $varname
	return
    }

    upvar #0 $token t

    # Code
    set var(code) [http::ncode $token]

    # Meta
    set var(meta) $t(meta)

    # Mime-type
    # we want to strip and extra info after ';'
    regexp -nocase {([^;])*} $t(type) var(mime)

    # Content-Encoding
    set var(encoding) {}
    foreach {name value} $var(meta) {
	if {[regexp -nocase ^content-encoding $name]} {
	    switch -- [string tolower $value] {
		compress -
		bzip2 {set var(encoding) bzip2}
		Z {set var(encoding) compress}
		pack -
		z {set var(encoding) pack}
		default {}
	    }
	}
    }

    # Log it
    HTTPLog $token

    # Result?
    switch -- $var(code) {
	200 -
	203 {IMGSVRParse $varname}

	201 -
	300 -
	301 -
	302 -
	303 -
	305 -
	307 {
	    foreach {name value} $var(meta) {
		if {[regexp -nocase ^location$ $name]} {
		    global debug
		    if {$debug(tcl,image)} {
			puts stderr "IMGSVRGetURLFinish redirect $var(code) to $value"
		    }
		    # clean up and resubmit
		    http::cleanup $token
		    unset var(token)

		    IMGSVRGetURL $varname $value $var(qq)
		}
	    }
	}

	default {
	    eval [list $var(proc,error) $varname "[msgcat::mc {Error code was returned}] $var(code)"]
	}
    }
}

proc IMGSVRParse {varname} {
    upvar #0 $varname var
    global $varname

    global current
    global ds9
    global loadParam

    global debug
    if {$debug(tcl,image)} {
	puts stderr "IMGSVRParse: $varname : fn $var(fn) : code $var(code) : meta $var(meta) : mime $var(mime) : encoding $var(encoding)"
    }

    switch -- [string tolower $var(mime)] {
	"text/html" -
	"text/plain" -
	"application/octet-stream" {
	    # it never fails, someone can't get there mime types correct. 
	    # Override the mime type based on path
	    switch -- [file extension $var(fn)] {
		.bz2 {set var(encoding) bzip2}
		.Z {set var(encoding) compress}
		.z {set var(encoding) pack}
	    }
	}

	"image/fits" -
	"application/fits" {}

	"application/fits-image" -
	"application/fits-table" -
	"application/fits-group" {}

	"image/x-fits" -
	"binary/x-fits" -
	"application/x-fits" {}

	"image/x-gfits" -
	"binary/x-gfits" -
	"image/gz-fits" -
	"application/x-gzip" -
	"display/gz-fits" {}

	"image/fits-hcompress" -
	"image/x-fits-h" {}

	"image/bz2-fits" -
	"display/bz2-fits" {set var(encoding) bzip2}

	"image/x-cfits" -
	"binary/x-cfits" {set var(encoding) compress}

	"image/x-zfits" -
	"binary/x-zfits" {set var(encoding) pack}

	default {
	    # NOTE: error notices may come as text/html
	    eval [list $var(proc,error) $varname [msgcat::mc {No Data Available}]]
	    return
	}
    }

    switch -- $var(mode) {
	new {MultiLoad}
	current {}
    }

    # alloc it because we are going to delete it after load
    set loadParam(load,type) allocgz
    set loadParam(load,layer) {}
    set loadParam(file,type) fits
    set loadParam(file,mode) {}
    set loadParam(file,name) $var(fn)
    set loadParam(file,fn) $loadParam(file,name)

    # may have to convert the file, based on content-encoding
    switch -- "$var(encoding)" {
	bzip2 {
	    catch {set ch [open "| bunzip2 < $var(fn) " r]}
	    set loadParam(load,type) channel
	    set loadParam(channel,name) $ch
	}
	compress {
	    catch {set ch [open "| uncompress < $var(fn) " r]}
	    set loadParam(load,type) channel
	    set loadParam(channel,name) $ch
	}
	pack {
	    catch {set ch [open "| pcat $var(fn) " r]}
	    set loadParam(load,type) channel
	    set loadParam(channel,name) $ch
	}
    }
    ProcessLoad
    FinishLoad

    if {!$var(save)} {
	if {[file exists $var(fn)]} {
	    catch {file delete -force $var(fn)}
	}
    }

    $var(proc,done) $varname
}

proc IMGSVRProgress {varname token totalsize currentsize} {
    upvar #0 $varname var
    global $varname

    # sometimes we get nothing
    if {$totalsize == {} || $currentsize == {}} {
	ARStatus $varname {}
    } elseif {$totalsize != 0} {
	ARStatus $varname "$currentsize bytes of $totalsize bytes [expr int(double($currentsize)/$totalsize*100)]%"
    } else {
	ARStatus $varname "$currentsize bytes"
    }
}
