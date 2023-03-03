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
    set samphub(secret) [binary encode hex [binary format f* [list [expr rand()] [expr rand()]]]]
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

    UpdateFileMenu
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
