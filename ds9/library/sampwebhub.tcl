#  Copyright (C) 1999-2023
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc SAMPWebHubDialog {name} {
    global ds9

    set cc "The following application, probably running in a browser, is requesting SAMP Hub Registration:\n\nName: $name\n\nIf you permit this, it may be able to access local files and other\nresources on your computer. You should only accept from\na web site you trust.\n\nDo yo authorize connection?"

    if {[tk_messageBox -type yesno -icon question -message "$cc"]=={yes}} {
	return 1
    } else {
	return 0
    }
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

    SAMPHubRegister 1
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