#  Copyright (C) 1999-2023
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc SAMPHubDef {} {
    global isamphub

    set isamphub(top) .samphub
    set isamphub(mb) .samphubmb
}

proc SAMPHubStart {verbose} {
    global samp
    global samphub
    global debug

    # are we connected?
    if {[info exists samp]} {
	if {$verbose} {
	    Error "SAMPHub: [msgcat::mc {already connected}]"
	}
	return
    }

    # can we find a hub?
    # note: this will fill out a 'samp' array, delete later

    set samphub(debug) $debug(tcl,samp)
    set samp(debug) $debug(tcl,samp)
    if {[SAMPParseHub]} {
	# ok, found one, is it alive?
	if {[SAMPHubSend {samp.hub.ping} $samp(url) {} rr]} {
	    # yes, its alive
	    if {$verbose} {
		Error "SAMPHub: [msgcat::mc {found existing hub}]"
	    }
	    catch {unset samp}
	    catch {unset samphub}
	    return
	} else {
	    # its dead, try to delete
	    catch {file delete -force $samp(fn)}
	}
    }
    
    # ok, we are on our own
    catch {unset samp}
    catch {unset samphub}
    
    # basics
    set samphub(verbose) $verbose
    set samphub(debug) $debug(tcl,samp)
    set samphub(fn) [file join [GetEnvHome] {.samp}]

    set samphub(client,seq) 0
    set samphub(client,secret) {}
    set samphub(cache,images) 1
    set samphub(callAndWait) {}

    set samphub(secret) [SAMPHubGenerateKey]
    set samphub(timestamp) "[clock format [clock seconds] -format {%a %b %d %H:%M:%S %Z %Y}]"

    set samphub(web,sock) {}
    set samphub(web,port) 0
    set samphub(web,allowReverseCallbacks) 0

    # Init
    SAMPHubStartConnect
    
    # Write profile
    SAMPHubStartProfile

    # Register Hub
    SAMPHubStartRegister

    if {$samphub(debug)} {
	puts "SAMPHubStart: $samphub(secret) $samphub($samphub(secret),id)"
    }

    SAMPHubDialogListAdd $samphub(secret)
    SAMPHubDialogUpdate
    UpdateFileMenu
}

proc SAMPHubStartConnect {} {
    global samphub
    global pds9

    if {[catch {set samphub(sock) [xmlrpcServe 0]}]} {
	Error "SAMPHub: [msgcat::mc {unable to open hub}]"
	catch {unset samphub}
	return
    }
    set samphub(port) [lindex [fconfigure $samphub(sock) -sockname] 2]

    if {$pds9(samp,webhub)} {
	if {[catch {set samphub(web,sock) [xmlrpcServe 21012]}]} {
	    Error "SAMPHub: [msgcat::mc {unable to open web hub}]"
	} else {
	    set samphub(web,port) [lindex [fconfigure $samphub(web,sock) -sockname] 2]
	}
    }
}

proc SAMPHubStartProfile {} {
    global samphub

    if {[catch {set ch [open $samphub(fn) w 0600]}]} {
	if {$samphub(verbose)} {
	    Error "SAMPHub: [msgcat::mc {unable to create hub file}]"
	}
	catch {unset samphub}
	return
    }

    puts $ch "# SAMP Standard Profile lockfile written $samphub(timestamp)"
    puts $ch "# Note contact URL hostname may be configured using jsamp.localhost property"

    puts $ch "samp.secret=$samphub(secret)"
    puts $ch "samp.hub.xmlrpc.url=http://127.0.0.1:$samphub(port)/xmlrpc"
    puts $ch "samp.profile.version=1.3"
    puts $ch "profile.start.date=$samphub(timestamp)"

    close $ch
}

proc SAMPHubStartRegister {} {
    global samphub

    lappend samphub(client,secret) $samphub(secret)
    set samphub($samphub(secret),id) {hub}
    set samphub($samphub(secret),url) {}
    set samphub($samphub(secret),subscriptions) {{samp.hub.ping {}}}
    set samphub($samphub(secret),metadata) [list \
						[list samp.name "Hub"] \
						[list samp.description.text "SAOImageDS9 Internal Hub"] \
						[list samp.icon.url "http://ds9.si.edu/bandw.png"] \
						[list author.mail "ds9help@cfa.harvard.edu"] \
						[list author.name {William Joye}] \
					       ]
}

