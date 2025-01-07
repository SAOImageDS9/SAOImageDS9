#  Copyright (C) 1999-2024
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
    global xmlrpc
    global debug
    global env

    # are we connected?
    if {[info exists samp]} {
	if {$verbose} {
	    Error "SAMPHub: [msgcat::mc {already connected}]"
	}
	return
    }

    # can we find a hub?
    # note: this will fill out a 'samp' array, delete later

    set samphub(debug) $debug(tcl,samphub)
    set samp(debug) $debug(tcl,samp)
    if {[SAMPParseHub]} {
	# ok, found one, is it alive?
	set rr {}
	if {[SAMPHubSend {samp.hub.ping} $samp(url) {} rr]} {
	    # yes, its alive
	    if {$verbose} {
		Error "SAMPHub: [msgcat::mc {found existing hub}]"
	    }
	    unset samp
	    unset samphub
	    return
	} else {
	    # its dead, try to delete
	    if {$verbose} {
		Error "SAMPHub: [msgcat::mc {found dead hub file, deleting}]"
	    }
	    catch {file delete -force $samp(fn)}
	}
    }
    
    # ok, we are on our own
    # global samp maybe unset by SAMPParseHub
    catch {unset samp}
    catch {unset samphub}
    
    # hub file name
    set fn {}
    
    if {[info exists env(SAMP_HUB)]} {
	if {$env(SAMP_HUB) != {}} {
	    set exp {std-lockurl:(.*)}
	    if {[regexp $exp $env(SAMP_HUB) dummy url]} {
		ParseURL $url rr
		switch -- $rr(scheme) {
		    file {set fn $rr(path)}
		    default {
			if {$verbose} {
			    Error "SAMPHub: [msgcat::mc {found existing hub}]"
			}
			unset samp
			unset samphub
			return
		    }
		}
	    }
	}
    }

    if {$fn == {}} {
	set fn [file join [GetEnvHome] {.samp}]
    }
    set samphub(fn) $fn

    # basics
    set samphub(verbose) $verbose
    set samphub(debug) $debug(tcl,samphub)
    set xmlrpc(debug) $debug(tcl,xmlrpc)
    set samphub(cw,cnt) 0
    # time between webhub checks for callbacks after receive pullCallbacks mtype
    set samphub(timer) 1000

    set samphub(client,seq) 0
    set samphub(client,secret) {}
    set samphub(cache,images) 1

    set samphub(secret) [SAMPHubGenerateKey]
    set samphub(timestamp) "[clock format [clock seconds] -format {%a %b %d %H:%M:%S %Z %Y}]"

    set samphub(web,sock) {}
    set samphub(web,port) 0
    set samphub(web,allowReverseCallbacks) 0
    set samphub(web,cnt) 0
    set samphub(web,msgs) {}
    set samphub(web,id) {}
    set samphub(web,timeout) 0

    # Init
    if {![SAMPHubStartConnect]} {
	return
    }
    
    # Write profile
    if {![SAMPHubStartProfile]} {
	return
    }

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
	unset samphub
	return 0
    }
    set samphub(port) [lindex [fconfigure $samphub(sock) -sockname] 2]

    if {$pds9(samp,webhub)} {
	if {[catch {set samphub(web,sock) [xmlrpcServe 21012]}]} {
	    set samphub(web,sock) {}
	    set samphub(web,port) 0
	    # special case: multiple users on same host
	    # just ignore
	    # Error "SAMPHub: [msgcat::mc {unable to open web hub}]"
	} else {
	    set samphub(web,port) \
		[lindex [fconfigure $samphub(web,sock) -sockname] 2]
	}
    }

    return 1
}

