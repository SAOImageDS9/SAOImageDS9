#  Copyright (C) 1999-2021
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

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
    puts $ch "samp.hub.xmlrpc.url=http://127.0.0.1:$samphub(port)/xmlrpc"
    puts $ch "samp.profile.version=1.3"
    puts $ch "hub.impl=org.astrogrid.samp.hub.Hub\$1"
    puts $ch "profile.impl=org.astrogrid.samp.xmlrpc.StandardHubProfile"
    puts $ch "profile.start.date=$samphub(timestamp)"

    close $ch

    set samphub(client,seq) 1
    set samphub(client,secret) {}

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

proc SAMPHubStop {verbose} {
    global samphub

    # hub running?
    if {![info exists samphub]} {
	if {$verbose} {
	    Error "SAMP: [msgcat::mc {Hub not running}]"
	}
	return
    }

    catch {file delete -force $samphub(fn)}
    unset samphub

    UpdateFileMenu
}

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
    set samphub($secret,callback) {}
    set samphub($secret,substript) {}
    set samphub($secret,restrict) {}

    set samphub($secret,name) {}
    set samphub($secret,descript,text) {}
    set samphub($secret,descript,html) {}
    set samphub($secret,icon,url) {}
    set samphub($secret,doc,url) {}

    set samphub($secret,page) {}
    set samphub($secret,author,name) {}
    set samphub($secret,author,email) {}
    set samphub($secret,author,affiliat) {}
    set samphub($secret,version) {}

    catch {unset samphubmap}
    set samphubmap(samp.hub-id) {string hub}
    set samphubmap(samp.self-id) "string $id"
    set samphubmap(samp.private-key) "string $secret"

    set params "struct samphubmap"

    return $params
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
    
    foreach mm $map {
	foreach {key val} $mm {
	    switch -- $key {
		samp.name {set samphub($secret,name) $val}
		samp.description.text {set samphub($secret,descript,text) $val}
		samp.description.html {set samphub($secret,descript,html) $val}
		samp.icon.url {set samphub($secret,icon,url) $val}
		samp.documentation.url {set samphub($secret,doc,url) $val}

		home.page {set samphub($secret,page) $val}
		author.name {set samphub($secret,author,name) $val}
		author.email {set samphub($secret,author,email) $val}
		author.affiliation {set samphub($secret,author,affiliat) $val}
		default {
		    # look for application.version
		    if {[regexp {.+\.version} $key]} {
			set samphub($secret,version) $val
		    }
		}
	    }
	}
    }
    
    return {string OK}
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
    
    set id [lsearch $samphub(client,secret) $secret]
    set samphub(client,secret) [lreplace $samphub(client,secret) $id $id]

    unset samphub($secret,id)
    unset samphub($secret,callback)
    unset samphub($secret,substript)
    unset samphub($secret,restrict)

    unset samphub($secret,name)
    unset samphub($secret,descript,text)
    unset samphub($secret,descript,html)
    unset samphub($secret,icon,url)
    unset samphub($secret,doc,url)
    unset samphub($secret,page)
    unset samphub($secret,author,name)
    unset samphub($secret,author,email)
    unset samphub($secret,author,affiliat)
    
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

    set samphub($secret,callback) $map

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

    foreach mm $map {
	foreach {ss rr} $mm {
	    lappend samphub($secret,subscript) $ss
	    lappend samphub($secret,restrict) $rr
	}
    }

    return {string OK}
}

proc samp.hub.getMetadata {args} {
    global samphub

    global debug
    if {$debug(tcl,samp)} {
	puts "samp.hub.getMetadata: $args"
    }

    set secret [lindex $args 0]
    set map [lindex $args 1]
    
    if {![SAMPHubValidSecret $secret]} {
	return {string ERROR}
    }

    return {string OK}
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
    foreach cc $ll {
	set samphubmap($cc) {struct samphubmap2}
    }
    return "struct samphubmap"
}

proc samp.hub.notifyAll {args} {
#
}

# events
# samp.hub.event.shutdown
# samp.hub.event.register
# samp.hub.event.unregister
# samp.hub.event.metadata
# samp.hub.event.subscriptions
# samp.hub.disconnect


