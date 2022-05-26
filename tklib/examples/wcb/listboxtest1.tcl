#!/usr/bin/env wish

#==============================================================================
# Demo:	wcb::callback <listbox> before selset <callback>
#
# Copyright (c) 1999-2018  Csaba Nemethi (E-mail: csaba.nemethi@t-online.de)
#==============================================================================

package require wcb

wm title . "Listboxtest #1"

#
# Add some entries to the Tk option database
#
source [file join [file dirname [info script]] option.tcl]

set dirName [file join $tk_library demos images]

#
# Frame .spacer and listbox .lb
#
frame .spacer -width 10
listbox .lb -height 0 -width 0 -background gray98
if {$tk_version < 8.5} {
    set pattern [file join $dirName *.bmp]
} else {
    set pattern [file join $dirName *.xbm]
}
foreach pathName [lsort [glob $pattern]] {
    .lb insert end [file tail $pathName]
}

#
# Label .picture
#
label .picture -relief sunken

#
# Define a before-selset callback for .lb
#
wcb::callback .lb before selset showBitmap

#
# Callback procedure showBitmap
#
proc showBitmap {w first args} {
    global dirName
    set pathName [file join $dirName [$w get $first]]
    .picture configure -bitmap @$pathName
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
