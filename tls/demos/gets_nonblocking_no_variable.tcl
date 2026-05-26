#################################################
#
# Example 3: Non-blocking channel gets with no variable
#
#################################################

package prefer latest
package require Tcl 8.6-
package require tls

set host "www.google.com"
set port 443
set path "/"
set protocol "http/1.1"

#
# Send HTTP Get Request
#
proc http_get {ch host path protocol} {
    puts $ch [format "GET %s %s" $path [string toupper $protocol]]
    puts $ch [format "User-Agent: Mozilla/4.0 (compatible; %s)" $::tcl_platform(os)]
    puts $ch [format "Host: %s" $host]
    puts $ch [format "Connection: close"]
    puts $ch ""
    flush $ch
}

# Save returned data to file
proc save_file {filename data} {
    if {[catch {open $filename wb} ch]} {
	return -code error $ch
    }
    fconfigure $ch -buffersize 16384 -encoding utf-8 -translation crlf
    puts $ch $data
    close $ch
}



proc handler {ch} {
    set line [gets $ch]
    if {[eof $ch]} {
	# EOF
	close $ch
	set ::wait 1
	return
    } elseif {![fblocked $ch]} {
	# Full or empty line
	append ::data $line "\n"
    } else {
	# Partial line
	append ::data $line
    }
}

proc gets_non_blocking_no_variable {host port path protocol} {
    set ::wait 0

    # Open socket
    set ch [::tls::socket -servername $host -request 1 -require 1 -alpn [list [string tolower $protocol]] $host $port]
    chan configure $ch -blocking 0 -buffering line -buffersize 16384 -encoding utf-8 -translation {auto crlf}
    fileevent $ch readable [list handler $ch]

    # Initiate handshake
    ::tls::handshake $ch
    after 1000

    # Send get request
    after 5000 [list set ::wait 1]
    http_get $ch $host $path $protocol

    vwait ::wait
    catch {close $ch}
}

set data ""
gets_non_blocking_no_variable $host $port $path $protocol
save_file "gets_nonblocking_no_variable.txt" $data
