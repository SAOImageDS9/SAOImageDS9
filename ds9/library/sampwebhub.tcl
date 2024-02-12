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

proc SAMPWebHubCallback {} {
    global samphub
    set ll {}
    set rr [list params [list [list param [list value [xmlrpcList2Array $ll]]]]]
    return $rr

    if {0} {
    if {$samphub(web,allowReverseCallbacks)} {
	foreach msg $samphub(web,msgs) {
	    foreach {mtype params} $msg {
		set map1(samp.mtype) "string $mtype"
		set map1(samp.params) $params
		set m1 [xmlrpcList2Member [array get map1]]

		set vv [list value [list struct $m1]]
#		puts "***vv"
#		puts $vv
		append ll $vv
	    }
	}
	set samphub(web,msgs) {}
    }

    set param1 [list param [list value [list string $cc]]]
    set param2 [list param [list value [list string $samphub($samphub(secret),id)]]]
    set param3 [list param [list value [list struct $m1]]]
    set params [list params [list $param1 $param2 $param3]]
    }
}

proc SAMPWebHubCallbackTimer {sock} {
    global samphub
    
    if {$samphub(debug)} {
	puts "SAMPWebHubCallbackTimer"
    }

    # decrease by one sec
    incr samphub(web,timeout) -1

    if {[llength $samphub(web,msgs)] > 0 || $samphub(web,timeout)<=0} {
	set rr [SAMPWebHubCallback]
	set res [xmlrpcBuildResponse $rr]

	puts -nonewline $sock $res
	flush $sock
	catch {close $sock}
    } else {
	# check
	after $samphub(timer) [list SAMPWebHubCallbackTimer $sock]
    }
}

proc samp.webhub.allowReverseCallbacks {rpc} {
    global samphub

    if {$samphub(debug)} {
	puts "samp.webhub.allowReverseCallbacks: $rpc"
    }

    xmlrpcParams2List $rpc args

    set secret [lindex $args 0]
    set allow [lindex $args 1]

    if {![SAMPHubValidSecret $secret]} {
	return -code error
    }

    set samphub(web,allowReverseCallbacks) $allow

    return [SAMPHubReturn OK]
}

proc samp.webhub.pullCallbacks {rpc} {
    global samphub
    global xmlrpc

    set sock $xmlrpc(sock)

    if {$samphub(debug)} {
	puts "samp.webhub.pullCallbacks: $rpc"
    }

    xmlrpcParams2List $rpc args

    set secret [lindex $args 0]
    set timeout [lindex $args 1]
    if {$timeout<0} {
	set timeout 0
    }

    if {![SAMPHubValidSecret $secret]} {
	return -code error
    }

    # should not happen
    if {$samphub(web,id)!=0} {
	after cancel $samphub(web,id)
	set samphub(web,id) 0
    }

    set samphub(web,timeout) $timeout

    if {$samphub(web,timeout)==0} {
	return [SAMPWebHubCallback]
    } else {
	set samphub(web,id) \
	    [after $samphub(timer) [list SAMPWebHubCallbackTimer $sock]]
	return -code error -errorcode abort
    }
}

proc samp.webhub.ping {rpc} {
    global samphub

    if {$samphub(debug)} {
	puts "samp.webhub.ping $rpc"
    }
    
    SAMPHubDialogRecvdMsg "samp.webhub.ping"

    return [SAMPHubReturn OK]
}

proc samp.webhub.register {rpc} {
    global samphub

    if {$samphub(debug)} {
	puts "samp.webhub.register: $rpc"
    }

    xmlrpcParams2List $rpc args

    set map [lindex $args 0]

    set name {}
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

    set rr [SAMPHubRegister]
    set id [lindex $rr 0]
    set secret [lindex $rr 1]

    set samphub($secret,web) true

    set map1(samp.hub-id) {string hub}
    set map1(samp.self-id) "string $id"
    set map1(samp.private-key) "string $secret"
    set map1(samp.url-translator) "string {}"
    set m1 [xmlrpcList2Member [array get map1]]

    return [list params [list [list param [list value [list struct $m1]]]]]
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
