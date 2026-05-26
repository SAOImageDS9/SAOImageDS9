#################################################
#
# Download file using HTTP package
#
#################################################

package prefer latest
package require Tcl 8.6-
package require tls
package require http

set url "https://wiki.tcl-lang.org/sitemap.xml"
set protocol "http/1.1"
set filename [file tail $url]

# Register https protocol handler with http package
http::register https 443 [list ::tls::socket -autoservername 1 -require 1 -alpn [list [string tolower $protocol]]]

# Open output file
set ch [open $filename w]
fconfigure $ch -encoding utf-8

# Get webpage
set token [::http::geturl $url -blocksize 4096 -channel $ch]
if {[http::status $token] ne "ok"} {
    puts [format "Error %s" [http::status $token]]
}

# Cleanup
::http::cleanup $token
close $ch