proc SAMPHubStartProfile {} {
    global samphub

    if {[catch {set ch [open $samphub(fn) w 0600]}]} {
	if {$samphub(verbose)} {
	    Error "SAMPHub: [msgcat::mc {unable to create hub file}]"
	}
	unset samphub
	return 0
    }

    puts $ch "# SAMP Standard Profile lockfile written $samphub(timestamp)"
    puts $ch "# Note contact URL hostname may be configured using jsamp.localhost property"

    puts $ch "samp.secret=$samphub(secret)"
    puts $ch "samp.hub.xmlrpc.url=http://127.0.0.1:$samphub(port)/xmlrpc"
    puts $ch "samp.profile.version=1.3"
    puts $ch "profile.start.date=$samphub(timestamp)"

    close $ch

    return 1
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
	Error "SAMPHub: [msgcat::mc {Hub not running}]"
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
	set rr {}
	SAMPHubSend {samp.client.receiveNotification} \
	    $samphub($cc,url) $params rr
	unset samphub(remove)
	SAMPHubDialogSentMsg "$mtype\t$samphub($cc,id)"
	SAMPHubRemove $cc
    }

    # any web clients?
    if {$samphub(web,id)!={}} {
	catch {after cancel $samphub(web,id)}
    }

    # remove hub
    SAMPHubDialogListRemove $samphub(secret)

    catch {file delete -force $samphub(fn)}

    # close the server socket if still up
    catch {close $samphub(web,sock)}
    catch {close $samphub(sock)}
    unset samphub

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

# SAMP spec does not specify valid tag chars
# We want to use ':' as the default delimiter
# but Topcat uses ':' in the tag, so work our way down the list
proc SAMPHubFindDelimiter {tag} {
    foreach ss [list {:} {;} {!} {&} {|} {*}] {
	if {[llength [split $tag $ss]]==1} {
	    return $ss
	}
    }
    return {~}
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
    set rr {}
    SAMPHubSend {samp.client.receiveNotification} \
	$samphub($secret,url) $params rr
    unset samphub(remove)
    SAMPHubDialogSentMsg "$mtype\t$samphub($secret,id)"

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
		lappend samphub(web,msgs) \
		    [list samp.client.receiveNotification $params]
	    }
	} else {
	    set rr {}
	    SAMPHubSend {samp.client.receiveNotification} \
		$samphub($cc,url) $params rr
	    SAMPHubDialogSentMsg "$mtype\t$samphub($cc,id)"
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

    # web client?
    if {$samphub($secret,web)} {
	if {$samphub(web,id)!={}} {
	    catch {after cancel $samphub(web,id)}
	    set samphub(web,id) {}
	}
	set samphub(web,sock) {}
	set samphub(web,port) 0
	set samphub(web,allowReverseCallbacks) 0
	set samphub(web,cnt) 0
	set samphub(web,msgs) {}
	set samphub(web,timeout) 0
    }

    unset samphub($secret,id)
    unset samphub($secret,url)
    unset samphub($secret,subscriptions)
    unset samphub($secret,metadata)
    unset samphub($secret,web)
}

proc SAMPHubRegister {} {
    global samphub

    incr samphub(client,seq)
    set secret [SAMPHubGenerateKey]
    set id "c${samphub(client,seq)}"

    lappend samphub(client,secret) $secret

    set samphub($secret,id) $id
    set samphub($secret,url) {}
    set samphub($secret,subscriptions) {}
    set samphub($secret,metadata) {}

    set samphub($secret,web) false

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
		lappend samphub(web,msgs) \
		    [list samp.client.receiveNotification $params]
	    }
	} else {
	    set rr {}
	    SAMPHubSend {samp.client.receiveNotification} \
		$samphub($cc,url) $params rr
	    SAMPHubDialogSentMsg "$mtype\t$samphub($cc,id)"
	}
    }

    return [list $id $secret]
}

proc SAMPHubSend {method url params resultVar {flag {}}} {
    upvar $resultVar result
    global samphub

    if {$samphub(debug)} {
	puts stderr "SAMPHubSend: $method $url $params $flag"
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
	return false
    }

    if {$samphub(debug)} {
	puts stderr "SAMPHubSend Result: $result $flag"
    }

    return true
}

proc SAMPHubReturn {msg} {
    return [list params [list [list param [list value [list string $msg]]]]]
}

