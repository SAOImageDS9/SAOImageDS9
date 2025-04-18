# Test program for the img::raw package.
# Create an image using standard Tk methods and using the img::raw extension.
#
# Method 1: Using [format "#%02X%02X%02X"]
# Method 2: Using [binary format] and RAW format

package require Tk
package require img::raw

puts "Using [expr $tcl_platform(pointerSize) *8]-bit Tcl [info patchlevel], Tk $::tk_patchLevel, img::raw [package require img::raw]"

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
update


set startTime [clock clicks -milliseconds]
for { set y 0 } { $y < $h } { incr y } {
    set rowList [list]
    for { set x 0 } { $x < $w } { incr x } {
        set val $y
        lappend rowList [format "#%02X%02X%02X" $val $val $val]
    }
    $img1 put [list $rowList] -to 0 $y
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
        -format "RAW -useheader 0 -width $w -height 1 -nchan 3 -pixeltype byte"
}
set endTime [clock clicks -milliseconds]
puts [format "Using img::raw : %.2f seconds" [expr ($endTime - $startTime) / 1000.0]]

bind . <Escape> exit

if { [lindex $argv 0] eq "auto" } {
    update
    after 500
    exit
}
