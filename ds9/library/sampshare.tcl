#  Copyright (C) 1999-2023
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc SAMPConnectInit {verbose output debug} {
    global samp

    # connected?
    if {[info exists samp]} {
	if {$samp(verbose)} {
	    SAMPError "SAMP: already connected"
	}
	return
    }

    # reset samp array
    catch {unset samp}

    set samp(verbose) $verbose
    set samp(output) $output
    set samp(debug) $debug
    
    set samp(clients) {}
    set samp(tmp,files) {}
    set samp(msgtag) {}
    set samp(timeout) 30

    # can we find a hub?
    if {![SAMPParseHub]} {
	if {$samp(verbose)} {
	    SAMPError "SAMP: unable to locate HUB"
	}
	catch {unset samp}
	# Error
	return
    }

    # samp initalization started
    set samp(init) 0

    # register
    SAMPConnectRegister

    # declare metadata
    SAMPConnectMetadata
    
    # who are we
    set samp(sock) [xmlrpcServe 0]
    set samp(port) [lindex [fconfigure $samp(sock) -sockname] 2]
    set samp(home) "[info hostname]:$samp(port)"

    # callback
    SAMPConnectCallback

    # declare subscriptions
    SAMPConnectSubscriptions

    # get current client info
    set samp(clients) [SAMPConnectGetClients]
    foreach cc $samp(clients) {
	SAMPConnectGetSubscriptions $cc
	SAMPConnectGetMetadata $cc
    }

    # samp initalization started
    set samp(init) 1

    SAMPUpdateMenus
}

proc SAMPConnectRegister {} {
    global samp
    
    set params [list [list param [list value [list string $samp(secret)]]]]
    if {![SAMPSend samp.hub.register $params rr]} {
	catch {unset samp}
	# Error
	return
    }

    # first param
    set rr [lindex $rr 0]
    set rr [lindex $rr 1]

    rpcStruct2List $rr ll
    foreach {key val} [lindex $ll 0] {
	switch -- $key {
	    samp.hub-id {set samp(hub) $val}
	    samp.self-id {set samp(self) $val}
	    samp.private-key {set samp(private) $val}
	}
    }
}

proc SAMPConnectCallback {} {
    global samp
    
    set param1 [list param [list value [list string $samp(private)]]]
    set param2 [list param [list value [list string "http://$samp(home)"]]]
    set params [list $param1 $param2]

    if {![SAMPSend samp.hub.setXmlrpcCallback $params rr]} {
	catch {unset samp}
	# Error
	return
    }
}

proc SAMPConnectGetClients {} {
    global samp
    
    set params [list [list param [list value [list string $samp(private)]]]]
    if {![SAMPSend samp.hub.getRegisteredClients $params rr]} {
	catch {unset samp}
	# Error
	return
    }

    # first param
    set rr [lindex $rr 0]
    set rr [lindex $rr 1]

    rpcArray2List $rr ll
    return $ll
}

proc SAMPConnectGetSubscriptions {cc} {
    global samp

    set param1 [list param [list value [list string $samp(private)]]]
    set param2 [list param [list value [list string $cc]]]
    set params [list $param1 $param2]
    if {![SAMPSend samp.hub.getSubscriptions $params rr]} {
	catch {unset samp}
	# Error
	return
    }
    
    # first param
    set rr [lindex $rr 0]
    set rr [lindex $rr 1]

    rpcStruct2List $rr ll 
    set samp($cc,subscriptions) [lindex $ll 0]
}

proc SAMPConnectGetMetadata {cc} {
    global samp

    set param1 [list param [list value [list string $samp(private)]]]
    set param2 [list param [list value [list string $cc]]]
    set params [list $param1 $param2]
    if {![SAMPSend samp.hub.getMetadata $params rr]} {
	catch {unset samp}
	# Error
	return
    }
    
    # first param
    set rr [lindex $rr 0]
    set rr [lindex $rr 1]

    rpcStruct2List $rr ll
    foreach {key val} [lindex $ll 0] {
	switch -- $key {
	    samp.name {set samp($cc,name) $val}
	}
    }
}

proc SAMPDisconnect {} {
    global samp

    # connected?
    if {![info exists samp]} {
	if {$samp(verbose)} {
	    SAMPError "SAMP: not connected"
	}
	return
    }

    # disconnect
    set params [list [list param [list value [list string $samp(private)]]]]
    if {![SAMPSend samp.hub.unregister $params rr]} {
	catch {unset samp}
	# Error
	return
    }
    SAMPShutdown
    SAMPUpdateMenus
}