proc SAMPHubStop {} {
    global samphub

    # hub running?
    if {![info exists samphub]} {
	if {$samphub(verbose)} {
	    Error "SAMPHub: [msgcat::mc {Hub not running}]"
	}
	return
    }

    # shutdown all clients
    set mtype {samp.hub.event.shutdown}

    set map1(samp.mtype) "string $mtype"
    set map1(samp.params) [list struct {}]
    set m1 [list2rpcMember [array get map1]]

    foreach cc $samphub(client,secret) {
	# ignore hub
	if {$cc == $samphub(secret)} {
	    continue
	}

	# are we subscribed
	if {![SAMPHubFindSubscription $cc $mtype]} {
	    continue
	}

	# only standard clients
	if {$samphub($cc,web)} {
	    continue
	}

	set param1 [list param [list value [list string $cc]]]
	set param2 [list param [list value [list string $samphub($samphub(secret),id)]]]
	set param3 [list param [list value [list struct $m1]]]
	set params [list $param1 $param2 $param3]

	# some clients insist on sending samp.hub.unregister
	set samphub(remove) $cc
	SAMPHubSend {samp.client.receiveNotification} \
	    $samphub($cc,url) $params rr
	unset samphub(remove)
	SAMPHubDialogSentMsg "$mtype\t$samphub($cc,id)\t$rr"
	SAMPHubRemove $cc
    }

    # remove hub
    SAMPHubDialogListRemove $samphub(secret)

    catch {file delete -force $samphub(fn)}

    # close the server socket if still up
    catch {close $samphub(web,sock)}
    catch {close $samphub(sock)}
    catch {unset samphub}

    SAMPHubDialogUpdate
    UpdateFileMenu
}

proc SAMPHubGenerateKey {} {
    return [binary encode hex [binary format f* [list [expr rand()] [expr rand()]]]]
}

proc SAMPHubValidSecret {secret} {
    global samphub
    
    if {![info exists samphub($secret,id)]} {
	if {$samphub(debug)} {
	    puts "SAMPHub: bad private-key $secret"
	}
	return 0
    }
    return 1
}

proc SAMPHubGenerateCB {mtype params} {
    foreach param $params {
	#	append rr [xmlrpc::marshall $param]
    }
    return [list $mtype $rr]
}

proc SAMPHubFindSecret {id} {
    global samphub
    
    foreach cc $samphub(client,secret) {
	if {$id == $samphub($cc,id)} {
	    return $cc
	}
    }
    return -code error
}

proc SAMPHubFindSubscription {cc mtype} {
    global samphub

    foreach sub $samphub($cc,subscriptions) {
	foreach {mm attr} $sub {
	    if {$mm == $mtype} {
		return 1
	    }
	}
    }
    return 0
}

proc SAMPHubDisconnect {secret} {
    global samphub

    # ignore hub
    if {$secret == $samphub(secret)} {
	return
    }

    set mtype {samp.hub.disconnect}

    # are we subscribed
    if {![SAMPHubFindSubscription $secret $mtype]} {
	SAMPHubRemove $secret
	return
    }

    # only standard clients
    if {$samphub($secret,web)} {
	SAMPHubRemove $secret
	return
    }

    set map2(reason) {string disconnect}
    set m2 [list2rpcMember [array get map2]]
    
    set map1(samp.mtype) "string $mtype"
    set map1(samp.params) [list struct $m2]
    set m1 [list2rpcMember [array get map1]]

    set param1 [list param [list value [list string $secret]]]
    set param2 [list param [list value [list string $samphub($samphub(secret),id)]]]
    set param3 [list param [list value [list struct $m1]]]
    set params [list $param1 $param2 $param3]

    # some clients insist on sending samp.hub.unregister
    set samphub(remove) $secret
    SAMPHubSend {samp.client.receiveNotification} \
	$samphub($secret,url) $params rr
    unset samphub(remove)
    SAMPHubDialogSentMsg "$mtype\t$samphub($secret,id)\t$rr"

    # update other clients
    # notify others before removing
    set mtype {samp.hub.event.unregister}

    set map2(id) "string $samphub($secret,id)"
    set m2 [list2rpcMember [array get map2]]

    set map1(samp.mtype) "string $mtype"
    set map1(samp.params) [list struct $m2]
    set m1 [list2rpcMember [array get map1]]

    foreach cc $samphub(client,secret) {
	# ignore hub
	if {$cc == $samphub(secret)} {
	    continue
	}

	# don't send to sender
	if {$cc == $secret} {
	    continue
	}

	# are we subscribed
	if {![SAMPHubFindSubscription $cc $mtype]} {
	    continue
	}

	set param1 [list param [list value [list string $cc]]]
	set param2 [list param [list value [list string $samphub($samphub(secret),id)]]]
	set param3 [list param [list value [list struct $m1]]]
	set params [list $param1 $param2 $param3]

	if {$samphub($cc,web)} {
	    if {$samphub(web,allowReverseCallbacks)} {
		lappend samphub($cc,web,msgs) [SAMPHubGenerateCB $mtype $params]
	    }
	} else {
	    SAMPHubSend {samp.client.receiveNotification} \
		$samphub($cc,url) $params rr
	    SAMPHubDialogSentMsg "$mtype\t$samphub($cc,id)\t$rr"
	}
    }

    SAMPHubRemove $secret
}

