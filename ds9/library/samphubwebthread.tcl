#  Copyright (C) 1999-2024
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide SAMPHubThread 1.0

proc samp.webhub.allowReverseCallbacks {args} {
    if {[tsv::get samphub debug]} {
	puts stderr "samp.webhub.allowReverseCallbacks: $args"
    }

    tsv::set samphub web,allowReverseCallbacks [lindex $args 1]
    return {string OK}
}

proc samp.webhub.pullCallbacks {args} {
    if {[tsv::get samphub debug]} {
	puts stderr "samp.webhub.pullCallbacks: $args"
    }

    set secret [lindex $args 0]
    set timeout [lindex $args 1]

    if {![SAMPHubValidSecret $secret]} {
	return -code error
    }

    set ll {}
    if {[tsv::get samphub web,allowReverseCallbacks]} {
	if {[llength [tsv::get samphub $secret,web,msgs]]!= 0} {
	    foreach msg [tsv::get samphub $secret,web,msgs] {
		foreach {mtype params} $msg {
		    set samphubmap(samp.methodName) "string $mtype"
		    set samphubmap(samp.params) "array [list $params]"
		    append ll [list "struct samphubmap"]
		}
	    }
	    tsv::set samphub $secret,web,msgs {}
	}
    }

    return "array [list $ll]"
}

proc samp.webhub.ping {rpc} {

    if {[tsv::get samphub debug]} {
	puts stderr "samp.webhub.ping $rpc"
    }
    
    SAMPHubDialogRecvdMsg "samp.webhub.ping $rpc"

    return [SAMPHubReturn OK]
}

proc samp.webhub.register {rpc} {

    if {[tsv::get samphub debug]} {
	puts stderr "samp.webhub.register: $rpc"
    }

    xmlrpcParams2List $rpc args

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
	return -code error
    }

    SAMPHubRegister $args 1

    global map-reg
    set map-reg(samp.url-translator) {string {}}
    return "struct map-reg"
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
