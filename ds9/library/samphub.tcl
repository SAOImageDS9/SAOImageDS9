#  Copyright (C) 1999-2021
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

    # are we connected?
    if {[info exists samp]} {
	if {$verbose} {
	    Error "SAMP: [msgcat::mc {already connected}]"
	}
	return
    }

    # can we find a hub?
    if {[SAMPParseHub]} {
	if {$verbose} {
	    Error "SAMP: [msgcat::mc {found existing hub}]"
	}
	return
    }
    
    # ok, we are on our own

    # just in case
    catch {unset samphub}
    
    # home directory
    global tcl_platform
    switch $tcl_platform(platform) {
	unix {
	    set fn [file join [GetEnvHome] {.samp}]
	}
	windows {
	    set fn [file join "$env(HOMEDRIVE)$env(HOMEPATH)" {.samp}]
	}
    }

    # basics
    set samphub(client,seq) 0
    set samphub(client,secret) {}
    set samphub(method) {xmlrpc}

    set samphub(fn) $fn
    set samphub(port) [lindex [fconfigure [xmlrpc::serve 0] -sockname] 2]
    set samphub(secret) [SAMPHubGenerateKey]
    set samphub(timestamp) "[clock format [clock seconds] -format {%a %b %d %H:%M:%S %Z %Y}]"

    if {[catch {set ch [open $fn w 0600]}]} {
	if {$verbose} {
	    Error "SAMP: [msgcat::mc {unable to create hub file}]"
	}
	catch {unset samphub}
	return
    }

    puts $ch "# SAMP Standard Profile lockfile written $samphub(timestamp)"
    puts $ch "# Note contact URL hostname may be configured using jsamp.localhost property"

    puts $ch "samp.secret=$samphub(secret)"
    puts $ch "samp.hub.xmlrpc.url=http://127.0.0.1:$samphub(port)/$samphub(method)"
    puts $ch "samp.profile.version=1.3"
    puts $ch "hub.impl=org.astrogrid.samp.hub.Hub\$1"
    puts $ch "profile.impl=org.astrogrid.samp.xmlrpc.StandardHubProfile"
    puts $ch "profile.start.date=$samphub(timestamp)"

    close $ch

    set secret 0
    set samphub($secret,id) {hub}
    set samphub($secret,url) {}
#    set samphub($secret,subscript) {{samp.app.ping {}}}
    set samphub($secret,restrict) {}
    set samphub($secret,meta) {}
#    set samphub($secret,meta) [list [list id ] [list samp.name hub] [list samp.description.text ] [list samp.icon.url ] [list author.mail ] [list author.name {William Joye}]

    SAMPHubDialogListAdd 0
    SAMPHubDialogUpdate
    UpdateFileMenu
}

proc SAMPHubStop {verbose} {
    global samphub
    global samphubmap
    global samphubmap2

    # hub running?
    if {![info exists samphub]} {
	if {$verbose} {
	    Error "SAMP: [msgcat::mc {Hub not running}]"
	}
	return
    }

    # shutdown all clients
    foreach cc $samphub(client,secret) {
	catch {unset samphubmap}
	set samphubmap(samp.mtype) {string "samp.hub.event.shutdown"}
	set samphubmap(samp.params) {struct samphubmap2}

	catch {unset samphubmap2}

	set param1 [list "string $cc"]
	set param2 [list "string hub"]
	set param3 [list "struct samphubmap"]
	set params "$param1 $param2 $param3"	
	
	set rr {}
	if {![SAMPHubSend {samp.client.receiveNotification} $samphub($cc,url) $params rr]} {
	    if {$verbose} {
		Error "SAMP: [msgcat::mc {internal error}] $rr"
	    }
	}

	SAMPHubDialogListRemove $cc
    }

    # remove hub
    SAMPHubDialogListRemove 0

    catch {file delete -force $samphub(fn)}
    unset samphub

    SAMPHubDialogUpdate
    UpdateFileMenu
}

proc SAMPHubGenerateKey {} {
    return [binary encode hex [binary format f* [list [expr rand()] [expr rand()]]]]
}

