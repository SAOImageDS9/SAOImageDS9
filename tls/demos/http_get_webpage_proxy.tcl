#################################################
#
# Download webpage using HTTP and proxy packages.
#
# Process:
# - Connect to the proxy
# - Send HTTP "CONNECT $targeturl HTTP/1.1".
# - Proxy responds with HTTP protocol response.
# - Do tls::import
# - Start handdshaking
#
#################################################

package prefer latest
package require Tcl 8.6-
package require tls
package require http
package require autoproxy
autoproxy::init

set url "https://www.tcl-lang.org/"
set port 443
set protocol "http/1.1"

# Set these if not set by OS/Platform
if 0 {
    autoproxy::configure -basic -proxy_host example.com -proxy_port 880 -username user -password password
}


# Register https protocol handler and proxy with http package
::http::register https 443 [list ::autoproxy::tls_socket -autoservername 1 -require 1 \
    -alpn [list [string tolower $protocol]]]

# Get webpage
set token [::http::geturl $url -blocksize 16384]
if {[http::status $token] ne "ok"} {
    puts [format "Error: \"%s\"" [http::status $token]]
    ::http::cleanup $token
    exit
}

# Get web page
set data [http::data $token]

# Cleanup
::http::cleanup $token


# Open output file
set ch [open "tcl_tk_home.html" wb]
puts $ch $data
close $ch