proc SAMPHubRemove {secret} {
    global samphub
    
    if {$samphub(debug)} {
	puts stderr "SAMPHubRemove: $secret"
    }

    # should not happen
    if {$secret == $samphub(secret)} {
	return
    }

    SAMPHubDialogListRemove $secret
    
    set id [lsearch $samphub(client,secret) $secret]
    set samphub(client,secret) [lreplace $samphub(client,secret) $id $id]

    unset samphub($secret,id)
    unset samphub($secret,url)
    unset samphub($secret,subscriptions)
    unset samphub($secret,metadata)
}

proc SAMPHubRegister {rpc web} {
    global samphub

    rpcParams2List [lindex $rpc 0] args
    
    if {$samphub(secret) != $args} {
	return -code error
    }

    incr samphub(client,seq)
    set secret [SAMPHubGenerateKey]
    set id "c${samphub(client,seq)}"

    lappend samphub(client,secret) $secret

    set samphub($secret,id) $id
    set samphub($secret,url) {}
    set samphub($secret,subscriptions) {}
    set samphub($secret,metadata) {}
    set samphub($secret,web) $web
    set samphub($secret,web,msgs) {}

    SAMPHubDialogRecvdMsg "samp.hub.register\t$samphub($secret,id)"
    SAMPHubDialogListAdd $secret

    # update other clients
    set mtype {samp.hub.event.register}

    set map2(id) "string $samphub($secret,id)"
    set m2 [list2rpcMember [array get map2]]

    set map(samp.mtype) "string $mtype"
    set map(samp.params) [list struct $m2]
    set m1 [list2rpcMember [array get map1]]

    foreach cc $samphub(client,secret) {
	# ignore hub
	if {$cc == $samphub(secret)} {
	    continue
	}

	# don't send to sender
	if {$cc == $secret} {
	    continue
	}

	# are we subscribed
	if {![SAMPHubFindSubscription $cc $mtype]} {
	    continue
	}

	set param1 [list param [list value [list string $cc]]]
	set param2 [list param [list value [list string $samphub($samphub(secret),id)]]]
	set param3 [list param [list value [list struct $m1]]]
	set params [list $param1 $param2 $param3]

	if {$samphub($cc,web)} {
	    if {$samphub(web,allowReverseCallbacks)} {
		lappend samphub($cc,web,msgs) [SAMPHubGenerateCB $mtype $params]
	    }
	} else {
	    puts cc
	    SAMPHubSend {samp.client.receiveNotification} \
		$samphub($cc,url) $params rr
	    SAMPHubDialogSentMsg "$mtype\t$samphub($cc,id)\t$rr"
	}
    }

    set map3(samp.hub-id) {string hub}
    set map3(samp.self-id) "string $id"
    set map3(samp.private-key) "string $secret"
    set m3 [list2rpcMember [array get map3]]

    return [list [list param [list value [list struct $m3]]]]
}

proc SAMPHubSend {method url params resultVar} {
    upvar $resultVar result
    global samphub

    if {$samphub(debug)} {
	puts stderr "SAMPHubSend: $method $url $params"
    }

    # figure out xmlrpc-?
    set rpc {xmlrpc}
    if {[ParseURL $url r]} {
	if {$r(path) != {}} {
	    set rpc [string range $r(path) 1 end]
	}
    }

    if {[catch {set result [xmlrpcCall $url $rpc $method $params]}]} {
	if {$samphub(debug)} {
	    puts stderr "SAMPHub: bad xmlrpcCall"
	}
	# Error
	return 0
    }

    if {$samphub(debug)} {
	puts stderr "SAMPHubSend Result: $result"
    }

    return 1
}

proc SAMPHubNotify {secret cc mtype} {
    # runs in top level
    global samphub
    global samphubmap
    global samphubmap2

    set param1 [list "string $cc"]
    set param2 [list "string $samphub($secret,id)"]
    set param3 [list "struct samphubmap"]
    set params "$param1 $param2 $param3"

    if {$samphub($cc,web)} {
	if {$samphub(web,allowReverseCallbacks)} {
	    lappend samphub($cc,web,msgs) [SAMPHubGenerateCB $mtype $params]
	}
    } else {
	SAMPHubSend samp.client.receiveNotification $samphub($cc,url) $params rr
	SAMPHubDialogSentMsg "$mtype\t$samphub($cc,id)\t$rr"
    }

    # maybe empty
    catch {unset samphubmap}
    catch {unset samphubmap2}
}

