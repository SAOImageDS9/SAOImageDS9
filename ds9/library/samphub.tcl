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
    global samphubmap
    global samphubmap2

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
    set samphub(cache,images) 1

    set samphub(fn) $fn
    set samphub(port) [lindex [fconfigure [xmlrpc::serve 0] -sockname] 2]
    set samphub(secret) [SAMPHubGenerateKey]
    set samphub(timestamp) "[clock format [clock seconds] -format {%a %b %d %H:%M:%S %Z %Y}]"

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
    puts $ch "hub.impl=org.astrogrid.samp.hub.Hub\$1"
    puts $ch "profile.impl=org.astrogrid.samp.xmlrpc.StandardHubProfile"
    puts $ch "profile.start.date=$samphub(timestamp)"

    close $ch

    set secret 0
    set samphub($secret,id) {hub}
    set samphub($secret,url) {}
    set samphub($secret,subscription) {}
    set samphub($secret,subscription) {{samp.hub.ping}}
    set samphub($secret,restriction) {}
    set samphub($secret,meta) [list \
				   [list samp.name "Hub"] \
				   [list samp.description.text "SAOImageDS9 Internal Hub"] \
				   [list samp.icon.url "http://ds9.si.edu/doc/sun.png"] \
				   [list author.mail "ds9help@cfa.harvard.edu"] \
				   [list author.name {William Joye}] \
				   ]
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
	    Error "SAMPHub: [msgcat::mc {Hub not running}]"
	}
	return
    }

    # shutdown all clients
    foreach cc $samphub(client,secret) {
	catch {unset samphubmap}
	set samphubmap(samp.mtype) {string "samp.hub.event.shutdown"}
	set samphubmap(samp.params) {struct samphubmap2}

	catch {unset samphubmap2}

	set param1 [list "string $samphub(secret)"]
	set param2 [list "string hub"]
	set param3 [list "struct samphubmap"]
	set params "$param1 $param2 $param3"	
	
	set rr {}
	if {![SAMPHubSend {samp.client.receiveNotification} $samphub($cc,url) $params rr]} {
	    if {$verbose} {
		Error "SAMPHub: [msgcat::mc {internal error}] $rr"
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
	puts stderr "SAMPHubSend: url=$url method=$method params=$params"
    }
    
    if {[catch {set result [xmlrpc::call $url xmlrpc $method $params]}]} {
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
    global samphubmap
    global samphubmap2

    set mtype {samp.hub.disconnect}

    catch {unset samphubmap}
    set samphubmap(samp.mtype) "string $mtype"
    set samphubmap(samp.params) {struct samphubmap2}

    catch {unset samphubmap2}

    set param1 [list "string $samphub(secret)"]
    set param2 [list "string hub"]
    set param3 [list "struct samphubmap"]
    set params "$param1 $param2 $param3"	

    set rr {}
    if {![SAMPHubSend {samp.client.receiveNotification} $samphub($secret,url) $params rr]} {
	if {$verbose} {
	    Error "SAMPHub: [msgcat::mc {internal error}] $rr"
	}
    }

    SAMPHubDialogSentMsg "$mtype\t$samphub($secret,id)\t$rr"

    SAMPHubRemove $secret
}

proc SAMPHubRemove {secret} {
    global samphub
    
    set id [lsearch $samphub(client,secret) $secret]
    set samphub(client,secret) [lreplace $samphub(client,secret) $id $id]

    unset samphub($secret,id)
    unset samphub($secret,url)
    unset samphub($secret,subscription)
    unset samphub($secret,restriction)
    unset samphub($secret,meta)
    
    SAMPHubDialogListRemove $secret
}

# procs

proc samp.hub.setXmlrpcCallback {args} {
    global samphub

    global debug
    if {$debug(tcl,samp)} {
	puts "samp.hub.setXmlrpcCallback: args=$args"
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
	puts "samp.hub.register: args=$args"
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
    set samphub($secret,subscription) {}
    set samphub($secret,restriction) {}
    set samphub($secret,meta) {}

    catch {unset samphubmap}
    set samphubmap(samp.hub-id) {string hub}
    set samphubmap(samp.self-id) "string $id"
    set samphubmap(samp.private-key) "string $secret"

    SAMPHubDialogListAdd $secret
    SAMPHubDialogRecvdMsg "samp.hub.register\t$samphub($secret,id)"

    return "struct samphubmap"
}

proc samp.hub.unregister {args} {
    global samphub

    global debug
    if {$debug(tcl,samp)} {
	puts "samp.hub.unregister: args=$args"
    }

    set secret [lindex $args 0]
    set map [lindex $args 1]

    if {![SAMPHubValidSecret $secret]} {
	return {string ERROR}
    }
    
    SAMPHubDialogRecvdMsg "samp.hub.unregister\t$samphub($secret,id)"
    SAMPHubRemove $secret

    return {string OK}
}

proc samp.hub.declareMetadata {args} {
    global samphub

    global debug
    if {$debug(tcl,samp)} {
	puts "samp.hub.declareMetadata: args=$args"
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
    
    SAMPHubDialogMetaUpdate $secret
    SAMPHubDialogListUpdate
    return {string OK}
}

proc samp.hub.getMetadata {args} {
    global samphub
    global samphubmap

    global debug
    if {$debug(tcl,samp)} {
	puts "samp.hub.getMetadata: args=$args"
    }

    set secret [lindex $args 0]
    set id [lindex $args 1]

    if {![SAMPHubValidSecret $secret]} {
	return {string ERROR}
    }

    SAMPHubDialogRecvdMsg "samp.hub.getMetadata\t$samphub($secret,id)"

    catch {unset samphubmap}
    set rr {}
    foreach cc $samphub(client,secret) {
	if {$samphub($cc,id) == $id} {
	    foreach mm $samphub($cc,meta) {
		foreach {key val} $mm {
		    set samphubmap($key) "string \"$val\""
		    append rr "samphubmap($key) "
		}
	    }
	}
    }

    return "struct samphubmap"
}

proc samp.hub.declareSubscriptions {args} {
    global samphub

    global debug
    if {$debug(tcl,samp)} {
	puts "samp.hub.declareSubscriptions: args=$args"
    }

    set secret [lindex $args 0]
    set map [lindex $args 1]
    
    if {![SAMPHubValidSecret $secret]} {
	return {string ERROR}
    }

    SAMPHubDialogRecvdMsg "samp.hub.declareSubscriptions\t$samphub($secret,id)"

    foreach mm $map {
	foreach {ss rr} $mm {
	    lappend samphub($secret,subscription) $ss
	    lappend samphub($secret,restriction) $rr
	}
    }

    SAMPHubDialogListUpdate
    return {string OK}
}

proc samp.hub.getRegisteredClients {args} {
    global samphub
    global samphubmap
    global samphubmap2

    global debug
    if {$debug(tcl,samp)} {
	puts "samp.hub.getRegisteredClients: args=$args"
    }

    set secret [lindex $args 0]
    set map [lindex $args 1]

    if {![SAMPHubValidSecret $secret]} {
	return {string ERROR}
    }

    SAMPHubDialogRecvdMsg "samp.hub.getRegisteredClients\t$samphub($secret,id)"

    # start with hub
    set ll {hub}
    foreach cc $samphub(client,secret) {
	if {$cc == $secret} {
	    continue
	}

	lappend ll $samphub($cc,id)
    }

    catch {unset samphubmap}
    catch {unset samphubmap2}
    set samphubmap2(x-samp.mostly-harmless) {int 1}
    set rr {}
    foreach cc $ll {
	set samphubmap($cc) {struct samphubmap2}
	append rr "$samphubmap($cc) "
    }

    return "struct samphubmap"
}

proc samp.hub.getSubscribedClients {args} {
    global samphub
    global samphubmap
    global samphubmap2

    global debug
    if {$debug(tcl,samp)} {
	puts "samp.hub.getSubscribedClients: args=$args"
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

	foreach ss $samphub($cc,subscription) {
	    if {$ss == $map} {
		lappend ll $samphub($cc,id)
		break
	    }
	}
    }

    catch {unset samphubmap}
    catch {unset samphubmap2}
    set samphubmap2(x-samp.mostly-harmless) {int 1}
    foreach cc $ll {
	set samphubmap($cc) {struct samphubmap2}
    }

    return "struct samphubmap"
}

proc samp.hub.notify {args} {
    global samphub
    global samphubmap
    global samphubmap2

    global debug
    if {$debug(tcl,samp)} {
	puts "samp.hub.notify: args=$args"
    }

    set secret [lindex $args 0]
    set id [lindex $args 1]
    set map [lindex $args 2]

    if {![SAMPHubValidSecret $secret]} {
	return {string ERROR}
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
	if {$samphub($cc,id) != $id} {
	    continue
	}

	# don't send to sender
	# should not happen
	if {$cc == $secret} {
	    continue
	}

	# are we subscribed
	if {[lsearch $samphub($cc,subscription) $mtype]<0} {
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

	set param1 [list "string $cc"]
	set param2 [list "string $samphub($cc,id)"]
	set param3 [list "struct samphubmap"]
	set params "$param1 $param2 $param3"

	set rr {}
	if {![SAMPHubSend samp.client.receiveNotification $samphub($cc,url) $params rr]} {
	    if {$verbose} {
		Error "SAMPHub: [msgcat::mc {internal error}] $rr"
	    }
	}

	SAMPHubDialogSentMsg "$mtype\t$samphub($cc,id)\t$rr"
    }

    return {string OK}
}

proc samp.hub.notifyAll {args} {
    global samphub
    global samphubmap
    global samphubmap2

    global debug
    if {$debug(tcl,samp)} {
	puts "samp.hub.notifyAll: args=$args"
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
	# don't send to sender
	if {$cc == $secret} {
	    continue
	}

	# are we subscribed
	if {[lsearch $samphub($cc,subscription) $mtype]<0} {
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

	set param1 [list "string $cc"]
	set param2 [list "string $samphub($cc,id)"]
	set param3 [list "struct samphubmap"]
	set params "$param1 $param2 $param3"

	set rr {}
	if {![SAMPHubSend samp.client.receiveNotification $samphub($cc,url) $params rr]} {
	    if {$verbose} {
		Error "SAMPHub: [msgcat::mc {internal error}] $rr"
	    }
	}

	SAMPHubDialogSentMsg "$mtype\t$samphub($cc,id)\t$rr"
    }

    return {string OK}
}

proc samp.hub.call {args} {
    global samphub
    global samphubmap
    global samphubmap2
    
    global debug
    if {$debug(tcl,samp)} {
	puts "samp.hub.call: args=$args"
    }

    set secret [lindex $args 0]
    set id [lindex $args 1]
    set msgtag [lindex $args 2]
    set map [lindex $args 3]

    if {![SAMPHubValidSecret $secret]} {
	return {string ERROR}
    }

    SAMPHubDialogRecvdMsg "samp.hub.call\t$samphub($secret,id)"

    # no block
    catch {unset samphub(timeout)}

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
	if {$samphub($cc,id) != $id} {
	    continue
	}

	# don't send to sender
	# should not happen
	if {$cc == $secret} {
	    continue
	}

	# are we subscribed
	if {[lsearch $samphub($cc,subscription) $mtype]<0} {
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

	set param1 [list "string $cc"]
	set param2 [list "string $samphub($secret,id)"]
	set param3 [list "string ${msgid}-${samphub($secret,id)}"]
	set param4 [list "struct samphubmap"]
	set params "$param1 $param2 $param3 $param4"

	set rr {}
	if {![SAMPHubSend samp.client.receiveCall $samphub($cc,url) $params rr]} {
	    if {$verbose} {
		Error "SAMPHub: [msgcat::mc {internal error}] $rr"
	    }
	}

	SAMPHubDialogSentMsg "$mtype\t$samphub($cc,id)\t$rr"

	return {string OK}
    }

    return {string ERROR}
}

proc samp.hub.callAll {args} {
    global samphub
    global samphubmap
    global samphubmap2
    
    global debug
    if {$debug(tcl,samp)} {
	puts "samp.hub.callAll: args=$args"
    }

    set secret [lindex $args 0]
    set msgid [lindex $args 1]
    set map [lindex $args 2]

    if {![SAMPHubValidSecret $secret]} {
	return {string ERROR}
    }

    SAMPHubDialogRecvdMsg "samp.hub.callAll\t$samphub($secret,id)"

    # no block
    catch {unset samphub(timeout)}

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
	# don't send to sender
	if {$cc == $secret} {
	    continue
	}

	# are we subscribed
	if {[lsearch $samphub($cc,subscription) $mtype]<0} {
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

	set param1 [list "string $cc"]
	set param2 [list "string $samphub($secret,id)"]
	set param3 [list "string ${msgid}-${samphub($secret,id)}"]
	set param4 [list "struct samphubmap"]
	set params "$param1 $param2 $param3 $param4"

	set rr {}
	if {![SAMPHubSend samp.client.receiveCall $samphub($cc,url) $params rr]} {
	    if {$verbose} {
		Error "SAMPHub: [msgcat::mc {internal error}] $rr"
	    }
	}

	SAMPHubDialogSentMsg "$mtype\t$samphub($cc,id)\t$rr"
    }

    return {string OK}
}

proc samp.hub.callAndWait {args} {
    global samphub
    global samphubmap
    global samphubmap2
    
    global debug
    if {$debug(tcl,samp)} {
	puts "samp.hub.callAndWait: args=$args"
    }

    set secret [lindex $args 0]
    set id [lindex $args 1]
    set msgtag [lindex $args 2]
    set map [lindex $args 3]
    set timeout [lindex $args 4]

    if {![SAMPHubValidSecret $secret]} {
	return {string ERROR}
    }

    # init block
    set samphub(timeout) ok

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
	if {$samphub($cc,id) != $id} {
	    continue
	}

	# don't send to sender
	# should not happen
	if {$cc == $secret} {
	    continue
	}

	# are we subscribed
	if {[lsearch $samphub($cc,subscription) $mtype]<0} {
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

	set param1 [list "string $cc"]
	set param2 [list "string $samphub($secret,id)"]
	set param3 [list "string ${msgid}-${samphub($secret,id)}"]
	set param4 [list "struct samphubmap"]
	set params "$param1 $param2 $param3 $param4"

	set rr {}
	if {![SAMPHubSend samp.client.receiveCall $samphub($cc,url) $params rr]} {
	    if {$verbose} {
		Error "SAMPHub: [msgcat::mc {internal error}] $rr"
	    }
	}

	SAMPHubDialogSentMsg "$mtype\t$samphub($cc,id)\t$rr"

	if {[string is integer $timeout]} {
	    # if zero, treat as call
	    if {$timeout <= 0} {
		return {string OK}
	    } else {
		set id [after [expr $timeout*1000] set samphub(timeout) error]
		vwait samphub(timeout)
		after cancel $id
		return "string $samphub(timeout)"
	    }
	} else {
	    return {string ERROR}
	}
    }

    return {string ERROR}
}

proc samp.hub.reply {args} {
    global samphub
    global samphubmap
    global samphubmap2
    
    global debug
    if {$debug(tcl,samp)} {
	puts "samp.hub.reply: args=$args"
    }

    set secret [lindex $args 0]
    set msgid [lindex $args 1]
    set map [lindex $args 2]

    if {![SAMPHubValidSecret $secret]} {
	return {string ERROR}
    }

    # is this callAndWait?
    if {[info exists samphub(timeout)]} {
	set samphub(timeout) ok
    }

    SAMPHubDialogRecvdMsg "samp.hub.reply\t$samphub($secret,id)"

    set mm [split $msgid {-}]
    set msgtag [lindex $mm 0]
    set cc [lindex $mm 1]

    set param1 [list "string $msgtag"]
    set param2 [list "struct samphubmap"]
    set params "$param1 $param2"

    set rr {}
    if {![SAMPHubSend samp.client.receiveResponse $samphub($cc,url) $params rr]} {
	if {$verbose} {
	    Error "SAMPHub: [msgcat::mc {internal error}] $rr"
	}
    }

    SAMPHubDialogSentMsg "$mtype\t$samphub($cc,id)\t$rr"
    
    return {string OK}
}

# client to hub
# samp.hub.setXmlrpcCallback
# samp.hub.ping

# samp.hub.register
# samp.hub.unregister
# samp.hub.declareMetadata
# samp.hub.getMetadata
# samp.hub.declareSubscriptions
# samp.hub.getSubscriptions
# samp.hub.getSubscribedClients
# samp.hub.getSubscribedClients(mtype)
# samp.hub.notify
# samp.hub.notifyAll
# samp.hub.call
# samp.hub.callAll
# samp.hub.callAndWait
# samp.hub.relay

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


