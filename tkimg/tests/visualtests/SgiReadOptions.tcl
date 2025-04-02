package require Tk
package require img::sgi

puts "Using [expr $tcl_platform(pointerSize) *8]-bit Tcl [info patchlevel], Tk $::tk_patchLevel, img::sgi [package require img::sgi]"

set imgFile [file join ".." "sourceimgs" "tree.rgba"]

# Read a SGI file into a photo image using no options.
set imgRGBA1 [image create photo -file $imgFile -format SGI]

# Read a SGI file into a photo image using option "-withalpha 1".
set imgRGBA2 [image create photo -file $imgFile -format [list SGI -withalpha 1 -verbose true]]

# Read a SGI file into a photo image using old option "-matte 1".
set imgRGBA3 [image create photo -file $imgFile -format [list SGI -withalpha 1 -verbose true]]

# Read a SGI file into a photo image using option "-withalpha 0".
set imgRGB1 [image create photo -file $imgFile -format [list SGI -matte 0 -verbose true]]

# Read a SGI file into a photo image using old option "-matte 0".
set imgRGB2 [image create photo -file $imgFile -format [list SGI -matte 0 -verbose true]]

label .imgRGBA1  -image $imgRGBA1  -compound top -relief ridge -text "SGI"

label .imgRGBA2  -image $imgRGBA2  -compound top -relief ridge -text "SGI -withalpha 1"
label .imgRGBA3  -image $imgRGBA3  -compound top -relief ridge -text "SGI -matte 1"

label .imgRGB1   -image $imgRGB1   -compound top -relief ridge -text "SGI -withalpha 0"
label .imgRGB2   -image $imgRGB2   -compound top -relief ridge -text "SGI -matte 0"

grid .imgRGBA1            -padx 2 -pady 4 -sticky ew
grid .imgRGBA2 .imgRGBA3  -padx 2 -pady 4 -sticky ew
grid .imgRGB1 .imgRGB2    -padx 2 -pady 4 -sticky ew

bind . <Escape> exit

if { [lindex $argv 0] eq "auto" } {
    update
    after 500
    exit
}