proc SAMPHubNotify {secret cc mtype param} {
    # runs in top level
    global samphub

    # should not happen
    if {![info exists samphub]} {
	return
    }

    set param1 [list param [list value [list string $cc]]]
    set param2 [list param [list value [list string $samphub($samphub(secret),id)]]]
    set param3 $param
    set params [list params [list $param1 $param2 $param3]]

    if {$samphub($cc,web)} {
	if {$samphub(web,allowReverseCallbacks)} {
	    lappend samphub(web,msgs) \
		[list samp.client.receiveNotification $params]
	}
    } else {
	set rr {}
	SAMPHubSend samp.client.receiveNotification $samphub($cc,url) $params rr
	SAMPHubDialogSentMsg "$mtype\t$samphub($cc,id)"
    }
}

proc SAMPHubCall {secret cc msgid mtype param} {
    # runs in top level
    global samphub

    # should not happen
    if {![info exists samphub]} {
	return
    }

    set param1 [list param [list value [list string $cc]]]
    set param2 [list param [list value [list string $samphub($samphub(secret),id)]]]
    set param3 [list param [list value [list string $msgid]]]
    set param4 $param
    set params [list params [list $param1 $param2 $param3 $param4]]

    if {$samphub($cc,web)} {
	if {$samphub(web,allowReverseCallbacks)} {
	    lappend samphub(web,msgs) \
		[list samp.client.receiveCall $params]
	}
    } else {
	set rr {}
	SAMPHubSend samp.client.receiveCall $samphub($cc,url) $params rr
	SAMPHubDialogSentMsg "samp.client.receiveCall\t$samphub($cc,id)"
    }
}

proc SAMPHubReply {cc id msgtag param} {
    # runs in top level
    global samphub

    # should not happen
    if {![info exists samphub]} {
	return
    }

    set param1 [list param [list value [list string $cc]]]
    set param2 [list param [list value [list string $id]]]
    set param3 [list param [list value [list string $msgtag]]]
    set param4 $param
    set params [list params [list $param1 $param2 $param3 $param4]]

    if {$samphub($cc,web)} {
	if {$samphub(web,allowReverseCallbacks)} {
	    lappend samphub(web,msgs) \
		[list samp.client.receiveResponse $params]
	}
    } else {
	set rr {}
	SAMPHubSend samp.client.receiveResponse $samphub($cc,url) $params rr $msgtag
	SAMPHubDialogSentMsg "samp.client.receiveResponse\t$samphub($cc,id)"
    }
}

# procs

proc samp.hub.setXmlrpcCallback {rpc} {
    global samphub

    if {$samphub(debug)} {
	puts "samp.hub.setXmlrpcCallback: $rpc"
    }

    xmlrpcParams2List $rpc args

    set secret [lindex $args 0]
    set map [lindex $args 1]

    if {![SAMPHubValidSecret $secret]} {
	return -code error
    }

    SAMPHubDialogRecvdMsg "samp.hub.setXmlrpcCallback\t$samphub($secret,id)"

    set samphub($secret,url) $map

    return [SAMPHubReturn OK]
}

proc samp.hub.ping {rpc} {
    global samphub

    if {$samphub(debug)} {
	puts "samp.hub.ping $rpc"
    }

    SAMPHubDialogRecvdMsg "samp.hub.ping"

    return [SAMPHubReturn OK]
}

proc samp.hub.register {rpc} {
    global samphub

    if {$samphub(debug)} {
	puts "samp.hub.register: $rpc"
    }

    xmlrpcParams2List $rpc args

    if {$samphub(secret) != $args} {
	return -code error
    }

    set rr [SAMPHubRegister]
    set id [lindex $rr 0]
    set secret [lindex $rr 1]

    set map1(samp.hub-id) {string hub}
    set map1(samp.self-id) "string $id"
    set map1(samp.private-key) "string $secret"
    set m1 [xmlrpcList2Member [array get map1]]

    return [list params [list [list param [list value [list struct $m1]]]]]
}

