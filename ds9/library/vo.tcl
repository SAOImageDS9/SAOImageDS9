#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc VODef {} {
    global ivo
    global pvo

    set ivo(top) .vo
    set ivo(mb) .vomb

    set ivo(server,host) {}
    set ivo(server,title) {}
    set ivo(server,url) {}
    set ivo(server,button) {}

    set ivo(ka,id) {}

    # prefs only
    set pvo(server) {http://cxc.harvard.edu/chandraed/list.txt}
    set pvo(hv) 1
    set pvo(method) mime
    set pvo(delay) 15
}

proc VOKeepAlive {doka} {
    global ivo
    global pvo
    global xpa

    # if not xpa, return
    if {$pvo(method) != {xpa}} {
	return
    }

    # if keep-alive turned off, return
    if {$pvo(delay) <= 0} {
	return
    }

    # count the connections
    set n 0
    for {set ii 0} {$ii < [llength $ivo(server,button)]} {incr ii} {
	if {$ivo(b$ii)} {
	    incr n
	    break
	}
    }

    # no connections => kill existing keep-alive, if necessary
    if {$n == 0} {
	if {$ivo(ka,id) != {}} {
	    after cancel $ivo(ka,id)
	    set ivo(ka,id) {}
	}
    } else {
	# yes connections
	# send a keep-alive, if necessary
	if {$doka} {
	    # puts [format "send keepalive: %s (%d)" [exec date] $pvo(delay)]
	    xpanskeepalive $xpa
        }
	# arrange for the next one
        set ivo(ka,id) [after [expr $pvo(delay) * 60 * 1000] VOKeepAlive 1]
    }
}

proc VOCancel {varname} {
    upvar #0 $varname var
    global $varname

    # set state to 0 so that we don't process the finish proc
    set var(active) 0
    set var(valid) 0

    if {[info exists var(token)]} {
	http::reset $var(token)
    }
}

proc VODestroy {varname} {
    upvar #0 $varname var
    global $varname

    VOCancel $varname

    if {[winfo exists $var(top)]} {
	destroy $var(top)
	destroy $var(mb)
    }

    unset $varname
}

proc VOReset {varname} {
    upvar #0 $varname var
    global $varname

    set var(active) 0

    if {[info exists var(token)]} {
	http::cleanup $var(token)
	unset var(token)
    }
}

proc VODone {varname} {
    upvar #0 $varname var
    global $varname

    VOReset $varname
    set var(valid) 1
}

proc VOError {varname message} {
    upvar #0 $varname var
    global $varname

    Error $message
    VOReset $varname
    set var(valid) 0
}

proc VODialog {} {
    global ivo
    global pvo

    global ds9

    if {[winfo exists $ivo(top)]} {
	raise $ivo(top)
	return
    }

    set varname voi
    upvar #0 $varname var
    global $varname

    # variables
    set var(top) $ivo(top)
    set var(mb) $ivo(mb)
    set var(url) {}

    # create the window
    set w $var(top)
    set mb $var(mb)

    Toplevel $w $mb 6 [msgcat::mc {Virtual Observatory}] "VODestroy $varname"

    $mb add cascade -label [msgcat::mc {File}] -menu $mb.file

    menu $mb.file
    $mb.file add command -label [msgcat::mc {Apply}] \
	-command "VOApply $varname"
    $mb.file add command -label [msgcat::mc {Cancel}] \
	-command "VOCancel $varname"
    $mb.file add separator
    $mb.file add command -label [msgcat::mc {Help Me Choose}] \
	-command HelpVO
    $mb.file add command -label [msgcat::mc {Configure}] \
	-command [list PrefsDialog http]
    $mb.file add separator
    $mb.file add command -label [msgcat::mc {Close}] \
	-command "VODestroy $varname"

    # Sites
    ttk::labelframe $w.param -text [msgcat::mc {Sites}] -padding 2

    # Browser
    set f [ttk::labelframe $w.opt -text [msgcat::mc {Browser}] -padding 2]
    set var(hv,button) [ttk::checkbutton $w.opt.hv \
			    -text [msgcat::mc {Use Internal Web Browser}] \
			    -variable pvo(hv) \
			    -command SavePrefs]
    ttk::radiobutton $w.opt.xpa \
	-text [msgcat::mc {Connect Directly}] \
	-variable pvo(method) -value xpa -command PrefsVOMethod
    ttk::radiobutton $w.opt.http \
	-text [msgcat::mc {Connect Using Web Proxy}] \
	-variable pvo(method) -value mime -command PrefsVOMethod
    grid $w.opt.hv -padx 2 -pady 2 -sticky w
    grid $w.opt.xpa $w.opt.http -padx 2 -pady 2 -sticky w

    set f [ttk::frame $w.buttons]
    ttk::button $f.help -text [msgcat::mc {Help Me Choose}] \
	-command HelpVO
    ttk::button $f.proxy -text [msgcat::mc {Configure}] \
	-command [list PrefsDialog http]
    ttk::button $f.close -text [msgcat::mc {Close}] \
	-command "VODestroy $varname"
    pack $f.help $f.proxy $f.close -side left -expand true -padx 2 -pady 4

    # Fini
    grid $w.param -sticky news
    grid $w.opt -sticky news
    grid $w.buttons -sticky ew
    grid rowconfigure $w 0 -weight 1
    grid rowconfigure $w 1 -weight 1
    grid columnconfigure $w 0 -weight 1

    if {[string length $ivo(server,host)] == 0} {
	VOApply $varname
    } else {
	set l [llength $ivo(server,host)]
	for {set ii 0} {$ii<$l} {incr ii} {
	    set b [lindex $ivo(server,button) $ii]
	    ttk::checkbutton $b -text "[lindex $ivo(server,title) $ii] ([lindex $ivo(server,url) $ii])" -variable ivo(b$ii) -command "VOCheck $varname $ii"
	    pack $b -anchor w -padx 2 -pady 2
	}
    }
}

