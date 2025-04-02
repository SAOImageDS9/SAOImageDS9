package require Tk
package require img::ppm

puts "Using [expr $tcl_platform(pointerSize) *8]-bit Tcl [info patchlevel], Tk $::tk_patchLevel, img::ppm [package require img::ppm]"

set imgFile [file join ".." "sourceimgs" "gray.pgm"]
# The value range of the PPM file is 0 .. 65535.

# Read a PPM file into a photo image.
set imgPlain [image create photo -file $imgFile -format PPM]

# Read a PPM file into a photo image using option "-gamma".
set imgGamma2 [image create photo -file $imgFile -format [list PPM -gamma 2.0 -verbose true]]
set imgGamma5 [image create photo -file $imgFile -format [list PPM -gamma 0.5 -verbose true]]

# Read a PPM file into a photo image using options "-min" and "-max".
set imgMinMax1 [image create photo -file $imgFile -format [list PPM -min     0 -max 65535 -verbose true]]
set imgMinMax2 [image create photo -file $imgFile -format [list PPM -min     0 -max 30000 -verbose true]]
set imgMinMax3 [image create photo -file $imgFile -format [list PPM -min 10000 -max 50000 -verbose true]]

# Read a PPM file into a photo image using option "-scanorder".
set imgScan1 [image create photo -file $imgFile -format [list PPM -scanorder TopDown  -verbose true]]
set imgScan2 [image create photo -file $imgFile -format [list PPM -scanorder BottomUp -verbose true]]

label .imgPlain  -image $imgPlain  -compound top -relief ridge -text "PPM"
label .imgGamma2 -image $imgGamma2 -compound top -relief ridge -text "PPM -gamma 2.0"
label .imgGamma5 -image $imgGamma5 -compound top -relief ridge -text "PPM -gamma 0.5"

label .imgMinMax1 -image $imgMinMax1 -compound top -relief ridge -text "PPM -min 0 -max 65535"
label .imgMinMax2 -image $imgMinMax2 -compound top -relief ridge -text "PPM -min 0 -max 30000"
label .imgMinMax3 -image $imgMinMax3 -compound top -relief ridge -text "PPM -min 10000 -max 50000"

label .imgScan1 -image $imgScan1 -compound top -relief ridge -text "PPM -scanorder TopDown"
label .imgScan2 -image $imgScan2 -compound top -relief ridge -text "PPM -scanorder BottomUp"

grid .imgPlain   .imgGamma2  .imgGamma5   -padx 5 -pady 4 -sticky ew
grid .imgMinMax1 .imgMinMax2 .imgMinMax3  -padx 5 -pady 4 -sticky ew
grid .imgScan1   .imgScan2                -padx 5 -pady 4 -sticky ew

bind . <Escape> exit

if { [lindex $argv 0] eq "auto" } {
    update
    after 500
    exit
}