proc samp.hub.unregister {rpc} {
    global samphub

    if {$samphub(debug)} {
	puts "samp.hub.unregister: $rpc"
    }

    xmlrpcParams2List $rpc args

    set secret [lindex $args 0]

    # some clients insist on sending samp.hub.unregister
    if {[info exists samphub(remove)]} {
	if {$samphub(remove) == $secret} {
	    return [SAMPHubReturn OK]
	}
    }

    if {![SAMPHubValidSecret $secret]} {
	return -code error
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
		lappend samphub(web,msgs) \
		    [list samp.client.receiveNotification $params]
	    }
	} else {
	set rr {}
	    SAMPHubSend {samp.client.receiveNotification} \
	    $samphub($cc,url) $params rr
	    SAMPHubDialogSentMsg "$mtype\t$samphub($cc,id)"
	}
    }

    # now remove
    SAMPHubRemove $secret

    return [SAMPHubReturn OK]
}

proc samp.hub.declareMetadata {rpc} {
    global samphub
    
    if {$samphub(debug)} {
	puts "samp.hub.declareMetadata: $rpc"
    }

    xmlrpcParams2List $rpc args

    set secret [lindex $args 0]
    set map [lindex $args 1]

    if {![SAMPHubValidSecret $secret]} {
	return -code error
    }
    
    SAMPHubDialogRecvdMsg "samp.hub.declareMetadata\t$samphub($secret,id)"

    # clear any previous
    set samphub($secret,metadata) {}
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
#	if {$cc == $secret} {
#	    continue
#	}

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
		lappend samphub(web,msgs) \
		    [list samp.client.receiveNotification $params]
	    }
	} else {
	    SAMPHubSend {samp.client.receiveNotification} \
		$samphub($cc,url) $params rr
	    SAMPHubDialogSentMsg "$mtype\t$samphub($cc,id)"
	}
    }

    return [SAMPHubReturn OK]
}

