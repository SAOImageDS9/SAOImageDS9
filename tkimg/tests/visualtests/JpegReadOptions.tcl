package require Tk
package require img::jpeg

puts "Using [expr $tcl_platform(pointerSize) *8]-bit Tcl [info patchlevel], Tk $::tk_patchLevel, img::jpeg [package require img::jpeg]"

set imgFile [file join ".." "sourceimgs" "fractal.jpg"]

# Read a JPEG file into a photo image.
set imgRGB [image create photo -file $imgFile -format JPEG]

# Read a JPEG file into a photo image using option "-fast".
set imgFast [image create photo -file $imgFile -format [list JPEG -fast -verbose true]]

# Read a JPEG file into a photo image using option "-grayscale".
set imgGray [image create photo -file $imgFile -format [list JPEG -grayscale -verbose true]]

# Read a JPEG file into a photo image using options "-grayscale" and "-fast".
set imgGrayFast [image create photo -file $imgFile -format [list JPEG -grayscale -fast -verbose true]]

# Copy the RGB photo image into a grayscale photo image using the "put" command.
set imgGrayPut [image create photo]
$imgGrayPut put [$imgRGB data -grayscale]

label .imgRGB      -image $imgRGB      -compound top -relief ridge -text "JPEG"
label .imgFast     -image $imgFast     -compound top -relief ridge -text "JPEG -fast"

label .imgGray     -image $imgGray     -compound top -relief ridge -text "JPEG -grayscale"
label .imgGrayFast -image $imgGrayFast -compound top -relief ridge -text "JPEG -grayscale -fast"

label .imgGrayPut  -image $imgGrayPut  -compound top -relief ridge -text "image put -grayscale"

grid .imgRGB .imgFast      -padx 2 -pady 4 -sticky ew
grid .imgGray .imgGrayFast -padx 2 -pady 4 -sticky ew
grid .imgGrayPut           -padx 2 -pady 4 -sticky ew

bind . <Escape> exit

if { [lindex $argv 0] eq "auto" } {
    update
    after 500
    exit
}
