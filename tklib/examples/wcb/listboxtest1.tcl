#! /usr/bin/env tclsh

#==============================================================================
# Demo:	wcb::callback <listbox> before selset <callback>
#
# Copyright (c) 1999-2024  Csaba Nemethi (E-mail: csaba.nemethi@t-online.de)
#==============================================================================

package require Tk
package require wcb

wm title . "Listboxtest #1"

#
# Add some entries to the Tk option database
#
source [file join [file dirname [info script]] option.tcl]

set dirName [file join [file dirname [info script]] images]

#
# Frame .spacer and listbox .lb
#
frame .spacer -width 7p
listbox .lb -height 0 -width 0 -background white
set pattern [file join $dirName *.xbm]
##nagelfar ignore
foreach pathName [lsort [glob $pattern]] {
    .lb insert end [file tail $pathName]
}

#
# Label .picture
#
label .picture -relief sunken -background white

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
pack .spacer .lb -side left -fill y -pady 7p
pack .close -side bottom -padx 7p -pady {0 7p}
pack .picture -padx 7p -pady 7p
