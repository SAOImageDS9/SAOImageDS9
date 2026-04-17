#!/usr/bin/env tclsh
#
# This file contains Tcl code to implement a remote server that can be
# used during testing of Tcl socket code. This server is used by some
# of the tests in socket.test.
#
# Source this file in the remote server you are using to test Tcl against.
#
# Copyright (c) 1995-1996 Sun Microsystems, Inc.
#
# See the file "license.terms" for information on usage and redistribution
# of this file, and for a DISCLAIMER OF ALL WARRANTIES.
#

# load tls package
package prefer latest
package require tls

# Initialize message delimiter

# Initialize command array
catch {unset command}
set command(0) ""
set callerSocket ""

# Detect whether we should print out connection messages etc.
# set VERBOSE 1
if {![info exists VERBOSE]} {
    set VERBOSE 0
}

proc __doCommands__ {l s} {
    global callerSocket VERBOSE

    if {$VERBOSE} {
	puts "--- Server executing the following for socket $s:"
	puts $l
	puts "---"
    }
    if {0} {
	set fd [open remoteServer.log a]
	catch {puts $fd "skey: $serverKey"}
	puts $fd "--- Server executing the following for socket $s:"
	puts $fd $l
	puts $fd "---"
	close $fd
    }
    set callerSocket $s
    set ::errorInfo ""
    if {[catch {uplevel "#0" $l} msg]} {
	if {0} {
	    set fd [open remoteServer.log a]
	    puts $fd "error: $msg"
	    close $fd
	}
	set code error
    } else {
	set code success
    }
    #return [list $code $::errorInfo $msg]
    return [list $code $msg]
}

proc __readAndExecute__ {s} {
    global command VERBOSE

    set l [gets $s]
    if {$l eq "--Marker--Marker--Marker--"} {
	if {[info exists command($s)]} {
	    puts $s [list error incomplete_command]
	}
	puts $s "--Marker--Marker--Marker--"
	return
    }
    if {$l eq ""} {
	if {[eof $s]} {
	    if {$VERBOSE} {
		puts "Server closing $s, eof from client"
	    }
	    close $s
	}
	return
    }
    append command($s) $l "\n"
    if {[info complete $command($s)]} {
	set cmds $command($s)
	unset command($s)
	puts $s [__doCommands__ $cmds $s]
    }
    if {[eof $s]} {
	if {$VERBOSE} {
	    puts "Server closing $s, eof from client"
	}
	close $s
    }
}

proc __accept__ {s a p} {
    global VERBOSE

    if {$VERBOSE} {
	puts "Server accepts new connection from $a:$p on $s"
    }
    tls::handshake $s
    fconfigure $s -buffering line -translation crlf
    fileevent $s readable [list __readAndExecute__ $s]
}

set serverIsSilent 0
for {set i 0} {$i < $argc} {incr i} {
    if {[lindex $argv $i] eq "-serverIsSilent"} {
	set serverIsSilent 1
	break
    }
}
if {![info exists serverPort]} {
    if {[info exists env(serverPort)]} {
	set serverPort $env(serverPort)
    }
}
if {![info exists serverPort]} {
    for {set i 0} {$i < $argc} {incr i} {
	if {[lindex $argv $i] eq "-port"} {
	    if {$i < $argc - 1} {
		set serverPort [lindex $argv [expr {$i + 1}]]
	    }
	    break
	}
    }
}
if {![info exists serverPort]} {
    set serverPort 8048
}

if {![info exists serverAddress]} {
    if {[info exists env(serverAddress)]} {
	set serverAddress $env(serverAddress)
    }
}
if {![info exists serverAddress]} {
    for {set i 0} {$i < $argc} {incr i} {
	if {[lindex $argv $i] eq "-address"} {
	    if {$i < $argc - 1} {
		set serverAddress [lindex $argv [expr {$i + 1}]]
	    }
	    break
	}
    }
}
if {![info exists serverAddress]} {
    set serverAddress 0.0.0.0
}

if {$serverIsSilent == 0} {
    set l "Remote server listening on port $serverPort, IP $serverAddress."
    puts ""
    puts $l
    for {set c [string length $l]} {$c > 0} {incr c -1} {puts -nonewline "-"}
    puts ""
    puts ""
    puts "You have set the Tcl variables serverAddress to $serverAddress and"
    puts "serverPort to $serverPort. You can set these with the -address and"
    puts "-port command line options, or as environment variables in your"
    puts "shell."
    puts ""
    puts "NOTE: The tests will not work properly if serverAddress is set to"
    puts "\"localhost\" or 127.0.0.1."
    puts ""
    puts "When you invoke tcltest to run the tests, set the variables"
    puts "remoteServerPort to $serverPort and remoteServerIP to"
    puts "[info hostname]. You can set these as environment variables"
    puts "from the shell. The tests will not work properly if you set"
    puts "remoteServerIP to \"localhost\" or 127.0.0.1."
    puts ""
    puts -nonewline "Type Ctrl-C to terminate--> "
    flush stdout
}

set certsDir	[file join [file dirname [info script]] certs]
set serverCert	[file join $certsDir server.pem]
set caCert	[file join $certsDir cacert.pem]
set serverKey	[file join $certsDir server.key]
if {[catch {set serverSocket \
	[tls::socket -require 0 -myaddr $serverAddress -server __accept__ \
	-cafile $caCert -certfile $serverCert -keyfile $serverKey \
	$serverPort]} msg]} {
    puts "Server on $serverAddress:$serverPort cannot start: $msg"
} else {
    puts ready
    vwait __server_wait_variable__
}
