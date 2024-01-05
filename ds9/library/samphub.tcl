#  Copyright (C) 1999-2024
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

package require SAMPXmlrpcThread
package require SAMPHubThread
package require Thread

proc SAMPHubDef {} {
    tsv::set isamphub top .samphub
    tsv::set isamphub mb  .samphubmb
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
	if {[SAMPSend {samp.hub.ping} {} rr]} {
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

    if {[catch {tsv::set samphub sock [xmlrpcServeThread 0]}]} {
	Error "SAMPHub: [msgcat::mc {unable to open hub}]"
	tsv::unset samphub
	return 0
    }
    tsv::set samphub port [lindex [fconfigure [tsv::get samphub sock] -sockname] 2]

    if {$pds9(samp,webhub)} {
	if {[catch {tsv::set samphub web,sock [xmlrpcServeThread 21012]}]} {
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