proc SAMPHubValidSecret {secret} {
    global samphub
    global debug
    
    if {![info exists samphub($secret,id)]} {
	if {$debug(tcl,samp)} {
	    puts "SAMPHub: bad private-key $secret"
	}
	return 0
    }
    return 1
}

proc SAMPHubSend {method url params resultVar} {
    upvar $resultVar result

    global samphub

    global debug
    if {$debug(tcl,samp)} {
	puts stderr "SAMPHubSend: $url $samphub(method) $method $params"
    }
    
    if {[catch {set result [xmlrpc::call $url $samphub(method) $method $params]}]} {
	if {$debug(tcl,samp)} {
	    puts stderr "SAMPSend Error: $result"
	}
	return 0
    }

    # reset error if needed
    # xmlrpc leaves error msgs
    InitError samp

    if {$debug(tcl,samp)} {
	puts stderr "SAMPSend Result: $result"
    }

    return 1
}

# procs

proc samp.hub.register {args} {
    global samphub
    global samphubmap

    global debug
    if {$debug(tcl,samp)} {
	puts "samp.hub.register: $args"
    }

    if {$samphub(secret) != $args} {
	return {string ERROR}
    }

    incr samphub(client,seq)
    set secret [SAMPHubGenerateKey]
    set id "c${samphub(client,seq)}"

    lappend samphub(client,secret) $secret

    set samphub($secret,id) $id
    set samphub($secret,url) {}
    set samphub($secret,subscript) {}
    set samphub($secret,restrict) {}
    set samphub($secret,meta) {}

    catch {unset samphubmap}
    set samphubmap(samp.hub-id) {string hub}
    set samphubmap(samp.self-id) "string $id"
    set samphubmap(samp.private-key) "string $secret"

    SAMPHubDialogListAdd $secret
    SAMPHubDialogRecvdMsg "samp.hub.register\t$samphub($secret,id)"
    SAMPHubDialogSentMsg "samp.hub.register\t$samphub($secret,id)\t$samphubmap(samp.hub-id) $samphubmap(samp.self-id) $samphubmap(samp.private-key)"

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

    if {![SAMPHubValidSecret $secret]} {
	return {string ERROR}
    }
    
    SAMPHubDialogRecvdMsg "samp.hub.unregister\t$samphub($secret,id)"

    set id [lsearch $samphub(client,secret) $secret]
    set samphub(client,secret) [lreplace $samphub(client,secret) $id $id]

    unset samphub($secret,id)
    unset samphub($secret,url)
    unset samphub($secret,subscript)
    unset samphub($secret,restrict)
    unset samphub($secret,meta)
    
    SAMPHubDialogListRemove $secret
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
	return {string ERROR}
    }
    
    SAMPHubDialogRecvdMsg "samp.hub.declareMetadata\t$samphub($secret,id)"

    foreach mm $map {
	foreach {key val} $mm {
	    lappend samphub($secret,meta) [list $key $val]
	}
    }
    
    SAMPHubDialogListUpdate
    return {string OK}
}

proc samp.hub.setXmlrpcCallback {args} {
    global samphub

    global debug
    if {$debug(tcl,samp)} {
	puts "samp.hub.setXmlrpcCallback: $args"
    }

    set secret [lindex $args 0]
    set map [lindex $args 1]

    if {![SAMPHubValidSecret $secret]} {
	return {string ERROR}
    }

    SAMPHubDialogRecvdMsg "samp.hub.setXmlrpcCallback\t$samphub($secret,id)"

    set samphub($secret,url) $map

    return {string OK}
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
	return {string ERROR}
    }

    SAMPHubDialogRecvdMsg "samp.hub.declareSubscriptions\t$samphub($secret,id)"

    foreach mm $map {
	foreach {ss rr} $mm {
	    lappend samphub($secret,subscript) $ss
	    lappend samphub($secret,restrict) $rr
	}
    }

    SAMPHubDialogListUpdate
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
    set map [lindex $args 1]

    if {![SAMPHubValidSecret $secret]} {
	return {string ERROR}
    }

    SAMPHubDialogRecvdMsg "samp.hub.getMetadata\t$samphub($secret,id)"

    catch {unset samphubmap}
    set rr {}
    foreach cc $samphub(client,secret) {
	if {$samphub($cc,id) == $map} {
	    foreach mm $samphub($cc,meta) {
		foreach {key val} $mm {
		    set samphubmap($key) "string \"$val\""
		    append rr "samphubmap($key) "
		}
	    }
	}
    }

    SAMPHubDialogSentMsg "samp.hub.getMetadata\t$samphub($secret,id)\t$rr"
    return "struct samphubmap"
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
	return {string ERROR}
    }

    SAMPHubDialogRecvdMsg "samp.hub.getSubscribedClients\t$samphub($secret,id)"

    set ll {}
    foreach cc $samphub(client,secret) {
	if {$cc == $secret} {
	    continue
	}

	foreach ss $samphub($secret,subscript) {
	    if {$ss == $map} {
		lappend ll $samphub($cc,id)
	    }
	}
    }

    catch {unset samphubmap}
    catch {unset samphubmap2}
    set samphubmap2(x-samp.mostly-harmless) {int 1}
    set rr {}
    foreach cc $ll {
	set samphubmap($cc) {struct samphubmap2}
	append rr "$samphubmap($cc) "
    }

    SAMPHubDialogSentMsg "samp.hub.getSubscribedClients\t$samphub($secret,id)\t$rr"
    return "struct samphubmap"
}