proc VOApply {varname} {
    upvar #0 $varname var
    global $varname

    global ivo
    global pvo
    global xpa

    set w $var(top)

    # delete old servers
    for {set ii 0} {$ii < [llength $ivo(server,button)]} {incr ii} {
	catch {xparemote $xpa [lindex $ivo(server,host) $ii] - -proxy}
	catch {destroy [lindex $ivo(server,button) $ii]}
	catch {unset ivo(b$ii)}
    }
    set ivo(server,host) {}
    set ivo(server,title) {}
    set ivo(server,url) {}
    set ivo(server,button) {}

    # first try
    if {$pvo(server) != {}} {
	set var(valid) 0
	set var(url) $pvo(server)
	VOLoad $varname
	if {$var(valid)} {
	    VOKeepAlive 0
	    return
	}
    }
    
    # next try
    set var(valid) 0
    set var(url) {http://cxc.harvard.edu/chandraed/list.txt}
    VOLoad $varname
    if {$var(valid)} {
	VOKeepAlive 0
	return
    }

    # last try
    set var(url) {http://xray1.physics.rutgers.edu/vo/list.txtt}
    VOLoad $varname
    if {$var(valid)} {
	VOKeepAlive 0
	return
    }

    # default
    VOError $varname "Unable to access VO server list, please verify internet connection. Using default list."

    set rr {xray1.physics.rutgers.edu:28571	Rutgers Primary MOOC X-ray Analysis Server	http://xray1.physics.rutgers.edu/archive.html
rinzai.rutgers.edu:28571	Rutgers X-ray Analysis Server #2	http://rinzai.rutgers.edu/archive.html}
    VOParse $varname $rr

    VOKeepAlive 0
}

proc VOLoad {varname} {
    upvar #0 $varname var
    global $varname

    global ihttp
    if {![catch {set var(token) [http::geturl $var(url) \
				     -timeout $ihttp(timeout) \
				     -headers "[ProxyHTTP]"]
    }]} {
	# reset errorInfo (may be set in http::geturl)
	global errorInfo
	set errorInfo {}

	set var(active) 1
	VOFinish $varname $var(token)
    }
}

proc VOFinish {varname token} {
    upvar #0 $varname var
    global $varname

    if {!($var(active))} {
	VOReset $varname
	set var(valid) 0
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
	503 {
	    VOParse $varname [http::data $var(token)]
	    VODone $varname
	}

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
		    if {$debug(tcl,http)} {
			puts stderr "VOFinish redirect $code to $value"
		    }
		    # clean up and resubmit
		    http::cleanup $token
		    unset var(token)

		    set var(url) $value
		    VOLoad $varname
		}
	    }
	}
    }
}

proc VOParse {varname rr} {
    upvar #0 $varname var
    global $varname

    global ivo

    set w $var(top)

    set data [string trimright $rr \n]
    set lines [split $data \n]
    set len [llength $lines]
    for {set ii 0} {$ii<$len} {incr ii} {
	set line [lindex $lines $ii]
	set b "$w.param.b$ii"

	set ll [split $line \t]
	lappend ivo(server,host) [lindex $ll 0]
	lappend ivo(server,title) [lindex $ll 1]
	lappend ivo(server,url) [lindex $ll 2]
	lappend ivo(server,button) $b
	set ivo(b$ii) 0
	ttk::checkbutton $b -text "[lindex $ivo(server,title) $ii] ([lindex $ivo(server,url) $ii])" -variable ivo(b$ii) -command "VOCheck $varname $ii"
	pack $b -anchor w -padx 2 -pady 2
    }
}

proc VOCheck {varname ii} {
    upvar #0 $varname var
    global $varname

    global ivo
    global pvo

    global xpa

    set w $var(top)
    set b "$w.param.b$ii"

    if {$ivo(b$ii)} {
	switch $pvo(method) {
	    mime {}
	    xpa {
		if {[info exists xpa]} {
		    if {[catch {xparemote $xpa [lindex $ivo(server,host) $ii] + -proxy}]} {
			Info [msgcat::mc {Unable to connect directly: using Web Proxy}]
			set pvo(method) mime
		    }
		}
	    }
	}

	if {$pvo(hv)} {
	    set url [lindex $ivo(server,url) $ii]
	    ParseURL $url r
	    HV "vo$ii" "$r(authority)" $url {} 1
	}
    } else {
	switch $pvo(method) {
	    mime {}
	    xpa {
		catch {xparemote $xpa [lindex $var(server,host) $ii] - -proxy}
	    }
	}
    }

    # start or stop the keep-alive, as needed
    VOKeepAlive 0
}

