#  Copyright (C) 1999-2023
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc SAMPWebHubStart {verbose} {
    global samp
    global samphub
    global debug

    set samphub(web,sock) [xmlrpc::serve 21012]
    set samphub(web,port) [lindex [fconfigure $samphub(web,sock) -sockname] 2]
}

proc samp.webhub.allowReverseCallbacks {args} {
    global samphub

    global debug
    if {$debug(tcl,samp)} {
	puts "samp.webhub.allowReverseCallbacks: $args"
    }
}

proc samp.webhub.pullCallbacks {args} {
    global samphub

    global debug
    if {$debug(tcl,samp)} {
	puts "samp.webhub.pullCallbacks: $args"
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

    global debug
    if {$debug(tcl,samp)} {
	puts "samp.webhub.register: $args"
    }

    set map [lindex $args 0]
    foreach mm $map {
	foreach {key value} $mm {
	    switch $key {
		samp.name {}
	    }
	}
    }

    # name
    # origin
    # url
}

proc samp.webhub.unregister {args} {
    global samphub

    global debug
    if {$debug(tcl,samp)} {
	puts "samp.webhub.unregister: $args"
    }
}

proc samp.webhub.declareMetadata {args} {
    global samphub
    
    global debug
    if {$debug(tcl,samp)} {
	puts "samp.webhub.declareMetadata: $args"
    }
}

proc samp.webhub.getMetadata {args} {
    global samphub

    global debug
    if {$debug(tcl,samp)} {
	puts "samp.webhub.getMetadata: $args"
    }
}

proc samp.webhub.declareSubscriptions {args} {
    global samphub

    global debug
    if {$debug(tcl,samp)} {
	puts "samp.webhub.declareSubscriptions: $args"
    }
}

proc samp.webhub.getSubscriptions {args} {
    global samphub

    global debug
    if {$debug(tcl,samp)} {
	puts "samp.webhub.getSubscriptions: $args"
    }
}

proc samp.webhub.getRegisteredClients {args} {
    global samphub

    global debug
    if {$debug(tcl,samp)} {
	puts "samp.webhub.getRegisteredClients: $args"
    }
}

proc samp.webhub.getSubscribedClients {args} {
    global samphub

    global debug
    if {$debug(tcl,samp)} {
	puts "samp.webhub.getSubscribedClients: $args"
    }
}

proc samp.webhub.notify {args} {
    global samphub

    global debug
    if {$debug(tcl,samp)} {
	puts "samp.wrbhub.notify: $args"
    }
}

proc samp.webhub.notifyAll {args} {
    global samphub

    global debug
    if {$debug(tcl,samp)} {
	puts "samp.webhub.notifyAll: $args"
    }
}

proc samp.webhub.call {args} {
    global samphub
    
    global debug
    if {$debug(tcl,samp)} {
	puts "samp.webhub.call: $args"
    }
}

proc samp.webhub.callAll {args} {
    global samphub
    
    global debug
    if {$debug(tcl,samp)} {
	puts "samp.webhub.callAll: $args"
    }
}

proc samp.webhub.callAndWait {args} {
    global samphub
    
    global debug
    if {$debug(tcl,samp)} {
	puts "samp.webhub.callAndWait: $args"
    }
}

proc samp.webhub.reply {args} {
    global samphub
    
    global debug
    if {$debug(tcl,samp)} {
	puts "samp.webhub.reply: $args"
    }
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
# samp.webhub.relay