proc SAMPShutdown {} {
    global samp

    # delete any files
    SAMPDelTmpFiles

    # close the server socket if still up
    catch {close $samp(sock)}

    # unset samp array
    catch {unset samp}
}

proc SAMPSend {method params resultVar} {
    upvar $resultVar result
    global samp

    if {$samp(debug)} {
	puts stderr "SAMPSend: $samp(url) $samp(method) $method $params"
    }

    if {[catch {set result [xmlrpcCall $samp(url) $samp(method) $method $params]}]} {
	if {$samp(debug)} {
	    puts stderr "SAMPSend: bad xmlrpcCAll"
	}
	# Error
	return 0
    }

    if {$samp(debug)} {
	puts stderr "SAMPSend Result: $result"
    }

    switch $method {
	samp.hub.notify -
	samp.hub.notifyAll {}

	samp.hub.call -
	samp.hub.callAll {
	    # and now we wait
	    # must be set before
	    vwait samp(msgtag)
	}

	samp.hub.callAndWait {
	    SAMPrpc2List [list params $result] args
	    
	    set map [lindex $args 0]

	    set status {}
	    set value {}
	    set error {}
	    foreach mm $map {
		foreach {key val} $mm {
		    switch -- $key {
			samp.status {set status $val}
			samp.result {set value [lindex $val 1]}
			samp.error  {set error [lindex $val 1]}
		    }
		}
	    }

	    if {$samp(output)} {
		puts -nonewline "$status $value $error"
	    }
	}
    }

    return 1
}

proc SAMPReply {msgid status {result {}} {url {}} {error {}}} {
    global samp

    if {$samp(debug)} {
	puts stderr "SAMPReply $msgid $status"
    }

    switch -- $status {
	OK {
	    if {$result != {}} {
		set map2(value) "string \"$result\""
	    }
	    if {$url != {}} {
		set map2(url) "string \"$url\""
	    }
	    set m2 [list2rpcMember [array get map2]]

	    set map(samp.status) {string samp.ok}
	    set map(samp.result) [list struct $m2]
	    set m1 [list2rpcMember [array get map]]

	    set param3 [list param [list value [list struct $m1]]]
	}
	WARNING {
	    set map3(samp.errortxt) "string $error"
	    set m3 [list2rpcMember [array get map3]]

	    if {$result != {}} {
		set map2(value) "string \"$result\""
	    }
	    if {$url != {}} {
		set map2(url) "string \"$url\""
	    }
	    set m2 [list2rpcMember $map2]

	    set map(samp.status) {string samp.warning}
	    set map(samp.result) [list struct $m2]
	    set map(samp.error)  [list struct $m3]
	    set m1 [list2rpcMember [array get map]]

	    set param3 [list param [list value [list struct $m1]]]
	}
	ERROR {
	    set map3(samp.errortxt) "string $error"
	    set m3 [list2rpcMember [array get map3]]

	    set map(samp.status) {string samp.error}
	    set map(samp.error) [list struct $m3]
	    set map(samp.errortxt) "string $error"
	    set m1 [list2rpcMember [array get map]]

	    set param3 [list param [list value [list struct $m1]]]
	}
    }
    set param1 [list param [list value [list string $samp(private)]]]
    set param2 [list param [list value [list string $msgid]]]

    set params [list $param1 $param2 $param3]
    SAMPSend samp.hub.reply $params rr
}

# client events

proc samp.client.receiveNotification {rpc} {
    global samp
    
    if {$samp(debug)} {
	puts stderr "samp.client.receiveNotification $rpc"
    }
    
    SAMPrpc2List $rpc args
    
    set secret [lindex $args 0]
    set id [lindex $args 1]
    set map [lindex $args 2]

    if {$secret != $samp(private)} {
	if {$samp(debug)} {
	    puts stderr "samp.client.receiveNotification bad secret"
	}
	# Error
	return {string ERROR}
    }

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

    after 0 "$mtype {} $params"
    return {string OK}
}

