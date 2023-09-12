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
    global pds9

    # are we connected?
    if {[info exists samp]} {
	if {$verbose} {
	    Error "SAMPHub: [msgcat::mc {already connected}]"
	}
	return
    }

    # can we find a hub?
    # note: this will fill out a 'samp' array, delete later
    if {[SAMPParseHub]} {
	# ok, found one, is it alive?
	set rr {}
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
    
    # home directory
    set fn [file join [GetEnvHome] {.samp}]

    # basics
    set samphub(client,seq) 0
    set samphub(client,secret) {}
    set samphub(cache,images) 1

    set samphub(fn) $fn
    set samphub(sock) [xmlrpc::serve 0]
    set samphub(port) [lindex [fconfigure $samphub(sock) -sockname] 2]
    set samphub(secret) [SAMPHubGenerateKey]
    set samphub(timestamp) "[clock format [clock seconds] -format {%a %b %d %H:%M:%S %Z %Y}]"

    set samphub(web,sock) {}
    set samphub(web,port) 0
    set samphub(web,allowReverseCallbacks) 0
    if {$pds9(samp,webhub)} {
	set samphub(web,sock) [xmlrpc::serve 21012]
	set samphub(web,port) [lindex [fconfigure $samphub(web,sock) -sockname] 2]
    }

    if {[catch {set ch [open $fn w 0600]}]} {
	if {$verbose} {
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

    global debug
    if {$debug(tcl,samp)} {
	puts "SAMPHubStart: $samphub(secret) $samphub($samphub(secret),id)"
    }

    SAMPHubDialogListAdd $samphub(secret)
    SAMPHubDialogUpdate
    UpdateFileMenu
}

proc SAMPHubStop {verbose} {
    global samphub

    # hub running?
    if {![info exists samphub]} {
	if {$verbose} {
	    Error "SAMPHub: [msgcat::mc {Hub not running}]"
	}
	return
    }

    # shutdown all clients
    set mtype {samp.hub.event.shutdown}
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

	catch {unset samphubmap}
	catch {unset samphubmap2}
	set samphubmap(samp.mtype) "string $mtype"
	set samphubmap(samp.params) {struct samphubmap2}

	set param1 [list "string $cc"]
	set param2 [list "string $samphub($samphub(secret),id)"]
	set param3 [list "struct samphubmap"]
	set params "$param1 $param2 $param3"	
	
	# some clients insist on sending samp.hub.unregister
	set samphub(remove) $cc
	set rr {}
	if {![SAMPHubSend {samp.client.receiveNotification} $samphub($cc,url) $params rr]} {
	    if {$verbose} {
		Error "SAMPHub: [msgcat::mc {internal error}] $rr"
	    }
	    return
	}
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
	global debug
	if {$debug(tcl,samp)} {
	    puts "SAMPHub: bad private-key $secret"
	}
	return 0
    }
    return 1
}

proc SAMPHubGenerateCB {mtype params} {
    set rr {}
    foreach param $params {
	append rr [xmlrpc::marshall $param]
    }
    return [list $mtype $rr]
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

proc SAMPHubSend {method url params resultVar {ntabs 5} {distance 4}} {
    upvar $resultVar result
    global samphub

    global debug
    if {$debug(tcl,samp)} {
	puts stderr "SAMPHubSend: $url $method $params"
    }
    
    if {[catch {set result [xmlrpc::call $url xmlrpc $method $params $ntabs $distance]}]} {
	if {$debug(tcl,samp)} {
	    puts stderr "SAMPHubSend Error: $result"
	}
	return 0
    }

    # reset error if needed
    # xmlrpc leaves error msgs
    InitError samp

    if {$debug(tcl,samp)} {
	puts stderr "SAMPHubSend Result: $result"
    }

    return 1
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

    catch {unset samphubmap}
    catch {unset samphubmap2}
    set samphubmap(samp.mtype) "string $mtype"
    set samphubmap(samp.params) {struct samphubmap2}
    set samphubmap2(reason) {string disconnect}

    set param1 [list "string $secret"]
    set param2 [list "string $samphub($samphub(secret),id)"]
    set param3 [list "struct samphubmap"]
    set params "$param1 $param2 $param3"	

    # some clients insist on sending samp.hub.unregister
    set samphub(remove) $secret
    set rr {}
    if {![SAMPHubSend {samp.client.receiveNotification} $samphub($secret,url) $params rr]} {
	Error "SAMPHub: [msgcat::mc {internal error}] $rr"
	return
    }
    unset samphub(remove)
    
    SAMPHubDialogSentMsg "$mtype\t$samphub($secret,id)\t$rr"
    SAMPHubRemove $secret
}

proc SAMPHubRemove {secret} {
    global samphub
    
    global debug
    if {$debug(tcl,samp)} {
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

proc SAMPHubRegister {web} {
    global samphub
    global samphubmap
    global samphubmap2

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

	catch {unset samphubmap}
	catch {unset samphubmap2}
	set samphubmap(samp.mtype) "string $mtype"
	set samphubmap(samp.params) {struct samphubmap2}
	set samphubmap2(id) "string $samphub($secret,id)"

	set param1 [list "string $cc"]
	set param2 [list "string $samphub($samphub(secret),id)"]
	set param3 [list "struct samphubmap"]
	set params "$param1 $param2 $param3"

	if {$samphub($cc,web)} {
	    if {$samphub(web,allowReverseCallbacks)} {
		lappend samphub($cc,web,msgs) [SAMPHubGenerateCB $mtype $params]
	    }
	} else {
	    set rr {}
	    if {![SAMPHubSend {samp.client.receiveNotification} $samphub($cc,url) $params rr]} {
		if {$verbose} {
		    Error "SAMPHub: [msgcat::mc {internal error}] $rr"
		}
		return
	    }

	    SAMPHubDialogSentMsg "$mtype\t$samphub($cc,id)\t$rr"
	}
    }

    catch {unset samphubmap}
    set samphubmap(samp.hub-id) {string hub}
    set samphubmap(samp.self-id) "string $id"
    set samphubmap(samp.private-key) "string $secret"
}

# procs

proc samp.hub.setXmlrpcCallback {args} {
    global samphub

    global debug
    if {$debug(tcl,samp)} {
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
    global debug
    if {$debug(tcl,samp)} {
	puts "samp.hub.ping"
    }

    SAMPHubDialogRecvdMsg "samp.hub.ping"

    return {string OK}
}

proc samp.hub.register {args} {
    global samphub
    global samphubmap

    global debug
    if {$debug(tcl,samp)} {
	puts "samp.hub.register: $args"
    }

    if {$samphub(secret) != $args} {
	return -code error
    }

    SAMPHubRegister 0
    return "struct samphubmap"
}

proc samp.hub.unregister {args} {
    global samphub

    global debug
    if {$debug(tcl,samp)} {
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

	catch {unset samphubmap}
	catch {unset samphubmap2}
	set samphubmap(samp.mtype) "string $mtype"
	set samphubmap(samp.params) {struct samphubmap2}
	set samphubmap2(id) "string $samphub($secret,id)"

	set param1 [list "string $cc"]
	set param2 [list "string $samphub($samphub(secret),id)"]
	set param3 [list "struct samphubmap"]
	set params "$param1 $param2 $param3"

	if {$samphub($cc,web)} {
	    if {$samphub(web,allowReverseCallbacks)} {
		lappend samphub($cc,web,msgs) [SAMPHubGenerateCB $mtype $params]
	    }
	} else {
	    set rr {}
	    if {![SAMPHubSend {samp.client.receiveNotification} $samphub($cc,url) $params rr]} {
		if {$verbose} {
		    Error "SAMPHub: [msgcat::mc {internal error}] $rr"
		}
		return -code error
	    }

	    SAMPHubDialogSentMsg "$mtype\t$samphub($cc,id)\t$rr"
	}
    }

    # now remove
    SAMPHubRemove $secret

    return {string OK}
}

proc samp.hub.declareMetadata {args} {
    global samphub
    
    global debug
    if {$debug(tcl,samp)} {
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
	}
    }
    
    SAMPHubDialogMetaUpdate $secret
    SAMPHubDialogListUpdate

    # update other clients
    set mtype {samp.hub.event.metadata}
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

	catch {unset samphubmap}
	catch {unset samphubmap2}
	set samphubmap(samp.mtype) "string $mtype"
	set samphubmap(samp.params) {struct samphubmap2}
	set samphubmap2(id) "string $samphub($secret,id)"
	set samphubmap2(metadata) {struct samphubmap3}

	catch {unset samphubmap3}
	foreach mm $samphub($secret,metadata) {
	    foreach {key val} $mm {
		if {$val == {}} {
		    catch {unset samphubmap4}
		    set samphubmap3($key) "struct samphubmap4"
		} else {
		    set samphubmap3($key) "string \"[XMLQuote $val]\""
		}
	    }
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
	    set rr {}
	    if {![SAMPHubSend {samp.client.receiveNotification} $samphub($cc,url) $params rr]} {
		if {$verbose} {
		    Error "SAMPHub: [msgcat::mc {internal error}] $rr"
		}
		return -code error
	    }

	    SAMPHubDialogSentMsg "$mtype\t$samphub($cc,id)\t$rr"
	}
    }

    return {string OK}
}

proc samp.hub.getMetadata {args} {
    global samphub
    global samphubmap

    global debug
    if {$debug(tcl,samp)} {
	puts "samp.hub.getMetadata: $args"
    }

    set secret [lindex $args 0]
    set id [lindex $args 1]

    if {![SAMPHubValidSecret $secret]} {
	return -code error
    }

    SAMPHubDialogRecvdMsg "samp.hub.getMetadata\t$samphub($secret,id)"

    foreach cc $samphub(client,secret) {
	if {$samphub($cc,id) == $id} {
	    catch {unset samphubmap}
	    foreach mm $samphub($cc,metadata) {
		foreach {key val} $mm {
		    if {$val == {}} {
			global samphubmap4
			catch {unset samphubmap4}
			set samphubmap($key) "struct samphubmap4"
		    } else {
			set samphubmap($key) "string \"[XMLQuote $val]\""
		    }
		}
	    }
	    return "struct samphubmap"
	}
    }

    return -code error
}

proc samp.hub.declareSubscriptions {args} {
    global samphub

    global debug
    if {$debug(tcl,samp)} {
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
    set mtype {samp.hub.event.subscriptions}
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

	catch {unset samphubmap}
	catch {unset samphubmap2}
	catch {unset samphubmap3}
	set samphubmap(samp.mtype) "string $mtype"
	set samphubmap(samp.params) {struct samphubmap2}
	set samphubmap2(id) "string $samphub($secret,id)"
	set samphubmap2(subscriptions) {struct samphubmap3}

	set cnt 3
	foreach sub $samphub($secret,subscriptions) {
	    incr cnt
	    foreach {mm attrs} $sub {
		set varname samphubmap${cnt}
		set samphubmap3($mm) "struct $varname"

		catch {unset $varname}
		upvar 0 $varname var
		foreach attr $attrs {
		    foreach {key val} $attr {
			set var($key) "string $val"
		    }
		}
	    }
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
	    set rr {}
	    if {![SAMPHubSend {samp.client.receiveNotification} $samphub($cc,url) $params rr]} {
		if {$verbose} {
		    Error "SAMPHub: [msgcat::mc {internal error}] $rr"
		}
		return -code error
	    }

	    SAMPHubDialogSentMsg "$mtype\t$samphub($cc,id)\t$rr"
	}
    }

    return {string OK}
}

proc samp.hub.getSubscriptions {args} {
    global samphub
    global samphubmap

    global debug
    if {$debug(tcl,samp)} {
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

    global debug
    if {$debug(tcl,samp)} {
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

    global debug
    if {$debug(tcl,samp)} {
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
	set samphubmap($cc) {struct samphubmap2}
    }

    return "struct samphubmap"
}

proc samp.hub.notify {args} {
    global samphub

    global debug
    if {$debug(tcl,samp)} {
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
    set iparams {}
    foreach mm $map {
	foreach {key val} $mm {
	    switch -- $key {
		samp.mtype {set mtype $val}
		samp.params {set iparams $val}
	    }
	}
    }

    foreach cc $samphub(client,secret) {
	# ignore hub
	if {$cc == $samphub(secret)} {
	    continue
	}

	if {$samphub($cc,id) != $id} {
	    continue
	}

	# don't send to sender
	# should not happen
	if {$cc == $secret} {
	    continue
	}

	# are we subscribed
	if {![SAMPHubFindSubscription $cc $mtype]} {
	    continue
	}

	catch {unset samphubmap}
	catch {unset samphubmap2}
	set samphubmap(samp.mtype) "string $mtype"
	set samphubmap(samp.params) {struct samphubmap2}
	set samphubmap2(id) "string $samphub($secret,id)"

	foreach mm $iparams {
	    foreach {key val} $mm {
		set samphubmap2($key) "string \"$val\""
	    }
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
	    set rr {}
	    if {![SAMPHubSend samp.client.receiveNotification $samphub($cc,url) $params rr]} {
		if {$verbose} {
		    Error "SAMPHub: [msgcat::mc {internal error}] $rr"
		}
		return -code error
	    }

	    SAMPHubDialogSentMsg "$mtype\t$samphub($cc,id)\t$rr"
	}
    }

    return {string OK}
}

proc samp.hub.notifyAll {args} {
    global samphub

    global debug
    if {$debug(tcl,samp)} {
	puts "samp.hub.notifyAll: $args"
    }

    set secret [lindex $args 0]
    set map [lindex $args 1]

    if {![SAMPHubValidSecret $secret]} {
	return -code error
    }

    SAMPHubDialogRecvdMsg "samp.hub.notifyAll\t$samphub($secret,id)"

    set mtype {}
    set iparams {}
    foreach mm $map {
	foreach {key val} $mm {
	    switch -- $key {
		samp.mtype {set mtype $val}
		samp.params {set iparams $val}
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

	catch {unset samphubmap}
	catch {unset samphubmap2}
	set samphubmap(samp.mtype) "string $mtype"
	set samphubmap(samp.params) {struct samphubmap2}

	foreach mm $iparams {
	    foreach {key val} $mm {
		set samphubmap2($key) "string \"$val\""
	    }
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
	    set rr {}
	    if {![SAMPHubSend samp.client.receiveNotification $samphub($cc,url) $params rr]} {
		if {$verbose} {
		    Error "SAMPHub: [msgcat::mc {internal error}] $rr"
		}
		return -code error
	    }

	    SAMPHubDialogSentMsg "$mtype\t$samphub($cc,id)\t$rr"
	    lappend ll "string $samphub($cc,id)"
	}
    }
    return "array [list $ll]"
}

proc SAMPHubCall {cc secret id msgtag map mtype params} {
    global samphub
    global samphubmap
    global samphubmap2

    # ignore hub
    if {$cc == $samphub(secret)} {
	return OK
    }

    # don't send to sender
    # should not happen
    if {$cc == $secret} {
	return OK
    }

    if {$samphub($cc,id) != $id} {
	return OK
    }

    # are we subscribed
    if {![SAMPHubFindSubscription $cc $mtype]} {
	return OK
    }

    set samphub(rr-msgid) {}
    set samphub(rr-map) {}

    catch {unset samphubmap}
    catch {unset samphubmap2}
    set samphubmap(samp.mtype) "string $mtype"
    set samphubmap(samp.params) {struct samphubmap2}

    foreach mm $params {
	foreach {key val} $mm {
	    set samphubmap2($key) "string \"$val\""
	}
    }

    set msgid "$msgtag-$samphub($secret,id)"

    set param1 [list "string $cc"]
    set param2 [list "string $id"]
    set param3 [list "string $msgid"]
    set param4 [list "struct samphubmap"]
    set params "$param1 $param2 $param3 $param4"

    if {$samphub($cc,web)} {
	if {$samphub(web,allowReverseCallbacks)} {
	    lappend samphub($cc,web,msgs) [SAMPHubGenerateCB $mtype $params]
	}
    } else {
	set rr {}
	if {![SAMPHubSend samp.client.receiveCall $samphub($cc,url) $params rr]} {
	    if {$verbose} {
		Error "SAMPHub: [msgcat::mc {internal error}] $rr"
	    }
	    return -code error
	}
	SAMPHubDialogSentMsg "samp.client.receiveCall\t$samphub($cc,id)\t$rr"
    }

    set status {}
    set result {}
    foreach mm $samphub(rr-map) {
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
    set samphubmap(samp.result) {struct samphubmap2}

    foreach mm $result {
	foreach {key val} $mm {
	    set samphubmap2($key) "string \"$val\""
	}
    }

    set param1 [list "string $secret"]
    set param2 [list "string $id"]
    set param3 [list "string $msgtag"]
    set param4 [list "struct samphubmap"]
    set params "$param1 $param2 $param3 $param4"	

    if {$samphub($cc,web)} {
	if {$samphub(web,allowReverseCallbacks)} {
	    lappend samphub($cc,web,msgs) [SAMPHubGenerateCB $mtype $params]
	}
    } else {
	set rr {}
	if {![SAMPHubSend samp.client.receiveResponse $samphub($secret,url) $params rr]} {
	    if {$verbose} {
		Error "SAMPHub: [msgcat::mc {internal error}] $rr"
	    }
	    return -code error
	}
	SAMPHubDialogSentMsg "samp.client.receiveResponse\t$samphub($secret,id)\t$rr"
    }
    return $msgid
}

proc samp.hub.call {args} {
    global samphub
    global samphubmap
    global samphubmap2
    
    global debug
    if {$debug(tcl,samp)} {
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

    foreach cc $samphub(client,secret) {
	set msgid [SAMPHubCall $cc $secret $id $msgtag $map $mtype $params]
	switch $msgid {
	    OK {continue}
	    ERRROR {return {string ERROR}}
	    default {return "string $msgid"}
	}
    }

    return -code error
}

proc samp.hub.callAll {args} {
    global samphub
    global samphubmap
    global samphubmap2
    
    global debug
    if {$debug(tcl,samp)} {
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
    foreach cc $samphub(client,secret) {
	set id $samphub($cc,id)
	set msgid [SAMPHubCall $cc $secret $id $msgtag $map $mtype $params]
	switch $msgid {
	    OK {continue}
	    ERROR {return {string ERROR}}
	    default {set samphubmap($id) "string $msgid"}
	}
    }

    return "struct samphubmap"
}

proc samp.hub.callAndWait {args} {
    global samphub
    global samphubmap
    global samphubmap2
    
    global debug
    if {$debug(tcl,samp)} {
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

    foreach cc $samphub(client,secret) {
	# ignore hub
	if {$cc == $samphub(secret)} {
	    continue
	}

	# don't send to sender
	# should not happen
	if {$cc == $secret} {
	    continue
	}

	if {$samphub($cc,id) != $id} {
	    continue
	}

	# are we subscribed
	if {![SAMPHubFindSubscription $cc $mtype]} {
	    continue
	}

	set samphub(rr-msgid) {}
	set samphub(rr-map) {}

	catch {unset samphubmap}
	catch {unset samphubmap2}
	set samphubmap(samp.mtype) "string $mtype"
	set samphubmap(samp.params) {struct samphubmap2}

	foreach mm $params {
	    foreach {key val} $mm {
		set samphubmap2($key) "string \"$val\""
	    }
	}

	set param1 [list "string $cc"]
	set param2 [list "string $id"]
	set param3 [list "string foo-$samphub($secret,id)"]
	set param4 [list "struct samphubmap"]
	set params "$param1 $param2 $param3 $param4"

	if {$samphub($cc,web)} {
	    if {$samphub(web,allowReverseCallbacks)} {
		lappend samphub($cc,web,msgs) [SAMPHubGenerateCB $mtype $params]
	    }
	    return {string OK}
	} else {
	    set rr {}
	    if {![SAMPHubSend samp.client.receiveCall $samphub($cc,url) $params rr]} {
		if {$verbose} {
		    Error "SAMPHub: [msgcat::mc {internal error}] $rr"
		}
		return -code error
	    }
	    SAMPHubDialogSentMsg "samp.client.receiveCall\t$samphub($cc,id)\t$rr"

	    set status {}
	    set result {}
	    foreach mm $samphub(rr-map) {
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
	    set samphubmap(samp.result) {struct samphubmap2}

	    foreach mm $result {
		foreach {key val} $mm {
		    set samphubmap2($key) "string \"$val\""
		}
	    }

	    return "struct samphubmap"
	}
    }

    return -code error
}

proc samp.hub.reply {args} {
    global samphub
    
    global debug
    if {$debug(tcl,samp)} {
	puts "samp.hub.reply: $args"
    }

    set secret [lindex $args 0]
    set msgid [lindex $args 1]
    set map [lindex $args 2]

    if {![SAMPHubValidSecret $secret]} {
	return -code error
    }

    SAMPHubDialogRecvdMsg "samp.hub.reply\t$samphub($secret,id)"

    set samphub(rr-msgid) $msgid
    set samphub(rr-map) $map

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

# Application MTypes Subscriptions (recvd)
# client.env.get
# x-samp.affiliation.name
# x-samp.affiliation.url
# x-samp.homepage.url
# x-samp.releasenotes.url
# x-samp.faq.url
# x-samp.authors
# x-samp.release.version


