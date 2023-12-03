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
    set m1 [xmlrpcList2Member [array get map1]]

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
	set params [list params [list $param1 $param2 $param3]]

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
	    puts "SAMPHub: bad private-key $secret\n"
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
    set m2 [xmlrpcList2Member [array get map2]]
    
    set map1(samp.mtype) "string $mtype"
    set map1(samp.params) [list struct $m2]
    set m1 [xmlrpcList2Member [array get map1]]

    set param1 [list param [list value [list string $secret]]]
    set param2 [list param [list value [list string $samphub($samphub(secret),id)]]]
    set param3 [list param [list value [list struct $m1]]]
    set params [list params [list $param1 $param2 $param3]]

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
    set m2 [xmlrpcList2Member [array get map2]]

    set map1(samp.mtype) "string $mtype"
    set map1(samp.params) [list struct $m2]
    set m1 [xmlrpcList2Member [array get map1]]

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
	set params [list params [list $param1 $param2 $param3]]

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
	puts stderr "SAMPHubRemove: $secret\n"
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

proc SAMPHubRegister {args web} {
    global samphub

    if {$samphub(secret) != $args} {
	return [SAMPReturn ERROR]
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
    set m2 [xmlrpcList2Member [array get map2]]

    set map1(samp.mtype) "string $mtype"
    set map1(samp.params) [list struct $m2]
    set m1 [xmlrpcList2Member [array get map1]]

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
	set params [list params [list $param1 $param2 $param3]]

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

    set map3(samp.hub-id) {string hub}
    set map3(samp.self-id) "string $id"
    set map3(samp.private-key) "string $secret"
    set m3 [xmlrpcList2Member [array get map3]]

    return [list params [list [list param [list value [list struct $m3]]]]]
}

proc SAMPHubSend {method url params resultVar} {
    upvar $resultVar result
    global samphub

    if {$samphub(debug)} {
	puts stderr "SAMPHubSend: $method $url $params\n"
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
	puts stderr "SAMPHubSend Result: $result\n"
    }

    return 1
}

proc SAMPHubNotify {secret cc mtype mm} {
    # runs in top level
    global samphub

    set m1 [xmlrpcList2Member $mm]

    set param1 [list param [list value [list string $cc]]]
    set param2 [list param [list value [list string $samphub($samphub(secret),id)]]]
    set param3 [list struct $m1]
    set params [list params [list $param1 $param2 $param3]]

    if {$samphub($cc,web)} {
	if {$samphub(web,allowReverseCallbacks)} {
	    lappend samphub($cc,web,msgs) [SAMPHubGenerateCB $mtype $params]
	}
    } else {
	SAMPHubSend samp.client.receiveNotification $samphub($cc,url) $params rr
	SAMPHubDialogSentMsg "$mtype\t$samphub($cc,id)\t$rr"
    }
}

proc SAMPHubCall {secret cc msgid mtype mm} {
    global samphub

    set m1 [xmlrpcList2Member $mm]

    set param1 [list param [list value [list string $cc]]]
    set param2 [list param [list value [list string $samphub($samphub(secret),id)]]]
    set param3 [list param [list value [list string $msgid]]]
    set param4 [list struct $m1]
    set params [list params [list $param1 $param2 $param3 $params4]]

    if {$samphub($cc,web)} {
	if {$samphub(web,allowReverseCallbacks)} {
	    lappend samphub($cc,web,msgs) [SAMPHubGenerateCB $mtype $params]
	}
    } else {
	SAMPHubSend samp.client.receiveCall $samphub($cc,url) $params rr
	SAMPHubDialogSentMsg "samp.client.receiveCall\t$samphub($cc,id)\t$rr"
    }
}

proc SAMPHubReply {cc id msgtag mm} {
    global samphub

    set m1 [xmlrpcList2Member $mm]

    set param1 [list param [list value [list string $cc]]]
    set param2 [list param [list value [list string $id]]]
    set param3 [list param [list value [list string $msgtag]]]
    set param4 [list struct $m1]
    set params [list params [list $param1 $param2 $param3 $params4]]

    if {$samphub($cc,web)} {
	if {$samphub(web,allowReverseCallbacks)} {
	    lappend samphub($cc,web,msgs) [SAMPHubGenerateCB samp.client.receiveResponse $params]
	}
    } else {
	SAMPHubSend samp.client.receiveResponse $samphub($cc,url) $params rr
	SAMPHubDialogSentMsg "samp.client.receiveResponse\t$samphub($cc,id)\t$rr"
    }
}

# procs

proc samp.hub.setXmlrpcCallback {rpc} {
    global samphub

    if {$samphub(debug)} {
	puts "samp.hub.setXmlrpcCallback: $rpc\n"
    }

    xmlrpcParams2List $rpc args

    set secret [lindex $args 0]
    set map [lindex $args 1]

    if {![SAMPHubValidSecret $secret]} {
	return [SAMPReturn ERROR]
    }

    SAMPHubDialogRecvdMsg "samp.hub.setXmlrpcCallback\t$samphub($secret,id)"

    set samphub($secret,url) $map

    return [SAMPReturn OK]
}

proc samp.hub.ping {rpc} {
    global samphub

    if {$samphub(debug)} {
	puts "samp.hub.ping $rpc\n"
    }

    SAMPHubDialogRecvdMsg "samp.hub.ping $rpc"

    return [SAMPReturn OK]
}

proc samp.hub.register {rpc} {
    global samphub

    if {$samphub(debug)} {
	puts "samp.hub.register: $rpc"
    }

    xmlrpcParams2List $rpc args

    return [SAMPHubRegister $args 0]
}

proc samp.hub.unregister {rpc} {
    global samphub

    if {$samphub(debug)} {
	puts "samp.hub.unregister: $rpc\n"
    }

    xmlrpcParams2List $rpc args

    set secret [lindex $args 0]
    set map [lindex $args 1]

    # some clients insist on sending samp.hub.unregister
    if {[info exists samphub(remove)]} {
	if {$samphub(remove) == $secret} {
	    return [SAMPReturn OK]
	}
    }

    if {![SAMPHubValidSecret $secret]} {
	return [SAMPReturn ERROR]
    }
    
    SAMPHubDialogRecvdMsg "samp.hub.unregister\t$samphub($secret,id)"

    # update other clients
    # notify others before removing
    set mtype {samp.hub.event.unregister}

    set map2(id) "string $samphub($secret,id)"
    set m2 [xmlrpcList2Member [array get map2]]

    set map1(samp.mtype) "string $mtype"
    set map1(samp.params) [list struct $m2]
    set m1 [xmlrpcList2Member [array get map1]]

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
	set params [list params [list $param1 $param2 $param3]]

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

    return [SAMPReturn OK]
}

proc samp.hub.declareMetadata {rpc} {
    global samphub
    
    if {$samphub(debug)} {
	puts "samp.hub.declareMetadata: $rpc\n"
    }

    xmlrpcParams2List $rpc args

    set secret [lindex $args 0]
    set map [lindex $args 1]

    if {![SAMPHubValidSecret $secret]} {
	return [SAMPReturn ERROR]
    }
    
    SAMPHubDialogRecvdMsg "samp.hub.declareMetadata\t$samphub($secret,id)"

    foreach mm $map {
	foreach {key val} $mm {
	    lappend samphub($secret,metadata) [list $key $val]
	}
    }
    
    SAMPHubDialogMetaUpdate $secret
    SAMPHubDialogListUpdate

    # update other clients
    set mtype {samp.hub.event.metadata}

    # extract params
    set m3 [lindex [lindex [lindex [lindex $rpc 1] 1] 1] 1]

    set map2(id) "string $samphub($secret,id)"
    set map2(metadata) $m3
    set m2 [xmlrpcList2Member [array get map2]]
    
    set map1(samp.mtype) "string $mtype"
    set map1(samp.params) [list struct $m2]
    set m1 [xmlrpcList2Member [array get map1]]

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
	set params [list params [list $param1 $param2 $param3]]

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

    return [SAMPReturn OK]
}

proc samp.hub.getMetadata {rpc} {
    global samphub

    if {$samphub(debug)} {
	puts "samp.hub.getMetadata: $rpc\n"
    }

    xmlrpcParams2List $rpc args

    set secret [lindex $args 0]
    set id [lindex $args 1]

    if {![SAMPHubValidSecret $secret]} {
	return [SAMPReturn ERROR]
    }

    SAMPHubDialogRecvdMsg "samp.hub.getMetadata\t$samphub($secret,id)"

    foreach cc $samphub(client,secret) {
	if {$samphub($cc,id) == $id} {
	    foreach mm $samphub($cc,metadata) {
		foreach {key val} $mm {
		    set map3($key) "string \"$val\""
		}
	    }
	    set m3 [xmlrpcList2Member [array get map3]]

	    return [list params [list [list param [list value [list struct $m3]]]]]
	}
    }

    return [SAMPReturn ERROR]
}

proc samp.hub.declareSubscriptions {rpc} {
    global samphub

    if {$samphub(debug)} {
	puts "samp.hub.declareSubscriptions: $rpc\n"
    }

    xmlrpcParams2List $rpc args

    set secret [lindex $args 0]
    set map [lindex $args 1]
    
    if {![SAMPHubValidSecret $secret]} {
	return [SAMPReturn ERROR]
    }

    SAMPHubDialogRecvdMsg "samp.hub.declareSubscriptions\t$samphub($secret,id)"

    foreach mm $map {
	foreach {key val} $mm {
	    lappend samphub($secret,subscriptions) [list $key $val]
	}
    }

    # make it pretty
    set samphub($secret,subscriptions) [lsort $samphub($secret,subscriptions)]

    SAMPHubDialogListUpdate

    # update other clients
    set mtype {samp.hub.event.subscriptions}

    # extract params
    set m3 [lindex [lindex [lindex [lindex $rpc 1] 1] 1] 1]

    set map2(id) "string $samphub($secret,id)"
    set map2(subscriptions) $m3
    set m2 [xmlrpcList2Member [array get map2]]

    set map1(samp.mtype) "string $mtype"
    set map1(samp.params) [list struct $m2]
    set m1 [xmlrpcList2Member [array get map1]]

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
	set params [list params [list $param1 $param2 $param3]]

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

    return [SAMPReturn OK]
}

proc samp.hub.getSubscriptions {rpc} {
    global samphub

    if {$samphub(debug)} {
	puts "samp.hub.getSubscriptions: $rpc\n"
    }

    xmlrpcParams2List $rpc args

    set secret [lindex $args 0]
    set id [lindex $args 1]

    if {![SAMPHubValidSecret $secret]} {
	return [SAMPReturn ERROR]
    }

    SAMPHubDialogRecvdMsg "samp.hub.getSubscriptions\t$samphub($secret,id)"

    foreach cc $samphub(client,secret) {
	if {$samphub($cc,id) == $id} {
	    foreach sub $samphub($cc,subscriptions) {
		foreach {ss attrs} $sub {
		    foreach attr $attrs {
			foreach {key val} $attr {
			    set map4($key) "string $val"
			}
		    }
		    set m4 [xmlrpcList2Member [array get map4]]
		    set map3($ss) [list struct $m4]
		}
	    }
	    set m3 [xmlrpcList2Member [array get map3]]

	    return [list params [list [list param [list value [list struct $m3]]]]]
	}
    }

    return [SAMPReturn ERROR]
}

proc samp.hub.getRegisteredClients {rpc} {
    global samphub

    if {$samphub(debug)} {
	puts "samp.hub.getRegisteredClients: $rpc\n"
    }

    xmlrpcParams2List $rpc args

    set secret [lindex $args 0]
    set map [lindex $args 1]

    if {![SAMPHubValidSecret $secret]} {
	return [SAMPReturn ERROR]
    }

    SAMPHubDialogRecvdMsg "samp.hub.getRegisteredClients\t$samphub($secret,id)"

    set ll {}
    foreach cc $samphub(client,secret) {
	if {$cc == $secret} {
	    continue
	}

	lappend ll $samphub($cc,id)
    }

    return [list params [list [list param [list value [xmlrpcList2Array $ll]]]]]
}

proc samp.hub.getSubscribedClients {rpc} {
    global samphub

    if {$samphub(debug)} {
	puts "samp.hub.getSubscribedClients: $args\n"
    }

    xmlrpcParams2List $rpc args

    set secret [lindex $args 0]
    set map [lindex $args 1]

    if {![SAMPHubValidSecret $secret]} {
	return [SAMPReturn ERROR]
    }

    SAMPHubDialogRecvdMsg "samp.hub.getSubscribedClients\t$samphub($secret,id)"

    set ll {}
    foreach cc $samphub(client,secret) {
	if {$cc == $secret} {
	    continue
	}

	if {[SAMPHubFindSubscription $cc $map]} {
	    lappend ll [list $samphub($cc,id) {}]
	}
    }

    return [list params [list [list param [list value [list struct [xmlrpcList2Member $ll]]]]]]
}

proc samp.hub.notify {args} {
    global samphub

    if {$samphub(debug)} {
	puts "samp.hub.notify: $args\n"
    }

    set secret [lindex $args 0]
    set id [lindex $args 1]
    set map [lindex $args 2]

    if {![SAMPHubValidSecret $secret]} {
	return [SAMPReturn ERROR]
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

    set map1(samp.mtype) "string $mtype"
    set map1(samp.params) $params
    set mm [array get map1]

    if {[catch {set cc [SAMPHubFindSecret $id]}]} {
	return [SAMPReturn ERROR]
    }

    # ignore hub
    if {$cc == $samphub(secret)} {
	return [SAMPReturn ERROR]
    }

    # don't send to sender
    if {$cc == $secret} {
	return [SAMPReturn ERROR]
    }

    # are we subscribed
    if {![SAMPHubFindSubscription $cc $mtype]} {
	return [SAMPReturn ERROR]
    }

    after 0 "SAMPHubNotify $secret $cc $mtype $mm"
    return [SAMPReturn OK]
}

proc samp.hub.notifyAll {args} {
    global samphub

    if {$samphub(debug)} {
	puts "samp.hub.notifyAll: $args\n"
    }

    set secret [lindex $args 0]
    set map [lindex $args 1]

    if {![SAMPHubValidSecret $secret]} {
	return [SAMPReturn ERROR]
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

    set map1(samp.mtype) "string $mtype"
    set map1(samp.params) $params
    set mm [array get map1]

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

	after 0 "SAMPHubNotify $secret $cc $mtype $mm"
	lappend ll "string $samphub($cc,id)"
    }

    return [list params [list [list param [list value [xmlrpcList2Array $ll]]]]]
}

proc samp.hub.call {args} {
    global samphub
    global samphubmap
    global samphubmap2
    
    if {$samphub(debug)} {
	puts "samp.hub.call: $args\n"
    }

    set secret [lindex $args 0]
    set id [lindex $args 1]
    set msgtag [lindex $args 2]
    set map [lindex $args 3]

    if {![SAMPHubValidSecret $secret]} {
	return [SAMPReturn ERROR]
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
	return [SAMPReturn ERROR]
    }

    # ignore hub
    if {$cc == $samphub(secret)} {
	return [SAMPReturn ERROR]
    }

    # don't send to sender
    if {$cc == $secret} {
	return [SAMPReturn ERROR]
    }

    # are we subscribed
    if {![SAMPHubFindSubscription $cc $mtype]} {
	return [SAMPReturn ERROR]
    }

    after 0 "SAMPHubCall $secret $cc $msgid $mtype"

    return [SAMPReturn $msgid]
}

proc samp.hub.callAll {args} {
    global samphub
    global samphubmap
    global samphubmap2
    global samphubmap3

    if {$samphub(debug)} {
	puts "samp.hub.callAll: $args\n"
    }

    set secret [lindex $args 0]
    set msgtag [lindex $args 1]
    set map [lindex $args 2]

    if {![SAMPHubValidSecret $secret]} {
	return [SAMPReturn ERROR]
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
	puts "samp.hub.callAndWait: $args\n"
    }

    set secret [lindex $args 0]
    set id [lindex $args 1]
    set map [lindex $args 2]
    set timeout [lindex $args 3]

    if {![SAMPHubValidSecret $secret]} {
	return [SAMPReturn ERROR]
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
	return [SAMPReturn ERROR]
    }

    # ignore hub
    if {$cc == $samphub(secret)} {
	return [SAMPReturn ERROR]
    }

    # don't send to sender
    if {$cc == $secret} {
	return [SAMPReturn ERROR]
    }

    # are we subscribed
    if {![SAMPHubFindSubscription $cc $mtype]} {
	return [SAMPReturn ERROR]
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
	puts "samp.hub.reply: $args\n"
    }

    set secret [lindex $args 0]
    set msgid [lindex $args 1]
    set map [lindex $args 2]

    if {![SAMPHubValidSecret $secret]} {
	return [SAMPReturn ERROR]
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
	return [SAMPReturn ERROR]
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

    return [SAMPReturn OK]
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
