# -*- tcl -*-
##
## (C) 2022 Dr. Detlef Groth, Germany, Andreas Kupries
##
## shtmlview extension adding support for mkdoc markup

# #############################################################
## Requirements - Viewer widget, and easy mkdoc conversion

package require shtmlview::shtmlview
package require mkdoc::mkdoc

# #############################################################
## Register the new converter

::shtmlview::converter .tcl {Tcl+mkdoc files}   ::shtmlview::mkdoc
::shtmlview::converter .tm  {Tcl+mkdoc modules} ::shtmlview::mkdoc

# #############################################################
## Exported API

proc ::shtmlview::mkdoc {url} {

    close [file tempfile htmltemp .html]

    mkdoc::mkdoc $url $htmltemp -html

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

package provide shtmlview::mkdoc 0.1
return