proc SAMPHubCall {secret cc msgid mtype} {
    global samphub
    global samphubmap
    global samphubmap2

    set param1 [list "string $cc"]
    set param2 [list "string $samphub($secret,id)"]
    set param3 [list "string $msgid"]
    set param4 [list "struct samphubmap"]
    set params "$param1 $param2 $param3 $param4"

    if {$samphub($cc,web)} {
	if {$samphub(web,allowReverseCallbacks)} {
	    lappend samphub($cc,web,msgs) [SAMPHubGenerateCB $mtype $params]
	}
    } else {
	SAMPHubSend samp.client.receiveCall $samphub($cc,url) $params rr
	SAMPHubDialogSentMsg "samp.client.receiveCall\t$samphub($cc,id)\t$rr"
    }

    # maybe empty
    catch {unset samphubmap}
    catch {unset samphubmap2}
}

proc SAMPHubReply {cc id msgtag} {
    global samphub
    global samphubmap
    global samphubmap2

    set param1 [list "string $cc"]
    set param2 [list "string $id"]
    set param3 [list "string $msgtag"]
    set param4 [list "struct samphubmap"]
    set params "$param1 $param2 $param3 $param4"	

    if {$samphub($cc,web)} {
	if {$samphub(web,allowReverseCallbacks)} {
	    lappend samphub($cc,web,msgs) [SAMPHubGenerateCB samp.client.receiveResponse $params]
	}
    } else {
	SAMPHubSend samp.client.receiveResponse $samphub($cc,url) $params rr
	SAMPHubDialogSentMsg "samp.client.receiveResponse\t$samphub($cc,id)\t$rr"
    }

    # maybe empty
    catch {unset samphubmap}
    catch {unset samphubmap2}
}

# procs

proc samp.hub.setXmlrpcCallback {args} {
    global samphub

    if {$samphub(debug)} {
	puts "samp.hub.setXmlrpcCallback: $args"
    }

    set secret [lindex $args 0]
    set map [lindex $args 1]

    if {![SAMPHubValidSecret $secret]} {
	return -code error
    }

    SAMPHubDialogRecvdMsg "samp.hub.setXmlrpcCallback\t$samphub($secret,id)"

    set samphub($secret,url) $map

    return {string OK}
}

proc samp.hub.ping {} {
    if {$samphub(debug)} {
	puts "samp.hub.ping"
    }

    SAMPHubDialogRecvdMsg "samp.hub.ping"

    return {string OK}
}

proc samp.hub.register {args} {
    global samphub

    if {$samphub(debug)} {
	puts "samp.hub.register: $args"
    }

    return [SAMPHubRegister $args 0]
}

proc samp.hub.unregister {args} {
    global samphub

    if {$samphub(debug)} {
	puts "samp.hub.unregister: $args"
    }

    set secret [lindex $args 0]
    set map [lindex $args 1]

    # some clients insist on sending samp.hub.unregister
    if {[info exists samphub(remove)]} {
	if {$samphub(remove) == $secret} {
	    return {string OK}
	}
    }

    if {![SAMPHubValidSecret $secret]} {
	return -code error
    }
    
    SAMPHubDialogRecvdMsg "samp.hub.unregister\t$samphub($secret,id)"

    # update other clients
    # notify others before removing
    set mtype {samp.hub.event.unregister}
    set hubmap(samp.mtype) "string $mtype"
    set hubmap(samp.params) {struct hubmap2}
    set hubmap2(id) "string $samphub($secret,id)"

    foreach cc $samphub(client,secret) {
	# ignore hub
	if {$cc == $samphub(secret)} {
	    continue
	}

	# don't send to sender
	if {$cc == $secret} {
	    continue
	}

	# are we subscribed
	if {![SAMPHubFindSubscription $cc $mtype]} {
	    continue
	}

	set param1 [list "string $cc"]
	set param2 [list "string $samphub($samphub(secret),id)"]
	set param3 [list "struct hubmap"]
	set params "$param1 $param2 $param3"

	if {$samphub($cc,web)} {
	    if {$samphub(web,allowReverseCallbacks)} {
		lappend samphub($cc,web,msgs) [SAMPHubGenerateCB $mtype $params]
	    }
	} else {
	    SAMPHubSend {samp.client.receiveNotification} \
		$samphub($cc,url) $params rr
	    SAMPHubDialogSentMsg "$mtype\t$samphub($cc,id)\t$rr"
	}
    }

    # now remove
    SAMPHubRemove $secret

    return {string OK}
}

