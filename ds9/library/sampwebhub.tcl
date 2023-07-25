#  Copyright (C) 1999-2023
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc SAMPWebHubDialog {name} {
    global ds9
    global ed

    set w ".sampwebhub"

    set ed(ok) 0

    set cc "The following application, probably running in a browser, is requesting SAMP Hub Registration:\n\nName: $name\n\nIf you permit this, it may be able to access local files and other\nresources on your computer. You should only accept from\na web site you trust.\n\nDo yo authorize connection?"

    DialogCreate $w [msgcat::mc {SAMPHub}] ed(ok)

    # Param
    set f [ttk::frame $w.param]
    canvas $f.c -background white -height 200 -width 500
    pack $f.c -fill both -expand true
    
    set ed(sun) [image create photo -file $ds9(root)/doc/sun.png]
    
    $f.c create image 0 0 -image $ed(sun) -anchor nw
    $f.c create text 120 22 -text $cc -anchor nw -width 400

    # Buttons
    set f [ttk::frame $w.buttons]
    ttk::button $f.ok -text [msgcat::mc {OK}] -command {set ed(ok) 1} \
        -default active
    ttk::button $f.cancel -text [msgcat::mc {Cancel}] -command {set ed(ok) 0}
    pack $f.ok $f.cancel -side left -expand true -padx 2 -pady 4

    bind $w <Return> {set ed(ok) 1}

    # Fini
    ttk::separator $w.sep -orient horizontal
    pack $w.buttons $w.sep -side bottom -fill x
    pack $w.param -side top -fill both -expand true

    DialogWait $w ed(ok)
    destroy $w

    set rr $ed(ok)
    image delete $ed(sun)
    unset ed
    return $rr
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
#	puts "samp.webhub.pullCallbacks: $args"
	puts -nonewline {.}
    }

    set timeout [lindex $args 1]

    if {!$samphub(web,allowReverseCallbacks)} {
	set ll {}
	return "array [list $ll]"
    } else {
	set ll {}
	return "array [list $ll]"
    }
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
    
    set map [lindex $args 0]
    foreach mm $map {
	foreach {key value} $mm {
	    switch $key {
		samp.name {set name $value}
	    }
	}
    }

    if {![SAMPWebHubDialog $name]} {
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
