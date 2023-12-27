#  Copyright (C) 1999-2024
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide SAMPHub 1.0
package require SAMPXMLRPC
package require Thread

proc SAMPHubDef {} {
    global isamphub

    set isamphub(top) .samphub
    set isamphub(mb) .samphubmb
}

proc SAMPHubStart {verbose} {
    global samp
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

    set samp(debug) $debug(tcl,samp)
    tsv::set samphub debug $debug(tcl,samp)

    if {[SAMPParseHub]} {
	# ok, found one, is it alive?
	set rr {}
	if {[SAMPHubSend {samp.hub.ping} $samp(url) {} rr]} {
	    # yes, its alive
	    if {$verbose} {
		Error "SAMPHub: [msgcat::mc {found existing hub}]"
	    }
	    catch {unset samp}
	    tsv::unset samphub

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
    catch {unset samp}
    tsv::unset samphub
    
    # basics
    tsv::set samphub verbose $verbose
    tsv::set samphub debug $debug(tcl,samp)
    tsv::set samphub fn [file join [GetEnvHome] {.samp}]
    tsv::set samphub cw,cnt 0

    tsv::set samphub client,seq 0
    tsv::set samphub client,secret {}
    tsv::set samphub cache,images 1

    tsv::set samphub secret [SAMPHubGenerateKey]
    tsv::set samphub timestamp "[clock format [clock seconds] -format {%a %b %d %H:%M:%S %Z %Y}]"

    tsv::set samphub web,sock {}
    tsv::set samphub web,port 0
    tsv::set samphub web,allowReverseCallbacks 0

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

    if {[tsv::get samphub debug]} {
	puts "SAMPHubStart: [tsv::get samphub secret] [tsv::get samphub [tsv::get samphub secret],id]"
    }

    SAMPHubDialogListAdd [tsv::get samphub secret]
    SAMPHubDialogUpdate
    UpdateFileMenu
}

proc SAMPHubStartConnect {} {
    global pds9

    if {[catch {tsv::set samphub sock [xmlrpcServe 0]}]} {
	Error "SAMPHub: [msgcat::mc {unable to open hub}]"
	tsv::unset samphub
	return 0
    }
    tsv::set samphub port [lindex [fconfigure [tsv::get samphub sock] -sockname] 2]

    if {$pds9(samp,webhub)} {
	if {[catch {tsv::set samphub web,sock [xmlrpcServe 21012]}]} {
	    Error "SAMPHub: [msgcat::mc {unable to open web hub}]"
	} else {
	    tsv::set samphub web,port [lindex [fconfigure [tsv::get samphub web,sock] -sockname] 2]
	}
    }

    return 1
}

proc SAMPHubStartProfile {} {

    if {[catch {set ch [open [tsv::get samphub fn] w 0600]}]} {
	if {[tsv::get samphub verbose]} {
	    Error "SAMPHub: [msgcat::mc {unable to create hub file}]"
	}
	return 0
    }

    puts $ch "# SAMP Standard Profile lockfile written [tsv::get samphub timestamp]"
    puts $ch "# Note contact URL hostname may be configured using jsamp.localhost property"

    puts $ch "samp.secret=[tsv::get samphub secret]"
    puts $ch "samp.hub.xmlrpc.url=http://127.0.0.1:[tsv::get samphub port]/xmlrpc"
    puts $ch "samp.profile.version=1.3"
    puts $ch "profile.start.date=[tsv::get samphub timestamp]"

    close $ch

    return 1
}

proc SAMPHubStartRegister {} {

    tsv::lappend samphub client,secret [tsv::get samphub secret]
    tsv::set samphub [tsv::get samphub secret],id {hub}
    tsv::set samphub [tsv::get samphub secret],url {}
    tsv::set samphub [tsv::get samphub secret],subscriptions \
	{{samp.hub.ping {}}}
    tsv::set samphub [tsv::get samphub secret],metadata \
	[list \
	     [list samp.name "Hub"] \
	     [list samp.description.text "SAOImageDS9 Internal Hub"] \
	     [list samp.icon.url "http://ds9.si.edu/bandw.png"] \
	     [list author.mail "ds9help@cfa.harvard.edu"] \
	     [list author.name {William Joye}] \
	    ]
}

proc SAMPHubStop {} {
    # hub running?
    if {![tsv::exists samphub secret]} {
	if {[tsv::get samphub verbose]} {
	    Error "SAMPHub: [msgcat::mc {Hub not running}]"
	}
	return
    }

    # shutdown all clients
    set mtype {samp.hub.event.shutdown}

    set map1(samp.mtype) "string $mtype"
    set map1(samp.params) [list struct {}]
    set m1 [xmlrpcList2Member [array get map1]]

    foreach cc [tsv::get samphub client,secret] {
	# ignore hub
	if {$cc == [tsv::get samphub secret]} {
	    continue
	}

	# are we subscribed
	if {![SAMPHubFindSubscription $cc $mtype]} {
	    continue
	}

	# only standard clients
	if {[tsv::get samphub $cc,web]} {
	    continue
	}

	set param1 [list param [list value [list string $cc]]]
	set param2 [list param [list value [list string [tsv::get samphub [tsv::get samphub secret],id]]]]
	set param3 [list param [list value [list struct $m1]]]
	set params [list params [list $param1 $param2 $param3]]

	# some clients insist on sending samp.hub.unregister
	tsv::set samphub remove $cc
	set rr {}
	SAMPHubSend {samp.client.receiveNotification} \
	    [tsv::get samphub $cc,url] $params rr
	tsv::unset samphub remove
	SAMPHubDialogSentMsg "$mtype\t[tsv::get samphub $cc,id]"
	SAMPHubRemove $cc
    }

    # remove hub
    SAMPHubDialogListRemove [tsv::get samphub secret]

    catch {file delete -force [tsv::get samphub fn]}

    # close the server socket if still up
    catch {close [tsv::get samphub web,sock]}
    catch {close [tsv::get samphub sock]}
    tsv::unset samphub

    SAMPHubDialogUpdate
    UpdateFileMenu
}

proc SAMPHubGenerateKey {} {
    return [binary encode hex [binary format f* [list [expr rand()] [expr rand()]]]]
}

proc SAMPHubValidSecret {secret} {
    if {![tsv::exists samphub $secret,id]} {
	DumpCallStack
	if {[tsv::get samphub debug]} {
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
    foreach cc [tsv::get samphub client,secret] {
	if {$id == [tsv::get samphub $cc,id]} {
	    return $cc
	}
    }
    return -code error
}

proc SAMPHubFindSubscription {cc mtype} {
    foreach sub [tsv::get samphub $cc,subscriptions] {
	foreach {mm attr} $sub {
	    if {$mm == $mtype} {
		return 1
	    }
	}
    }
    return 0
}

proc SAMPHubDisconnect {secret} {
    # ignore hub
    if {$secret == [tsv::get samphub secret]} {
	return
    }

    set mtype {samp.hub.disconnect}

    # are we subscribed
    if {![SAMPHubFindSubscription $secret $mtype]} {
	SAMPHubRemove $secret
	return
    }

    # only standard clients
    if {[tsv::get samphub $secret,web]} {
	SAMPHubRemove $secret
	return
    }

    set map2(reason) {string disconnect}
    set m2 [xmlrpcList2Member [array get map2]]
    
    set map1(samp.mtype) "string $mtype"
    set map1(samp.params) [list struct $m2]
    set m1 [xmlrpcList2Member [array get map1]]

    set param1 [list param [list value [list string $secret]]]
    set param2 [list param [list value [list string [tsv::get samphub [tsv::get samphub secret],id]]]]
    set param3 [list param [list value [list struct $m1]]]
    set params [list params [list $param1 $param2 $param3]]

    # some clients insist on sending samp.hub.unregister
    tsv::set samphub remove $secret
    set rr {}
    SAMPHubSend {samp.client.receiveNotification} \
	[tsv::get samphub $secret,url] $params rr
    tsv::unset samphub remove
    SAMPHubDialogSentMsg "$mtype\t[tsv::get samphub $secret,id]"

    # update other clients
    # notify others before removing
    set mtype {samp.hub.event.unregister}

    set map2(id) "string [tsv::get samphub $secret,id]"
    set m2 [xmlrpcList2Member [array get map2]]

    set map1(samp.mtype) "string $mtype"
    set map1(samp.params) [list struct $m2]
    set m1 [xmlrpcList2Member [array get map1]]

    foreach cc [tsv::get samphub client,secret] {
	# ignore hub
	if {$cc == [tsv::get samphub secret]} {
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
	set param2 [list param [list value [list string [tsv::get samphub [tsv::get samphub secret],id]]]]
	set param3 [list param [list value [list struct $m1]]]
	set params [list params [list $param1 $param2 $param3]]

	if {[tsv::get samphub $cc,web]} {
	    if {[tsv::get samphub web,allowReverseCallbacks]} {
		tsv::lappend samphub $cc,web,msgs \
		    [SAMPHubGenerateCB $mtype $params]
	    }
	} else {
	    set rr {}
	    SAMPHubSend {samp.client.receiveNotification} \
		[tsv::get samphub $cc,url] $params rr
	    SAMPHubDialogSentMsg "$mtype\t[tsv::get samphub $cc,id]"
	}
    }

    SAMPHubRemove $secret
}

proc SAMPHubRemove {secret} {
    if {[tsv::get samphub debug]} {
	puts stderr "SAMPHubRemove: $secret"
    }

    # should not happen
    if {$secret == [tsv::get samphub secret]} {
	return
    }

    SAMPHubDialogListRemove $secret
    
    set id [lsearch [tsv::get samphub client,secret] $secret]
    tsv::set samphub client,secret [lreplace [tsv::get samphub client,secret] $id $id]

    tsv::unset samphub $secret,id
    tsv::unset samphub $secret,url
    tsv::unset samphub $secret,subscriptions
    tsv::unset samphub $secret,metadata
}

proc SAMPHubRegister {args web} {
    if {[tsv::get samphub secret] != $args} {
	return -code error
    }

    tsv::incr samphub client,seq
    set secret [SAMPHubGenerateKey]
    set id "c[tsv::get samphub client,seq]"

    tsv::lappend samphub client,secret $secret

    tsv::set samphub $secret,id $id
    tsv::set samphub $secret,url {}
    tsv::set samphub $secret,subscriptions {}
    tsv::set samphub $secret,metadata {}
    tsv::set samphub $secret,web $web
    tsv::set samphub $secret,web,msgs {}

    SAMPHubDialogRecvdMsg "samp.hub.register\t[tsv::get samphub $secret,id]"
    SAMPHubDialogListAdd $secret

    # update other clients
    set mtype {samp.hub.event.register}

    set map2(id) "string [tsv::get samphub $secret,id]"
    set m2 [xmlrpcList2Member [array get map2]]

    set map1(samp.mtype) "string $mtype"
    set map1(samp.params) [list struct $m2]
    set m1 [xmlrpcList2Member [array get map1]]

    foreach cc [tsv::get samphub client,secret] {
	# ignore hub
	if {$cc == [tsv::get samphub secret]} {
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
	set param2 [list param [list value [list string [tsv::get samphub [tsv::get samphub secret],id]]]]
	set param3 [list param [list value [list struct $m1]]]
	set params [list params [list $param1 $param2 $param3]]

	if {[tsv::get samphub $cc,web]} {
	    if {[tsv::get samphub web,allowReverseCallbacks]} {
		tsv::lappend samphub $cc,web,msgs \
		    [SAMPHubGenerateCB $mtype $params]
	    }
	} else {
	    set rr {}
	    SAMPHubSend {samp.client.receiveNotification} \
		[tsv::get samphub $cc,url] $params rr
	    SAMPHubDialogSentMsg "$mtype\t[tsv::get samphub $cc,id]"
	}
    }

    set map3(samp.hub-id) {string hub}
    set map3(samp.self-id) "string $id"
    set map3(samp.private-key) "string $secret"
    set m3 [xmlrpcList2Member [array get map3]]

    return [list params [list [list param [list value [list struct $m3]]]]]
}

proc SAMPHubSend {method url params resultVar {flag {}}} {
    upvar $resultVar result

    if {[tsv::get samphub debug]} {
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
	if {[tsv::get samphub debug]} {
	    puts stderr "SAMPHub: bad xmlrpcCall"
	}
	# Error
	return false
    }

    if {[tsv::get samphub debug]} {
	puts stderr "SAMPHubSend Result: $result $flag"
    }

    return true
}

proc SAMPHubReturn {msg} {
    return [list params [list [list param [list value [list string $msg]]]]]
}

proc SAMPHubNotify {secret cc mtype param} {
    # runs in top level

    set param1 [list param [list value [list string $cc]]]
    set param2 [list param [list value [list string [tsv::get samphub [tsv::get samphub secret],id]]]]
    set param3 $param
    set params [list params [list $param1 $param2 $param3]]

    if {[tsv::get samphub $cc,web]} {
	if {[tsv::get samphub web,allowReverseCallbacks]} {
	    tsv::lappend samphub $cc,web,msgs \
		[SAMPHubGenerateCB $mtype $params]
	}
    } else {
	set rr {}
	SAMPHubSend samp.client.receiveNotification \
	    [tsv::get samphub $cc,url] $params rr
	SAMPHubDialogSentMsg "$mtype\t[tsv::get samphub $cc,id]"
    }
}

proc SAMPHubCall {secret cc msgid mtype param} {
    # runs in top level

    set param1 [list param [list value [list string $cc]]]
    set param2 [list param [list value [list string [tsv::get samphub [tsv::get samphub secret],id]]]]
    set param3 [list param [list value [list string $msgid]]]
    set param4 $param
    set params [list params [list $param1 $param2 $param3 $param4]]

    if {[tsv::get samphub $cc,web]} {
	if {[tsv::get samphub web,allowReverseCallbacks]} {
	    tsv::lappend samphub $cc,web,msgs \
		[SAMPHubGenerateCB $mtype $params]
	}
    } else {
	set rr {}
	SAMPHubSend samp.client.receiveCall \
	    [tsv::get samphub $cc,url] $params rr $msgid
	SAMPHubDialogSentMsg "$mtype\t[tsv::get samphub $cc,id]"
    }
}

proc SAMPHubReply {cc id msgtag param} {
    # runs in top level

    set param1 [list param [list value [list string $cc]]]
    set param2 [list param [list value [list string $id]]]
    set param3 [list param [list value [list string $msgtag]]]
    set param4 $param
    set params [list params [list $param1 $param2 $param3 $param4]]

    if {[tsv::get samphub $cc,web]} {
	if {[tsv::get samphub web,allowReverseCallbacks]} {
	    tsv::lappend samphub $cc,web,msgs \
		[SAMPHubGenerateCB samp.client.receiveResponse $params]
	}
    } else {
	set rr {}
	SAMPHubSend samp.client.receiveResponse \
	    [tsv::get samphub $cc,url] $params rr $msgtag
	SAMPHubDialogSentMsg \
	    "samp.client.receiveResponse\t[tsv::get samphub $cc,id]"
    }
}

# procs

proc samp.hub.setXmlrpcCallback {rpc} {
    if {[tsv::get samphub debug]} {
	puts "samp.hub.setXmlrpcCallback: $rpc\n"
    }

    xmlrpcParams2List $rpc args

    set secret [lindex $args 0]
    set map [lindex $args 1]

    if {![SAMPHubValidSecret $secret]} {
	return -code error
    }

    SAMPHubDialogRecvdMsg \
	"samp.hub.setXmlrpcCallback\t[tsv::get samphub $secret,id]"

    tsv::set samphub $secret,url $map

    return [SAMPHubReturn OK]
}

proc samp.hub.ping {rpc} {

    if {[tsv::get samphub debug]} {
	puts "samp.hub.ping $rpc\n"
    }

    SAMPHubDialogRecvdMsg "samp.hub.ping $rpc"

    return [SAMPHubReturn OK]
}

proc samp.hub.register {rpc} {

    if {[tsv::get samphub debug]} {
	puts "samp.hub.register: $rpc"
    }

    xmlrpcParams2List $rpc args

    return [SAMPHubRegister $args 0]
}

proc samp.hub.unregister {rpc} {

    if {[tsv::get samphub debug]} {
	puts "samp.hub.unregister: $rpc\n"
    }

    xmlrpcParams2List $rpc args

    set secret [lindex $args 0]

    # some clients insist on sending samp.hub.unregister
    if {[tsv::exists samphub remove]} {
	if {[tsv::get samphub remove] == $secret} {
	    return [SAMPHubReturn OK]
	}
    }

    if {![SAMPHubValidSecret $secret]} {
	return -code error
    }
    
    SAMPHubDialogRecvdMsg "samp.hub.unregister\t[tsv::get samphub $secret,id]"

    # update other clients
    # notify others before removing
    set mtype {samp.hub.event.unregister}

    set map2(id) "string [tsv::get samphub $secret,id]"
    set m2 [xmlrpcList2Member [array get map2]]

    set map1(samp.mtype) "string $mtype"
    set map1(samp.params) [list struct $m2]
    set m1 [xmlrpcList2Member [array get map1]]

    foreach cc [tsv::get samphub client,secret] {
	# ignore hub
	if {$cc == [tsv::get samphub secret]} {
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
	set param2 [list param [list value [list string [tsv::get samphub [tsv::get samphub secret],id]]]]
	set param3 [list param [list value [list struct $m1]]]
	set params [list params [list $param1 $param2 $param3]]

	if {[tsv::get samphub $cc,web]} {
	    if {[tsv::get samphub web,allowReverseCallbacks]} {
		tsv::lappend samphub $cc,web,msgs \
		    [SAMPHubGenerateCB $mtype $params]
	    }
	} else {
	    set rr {}
	    SAMPHubSend {samp.client.receiveNotification} \
		[tsv::get samphub $cc,url] $params rr
		 SAMPHubDialogSentMsg "$mtype\t[tsv::get samphub $cc,id]"
	}
    }

    # now remove
    SAMPHubRemove $secret

    return [SAMPHubReturn OK]
}

proc samp.hub.declareMetadata {rpc} {
    global samphub
    
    if {[tsv::get samphub debug]} {
	puts "samp.hub.declareMetadata: $rpc\n"
    }

    xmlrpcParams2List $rpc args

    set secret [lindex $args 0]
    set map [lindex $args 1]

    if {![SAMPHubValidSecret $secret]} {
	return -code error
    }
    
    SAMPHubDialogRecvdMsg "samp.hub.declareMetadata\t[tsv::get samphub $secret,id]"

    # clear any previous
    tsv::set samphub $secret,metadata {}
    foreach mm $map {
	foreach {key val} $mm {
	    tsv::lappend samphub $secret,metadata [list $key $val]
	}
    }
    
    SAMPHubDialogMetaUpdate $secret
    SAMPHubDialogListUpdate

    # update other clients
    set mtype {samp.hub.event.metadata}

    # extract params
    set m3 [lindex [lindex [lindex [lindex $rpc 1] 1] 1] 1]

    set map2(id) "string [tsv::get samphub $secret,id]"
    set map2(metadata) $m3
    set m2 [xmlrpcList2Member [array get map2]]
    
    set map1(samp.mtype) "string $mtype"
    set map1(samp.params) [list struct $m2]
    set m1 [xmlrpcList2Member [array get map1]]

    foreach cc [tsv::get samphub client,secret] {
	# ignore hub
	if {$cc == [tsv::get samphub secret]} {
	    continue
	}

	# are we subscribed
	if {![SAMPHubFindSubscription $cc $mtype]} {
	    continue
	}

	set param1 [list param [list value [list string $cc]]]
	set param2 [list param [list value [list string [tsv::get samphub [tsv::get samphub secret],id]]]]
	set param3 [list param [list value [list struct $m1]]]
	set params [list params [list $param1 $param2 $param3]]

	if {[tsv::get samphub $cc,web]} {
	    if {[tsv::get samphub web,allowReverseCallbacks]} {
		tsv::lappend samphub $cc,web,msgs \
		    [SAMPHubGenerateCB $mtype $params]
	    }
	} else {
	    SAMPHubSend {samp.client.receiveNotification} \
		[tsv::get samphub $cc,url] $params rr
	    SAMPHubDialogSentMsg "$mtype\t[tsv::get samphub $cc,id]"
	}
    }

    return [SAMPHubReturn OK]
}

proc samp.hub.getMetadata {rpc} {
    global samphub

    if {[tsv::get samphub debug]} {
	puts "samp.hub.getMetadata: $rpc\n"
    }

    xmlrpcParams2List $rpc args

    set secret [lindex $args 0]
    set id [lindex $args 1]

    if {![SAMPHubValidSecret $secret]} {
	return -code error
    }

    SAMPHubDialogRecvdMsg "samp.hub.getMetadata\t[tsv::get samphub $secret,id]"

    foreach cc [tsv::get samphub client,secret] {
	if {[tsv::get samphub $cc,id] == $id} {
	    foreach mm [tsv::get samphub $cc,metadata] {
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

    if {[tsv::get samphub debug]} {
	puts "samp.hub.declareSubscriptions: $rpc\n"
    }

    set map [lindex [lindex [lindex [lindex $rpc 1] 1] 1] 1]

    xmlrpcParams2List $rpc args

    set secret [lindex $args 0]
    
    if {![SAMPHubValidSecret $secret]} {
	return -code error
    }

    SAMPHubDialogRecvdMsg "samp.hub.declareSubscriptions\t[tsv::get samphub $secret,id]"

    # clear any previous
    tsv::set samphub $secret,subscriptions {}
    set aa [lindex $map 1]
    foreach bb $aa {
	set cc [lindex $bb 1]
	foreach {key val} $cc {
	    set ss [lindex $key 1]
	    set mm [lindex [lindex $val 1] 1]
	    tsv::lappend samphub $secret,subscriptions [list $ss $mm]
	}
    }

    # make it pretty
    tsv::set samphub $secret,subscriptions \
	[lsort [tsv::get samphub $secret,subscriptions]]

    SAMPHubDialogListUpdate

    # update other clients
    set mtype {samp.hub.event.subscriptions}

    # extract params
    # can't use utils as we need to preserve subscription params rpc
    set aa [list member [list [list name id] [list value [list string [tsv::get samphub $secret,id]]]]]
    set bb [list member [list [list name subscriptions] [list value $map]]]
    set m2 [list struct [list $bb $aa]]

    set cc [list member [list [list name samp.mtype] [list value [list string $mtype]]]]
    set dd [list member [list [list name samp.params] [list value $m2]]]
    set m1 [list struct [list $cc $dd]]

    set param3 [list param [list value $m1]]
    set param2 [list param [list value [list string [tsv::get samphub [tsv::get samphub secret],id]]]]

    foreach cc [tsv::get samphub client,secret] {
	# ignore hub
	if {$cc == [tsv::get samphub secret]} {
	    continue
	}

	# are we subscribed
	if {![SAMPHubFindSubscription $cc $mtype]} {
	    continue
	}

	set param1 [list param [list value [list string $cc]]]
	set params [list params [list $param1 $param2 $param3]]

	if {[tsv::get samphub $cc,web]} {
	    if {[tsv::get samphub web,allowReverseCallbacks]} {
		tsv::lappend samphub $cc,web,msgs \
		    [SAMPHubGenerateCB $mtype $params]
	    }
	} else {
	    set rr {}
	    SAMPHubSend {samp.client.receiveNotification} \
		[tsv::get samphub $cc,url] $params rr
	    SAMPHubDialogSentMsg "$mtype\t[tsv::get samphub $cc,id]"
	}
    }

    return [SAMPHubReturn OK]
}

proc samp.hub.getSubscriptions {rpc} {
    global samphub

    if {[tsv::get samphub debug]} {
	puts "samp.hub.getSubscriptions: $rpc\n"
    }

    xmlrpcParams2List $rpc args

    set secret [lindex $args 0]
    set id [lindex $args 1]

    if {![SAMPHubValidSecret $secret]} {
	return -code error
    }

    SAMPHubDialogRecvdMsg "samp.hub.getSubscriptions\t[tsv::get samphub $secret,id]"

    foreach cc [tsv::get samphub client,secret] {
	if {[tsv::get samphub $cc,id] == $id} {
	    set out {}
	    foreach sub [tsv::get samphub $cc,subscriptions] {
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

    if {[tsv::get samphub debug]} {
	puts "samp.hub.getRegisteredClients: $rpc\n"
    }

    xmlrpcParams2List $rpc args

    set secret [lindex $args 0]
    set map [lindex $args 1]

    if {![SAMPHubValidSecret $secret]} {
	return -code error
    }

    SAMPHubDialogRecvdMsg "samp.hub.getRegisteredClients\t[tsv::get samphub $secret,id]"

    set ll {}
    foreach cc [tsv::get samphub client,secret] {
	if {$cc == $secret} {
	    continue
	}

	lappend ll [tsv::get samphub $cc,id]
    }

    return [list params [list [list param [list value [xmlrpcList2Array $ll]]]]]
}

proc samp.hub.getSubscribedClients {rpc} {
    global samphub

    if {[tsv::get samphub debug]} {
	puts "samp.hub.getSubscribedClients: $rpc\n"
    }

    xmlrpcParams2List $rpc args

    set secret [lindex $args 0]
    set map [lindex $args 1]

    if {![SAMPHubValidSecret $secret]} {
	return -code error
    }

    SAMPHubDialogRecvdMsg "samp.hub.getSubscribedClients\t[tsv::get samphub $secret,id]"

    foreach cc [tsv::get samphub client,secret] {
	if {$cc == $secret} {
	    continue
	}

	if {[SAMPHubFindSubscription $cc $map]} {
	    set id [tsv::get samphub $cc,id]
	    set map1($id) [list struct {}]
	}
    }

    return [list params [list [list param [list value [list struct [xmlrpcList2Member [array get map1]]]]]]]
}

proc samp.hub.notify {rpc} {

    if {[tsv::get samphub debug]} {
	puts "samp.hub.notify: $rpc\n"
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

    SAMPHubDialogRecvdMsg "samp.hub.notify\t[tsv::get samphub $secret,id]"

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
    if {$cc == [tsv::get samphub secret]} {
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

    if {[tsv::get samphub debug]} {
	puts "samp.hub.notifyAll: $rpc\n"
    }

    # params
    set param [lindex [lindex [lindex $rpc 1] 1]]

    xmlrpcParams2List $rpc args

    set secret [lindex $args 0]
    set map [lindex $args 1]

    if {![SAMPHubValidSecret $secret]} {
	return -code error
    }

    SAMPHubDialogRecvdMsg "samp.hub.notifyAll\t[tsv::get samphub $secret,id]"

    set mtype {}
    foreach mm $map {
	foreach {key val} $mm {
	    switch -- $key {
		samp.mtype {set mtype $val}
	    }
	}
    }

    set ll {}
    foreach cc [tsv::get samphub client,secret] {
	# ignore hub
	if {$cc == [tsv::get samphub secret]} {
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
	lappend ll [tsv::get samphub $cc,id]
    }

    return [list params [list [list param [list value [xmlrpcList2Array $ll]]]]]
}

proc samp.hub.call {rpc} {
    
    if {[tsv::get samphub debug]} {
	puts "samp.hub.call: $rpc\n"
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

    SAMPHubDialogRecvdMsg "samp.hub.call\t[tsv::get samphub $secret,id]"

    set mtype {}
    foreach mm $map {
	foreach {key val} $mm {
	    switch -- $key {
		samp.mtype {set mtype $val}
	    }
	}
    }
    
    set msgid "$msgtag:[tsv::get samphub $secret,id]:"
    
    if {[catch {set cc [SAMPHubFindSecret $id]}]} {
	return -code error
    }

    # ignore hub
    if {$cc == [tsv::get samphub secret]} {
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

    if {[tsv::get samphub debug]} {
	puts "samp.hub.callAll: $rpc\n"
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

    SAMPHubDialogRecvdMsg "samp.hub.callAll\t[tsv::get samphub $secret,id]"

    set mtype {}
    foreach mm $map {
	foreach {key val} $mm {
	    switch -- $key {
		samp.mtype {set mtype $val}
	    }
	}
    }

    set msgid "$msgtag:[tsv::get samphub $secret,id]:"

    foreach cc [tsv::get samphub client,secret] {
	# ignore hub
	if {$cc == [tsv::get samphub secret]} {
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

	set id [tsv::get samphub $cc,id]
 	set map3($id) "string $msgid"
    }

    set m3 [xmlrpcList2Member [array get map3]]
    return [list params [list [list param [list value [list struct $m3]]]]]
}

proc samp.hub.callAndWait {rpc} {
    
    if {[tsv::get samphub debug]} {
	puts "samp.hub.callAndWait: $rpc\n"
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

    SAMPHubDialogRecvdMsg "samp.hub.callAndWait\t[tsv::get samphub $secret,id]"

    set mtype {}
    foreach mm $map {
	foreach {key val} $mm {
	    switch -- $key {
		samp.mtype {set mtype $val}
	    }
	}
    }

    tsv::incr samphub cw,cnt
    set cnt [tsv::get samphub cw,cnt]

    set msgid "bar:[tsv::get samphub $secret,id]:$cnt"

    if {[catch {set cc [SAMPHubFindSecret $id]}]} {
	return -code error
    }

    # ignore hub
    if {$cc == [tsv::get samphub secret]} {
	return -code error
    }

    # are we subscribed
    if {![SAMPHubFindSubscription $cc $mtype]} {
	return -code error
    }

    tsv::set samphub cw,$cnt,result {}
    tsv::set samphub cw,$cnt,id {}
    tsv::set samphub cw,$cnt,timeout,id {}

    if {$timeout>0} {
	tsv::set samphub cw,$cnt,timeout,id [after [expr $timeout*1000] [list SAMPHubTimeout $cnt]]
    }

    tsv::set samphub cw,$cnt,id \
	[after idle [list SAMPHubCall $secret $cc $msgid $mtype $param]]

    global samphub${cnt}
    set samphub${cnt} false
    vwait samphub${cnt}
    unset samphub${cnt}

    if {$timeout<=0} {
	set rr [tsv::get samphub cw,$cnt,result]

	tsv::unset samphub cw,$cnt,result
	tsv::unset samphub cw,$cnt,id
	tsv::unset samphub cw,$cnt,timeout,id
	
	return [list params [list $rr]]

    } elseif {[tsv::exists samphub cw,$cnt,timeout,id]} {
	after cancel [tsv::get samphub cw,$cnt,timeout,id]

	set rr [tsv::get samphub cw,$cnt,result]

	tsv::unset samphub cw,$cnt,result
	tsv::unset samphub cw,$cnt,id
	tsv::unset samphub cw,$cnt,timeout,id
	
	return [list params [list $rr]]
    } else {
	return -code error
    }
}

proc SAMPHubTimeout {cnt} {
    
    if {[tsv::exists samphub cw,$cnt,id]} {
	after cancel [tsv::get samphub cw,$cnt,id]
    }

    tsv::unset samphub cw,$cnt,result
    tsv::unset samphub cw,$cnt,id
    tsv::unset samphub cw,$cnt,timeout,id

    global samphub${cnt}
    set samphub${cnt} true
}

proc samp.hub.reply {rpc} {
    
    if {[tsv::get samphub debug]} {
	puts "samp.hub.reply: $rpc\n"
    }

    # params
    set param [lindex [lindex [lindex $rpc 1] 2]]

    xmlrpcParams2List $rpc args

    set secret [lindex $args 0]
    set msgid [lindex $args 1]

    SAMPHubDialogRecvdMsg "samp.hub.reply\t[tsv::get samphub $secret,id]"

    if {![SAMPHubValidSecret $secret]} {
	return -code error
    }

    set ll [split $msgid ":"]
    set msgtag [lindex  $ll 0]
    set id [lindex $ll 1]
    set cnt [lindex $ll 2]

    if {[catch {set cc [SAMPHubFindSecret $id]}]} {
	return -code error
    }

    set src [tsv::get samphub $secret,id]

    switch $msgtag {
	bar {
	    # callAndWait
	    tsv::set samphub cw,$cnt,result $param
	    global samphub${cnt}
	    set samphub${cnt} true
	}
	default {
	    # call
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
