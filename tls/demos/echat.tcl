#!/usr/bin/env tclsh
#
# Example encrypted echo chat tool
#
# Usage:
#	Server:		tclsh echat.tcl -server
#
#	Client:		tclsh echat.tcl -client
#

package prefer latest
package require tls
package require Tk



#
# Config settings
#
set host localhost
set port 9876
set mode client
set clients [list]
set chan ""

set certsDir	[file join [file dirname [info script]] .. tests certs]
set serverCert	[file join $certsDir server.pem]
set clientCert	[file join $certsDir client.pem]
set caCert	[file join $certsDir ca.pem]
set serverKey	[file join $certsDir server.key]
set clientKey	[file join $certsDir client.key]



########################

#
# Send message
#
proc message_send {var w} {
    set ch [set $var]
    set msg [$w get]
    log $msg sender
    if {$ch ne ""} {
	puts $ch $msg
    }
    $w delete 0 end
}

#
# Receive message
#
proc message_receive {ch} {
    set msg ""
    if {[gets $ch msg] <= 0} {
	if {[eof $ch]} {
	    close $ch
	    exit
	}
    }
    if {[string length $msg] > -1} {
	log $msg receiver
    }
}

#
# Connect with TLS
#
proc client_connect {ch} {
    tls::import $ch -request 1 -require 0
    #tls::import $ch -certfile $::clientCert -cafile $::caCert -keyfile $::clientKey
    tls::handshake $ch
    set time [clock format [clock seconds]]
    log [format "Client connection finished at %s" $time] local
}

#
# Setup client
#
proc client_setup {} {
    global host
    global port
    global chan

    set ch [socket $host $port]
    fconfigure $ch -blocking 0 -buffering line -buffersize 32768 -encoding utf-8 -translation auto
    if {[info tclversion] >= 9.0} {
	fconfigure $ch -keepalive 1 -nodelay 1
    }
    chan event $ch readable [list message_receive $ch]
    after idle [list client_connect $ch]
    set chan $ch
    return $ch
}

#
# Shutdown client
#
proc client_shutdown {ch} {
    close $ch
}

########################

#
# Add client to client list
#
proc add_client {ch} {
    global clients

    if {$ch ni $clients} {
	lappend clients $ch
    }
}

#
# Remove client from client list
#
proc remove_client {ch} {
    global clients

    if {$ch in $clients} {
	set index [lsearch $clients $ch]
	set clients [lreplace $clients $index $index]
    }
}

#
# Send message
#
proc send_all {w} {
    global clients

    set msg [$w get]
    log $msg sender

    foreach client $clients {
	if {[catch {puts $client $msg} err]} {
	    close $client
	    remove_client $client
	}
    }
    $w delete 0 end
}

#
# Echo received messages
#
proc echo {ch} {
    global clients

    if {[gets $ch msg] <= 0} {
	if {[eof $ch]} {
	    close $ch
	    remove_client $ch
	    return
	}
    }
    log $msg receiver

    foreach client $clients {
	if {[catch {puts $client $msg} err]} {
	    close $client
	    remove_client $client
	}
    }
}

#
# Accept client connections
#
proc accept {ch addr port} {
    add_client $ch
    set time [clock format [clock seconds]]

    fconfigure $ch -blocking 0 -buffering line -buffersize 32768 -encoding utf-8 -translation auto
    log [format "Accepted client connection from %s on port %d at %s" $addr $port $time] local

    tls::import $ch -server 1 -certfile $::serverCert -cafile $::caCert -keyfile $::serverKey
    chan event $ch readable [list echo $ch]
    puts $ch [format "Connected to server at %s" $time]
}

#
# Setup server
#
proc server_setup {} {
    global port
    global chan

    set ch [socket -server accept $port]
    fconfigure $ch -blocking 0 -buffering line -buffersize 32768 -encoding utf-8 -translation auto
    if {[info tclversion] >= 9.0} {
	fconfigure $ch -keepalive 1 -nodelay 1
    }
    set chan $ch
    return $ch
}

#
# Shutdown server
#
proc server_shutdown {ch} {
    global clients

    foreach client $clients {
	close $client
    }
    close $ch
}

########################

#
# Log message
#
proc text_update {w msg tag} {
    $w insert end $msg\n $tag
    $w yview moveto 1.0
}

#
# Create GUI
#
proc setup_gui {w mode} {
    wm title $w [format "Chat %s Mode" [string totitle $mode]]

    grid columnconfigure $w 0 -weight 1
    grid rowconfigure $w 0 -weight 1

    # Messages frame
    set f [ttk::frame ${w}msgs]
    grid $f -sticky nsew
    grid columnconfigure $f 0 -weight 1
    grid rowconfigure $f 0 -weight 1

    set t [text $f.text -yscrollcommand [list $f.vsb set]]
    #  -xscrollcommand [list $f.hsb set]
    #set sh [ttk::scrollbar $f.hsb -command [list $t xview] -orient horizontal]
    set sv [ttk::scrollbar $f.vsb -command [list $t yview] -orient vertical]
    grid $t -row 0 -column 0 -sticky nsew
    grid $sv -row 0 -column 1 -sticky nsew
    #grid $sh -row 1 -column 0 -sticky nsew
    interp alias {} log {} text_update $t

    # Create tags
    $t tag configure sender -background lightblue -foreground black -justify right \
	-lmargin1 100 -lmargin2 100 -lmargincolor white -spacing1 15 -wrap word
    $t tag configure receiver -background lightgray -foreground black -justify left \
	-rmargin 100 -rmargincolor white -spacing1 15 -wrap word
    $t tag configure local -background white -foreground black -justify left \
	-spacing1 15 -wrap word

    # Send frame
    set f [ttk::frame ${w}send]
    grid $f -sticky nsew
    grid columnconfigure $f 0 -weight 1
    grid rowconfigure $f 0 -weight 1

    set e [ttk::entry $f.e -xscrollcommand [list $f.hsb set]]
    if {$mode eq "client"} {
	set cmd [list message_send ::chan $e]
    } else {
	set cmd [list send_all $e]
    }
    set b [ttk::button $f.b -command $cmd -text "Send"]
    bind $e <Return> $cmd
    set sh [ttk::scrollbar $f.hsb -command [list $e xview] -orient horizontal]
    grid $e -row 0 -column 0 -sticky nsew
    grid $b -row 0 -column 1 -sticky nsew
    grid $sh -row 1 -column 0 -sticky nsew

    wm protocol $w WM_DELETE_WINDOW shutdown
}

#
# Shutdown
#
proc shutdown {} {
    global mode

    if {$mode eq "client"} {
	client_shutdown $::chan
    } else {
	server_shutdown $::chan
    }
    exit
}

#
# Start client or server
#
proc main {args} {
    global mode

    if {"-client" in $args} {
	set mode client
	set cmd [list client_setup]
    } else {
	set mode server
	set cmd [list server_setup]
    }
    setup_gui . $mode
    after 1000 $cmd
    vwait done
}

main {*}$::argv