proc samp.hub.declareMetadata {args} {
    global samphub
    
    if {$samphub(debug)} {
	puts "samp.hub.declareMetadata: $args"
    }

    set secret [lindex $args 0]
    set map [lindex $args 1]

    if {![SAMPHubValidSecret $secret]} {
	return -code error
    }
    
    SAMPHubDialogRecvdMsg "samp.hub.declareMetadata\t$samphub($secret,id)"

    foreach mm $map {
	foreach {key val} $mm {
	    lappend samphub($secret,metadata) [list $key [XMLUnQuote $val]]
#	    lappend samphub($secret,metadata) [list $key $val]
	}
    }
    
    SAMPHubDialogMetaUpdate $secret
    SAMPHubDialogListUpdate

    # update other clients
    set mtype {samp.hub.event.metadata}
    set hubmap(samp.mtype) "string $mtype"
    set hubmap(samp.params) {struct hubmap2}
    set hubmap2(id) "string $samphub($secret,id)"
    set hubmap2(metadata) {struct hubmap3}
    foreach mm $samphub($secret,metadata) {
	foreach {key val} $mm {
	    set hubmap3($key) "string \"[XMLQuote $val]\""
	}
    }

    foreach cc $samphub(client,secret) {
	# ignore hub
	if {$cc == $samphub(secret)} {
	    continue
	}

	# don't send to sender
	if {$cc == $secret} {
	    continue
	}

	# are we subscribed
	if {![SAMPHubFindSubscription $cc $mtype]} {
	    continue
	}

	set param1 [list "string $cc"]
	set param2 [list "string $samphub($samphub(secret),id)"]
	set param3 [list "struct hubmap"]
	set params "$param1 $param2 $param3"

	if {$samphub($cc,web)} {
	    if {$samphub(web,allowReverseCallbacks)} {
		lappend samphub($cc,web,msgs) [SAMPHubGenerateCB $mtype $params]
	    }
	} else {
	    SAMPHubSend {samp.client.receiveNotification} \
		$samphub($cc,url) $params rr
	    SAMPHubDialogSentMsg "$mtype\t$samphub($cc,id)\t$rr"
	}
    }

    return {string OK}
}

proc samp.hub.getMetadata {args} {
    global samphub
    global samphubmap

    if {$samphub(debug)} {
	puts "samp.hub.getMetadata: $args"
    }

    set secret [lindex $args 0]
    set id [lindex $args 1]

    if {![SAMPHubValidSecret $secret]} {
	return -code error
    }

    SAMPHubDialogRecvdMsg "samp.hub.getMetadata\t$samphub($secret,id)"

    catch {unset samphubmap}

    foreach cc $samphub(client,secret) {
	if {$samphub($cc,id) == $id} {
	    foreach mm $samphub($cc,metadata) {
		foreach {key val} $mm {
		    set samphubmap($key) "string \"[XMLQuote $val]\""
		}
	    }
	    return "struct samphubmap"
	}
    }

    return -code error
}

proc samp.hub.declareSubscriptions {args} {
    global samphub
    global samphub2
    global samphub3

    if {$samphub(debug)} {
	puts "samp.hub.declareSubscriptions: $args"
    }

    set secret [lindex $args 0]
    set map [lindex $args 1]
    
    if {![SAMPHubValidSecret $secret]} {
	return -code error
    }

    SAMPHubDialogRecvdMsg "samp.hub.declareSubscriptions\t$samphub($secret,id)"

    foreach mm $map {
	foreach {ss rr} $mm {
	    lappend samphub($secret,subscriptions) [list $ss $rr]
	}
    }

    # make it pretty
    set samphub($secret,subscriptions) [lsort $samphub($secret,subscriptions)]

    SAMPHubDialogListUpdate

    # update other clients
    catch {unset samphubmap}
    catch {unset samphubmap2}
    catch {unset samphubmap3}

    set mtype {samp.hub.event.subscriptions}
    set samphubmap(samp.mtype) "string $mtype"
    set samphubmap(samp.params) {struct samphubmap2}
    set samphubmap2(id) "string $samphub($secret,id)"
    set samphubmap2(subscriptions) {struct samphubmap3}

    set cnt 3
    foreach sub $samphub($secret,subscriptions) {
	incr cnt
	foreach {mm attrs} $sub {
	    set varname samphubmap${cnt}
	    global $varname
	    set samphubmap3($mm) "struct $varname"

	    catch {unset $varname}
	    upvar #0 $varname var
	    foreach attr $attrs {
		foreach {key val} $attr {
		    set var($key) "string $val"
		}
	    }
	}
    }

    foreach cc $samphub(client,secret) {
	# ignore hub
	if {$cc == $samphub(secret)} {
	    continue
	}

	# don't send to sender
	if {$cc == $secret} {
	    continue
	}

	# are we subscribed
	if {![SAMPHubFindSubscription $cc $mtype]} {
	    continue
	}

	set param1 [list "string $cc"]
	set param2 [list "string $samphub($samphub(secret),id)"]
	set param3 [list "struct samphubmap"]
	set params "$param1 $param2 $param3"

	if {$samphub($cc,web)} {
	    if {$samphub(web,allowReverseCallbacks)} {
		lappend samphub($cc,web,msgs) [SAMPHubGenerateCB $mtype $params]
	    }
	} else {
	    SAMPHubSend {samp.client.receiveNotification} \
		$samphub($cc,url) $params rr
	    SAMPHubDialogSentMsg "$mtype\t$samphub($cc,id)\t$rr"
	}
    }

    return {string OK}
}

