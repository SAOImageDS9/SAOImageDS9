#################################################
#
# Read using blocking channel
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



proc read_blocking {host port path protocol} {
    set result ""

    # Open socket
    set ch [::tls::socket -servername $host -request 1 -require 1 -alpn [list [string tolower $protocol]] $host $port]
    chan configure $ch -blocking 1 -buffering line -buffersize 16384 -encoding utf-8 -translation {auto crlf}

    # Initiate handshake
    ::tls::handshake $ch
    after 1000

    # Send get request
    http_get $ch $host $path $protocol
    after 1000

    # Get data
    while {1} {
	append result [read $ch 4096]
	if {[eof $ch]} {
	    close $ch
	    break
	}
    }
    return $result
}

save_file "read_blocking_webpage.txt" [read_blocking $host $port $path $protocol]

