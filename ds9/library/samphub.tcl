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
    set samphub(client,private) {}
    set samphub(client,id) {}
    set samphub(client,name) {}
    set samphub(client,version) {}
    set samphub(client,descript) {}
    set samphub(client,icon) {}
    set samphub(client,doc) {}
    set samphub(client,page) {}
    set samphub(client,author,name) {}
    set samphub(client,author,email) {}
    set samphub(client,author,affiliation) {}

    UpdateFileMenu
}

proc SAMPHubGenerateKey {} {
    return [binary encode hex [binary format f* [list [expr rand()] [expr rand()]]]]
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

proc SAMPHubSend {method params resultVar} {
    upvar $resultVar result

    global samphub

    global debug
    if {$debug(tcl,samp)} {
	puts stderr "SAMPSend: $samp(url) $samp(method) $method $params"
    }

    if {[catch {set result [xmlrpc::call $samp(url) $samp(method) $method $params]}]} {
	if {$debug(tcl,samp)} {
	    puts stderr "SAMPHubSend Error: $result"
	}
	return 0
    }

    # reset error if needed
    # xmlrpc leaves error msgs
    InitError samp

    if {$debug(tcl,samp)} {
	puts stderr "SAMPHUbSend Result: $result"
    }

    return 1
}

proc samp.hub.register {args} {
    global samphub
    global samphubmap

    global debug
    if {$debug(tcl,samp)} {
	puts "SAMPHubRegister: $args"
    }

    if {$samphub(secret) != $args} {
	return {string ERROR}
    }

    incr samphub(client,seq)
    set private [SAMPHubGenerateKey]
    set id "c${samphub(client,seq)}"

    lappend samphub(client,private) $private
    lappend samphub(client,id) $id
    lappend samphub(client,name) {}
    lappend samphub(client,version) {}
    lappend samphub(client,descript) {}
    lappend samphub(client,icon) {}
    lappend samphub(client,doc) {}
    lappend samphub(client,page) {}
    lappend samphub(client,author,name) {}
    lappend samphub(client,author,email) {}
    lappend samphub(client,author,affiliation) {}

    catch {unset samphubmap}
    set samphubmap(samp.hub-id) {string hub}
    set samphubmap(samp.self-id) "string $id"
    set samphubmap(samp.private-key) "string $private"

    set params "struct samphubmap"

    return $params
}

proc samp.hub.declareMetadata {args} {
    global samphub
    global sampmap

    global debug
    if {$debug(tcl,samp)} {
	puts "SAMPHubMetadata: $args"
    }

    set secret [lindex $args 0]
    set map [lindex $args 1]

    puts "$samphub(client,private) $secret"
    set id [lsearch $samphub(client,private) $secret]
    if {$id<0} {
	if {$debug(tcl,samp)} {
	    puts "SAMPHubMetadata: bad private-key $secret"
	}
	return {string ERROR}
    }

    foreach mm $map {
	foreach {key val} $mm {
	    puts "***$key $val***"
	    switch -- $key {
		samp.name {
		    set samphub(client,name) \
			[lreplace $samphub(client,name) $id $id $val]
		}
		samp.description.text {
		    set samphub(client,descript) \
			[lreplace $samphub(client,descript) $id $id $val]
		}
		samp.icon.url {
		    set samphub(client,url) \
			[lreplace $samphub(client,url) $id $id $val]
		}
		samp.documentation.url {
		    set samphub(client,doc) \
			[lreplace $samphub(client,doc) $id $id $val]
		}
		home.page {
		    set samphub(client,page) \
			[lreplace $samphub(client,page) $id $id $val]
		}
		author.name {
		    set samphub(client,author,name) \
			[lreplace $samphub(client,author,name) $id $id $val]
		}
		author.email {
		    set samphub(client,author,email) \
			[lreplace $samphub(client,author,email) $id $id $val]
		}
		author.affiliation {
		    set samphub(client,author,affiliation) \
			[lreplace $samphub(client,author,affiliation) $id $id $val]
		}
		default {
		    # must be application.version
		    set samphub(client,version) \
			[lreplace $samphub(client,version) $id $id [list $key $val]]
		}
	    }
	}
    }

    return {string OK}
}

proc samp.hub.unregister {args} {
#
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