proc samp.hub.getMetadata {rpc} {
    global samphub

    if {$samphub(debug)} {
	puts "samp.hub.getMetadata: $rpc"
    }

    xmlrpcParams2List $rpc args

    set secret [lindex $args 0]
    set id [lindex $args 1]

    if {![SAMPHubValidSecret $secret]} {
	return -code error
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

    return -code error
}

proc samp.hub.declareSubscriptions {rpc} {
    global samphub

    if {$samphub(debug)} {
	puts "samp.hub.declareSubscriptions: $rpc"
    }

    set map [lindex [lindex [lindex [lindex $rpc 1] 1] 1] 1]

    xmlrpcParams2List $rpc args

    set secret [lindex $args 0]
    
    if {![SAMPHubValidSecret $secret]} {
	return -code error
    }

    SAMPHubDialogRecvdMsg "samp.hub.declareSubscriptions\t$samphub($secret,id)"

    # clear any previous
    set samphub($secret,subscriptions) {}
    set aa [lindex $map 1]
    foreach bb $aa {
	set cc [lindex $bb 1]
	foreach {key val} $cc {
	    set ss [lindex $key 1]
	    set mm [lindex [lindex $val 1] 1]
	    lappend samphub($secret,subscriptions) [list $ss $mm]
	}
    }

    # make it pretty
    set samphub($secret,subscriptions) [lsort $samphub($secret,subscriptions)]

    SAMPHubDialogListUpdate

    # update other clients
    set mtype {samp.hub.event.subscriptions}

    # extract params
    # can't use utils as we need to preserve subscription params rpc
    set aa [list member [list [list name id] [list value [list string $samphub($secret,id)]]]]
    set bb [list member [list [list name subscriptions] [list value $map]]]
    set m2 [list struct [list $bb $aa]]

    set cc [list member [list [list name samp.mtype] [list value [list string $mtype]]]]
    set dd [list member [list [list name samp.params] [list value $m2]]]
    set m1 [list struct [list $cc $dd]]

    set param3 [list param [list value $m1]]
    set param2 [list param [list value [list string $samphub($samphub(secret),id)]]]

    foreach cc $samphub(client,secret) {
	# ignore hub
	if {$cc == $samphub(secret)} {
	    continue
	}

	# don't send to sender
#	if {$cc == $secret} {
#	    continue
#	}

	# are we subscribed
	if {![SAMPHubFindSubscription $cc $mtype]} {
	    continue
	}

	set param1 [list param [list value [list string $cc]]]
	set params [list params [list $param1 $param2 $param3]]

	if {$samphub($cc,web)} {
	    if {$samphub(web,allowReverseCallbacks)} {
		lappend samphub(web,msgs) \
		    [list samp.client.receiveNotification $params]
	    }
	} else {
	    set rr {}
	    SAMPHubSend {samp.client.receiveNotification} \
		$samphub($cc,url) $params rr
	    SAMPHubDialogSentMsg "$mtype\t$samphub($cc,id)"
	}
    }

    return [SAMPHubReturn OK]
}

proc samp.hub.getSubscriptions {rpc} {
    global samphub

    if {$samphub(debug)} {
	puts "samp.hub.getSubscriptions: $rpc"
    }

    xmlrpcParams2List $rpc args

    set secret [lindex $args 0]
    set id [lindex $args 1]

    if {![SAMPHubValidSecret $secret]} {
	return -code error
    }

    SAMPHubDialogRecvdMsg "samp.hub.getSubscriptions\t$samphub($secret,id)"

    foreach cc $samphub(client,secret) {
	if {$samphub($cc,id) == $id} {
	    set out {}
	    foreach sub $samphub($cc,subscriptions) {
		foreach {key val} $sub {
		    lappend out [list member [list [list name $key] [list value [list struct $val]]]]
		}
	    }
	    return [list params [list [list param [list value [list struct $out]]]]]
	}
    }

    return -code error
}

proc samp.hub.getRegisteredClients {rpc} {
    global samphub

    if {$samphub(debug)} {
	puts "samp.hub.getRegisteredClients: $rpc"
    }

    xmlrpcParams2List $rpc args

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

	lappend ll $samphub($cc,id)
    }

    return [list params [list [list param [list value [xmlrpcList2Array $ll]]]]]
}

proc samp.hub.getSubscribedClients {rpc} {
    global samphub

    if {$samphub(debug)} {
	puts "samp.hub.getSubscribedClients: $rpc"
    }

    xmlrpcParams2List $rpc args

    set secret [lindex $args 0]
    set map [lindex $args 1]

    if {![SAMPHubValidSecret $secret]} {
	return -code error
    }

    SAMPHubDialogRecvdMsg "samp.hub.getSubscribedClients\t$samphub($secret,id)"

    foreach cc $samphub(client,secret) {
	if {$cc == $secret} {
	    continue
	}

	if {[SAMPHubFindSubscription $cc $map]} {
	    set id $samphub($cc,id)
	    set map1($id) [list struct {}]
	}
    }

    return [list params [list [list param [list value [list struct [xmlrpcList2Member [array get map1]]]]]]]
}

proc samp.hub.notify {rpc} {
    global samphub

    if {$samphub(debug)} {
	puts "samp.hub.notify: $rpc"
    }

    # params
    set param [lindex [lindex [lindex $rpc 1] 2]]

    xmlrpcParams2List $rpc args

    set secret [lindex $args 0]
    set id [lindex $args 1]
    set map [lindex $args 2]

    if {![SAMPHubValidSecret $secret]} {
	return -code error
    }

    SAMPHubDialogRecvdMsg "samp.hub.notify\t$samphub($secret,id)"

    set mtype {}
    foreach mm $map {
       foreach {key val} $mm {
           switch -- $key {
               samp.mtype {set mtype $val}
           }
       }
    }

    if {[catch {set cc [SAMPHubFindSecret $id]}]} {
	return -code error
    }

    # ignore hub
    if {$cc == $samphub(secret)} {
	return -code error
    }

    # are we subscribed
    if {![SAMPHubFindSubscription $cc $mtype]} {
	return -code error
    }

    after idle [list SAMPHubNotify $secret $cc $mtype $param]
    return [SAMPHubReturn OK]
}