proc samp.client.receiveCall {rpc} {
    global samp

    if {$samp(debug)} {
	puts stderr "samp.client.receiveCall $rpc"
    }

    SAMPrpc2List $rpc args

    set secret [lindex $args 0]
    set id [lindex $args 1]
    set msgid [lindex $args 2]
    set map [lindex $args 3]

    if {$secret != $samp(private)} {
	if {$samp(debug)} {
	    puts stderr "samp.client.receiveCall bad secret"
	}
	# Error
	return {string ERROR}
    }

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

    after 0 "$mtype \{$msgid\} $params"
    return {string OK}
}

proc samp.client.receiveResponse {rpc} {
    global samp

    SAMPrpc2List $rpc args

    set secret [lindex $args 0]
    set id [lindex $args 1]
    set msgtag [lindex $args 2]
    set map [lindex $args 3]

    if {$secret != $samp(private)} {
	puts {SAMP-Test: samp.client.recievedResponse bad secret}
	# Error
	return {string ERROR}
    }

    if {$msgtag != $samp(msgtag)} {
	puts {SAMP-Test: samp.client.recievedResponse bad msgtag}
	# Error
	return {string ERROR}
    }
    set samp(msgtag) {}

    set status {}
    set value {}
    set error {}
    foreach mm $map {
	foreach {key val} $mm {
	    switch -- $key {
		samp.status {set status $val}
		samp.result {set value [lindex $val 1]}
		samp.error  {set error [lindex $val 1]}
	    }
	}
    }

    if {$samp(output)} {
	puts -nonewline "$status $value $error"
    }

    return {string OK}
}

proc samp.hub.event.shutdown {msgid args} {
    global samp
    
    if {$samp(debug)} {
	puts stderr "samp.hub.event.shutdown $args"
    }

    SAMPShutdown
    SAMPUpdateMenus

    if {$msgid != {}} {
	SAMPReply $msgid OK
    }
}

proc samp.hub.event.register {msgid args} {
    global samp

    if {$samp(debug)} {
	puts stderr "samp.hub.event.register $args"
    }

    foreach {key val} $args {
	switch -- $key {
	    id {
		lappend samp(clients) $val
		set samp($val,subscriptions) {}
		set samp($val,name) {}
	    }
	}
    }

    if {$msgid != {}} {
	SAMPReply $msgid OK
    }
}

proc samp.hub.event.unregister {msgid args} {
    global samp

    if {$samp(debug)} {
	puts stderr "samp.hub.event.unregister $args"
    }

    foreach {key val} $args {
	switch -- $key {
	    id {
		set id [lsearch $samp(clients) $val]
		set samp(clients) [lreplace $samp(clients) $id $id]
		unset samp($val,subscriptions)
		unset samp($val,name)
	    }
	}
    }

    SAMPUpdateMenus

    if {$msgid != {}} {
	SAMPReply $msgid OK
    }
}

proc samp.hub.event.metadata {msgid args} {
    global samp

    if {$samp(debug)} {
	puts stderr "samp.hub.event.metadata $args"
    }

    set id {}
    set name {}
    foreach {key val} $args {
	switch -- $key {
	    id {set id $val}
	    metadata {
		foreach {key2 val2} $val {
		    if {$key2 == {samp.name}} {
			set name $val2
		    }
		}
	    }
	}
    }
    
    # should not happen
    if {$id == {}} {
	return
    }

    # just ignore if ourself
    if {$id == $samp(self)}  {
	return
    }

    set samp($id,name) $name

    SAMPUpdateMenus

    if {$msgid != {}} {
	SAMPReply $msgid OK
    }
}

proc samp.hub.event.subscriptions {msgid args} {
    global samp

    if {$samp(debug)} {
	puts stderr "samp.hub.event.subscriptions $args"
    }

    set cc {}
    set ll {}
    foreach {key val} $args {
	switch -- $key {
	    id {set cc $val}
	    subscriptions {lappend ll $val}
	}
    }
    
    # should not happen
    if {$cc == {}} {
	return
    }

    # just ignore if ourself
    if {$cc == $samp(self)}  {
	return
    }

    set samp($cc,subscriptions) [lindex $ll 0]

    SAMPUpdateMenus

    if {$msgid != {}} {
	SAMPReply $msgid OK
    }
}

proc samp.hub.disconnect {msgid args} {
    global samp
    
    if {$samp(debug)} {
	puts stderr "samp.hub.disconnect $args"
    }

    set msg {}

    foreach {key val} $args {
	switch -- $key {
	    reason {set msg $val}
	}
    }

    SAMPShutdown
    SAMPUpdateMenus
}

