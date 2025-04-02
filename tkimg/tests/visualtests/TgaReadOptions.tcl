package require Tk
package require img::tga

puts "Using [expr $tcl_platform(pointerSize) *8]-bit Tcl [info patchlevel], Tk $::tk_patchLevel, img::tga [package require img::tga]"

set imgFile [file join ".." "sourceimgs" "tree.tga"]

# Read a Targa file into a photo image using no options.
set imgRGBA1 [image create photo -file $imgFile -format TGA]

# Read a Targa file into a photo image using option "-withalpha 1".
set imgRGBA2 [image create photo -file $imgFile -format [list TGA -withalpha 1 -verbose true]]

# Read a Targa file into a photo image using old option "-matte 1".
set imgRGBA3 [image create photo -file $imgFile -format [list TGA -withalpha 1 -verbose true]]

# Read a Targa file into a photo image using option "-withalpha 0".
set imgRGB1 [image create photo -file $imgFile -format [list TGA -matte 0 -verbose true]]

# Read a Targa file into a photo image using old option "-matte 0".
set imgRGB2 [image create photo -file $imgFile -format [list TGA -matte 0 -verbose true]]

label .imgRGBA1  -image $imgRGBA1  -compound top -relief ridge -text "TGA"

label .imgRGBA2  -image $imgRGBA2  -compound top -relief ridge -text "TGA -withalpha 1"
label .imgRGBA3  -image $imgRGBA3  -compound top -relief ridge -text "TGA -matte 1"

label .imgRGB1   -image $imgRGB1   -compound top -relief ridge -text "TGA -withalpha 0"
label .imgRGB2   -image $imgRGB2   -compound top -relief ridge -text "TGA -matte 0"

grid .imgRGBA1            -padx 2 -pady 4 -sticky ew
grid .imgRGBA2 .imgRGBA3  -padx 2 -pady 4 -sticky ew
grid .imgRGB1 .imgRGB2    -padx 2 -pady 4 -sticky ew

bind . <Escape> exit

if { [lindex $argv 0] eq "auto" } {
    update
    after 500
    exit
}
