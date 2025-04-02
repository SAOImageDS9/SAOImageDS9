package require Tk
package require img::png

puts "Using [expr $tcl_platform(pointerSize) *8]-bit Tcl [info patchlevel], Tk $::tk_patchLevel, img::png [package require img::png]"

set imgFile [file join ".." "sourceimgs" "tree.png"]

# Read a PNG file into a photo image using no options.
set imgRGBA1 [image create photo -file $imgFile -format PNG]

# Read a PNG file into a photo image using option "-withalpha 1".
set imgRGBA2 [image create photo -file $imgFile -format [list PNG -withalpha 1 -verbose true]]

# Read a PNG file into a photo image using old option "-matte 1".
set imgRGBA3 [image create photo -file $imgFile -format [list PNG -withalpha 1 -verbose true]]

# Read a PNG file into a photo image using option "-withalpha 0".
set imgRGB1 [image create photo -file $imgFile -format [list PNG -matte 0 -verbose true]]

# Read a PNG file into a photo image using old option "-matte 0".
set imgRGB2 [image create photo -file $imgFile -format [list PNG -matte 0 -verbose true]]

# Read a PNG file into a photo image using option "-gamma 2".
set imgGamma [image create photo -file $imgFile -format [list PNG -gamma 2 -verbose true]]

# Read a PNG file into a photo image using option "-alpha 0.5".
set imgAlpha [image create photo -file $imgFile -format [list PNG -alpha 0.5 -verbose true]]

label .imgRGBA1  -image $imgRGBA1  -compound top -relief ridge -text "PNG"

label .imgRGBA2  -image $imgRGBA2  -compound top -relief ridge -text "PNG -withalpha 1"
label .imgRGBA3  -image $imgRGBA3  -compound top -relief ridge -text "PNG -matte 1"

label .imgRGB1   -image $imgRGB1   -compound top -relief ridge -text "PNG -withalpha 0"
label .imgRGB2   -image $imgRGB2   -compound top -relief ridge -text "PNG -matte 0"

label .imgGamma  -image $imgGamma  -compound top -relief ridge -text "PNG -gamma 2"
label .imgAlpha  -image $imgAlpha  -compound top -relief ridge -text "PNG -alpha 0.5"

grid .imgRGBA1            -padx 2 -pady 4 -sticky ew
grid .imgRGBA2 .imgRGBA3  -padx 2 -pady 4 -sticky ew
grid .imgRGB1  .imgRGB2   -padx 2 -pady 4 -sticky ew
grid .imgGamma .imgAlpha  -padx 2 -pady 4 -sticky ew

bind . <Escape> exit

if { [lindex $argv 0] eq "auto" } {
    update
    after 500
    exit
}