proc samp.hub.getSubscriptions {args} {
    global samphub
    global samphubmap

    if {$samphub(debug)} {
	puts "samp.hub.getSubscriptions: $args"
    }

    set secret [lindex $args 0]
    set id [lindex $args 1]

    if {![SAMPHubValidSecret $secret]} {
	return -code error
    }

    SAMPHubDialogRecvdMsg "samp.hub.getSubscriptions\t$samphub($secret,id)"

    catch {unset samphubmap}

    foreach cc $samphub(client,secret) {
	if {$samphub($cc,id) == $id} {

	    set cnt 1
	    foreach sub $samphub($cc,subscriptions) {
		incr cnt
		foreach {mm attrs} $sub {
		    set varname samphubmap${cnt}
		    global $varname
		    set samphubmap($mm) "struct $varname"

		    catch {unset $varname}
		    upvar #0 $varname var
		    foreach attr $attrs {
			foreach {key val} $attr {
			    set var($key) "string $val"
			}
		    }
		}
	    }
	    return "struct samphubmap"
	}
    }

    return -code error
}

proc samp.hub.getRegisteredClients {args} {
    global samphub

    if {$samphub(debug)} {
	puts "samp.hub.getRegisteredClients: $args"
    }

    set secret [lindex $args 0]
    set map [lindex $args 1]

    if {![SAMPHubValidSecret $secret]} {
	return -code error
    }

    SAMPHubDialogRecvdMsg "samp.hub.getRegisteredClients\t$samphub($secret,id)"

    set ll {}
    foreach cc $samphub(client,secret) {
	if {$cc == $secret} {
	    continue
	}

	lappend ll "string $samphub($cc,id)"
    }

    return "array [list $ll]"
}

proc samp.hub.getSubscribedClients {args} {
    global samphub
    global samphubmap
    global samphubmap2

    if {$samphub(debug)} {
	puts "samp.hub.getSubscribedClients: $args"
    }

    set secret [lindex $args 0]
    set map [lindex $args 1]

    if {![SAMPHubValidSecret $secret]} {
	return -code error
    }

    SAMPHubDialogRecvdMsg "samp.hub.getSubscribedClients\t$samphub($secret,id)"

    set ll {}
    foreach cc $samphub(client,secret) {
	if {$cc == $secret} {
	    continue
	}

	if {[SAMPHubFindSubscription $cc $map]} {
	    lappend ll $samphub($cc,id)
	    break
	}
    }

    catch {unset samphubmap}
    catch {unset samphubmap2}

    foreach cc $ll {
	set samphubmap($cc) "struct samphubmap2"
    }

    return "struct samphubmap"
}

proc samp.hub.notify {args} {
    global samphub
    global samphubmap
    global samphubmap2

    if {$samphub(debug)} {
	puts "samp.hub.notify: $args"
    }

    set secret [lindex $args 0]
    set id [lindex $args 1]
    set map [lindex $args 2]

    if {![SAMPHubValidSecret $secret]} {
	return -code error
    }

    SAMPHubDialogRecvdMsg "samp.hub.notify\t$samphub($secret,id)"

    set mtype {}
    set params {}
    foreach mm $map {
	foreach {key val} $mm {
	    switch -- $key {
		samp.mtype {set mtype $val}
		samp.params {set params $val}
	    }
	}
    }

    catch {unset samphubmap}
    catch {unset samphubmap2}

    set samphubmap(samp.mtype) "string $mtype"
    set samphubmap(samp.params) "struct samphubmap2"
    set samphubmap2(id) "string $samphub($secret,id)"
    foreach mm $params {
	foreach {key val} $mm {
	    set samphubmap2($key) "string \{$val\}"
	}
    }

    if {[catch {set cc [SAMPHubFindSecret $id]}]} {
	return -code error
    }

    # ignore hub
    if {$cc == $samphub(secret)} {
	return -code error
    }

    # don't send to sender
    if {$cc == $secret} {
	return -code error
    }

    # are we subscribed
    if {![SAMPHubFindSubscription $cc $mtype]} {
	return -code error
    }

    after 0 "SAMPHubNotify $secret $cc $mtype"
    return {string OK}
}

