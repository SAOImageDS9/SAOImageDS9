# -*- tcl -*-
##
## (C) 2022 Dr. Detlef Groth, Germany
##
## shtmlview extension adding support for doctools markup

# #############################################################
## Requirements - Viewer widget, and easy doctools conversion

package require shtmlview::shtmlview
package require dtplite

# #############################################################
## Register the new converter

::shtmlview::converter .man {Doctools files} ::shtmlview::doctools

# #############################################################
## Exported API

proc ::shtmlview::doctools {url} {

    close [file tempfile htmltemp .html]

    ::dtplite::do [list -o $htmltemp html $url]

    if {[catch {
	open $htmltemp r
    } result]} {
	# result :: string, error message
        return -code error "Cannot open $url: $result"
    }
    # result :: channel handle

    set html [read $result]
    close $result
    file delete $htmltemp

    return $html
}

# #############################################################
## Publish package to Tcl

package provide shtmlview::doctools 0.1
return
