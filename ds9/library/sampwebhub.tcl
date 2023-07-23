#  Copyright (C) 1999-2023
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc SAMPWebHubDialog {name origin url} {
    global ed

    set w ".sampwebhub"
    set mb ".sampwebhubmb"

    set ed(top) $w
    set ed(ok) 0
    set ed(name) $name
    set ed(origin) $origin
    set ed(url) $url

    DialogCreate $w [msgcat::mc {SAMPHub}] ed(ok)

    $w configure -menu $mb
    ThemeMenu $mb

    # file
    $mb add cascade -label [msgcat::mc {File}] -menu $mb.file
    ThemeMenu $mb.file
    $mb.file add command -label [msgcat::mc {OK}] -command {set ed(ok) 1}
    $mb.file add command -label [msgcat::mc {Cancel}] -command {set ed(ok) 0}

    set g [ttk::frame $w.param]

    # section 1
    set f [ttk::frame $g.s1]

    ttk::label $f.t1 -text [msgcat::mc {The following application, probably running in a browser, is requesting SAMP Hub Registration:}]
    ttk::label $f.s1 -text {}

    pack $f.t1 $f.s1 -side top -fill both -expand true
	  
    # section 2
    set f [ttk::frame $g.s2]

    ttk::label $f.t1 -text [msgcat::mc {Name}]
    ttk::label $f.v1 -textvariable ed(name)

    ttk::label $f.t2 -text [msgcat::mc {Origin}]
    ttk::label $f.v2 -textvariable ed(origin)

    ttk::label $f.t3 -text [msgcat::mc {URL}]
    ttk::label $f.v3 -textvariable ed(url)

    grid $f.t1 $f.v1 -padx 2 -pady 2 -sticky ew
    grid $f.t2 $f.v2 -padx 2 -pady 2 -sticky ew
    grid $f.t3 $f.v3 -padx 2 -pady 2 -sticky ew

    # section 3
    set f [ttk::frame $g.s3]

    ttk::label $f.s1 -text {}
    ttk::label $f.t1 -text [msgcat::mc {If you permit this, it may be able to access local files and other resources on your computer.}]
    ttk::label $f.t2 -text [msgcat::mc {You should only accept from a web site you trust.}]
    ttk::label $f.s2 -text {}
    ttk::label $f.t3 -text [msgcat::mc {Do yo authorize connection?}]
    
    pack $f.s1 $f.t1 $f.t2 $f.s2 $f.t3 -side top -fill both -expand true
    
    pack $g.s1 $g.s2 $g.s3 -side top -fill both -expand true

    # Buttons
    set f [ttk::frame $w.buttons]
    ttk::button $f.ok -text [msgcat::mc {OK}] -command {set ed(ok) 1} \
        -default active
    ttk::button $f.cancel -text [msgcat::mc {Cancel}] -command {set ed(ok) 0}
    pack $f.ok $f.cancel -side left -expand true -padx 2 -pady 4

    bind $w <Return> {set ed(ok) 1}
    
    # Fini
    ttk::separator $w.sep -orient horizontal
    pack $w.param -side top -fill both -expand true
    pack $w.buttons $w.sep -side bottom -fill x

    DialogWait $w ed(ok) $w.buttons.ok
    destroy $w
    destroy $mb

    return $ed(ok)
}

proc samp.webhub.allowReverseCallbacks {args} {
    global samphub

    global debug
    if {$debug(tcl,samp)} {
	puts "samp.webhub.allowReverseCallbacks: $args"
    }

    set samphub(web,allowReverseCallbacks) [lindex $args 1]
    return {string OK}
}

proc samp.webhub.pullCallbacks {args} {
    global samphub

    global debug
    if {$debug(tcl,samp)} {
	puts "samp.webhub.pullCallbacks: $args"
    }

    set timeout [lindex $args 1]

    set ll {}
    return "array [list $ll]"
}

proc samp.webhub.ping {} {
    global debug
    if {$debug(tcl,samp)} {
	puts "samp.webhub.ping"
    }
    
    SAMPHubDialogRecvdMsg "samp.webhub.ping"

    return {string OK}
}

proc samp.webhub.register {args} {
    global samphub
    global samphubmap

    global debug
    if {$debug(tcl,samp)} {
	puts "samp.webhub.register: $args"
    }

    set name {}
    set origin {}
    set url {}
    
    set map [lindex $args 0]
    foreach mm $map {
	foreach {key value} $mm {
	    switch $key {
		samp.name {set name $value}
	    }
	}
    }

    if {![SAMPWebHubDialog $name $origin $url]} {
	return {string ERROR}
    }

    SAMPHubRegister
    set samphubmap(samp.url-translator) {string foobar}
    return "struct samphubmap"
}

proc samp.webhub.unregister {args} {
    samp.hub.unregister {*}$args
}

proc samp.webhub.declareMetadata {args} {
    samp.hub.declareMetadata {*}$args
}

proc samp.webhub.getMetadata {args} {
    samp.hub.getMetadata {*}$args
}

proc samp.webhub.declareSubscriptions {args} {
    samp.hub.declareSubscriptions {*}$args
}

proc samp.webhub.getSubscriptions {args} {
    samp.hub.getSubscriptions {*}$args
}

proc samp.webhub.getRegisteredClients {args} {
    samp.hub.getRegisteredClients {*}$args
}

proc samp.webhub.getSubscribedClients {args} {
    samp.hub.getSubscribedClients {*}$args
}

proc samp.webhub.notify {args} {
    samp.hub.notify {*}$args
}

proc samp.webhub.notifyAll {args} {
    samp.hub.notifyAll {*}$args
}

proc samp.webhub.call {args} {
    samp.hub.call {*}$args
}

proc samp.webhub.callAll {args} {
    samp.hub.callAll {*}$args
}

proc samp.webhub.callAndWait {args} {
    samp.hub.callAndWait {*}$args
}

proc samp.webhub.reply {args} {
    samp.hub.reply {*}$args
}

# samp.webhub.ping

# samp.webhub.register
# samp.webhub.unregister
# samp.webhub.declareMetadata
# samp.webhub.getMetadata $id
# samp.webhub.declareSubscriptions
# samp.webhub.getSubscriptions $id
# samp.webhub.getRegisteredClients
# samp.webhub.getSubscribedClients(mtype)
# samp.webhub.notify $id
# samp.webhub.notifyAll
# samp.webhub.call $id
# samp.webhub.callAll
# samp.webhub.callAndWait $id
# samp.webhub.reply