proc samp.app.ping {msgid args} {
    global samp

    if {$samp(debug)} {
	puts stderr "samp.app.ping $args"
    }

    if {$msgid != {}} {
	SAMPReply $msgid OK
    }
}

proc client.env.get {msgid args} {
    global samp

    if {$samp(debug)} {
	puts stderr "client.env.get $msgid $args"
    }

    set name {}

    foreach {key val} $args {
	switch -- $key {
	    name {set name $val}
	}
    }

    global env
    if {[catch {set rr $env($name)}]} {
	SAMPReply $msgid ERROR {} {} [lindex [split $errorInfo "\n"] 0]
	global errorInfo
	set errorInfo {}
    } else {
	SAMPReply $msgid OK $rr
    }
}

# Support

proc SAMPParseHub {} {
    global samp
    global env

    set fn {}

    if {[info exists env(SAMP_HUB)]} {
	if {$env(SAMP_HUB) != {}} {
	    set exp {std-lockurl:(.*)}
	    if {[regexp $exp $env(SAMP_HUB) dummy url]} {

		ParseURL $url rr
		switch -- $rr(scheme) {
		    ftp {
			set fn [tmpnam {.samp}]
			lappend samp(tmp,files) $fn
			GetFileFTP $rr(authority) $rr(path) $fn
		    }
		    file {set fn $rr(path)}
		    http -
		    https -
		    default {
			set fn [tmpnam {.samp}]
			lappend samp(tmp,files) $fn
			GetFileHTTP $url $fn
		    }
		}
	    }
	}
    }

    if {$fn == {}} {
	set fn [file join [GetEnvHome] {.samp}]
    }

    # no hub to be found
    if {![file exist $fn]} {
	return 0
    }
    if {[catch {set fp [open $fn r]}]} {
	return 0
    }

    set samp(secret) {}
    set samp(url) {}
    set samp(method) {}
    set samp(fn) $fn

    while {1} {
	if {[gets $fp line] == -1} {
	    break
	}

	# skip any comments
	if {[string range $line 0 0] == "#"} {
	    continue;
	}

	if {[regexp -nocase {samp.secret=(.*)} $line foo ss]} {
	    set samp(secret) $ss
	}
	if {[regexp -nocase {samp.hub.xmlrpc.url=(.*)} $line foo url]} {
	    if {[ParseURL $url r]} {
		set samp(url) $r(scheme)://$r(authority)
		set samp(method) [string range $r(path) 1 end]
	    }
	}
    }
    catch {close $fp}

    if {$samp(secret) == {} || $samp(url) == {}} {
	SAMPDelTmpFiles
	catch {unset samp}
	return 0
    }

    if {$samp(debug)} {
	puts stderr "SAMPParseHub: $samp(secret) $samp(url) $samp(method)"
    }
    return 1
}

proc SAMPGetAppsImage {} {
    global samp

    set ll {}
    foreach cc [SAMPGetAppsSubscriptions image.load.fits] {
	lappend ll [list $cc $samp($cc,name)]
    }
    return $ll
}

proc SAMPGetAppsTable {} {
    global samp

    set ll {}
    foreach cc [SAMPGetAppsSubscriptions table.load.fits] {
	lappend ll [list $cc $samp($cc,name)]
    }
    return $ll
}

proc SAMPGetAppsVOTable {} {
    global samp

    set ll {}
    foreach cc [SAMPGetAppsSubscriptions table.load.votable] {
	lappend ll [list $cc $samp($cc,name)]
    }
    return $ll
}

proc SAMPGetAppsSubscriptions {mtype} {
    global samp

    set ll {}
    foreach cc $samp(clients) {
	foreach {key val} $samp($cc,subscriptions) {
	    if {$key == $mtype} {
		lappend ll $cc
	    }
	}
    }
    return $ll
}

proc SAMPrpc2List {rpc varname} {
    upvar $varname var

    # params
    set rpc [lindex $rpc 1]

    # each param
    foreach pp $rpc {
	rpcParams2List [lindex $pp 1] var
    }
}

proc SAMPDelTmpFiles {} {
    global samp

    # delete any tmp files
    if {[info exists samp]} {
	if {[info exists samp(tmp,files)]} {
	    foreach fn $samp(tmp,files) {
		catch {file delete -force "$fn"}
	    }
	}
    }
}