proc samp.hub.notifyAll {args} {
    global samphub
    global samphubmap
    global samphubmap2

    if {$samphub(debug)} {
	puts "samp.hub.notifyAll: $args"
    }

    set secret [lindex $args 0]
    set map [lindex $args 1]

    if {![SAMPHubValidSecret $secret]} {
	return -code error
    }

    SAMPHubDialogRecvdMsg "samp.hub.notifyAll\t$samphub($secret,id)"

    set mtype {}
    set params {}
    foreach mm $map {
	foreach {key val} $mm {
	    switch -- $key {
		samp.mtype {set mtype $val}
		samp.params {set params $val}
	    }
	}
    }

    catch {unset samphubmap}
    catch {unset samphubmap2}

    set samphubmap(samp.mtype) "string $mtype"
    set samphubmap(samp.params) "struct samphubmap2"
    foreach mm $params {
	foreach {key val} $mm {
	    set samphubmap2($key) "string \{$val\}"
	}
    }

    set ll {}
    foreach cc $samphub(client,secret) {
	# ignore hub
	if {$cc == $samphub(secret)} {
	    continue
	}

	# don't send to sender
	if {$cc == $secret} {
	    continue
	}

	# are we subscribed
	if {![SAMPHubFindSubscription $cc $mtype]} {
	    continue
	}

	after 0 "SAMPHubNotify $secret $cc $mtype"
	lappend ll "string $samphub($cc,id)"
    }

    return "array [list $ll]"
}

proc samp.hub.call {args} {
    global samphub
    global samphubmap
    global samphubmap2
    
    if {$samphub(debug)} {
	puts "samp.hub.call: $args"
    }

    set secret [lindex $args 0]
    set id [lindex $args 1]
    set msgtag [lindex $args 2]
    set map [lindex $args 3]

    if {![SAMPHubValidSecret $secret]} {
	return -code error
    }

    SAMPHubDialogRecvdMsg "samp.hub.call\t$samphub($secret,id)"

    set mtype {}
    set params {}
    foreach mm $map {
	foreach {key val} $mm {
	    switch -- $key {
		samp.mtype {set mtype $val}
		samp.params {set params $val}
	    }
	}
    }

    catch {unset samphubmap}
    catch {unset samphubmap2}

    set samphubmap(samp.mtype) "string $mtype"
    set samphubmap(samp.params) "struct samphubmap2"
    foreach mm $params {
	foreach {key val} $mm {
	    set samphubmap2($key) "string \{$val\}"
	}
    }

    set msgid "$msgtag-$samphub($secret,id)"

    if {[catch {set cc [SAMPHubFindSecret $id]}]} {
	return -code error
    }

    # ignore hub
    if {$cc == $samphub(secret)} {
	return -code error
    }

    # don't send to sender
    if {$cc == $secret} {
	return -code error
    }

    # are we subscribed
    if {![SAMPHubFindSubscription $cc $mtype]} {
	return -code error
    }

    after 0 "SAMPHubCall $secret $cc $msgid $mtype"

    return "string $msgid"
}

proc samp.hub.callAll {args} {
    global samphub
    global samphubmap
    global samphubmap2
    global samphubmap3

    if {$samphub(debug)} {
	puts "samp.hub.callAll: $args"
    }

    set secret [lindex $args 0]
    set msgtag [lindex $args 1]
    set map [lindex $args 2]

    if {![SAMPHubValidSecret $secret]} {
	return -code error
    }

    SAMPHubDialogRecvdMsg "samp.hub.callAll\t$samphub($secret,id)"

    set mtype {}
    set params {}
    foreach mm $map {
	foreach {key val} $mm {
	    switch -- $key {
		samp.mtype {set mtype $val}
		samp.params {set params $val}
	    }
	}
    }

    catch {unset samphubmap}
    catch {unset samphubmap2}
    catch {unset samphubmap3}

    set samphubmap(samp.mtype) "string $mtype"
    set samphubmap(samp.params) "struct samphubmap2"
    foreach mm $params {
	foreach {key val} $mm {
	    set samphubmap2($key) "string \{$val\}"
	}
    }

    set msgid "$msgtag-$samphub($secret,id)"

    foreach cc $samphub(client,secret) {
	# ignore hub
	if {$cc == $samphub(secret)} {
	    continue
	}

	# don't send to sender
	if {$cc == $secret} {
	    continue
	}

	# are we subscribed
	if {![SAMPHubFindSubscription $cc $mtype]} {
	    continue
	}

	after 0 "SAMPHubCall $secret $cc $msgid $mtype"

	set id $samphub($cc,id)
 	set samphubmap3($id) "string $msgid"
    }

    return "struct samphubmap3"
}

