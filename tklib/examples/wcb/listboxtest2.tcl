#!/usr/bin/env wish

#==============================================================================
# Demo:	wcb::callback <listbox> before activate <callback>
#
# Copyright (c) 1999-2018  Csaba Nemethi (E-mail: csaba.nemethi@t-online.de)
#==============================================================================

package require wcb

wm title . "Listboxtest #2"

#
# Add some entries to the Tk option database
#
source [file join [file dirname [info script]] option.tcl]

set dirName [file join $tk_library demos images]
image create photo photoImage

#
# Frame .spacer and listbox .lb
#
frame .spacer -width 10
listbox .lb -height 0 -width 0 -background gray98
set pattern [file join $dirName *]
foreach pathName [lsort [glob $pattern]] {
    .lb insert end [file tail $pathName]
}

#
# Label .picture
#
label .picture -relief sunken

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
    if {[string compare $leafName ""] == 0} {
	return ""
    }

    global dirName
    set pathName [file join $dirName $leafName]
    if {[regexp {^\.(bmp|xbm)$} [file extension $pathName]]} {
	.picture configure -bitmap @$pathName -image ""
    } else {
	photoImage configure -file $pathName
	.picture configure -bitmap "" -image photoImage
    }
}

#
# Button .close
#
button .close -text Close -command exit

#
# Manage the widgets
#
pack .spacer .lb -side left -fill y -pady 10
pack .close -side bottom -padx 10 -pady 10
pack .picture -padx 10 -pady 10
