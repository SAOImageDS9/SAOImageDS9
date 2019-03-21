# Copyright 2016-2017 Paul Obermeier (obermeier@tcl3d.org)
#
# Test program for the img::raw package.
# Create an image using standard Tk methods and using the img::raw extension.
#
# Method 1: Using [format "#%02X%02X%02X"]      : 0.26 seconds
# Method 2: Using [binary format] and RAW format: 0.13 seconds

package require Tk
package require img::raw

set w 256
set h 256

set img1 [image create photo -width $w -height $h]
label .l1 -image $img1

set img2 [image create photo -width $w -height $h]
label .l2 -image $img2

label .msg -text \
    [format "Using img::raw %s on %s with Tcl %s-%dbit" \
    [package version img::raw] $::tcl_platform(os) \
    [info patchlevel] [expr $::tcl_platform(pointerSize) * 8]]

grid .l1  -row 0 -column 0
grid .l2  -row 0 -column 1
grid .msg -row 1 -column 0 -columnspan 2

bind . <Escape> { exit }

set startTime [clock clicks -milliseconds]
for { set y 0 } { $y < $h } { incr y } {
    set rowList [list]
    for { set x 0 } { $x < $w } { incr x } {
        set val $y
        lappend rowList [format "#%02X%02X%02X" $val $val $val]
    }
    $img1 put [list $rowList] -to 0 $y
    update
}
set endTime [clock clicks -milliseconds]
puts [format "Standard method: %.2f seconds" [expr ($endTime - $startTime) / 1000.0]]

set startTime [clock clicks -milliseconds]
for { set y 0 } { $y < $h } { incr y } {
    set rowList [list]
    for { set x 0 } { $x < $w } { incr x } {
        set val $y
        lappend rowList $val $val $val
    }
    $img2 put [binary format "cu*" $rowList] -to 0 $y \
        -format "RAW -useheader 0 -uuencode 0 -width $w -height 1 -nchan 3 -pixeltype byte"
    update
}
set endTime [clock clicks -milliseconds]
puts [format "Using img::raw : %.2f seconds" [expr ($endTime - $startTime) / 1000.0]]
