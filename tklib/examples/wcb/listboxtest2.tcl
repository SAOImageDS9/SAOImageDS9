#! /usr/bin/env tclsh

#==============================================================================
# Demo:	wcb::callback <listbox> before activate <callback>
#
# Copyright (c) 1999-2023  Csaba Nemethi (E-mail: csaba.nemethi@t-online.de)
#==============================================================================

package require Tk
package require wcb

wm title . "Listboxtest #2"

#
# Add some entries to the Tk option database
#
source [file join [file dirname [info script]] option.tcl]

set dirName [file join [file dirname [info script]] images]
image create photo photoImage

#
# Frame .spacer and listbox .lb
#
frame .spacer -width 7p
listbox .lb -height 0 -width 0 -background white
set pattern [file join $dirName *]
##nagelfar ignore
foreach pathName [lsort [glob $pattern]] {
    .lb insert end [file tail $pathName]
}

#
# Label .picture
#
label .picture -relief sunken -background white

#
# Define a before-activate callback for .lb
#
wcb::callback .lb before activate showPicture

#
# Callback procedure showPicture
#
proc showPicture {w idx} {
    set leafName [$w get $idx]

    #
    # When traversing the listbox with the arrow keys, the value
    # of idx can become -1 or the number of listbox elements,
    # hence the value of leafName can be an empty string:
    #
    if {$leafName eq ""} {
	return ""
    }

    global dirName
    set pathName [file join $dirName $leafName]
    if {[regexp {^\.(bmp|xbm)$} [file extension $pathName]]} {
	.picture configure -bitmap @$pathName -image ""
    } else {
	.picture configure -bitmap "" -image ""
	catch {
	    photoImage configure -file $pathName
	    .picture configure -bitmap "" -image photoImage
	}
    }
}

#
# Button .close
#
button .close -text Close -command exit

#
# Manage the widgets
#
pack .spacer .lb -side left -fill y -pady 7p
pack .close -side bottom -padx 7p -pady {0 7p}
pack .picture -padx 7p -pady 7p