proc samp.hub.notifyAll {rpc} {
    global samphub

    if {$samphub(debug)} {
	puts "samp.hub.notifyAll: $rpc"
    }

    # params
    set param [lindex [lindex [lindex $rpc 1] 1]]

    xmlrpcParams2List $rpc args

    set secret [lindex $args 0]
    set map [lindex $args 1]

    if {![SAMPHubValidSecret $secret]} {
	return -code error
    }

    SAMPHubDialogRecvdMsg "samp.hub.notifyAll\t$samphub($secret,id)"

    set mtype {}
    foreach mm $map {
       foreach {key val} $mm {
           switch -- $key {
               samp.mtype {set mtype $val}
           }
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

	after idle [list SAMPHubNotify $secret $cc $mtype $param]
	lappend ll $samphub($cc,id)
    }

    return [list params [list [list param [list value [xmlrpcList2Array $ll]]]]]
}

proc samp.hub.call {rpc} {
    global samphub
    
    if {$samphub(debug)} {
	puts "samp.hub.call: $rpc"
    }

    # params
    set param [lindex [lindex [lindex $rpc 1] 3]]

    xmlrpcParams2List $rpc args

    set secret [lindex $args 0]
    set id [lindex $args 1]
    set msgtag [lindex $args 2]
    set map [lindex $args 3]

    if {![SAMPHubValidSecret $secret]} {
	return -code error
    }

    SAMPHubDialogRecvdMsg "samp.hub.call\t$samphub($secret,id)"

    set mtype {}
    foreach mm $map {
       foreach {key val} $mm {
           switch -- $key {
               samp.mtype {set mtype $val}
           }
       }
    }
    
    
    set ss [SAMPHubFindDelimiter $msgtag]
    # the delimiter is the first char
    set msgid "$ss$msgtag$ss$samphub($secret,id)$ss"
 
    if {[catch {set cc [SAMPHubFindSecret $id]}]} {
	return -code error
    }

    # ignore hub
    if {$cc == $samphub(secret)} {
	return -code error
    }

    # are we subscribed
    if {![SAMPHubFindSubscription $cc $mtype]} {
	return -code error
    }

    after idle [list SAMPHubCall $secret $cc $msgid $mtype $param]
    return [SAMPHubReturn $msgid]
}

proc samp.hub.callAll {rpc} {
    global samphub

    if {$samphub(debug)} {
	puts "samp.hub.callAll: $rpc"
    }

    # params
    set param [lindex [lindex [lindex $rpc 1] 2]]

    xmlrpcParams2List $rpc args

    set secret [lindex $args 0]
    set msgtag [lindex $args 1]
    set map [lindex $args 2]

    if {![SAMPHubValidSecret $secret]} {
	return -code error
    }

    SAMPHubDialogRecvdMsg "samp.hub.callAll\t$samphub($secret,id)"

    set mtype {}
    foreach mm $map {
       foreach {key val} $mm {
           switch -- $key {
               samp.mtype {set mtype $val}
           }
       }
    }

    set ss [SAMPHubFindDelimiter $msgtag]
    # the delimiter is the first char
    set msgid "$ss$msgtag$ss$samphub($secret,id)$ss"
 
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

	after idle [list SAMPHubCall $secret $cc $msgid $mtype $param]

	set id $samphub($cc,id)
 	set map3($id) "string $msgid"
    }

    set m3 [xmlrpcList2Member [array get map3]]
    return [list params [list [list param [list value [list struct $m3]]]]]
}