proc PrefsVOMethod {} {
    global pvo

    switch $pvo(method) {
	mime {set pvo(hv) 1}
	xpa {}
    }
}

proc PrefsDialogVO {} {
    global dprefs

    set w $dprefs(tab)

    $dprefs(list) insert end [msgcat::mc {VO}]
    lappend dprefs(tabs) [ttk::frame $w.vo]

    # Browser
    set f [ttk::labelframe $w.vo.browser -text [msgcat::mc {Browser}]]

    ttk::checkbutton $f.web -text [msgcat::mc {Use Internal Web Browser}] \
	-variable pvo(hv)
    ttk::radiobutton $f.xpa -text [msgcat::mc {Connect Directly}] \
	-variable pvo(method) -value xpa -command PrefsVOMethod
    ttk::radiobutton $f.mime -text [msgcat::mc {Connect Using Web Proxy}] \
	-variable pvo(method) -value mime -command PrefsVOMethod

    grid $f.web -padx 2 -pady 2 -sticky w
    grid $f.xpa $f.mime -padx 2 -pady 2 -sticky w

    # Server
    set f [ttk::labelframe $w.vo.server -text [msgcat::mc {VO Server}]]

    ttk::label $f.stitle -text [msgcat::mc {Default}]
    ttk::entry $f.server -textvariable pvo(server) -width 50

    grid $f.stitle $f.server -padx 2 -pady 2 -sticky w

    # Keep-Alive
    set f [ttk::labelframe $w.vo.keep -text [msgcat::mc {Keep-Alive}]]

    ttk::label $f.dtitle -text [msgcat::mc {Minutes}]
    ttk::entry $f.delay -textvariable pvo(delay) -width 5

    grid $f.dtitle $f.delay -padx 2 -pady 2 -sticky w

    pack $w.vo.browser $w.vo.server $w.vo.keep -side top -fill both -expand true
}

proc ProcessVOCmd {varname iname} {
    upvar $varname var
    upvar $iname i

    set vvarname voi
    upvar #0 $vvarname vvar
    global $vvarname

    global ivo
    global pvo

    switch -- [string tolower [lindex $var $i]] {
	open {VODialog}
	close {VODestroy $vvarname}
	method {
	    incr i
	    set pvo(method) [lindex $var $i]
	}
	server {
	    incr i
	    set pvo(server) [lindex $var $i]
	}
	internal {
	    incr i
	    set pvo(hv) [FromYesNo [lindex $var $i]]
	}
	delay {
	    incr i
	    set pvo(delay) [lindex $var $i]
	}
	connect {
	    incr i

	    VODialog

	    # find best match
	    set ii [lsearch $ivo(server,url) "*[lindex $var $i]*"]
	    if {$ii>=0} {
		set ivo(b$ii) 1
		VOCheck $vvarname $ii
	    }
	}
	disconnect {
	    incr i

	    VODialog

	    # find best match
	    set ii [lsearch $ivo(server,url) "*[lindex $var $i]*"]
	    if {$ii>=0} {
		set ivo(b$ii) 0
		VOCheck $vvarname $ii
	    }
	}
	default {
	    VODialog

	    # find best match
	    set ii [lsearch $ivo(server,url) "*[lindex $var $i]*"]
	    if {$ii>=0} {
		set ivo(b$ii) 1
		VOCheck $vvarname $ii
	    }
	}
    }
}

proc ProcessSendVOCmd {proc id param} {
    global ivo
    global pvo

    switch -- [string tolower $param] {
	method {$proc $id "$pvo(method)\n"}
	server {$proc $id "$pvo(server)\n"}
	internal {$proc $id [ToYesNo $pvo(hv)]}
	delay {$proc $id "$pvo(delay)\n"}
	connect {
	    # current connections
	    set len [llength $ivo(server,button)]
	    set rr {}
	    for {set ii 0} {$ii<$len} {incr ii} {
		if {$ivo(b$ii)} {
		    append rr "[lindex $ivo(server,host) $ii] [lindex $ivo(server,title) $ii] [lindex $ivo(server,url) $ii] $ivo(b$ii)\n"
		}
	    }
	    $proc $id $rr
	}
	default {
	    VODialog
	    # all possible connections
	    set len [llength $ivo(server,button)]
	    set rr {}
	    for {set ii 0} {$ii<$len} {incr ii} {
		append rr "[lindex $ivo(server,host) $ii] [lindex $ivo(server,title) $ii] [lindex $ivo(server,url) $ii] $ivo(b$ii)\n"
	    }
	    $proc $id $rr
	}
    }
}