proc samp.hub.notify {args} {
    global samphub
    global samphubmap
    global samphubmap2

    global debug
    if {$debug(tcl,samp)} {
	puts "samp.hub.notify: $args"
    }

    set secret [lindex $args 0]
    set map [lindex $args 1]

    if {![SAMPHubValidSecret $secret]} {
	return {string ERROR}
    }

    SAMPHubDialogRecvdMsg "samp.hub.notify\t$samphub($secret,id)"

    return {string OK}
}

proc samp.hub.notifyAll {args} {
    global samphub
    global samphubmap
    global samphubmap2

    global debug
    if {$debug(tcl,samp)} {
	puts "samp.hub.notifyAll: $args"
    }

    set secret [lindex $args 0]
    set map [lindex $args 1]

    if {![SAMPHubValidSecret $secret]} {
	return {string ERROR}
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

    foreach cc $samphub(client,secret) {
	if {$cc == $secret} {
	    continue
	}

	catch {unset samphubmap}
	set samphubmap(samp.mtype) "string $mtype"
	set samphubmap(samp.params) {struct samphubmap2}

	catch {unset samphubmap2}
	foreach mm $iparams {
	    foreach {key val} $mm {
		set samphubmap2($key) "string \"[XMLQuote $val]\""
	    }
	}

	set param1 [list "string $samphub(secret)"]
	set param2 [list "string $samphub($cc,id)"]
	set param3 [list "struct samphubmap"]
	set params "$param1 $param2 $param3"

	set rr {}
	if {![SAMPHubSend samp.client.receiveNotification $samphub($cc,url) $params rr]} {
	    if {$verbose} {
		Error "SAMP: [msgcat::mc {internal error}] $rr"
	    }
	}

	SAMPHubDialogSentMsg "$mtype\t$samphub($cc,id)\t$rr"
    }

    return {string OK}
}

proc samp.hub.call {args} {
    return {string OK}
}

proc samp.hub.callAll {args} {
    return {string OK}
}

proc samp.hub.callAndWait {args} {
    return {string OK}
}

# client to hub
# samp.hub.register
# samp.hub.unregister
# samp.hub.declareMetadata
# samp.hub.setXmlrpcCallback
# samp.hub.declareSubscriptions
# samp.hub.getMetadata
# samp.hub.getSubscriptions
# samp.hub.getSubscribedClients
# samp.hub.notify
# samp.hub.notifyAll
# samp.hub.call
# samp.hub.callAll
# samp.hub.callAndWait

# hub to all clients with change of state
# samp.hub.event.shutdown
# samp.hub.event.register $id
# samp.hub.event.unregister $id
# samp.hub.event.metadata $id
# samp.hub.event.subscriptions $id

# hub to a client
# samp.hub.disconnect (force disconnect, no response expected)

# client recvd and respond to hub
# samp.app.ping
# samp.app.status
# samp.msg.progress

# hub recvd from client
# samp.app.ping

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