proc samp.hub.callAndWait {args} {
    global samphub
    global samphubmap
    global samphubmap2
    
    if {$samphub(debug)} {
	puts "samp.hub.callAndWait: $args"
    }

    set secret [lindex $args 0]
    set id [lindex $args 1]
    set map [lindex $args 2]
    set timeout [lindex $args 3]

    if {![SAMPHubValidSecret $secret]} {
	return -code error
    }

    SAMPHubDialogRecvdMsg "samp.hub.callAndWait\t$samphub($secret,id)"

    set mtype {}
    set params {}
    foreach mm $map {
	foreach {key val} $mm {
	    switch -- $key {
		samp.mtype {set mtype $val}
		samp.params {set params $val}
	    }
	}
    }

    catch {unset samphubmap}
    catch {unset samphubmap2}

    set samphubmap(samp.mtype) "string $mtype"
    set samphubmap(samp.params) "struct samphubmap2"
    foreach mm $params {
	foreach {key val} $mm {
	    set samphubmap2($key) "string \{$val\}"
	}
    }

    set msgid "bar-$samphub($secret,id)"

    if {[catch {set cc [SAMPHubFindSecret $id]}]} {
	return -code error
    }

    # ignore hub
    if {$cc == $samphub(secret)} {
	return -code error
    }

    # don't send to sender
    if {$cc == $secret} {
	return -code error
    }

    # are we subscribed
    if {![SAMPHubFindSubscription $cc $mtype]} {
	return -code error
    }

    after 0 "SAMPHubCall $secret $cc $msgid $mtype"

    vwait samphub(callAndWait)
    set samphub(callAndWait) {}

    return "struct samphubmap"
}

proc samp.hub.reply {args} {
    global samphub
    global samphubmap
    global samphubmap2
    
    if {$samphub(debug)} {
	puts "samp.hub.reply: $args"
    }

    set secret [lindex $args 0]
    set msgid [lindex $args 1]
    set map [lindex $args 2]

    if {![SAMPHubValidSecret $secret]} {
	return -code error
    }

    SAMPHubDialogRecvdMsg "samp.hub.reply\t$samphub($secret,id)"

    set msgtag [lindex [split $msgid "-"] 0]
    set id [lindex [split $msgid "-"] 1]

    set status {}
    set result {}
    foreach mm $map {
	foreach {key val} $mm {
	    switch -- $key {
		samp.status {set status $val}
		samp.result {set result $val}
	    }
	}
    }

    catch {unset samphubmap}
    catch {unset samphubmap2}

    set samphubmap(samp.status) "string $status"
    set samphubmap(samp.result) "struct samphubmap2"
    foreach mm $result {
	foreach {key val} $mm {
	    set samphubmap2($key) "string \{$val\}"
	}
    }

    if {[catch {set cc [SAMPHubFindSecret $id]}]} {
	return -code error
    }

    set src $samphub($secret,id)

    switch $msgtag {
	bar {
	    # callAndWait
	    set samphub(callAndWait) 1
	}
	default {
	    # call
	    after 0 "SAMPHubReply $cc $src $msgtag"
	}
    }

    return {string OK}
}

# *** Hub ***

# client to hub
# samp.hub.setXmlrpcCallback
# samp.hub.ping

# samp.hub.register
# samp.hub.unregister
# samp.hub.declareMetadata
# samp.hub.getMetadata $id
# samp.hub.declareSubscriptions
# samp.hub.getSubscriptions $id
# samp.hub.getRegisteredClients
# samp.hub.getSubscribedClients(mtype)
# samp.hub.notify $id
# samp.hub.notifyAll
# samp.hub.call $id
# samp.hub.callAll
# samp.hub.callAndWait $id
# samp.hub.reply

# hub to all clients with change of state
# samp.hub.event.shutdown
# samp.hub.event.register $id
# samp.hub.event.unregister $id
# samp.hub.event.metadata $id
# samp.hub.event.subscriptions $id

# hub to a client
# samp.hub.disconnect (force disconnect, no response expected)

# ***Client***

# samp.client.receiveNotification
# samp.client.receiveCall
# samp.client.receiveResponse

# client recvd and respond to hub
# samp.app.ping
# samp.app.status
# samp.msg.progress

# client sends to hub
# samp.app.event.shutdown (I'm shutting down)

# Application MTypes Subscriptions (send and recvd)
# image.load.fits
# table.load.fits
# table.load.votable
# table.highlight.row
# table.select.rowList
# coord.pointAt.sky

# Application MTypes Subscriptions (recvd)
# client.env.get
# x-samp.affiliation.name
# x-samp.affiliation.url
# x-samp.homepage.url
# x-samp.releasenotes.url
# x-samp.faq.url
# x-samp.authors
# x-samp.release.version
