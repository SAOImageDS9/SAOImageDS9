#################################################
#
# Download webpage using HTTP package with debug output
#
#################################################

package prefer latest
package require Tcl 8.6-
package require tls
package require http

set url "https://www.tcl-lang.org/"
set port 443
set protocol "http/1.1"

# Register https protocol handler with http package
http::register https 443 [list ::tls::socket -autoservername 1 -require 1 -alpn [list [string tolower $protocol]] \
    -command ::tls::callback -password ::tls::password -validatecommand ::tls::validate_command]

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

# Save data to file
set ch [open "tcl_tk_home.html" wb]
puts $ch $data
close $ch

