package require Tk
package require img::bmp

puts "Using [expr $tcl_platform(pointerSize) *8]-bit Tcl [info patchlevel], Tk $::tk_patchLevel, img::bmp [package require img::bmp]"

# The BMP file does not contain resolution information.
set imgFile [file join ".." "sourceimgs" "fractal.bmp"]

# Read a BMP file into a photo image.
set img1 [image create photo -file $imgFile -format BMP]

# Read a BMP file into a photo image using option "-verbose".
set img2 [image create photo -file $imgFile -format [list BMP -verbose true]]

label .img1 -image $img1 -compound top -relief ridge -text "BMP"
label .img2 -image $img2 -compound top -relief ridge -text "BMP -verbose 1"

grid .img1 .img2 -padx 2 -pady 4 -sticky ew

bind . <Escape> exit

if { [lindex $argv 0] eq "auto" } {
    update
    after 500
    exit
}
