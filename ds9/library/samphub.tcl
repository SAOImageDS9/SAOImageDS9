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
    
    if {[catch {set ch [open $fn w 0600]}]} {
	if {$verbose} {
	    Error "SAMP: [msgcat::mc {unable to create hub file}]"
	}
	return
    }
	
    set str "[clock format [clock seconds] -format {%a %b %d %H:%M:%S %Z %Y}]"
    puts $ch "# SAMP Standard Profile lockfile written $str"
    puts $ch "# Note contact URL hostname may be configured using jsamp.localhost property"

    set samphub(fn) $fn
    set samphub(ch) $ch

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

    catch {close $samphub(ch)}

    if {[file exists $samphub(fn)]} {
	catch {file delete -force $samphub(fn)}
    }

    unset samphub

    UpdateFileMenu
}