proc samp.hub.callAndWait {rpc} {
    global samphub
    
    if {$samphub(debug)} {
	puts "samp.hub.callAndWait: $rpc"
    }

    # params
    set param [lindex [lindex [lindex $rpc 1] 2]]

    xmlrpcParams2List $rpc args

    set secret [lindex $args 0]
    set id [lindex $args 1]
    set map [lindex $args 2]
    set timeout [lindex $args 3]

    if {![SAMPHubValidSecret $secret]} {
	return -code error
    }

    SAMPHubDialogRecvdMsg "samp.hub.callAndWait\t$samphub($secret,id)"

    set mtype {}
    foreach mm $map {
       foreach {key val} $mm {
           switch -- $key {
               samp.mtype {set mtype $val}
           }
       }
    }

    incr samphub(cw,cnt)
    set cnt $samphub(cw,cnt)

    set msgtag bar
    set ss [SAMPHubFindDelimiter $msgtag]
    # the delimiter is the first char
    set msgid "$ss$msgtag$ss$samphub($secret,id)$ss$cnt$ss"
    
    if {[catch {set cc [SAMPHubFindSecret $id]}]} {
	return -code error
    }

    # ignore hub
    if {$cc == $samphub(secret)} {
	return -code error
    }

    # are we subscribed
    if {![SAMPHubFindSubscription $cc $mtype]} {
	return -code error
    }

    set samphub(cw,$cnt,result) {}
    set samphub(cw,$cnt,id) {}
    set samphub(cw,$cnt,timeout,id) {}

    if {$timeout>0} {
	set samphub(cw,$cnt,timeout,id) [after [expr $timeout*1000] [list SAMPHubTimeout $cnt]]
    }

    set samphub(cw,$cnt,id) \
	[after idle [list SAMPHubCall $secret $cc $msgid $mtype $param]]

    vwait samphub(cw,$cnt,result)

    # special case where dest is no longer registered
    if {$samphub(cw,$cnt,result) == -1} {
	SAMPHubTimeout $cnt
	return -code error
    }

    if {$timeout<=0} {
	set rr $samphub(cw,$cnt,result)

	unset samphub(cw,$cnt,result)
	unset samphub(cw,$cnt,id)
	unset samphub(cw,$cnt,timeout,id)
		
	return [list params [list $rr]]

    } elseif {[info exists samphub(cw,$cnt,timeout,id)]} {
	after cancel $samphub(cw,$cnt,timeout,id)

	set rr $samphub(cw,$cnt,result)

	unset samphub(cw,$cnt,result)
	unset samphub(cw,$cnt,id)
	unset samphub(cw,$cnt,timeout,id)
		
	return [list params [list $rr]]
    } else {
	return -code error
    }
}

proc SAMPHubTimeout {cnt} {
    global samphub
    
    if {[info exists samphub(cw,$cnt,id)]} {
	after cancel $samphub(cw,$cnt,id)
    }

    unset samphub(cw,$cnt,result)
    unset samphub(cw,$cnt,id)
    unset samphub(cw,$cnt,timeout,id)
}

proc samp.hub.reply {rpc} {
    global samphub
    
    if {$samphub(debug)} {
	puts "samp.hub.reply: $rpc"
    }

    # params
    set param [lindex [lindex [lindex $rpc 1] 2]]

    xmlrpcParams2List $rpc args

    set secret [lindex $args 0]
    set msgid [lindex $args 1]

    if {![SAMPHubValidSecret $secret]} {
	return -code error
    }

    SAMPHubDialogRecvdMsg "samp.hub.reply\t$samphub($secret,id)"

    # the delimiter is the first char
    set ss [string range $msgid 0 0]
    set msgid [string range $msgid 1 end]

    set ll [split $msgid $ss]
    set msgtag [lindex  $ll 0]
    set id [lindex $ll 1]
    set cnt [lindex $ll 2]

    if {[catch {set cc [SAMPHubFindSecret $id]}]} {
	return -code error
    }

    switch $msgtag {
	bar {
	    # callAndWait
	    set samphub(cw,$cnt,result) $param
	}
	default {
	    # call
	    set src $samphub($secret,id)
	    after idle [list SAMPHubReply $cc $src $msgtag $param]
	}
    }

    return [SAMPHubReturn OK]
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
